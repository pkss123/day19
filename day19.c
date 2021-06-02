#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main() {

	/*
		포인터 배열
	*/

	//int a = 10, b = 20, c = 30;
	//int* ar[3] = { 0 };
	//ar[0] = &a;
	//ar[1] = &b;
	//ar[2] = &c;

	//printf(" *ar[1] : %d %d\n", *ar[1], **(ar + 1));
	//printf(" *(ar + 1) : %p %p\n", *(ar + 1), ar[1]);

	// 내 풀이
	//int* ar[11] = { 0 };

	//srand(time(NULL));
	//for (int i = 1; i <= 10; i++) {
	//	int s = rand() % 20 + 1;
	//	ar[i] = &s;
	//	printf("%d ", **(ar + i));
	//}

	// 강사 풀이
	//int data[10] = { 0 };
	//int* pdata = data;
	//srand(time(NULL));

	//for (int i = 0; i < 10; i++)
	//	pdata[i] = rand() % 20 + 1;

	//printf("data : ");
	//for (int i = 0; i < 10; i++)
	//	printf("%d ", pdata[i]);

	//char text[20];
	//char* ptext = text;

	//printf("문장 입력 : ");
	//gets_s(ptext, sizeof(text));
	//puts("");
	//while (*ptext != '\0') {
	//	putchar(*ptext);
	//	ptext++;
	//}
	//puts("");
//}

	/*
		함수 안에서의 포인터
	*/

//int valueFunc(int a, int b) {
//	a += 100;
//	b += 100;
//}
//
//int addrFunc(int* pa, int* pb) {
//	*pa += 100;
//	*pb += 100;
//}
//
//int main() {
//	int s1 = 10, s2 = 20;
//
//	valueFunc(s1, s2);
//	printf("a : %d\tb : %d\n", s1, s2);
//	puts("");
//
//	addrFunc(&s1, &s2);
//	printf("a : %d\tb : %d\n", s1, s2);

//void showData(int a, int b) {
//	printf("1번 %d\t2번 : %d\n", a, b);
//}

//void(swapData)(int* pa, int* pb) {
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main(){

//	int s1 = 5, s2 = 8;
//	showData(s1, s2);
//	swapData(&s1, &s2);
//	showData(s1, s2);
//}

//void inputWord(char* stn, int size);
//void alterText(char* p);

//int main() {
//	char word[20];
//	inputWord(word, sizeof(word));
//	printf("word : %s\n", word);
//	puts("");
//	alterText(word);
//	printf("word : %s\n", word);
//}

//void inputWord(char* stn, int size) {
//	printf("단어 입력 : ");
//	gets_s(stn, size);
//}
//void alterText(char* p) {
//	*p -= 32;
//}

//void insertword(char* stn, int size) {
//	printf("문장 입력 : ");
//	gets_s(stn, size);
//}
//void upperText(char* p) {
//	while (*p !='\0') {
//		if (*p >= 'a' && *p <= 'z') 
//			*p -= 32;
//		p++;
//	}
//}

//int main() {
//	char text[50];
//	insertword(text, sizeof(text));
//		printf("text : %s\n", text);
//	puts("");
//	upperText(text);
//		printf("text : %s\n", text);
//}

int main() {

	/*
		const
		 읽기 전용 변수 생성
		 변수의 초기값을 바꾸지 못하도록 만들어준다
		 데이터가 변경되면 안되는 변수에 붙여서 사용

		const 자료형 변수명 = 데이터;
		 * 선언과 동시에 초기화를 반드시 해야 한다(이후에 초기화 불가능)
	*/

	//int year_1 = 365;
	//year_1 = 366;
	//const int year_2 = 365;
	////year_2 = 365;		// error code : year_2 변수는 const 상수이기 때문에 데이터 변경 X

	//printf("%d %d", year_1,year_2);

}