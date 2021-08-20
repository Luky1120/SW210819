#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ex1() {
	int num;
	scanf("%d", &num);
	if(num<100000){
		for (int i = 0; i < num; i++) {
			printf("#");
		}
	}
}

void ex2() {
	int n;
	int p[3];
	int k;
	int a = 0;
	int count = 0;
	srand(time(NULL));
	p[0] = rand() % 10;
	p[1] = rand() % 10;
	p[2] = rand() % 10;
	n = rand() % 3;

	printf("비밀번호 : %d%d%d\n", p[0],p[1],p[2]);
	a = (p[0] * 100) + (p[1] * 10) + p[2];
	switch (n)
	{
	case 0:
		printf("힌트 : %d00\n", p[0]);
		k = p[0] * 100;
		
		
		break;
	case 1:
		printf("힌트 : 0%d0\n", p[1]);
		k = p[1] * 10;
		
		
		break;
	case 2:
		printf("힌트 : 00%d\n", p[2]);
		k = p[0];
		
		break;
	}
	for (int i = k; i <= a; i++) {
		count++;
	}

	printf("카운트 : %d\n", count);
	return 0;
}
// yyyy/mm/dd
void ex3() {

	int date;
	scanf("%d", &date);
	if (date > 100000000) printf("날짜 범위 오류\n");
	else {
		int year, month, day;
		year = date / 10000;
		month = (date - (year * 10000)) / 100;
		day = (date - (year * 10000) - (month * 100));
		if (month < 1 || month > 13) printf("월 범위 오류\n");
		else {
			if (month == 2) {
				if (day > 0 && day < 29) {
					printf("%d / %d / %d", year, month, day);
				}
				else printf("일 범위 오류\n");
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				if (day > 0 && day < 31) {
					printf("%d / %d / %d", year, month, day);
				}
				else printf("일 범위 오류\n");
			}
			else {
				if (day > 0 && day < 32) {
					printf("%d / %d / %d", year, month, day);
				}
				else printf("일 범위 오류\n");
			}
		}

	}
	
	return 0;
	}
		


	
int main(void) {
	int exnum;
	printf("예제 번호 입력 : ");
	scanf("%d", &exnum);

	switch (exnum)
	{
	case 1:
		ex1();
		break;
	case 2:
		ex2();
		break;
	case 3:
		ex3();
		break;
	
	}
}