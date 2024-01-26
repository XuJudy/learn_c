#include<stdio.h>
#include<stdlib.h>

//链表结构
struct ListNode
{
	int mKey;
	ListNode* m_pNext;
};

//反转链表
ListNode* ReverseList(ListNode* pHead)
{
	//反转链表头结点
	ListNode* pReversedHead = NULL;
	//当前结点
	ListNode* pNode = pHead;
	//当前结点的前一个结点
	ListNode* pPrev = NULL;
	while(pNode!=NULL)
	{
		ListNode* pNext = pNode->m_pNext;
		if(pNext == NULL)
			pReversedHead = pNode;
		pNode->m_pNext = pPrev;//当前结点指向前一个结点
		pPrev = pNode;//pPrev和pNode往前移动。
		pNode = pNext;//这里要使用前面保存下来的pNext，不能使用pNode->m_pNext
	}
	return pReversedHead;
}

//创建链表
ListNode* CreateListNode(int value)
{
	ListNode* pNode = new ListNode();
	pNode->mKey = value;
	pNode->m_pNext = NULL;
	return pNode;
}

//遍历链表
void PrintList(ListNode* pHead)
{
	ListNode* pNode = pHead;
	while(pNode!=NULL)
	{
		printf(	"%d ",pNode->mKey);
		pNode = pNode->m_pNext;
	}
	printf("\nPrintList ends.\n");
}

//往链表中添加新结点
void AddToTail(ListNode** pHead,int value)
{
	ListNode* pNew = new ListNode();
	pNew->mKey = value;
	pNew->m_pNext = NULL;

	if(pHead==NULL)
	{
		*pHead = pNew;
	}
	else
	{
		ListNode* pNode = *pHead;
		while(pNode->m_pNext!=NULL)
			pNode=pNode->m_pNext;
		pNode->m_pNext = pNew;
	}
}

void main()
{
	//创建一个结点
	ListNode* pNode1 = CreateListNode(1);

	//打印
	//PrintListNode(pNode1);
	
	//往链表中添加新结点
	AddToTail(&pNode1,2);
	AddToTail(&pNode1,3);
	AddToTail(&pNode1,4);
	AddToTail(&pNode1,5);
	AddToTail(&pNode1,6);
	AddToTail(&pNode1,7);
	AddToTail(&pNode1,8);

	//打印链表
	PrintList(pNode1);

	//反转链表
	ListNode* pReversedHead = ReverseList(pNode1);

	PrintList(pReversedHead);
}