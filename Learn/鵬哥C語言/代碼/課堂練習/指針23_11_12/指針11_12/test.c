#include<stdio.h>

//int main() {
//
//	int a = 10;	// a占4個字節
//	int * pa = &a; // 拿到a的4個字節中第一個字節的地址
//
//	return 0;
//}

//指針類型
//int main() {
//
//	int* pa;
//	char* pc;
//	float* pf;
//
//	return 0;
//}

//// 指針類型的意義
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
//	//	*(p + i) = 1;	// p+i 其實是下標為i的地址
//	//}
//
//	char* pc = arr;
//	for (int i = 0; i < 10; i++) {
//
//		*(pc + i) = 1;	// p+i 其實是下標為i的地址
//	}
//
//	return 0;
//}


// 結構體
// 創建一個學生
struct Stu {
    char name[20];  //成員變量
    int age;
    double score;
};

// 創建一個書的類型
struct Book {
    char name[20];
    float price;
    char id[30];
};

int main() {

    struct Stu s = { "張三", 20, 85.5 };  // 結構體的創建和初始化

    printf("%s %d %lf\n", s.name, s.age, s.score);  // 結構體變量和成員變量

    return 0;
}