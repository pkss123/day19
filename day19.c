#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main() {

	/*
		������ �迭
	*/

	//int a = 10, b = 20, c = 30;
	//int* ar[3] = { 0 };
	//ar[0] = &a;
	//ar[1] = &b;
	//ar[2] = &c;

	//printf(" *ar[1] : %d %d\n", *ar[1], **(ar + 1));
	//printf(" *(ar + 1) : %p %p\n", *(ar + 1), ar[1]);

	// �� Ǯ��
	//int* ar[11] = { 0 };

	//srand(time(NULL));
	//for (int i = 1; i <= 10; i++) {
	//	int s = rand() % 20 + 1;
	//	ar[i] = &s;
	//	printf("%d ", **(ar + i));
	//}

	// ���� Ǯ��
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

	//printf("���� �Է� : ");
	//gets_s(ptext, sizeof(text));
	//puts("");
	//while (*ptext != '\0') {
	//	putchar(*ptext);
	//	ptext++;
	//}
	//puts("");
//}

	/*
		�Լ� �ȿ����� ������
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
//	printf("1�� %d\t2�� : %d\n", a, b);
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
//	printf("�ܾ� �Է� : ");
//	gets_s(stn, size);
//}
//void alterText(char* p) {
//	*p -= 32;
//}

//void insertword(char* stn, int size) {
//	printf("���� �Է� : ");
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
		 �б� ���� ���� ����
		 ������ �ʱⰪ�� �ٲ��� ���ϵ��� ������ش�
		 �����Ͱ� ����Ǹ� �ȵǴ� ������ �ٿ��� ���

		const �ڷ��� ������ = ������;
		 * ����� ���ÿ� �ʱ�ȭ�� �ݵ�� �ؾ� �Ѵ�(���Ŀ� �ʱ�ȭ �Ұ���)
	*/

	//int year_1 = 365;
	//year_1 = 366;
	//const int year_2 = 365;
	////year_2 = 365;		// error code : year_2 ������ const ����̱� ������ ������ ���� X

	//printf("%d %d", year_1,year_2);

}