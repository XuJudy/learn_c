#include<stdio.h>

//int main() {
//
//	int a = 10;	// a�e4�Ӧr�`
//	int * pa = &a; // ����a��4�Ӧr�`���Ĥ@�Ӧr�`���a�}
//
//	return 0;
//}

//���w����
//int main() {
//
//	int* pa;
//	char* pc;
//	float* pf;
//
//	return 0;
//}

//// ���w�������N�q
//int main() {
//
//	/*int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;*/
//
//	int arr[10] = { 0 };
//	int	  *p = arr;
//	char  *pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}

//int main() {
//
//	int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++) {
//
//	//	*(p + i) = 1;	// p+i ���O�U�Ь�i���a�}
//	//}
//
//	char* pc = arr;
//	for (int i = 0; i < 10; i++) {
//
//		*(pc + i) = 1;	// p+i ���O�U�Ь�i���a�}
//	}
//
//	return 0;
//}


// ���c��
// �Ыؤ@�Ӿǥ�
struct Stu {
    char name[20];  //�����ܶq
    int age;
    double score;
};

// �Ыؤ@�ӮѪ�����
struct Book {
    char name[20];
    float price;
    char id[30];
};

int main() {

    struct Stu s = { "�i�T", 20, 85.5 };  // ���c�骺�ЫةM��l��

    printf("%s %d %lf\n", s.name, s.age, s.score);  // ���c���ܶq�M�����ܶq

    return 0;
}