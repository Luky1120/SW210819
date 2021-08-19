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
		
		for (int i = k; i <= a; i++) {
			count++;
		}

		printf("카운트 : %d\n", count);
		break;
	case 1:
		printf("힌트 : 0%d0\n", p[1]);
		k = p[1] * 10;
		
		for (int i = k; i <= a; i++) {
			count++;
		}

		printf("카운트 : %d\n", count);
		break;
	case 2:
		printf("힌트 : 00%d\n", p[2]);
		k = p[0];
		for (int i = k; i <= a; i++) {
			count++;
		}

		printf("카운트 : %d\n", count);
		break;
	}
	return 0;
}
// yyyy/mm/dd
void ex3() {

	int num;
	int a = 0;
	int n;
	scanf("%d", &n);
	scanf("%d", &num);
	int y = num / 10000;
	int m = (num % 10000)/100;
	int d = (num % 100);
	
	for (int i = 1; i <= 12; i++) {
		printf("%d\n", i);
		for (int j = 1; j <= 31; j++) {
			if (i == 4 || i == 6 || i == 9 || i == 11 ) {
				if (j == 31) {
					break;
				}
			}
			else if (i == 2) {
				if (j == 29) {
					break;
				}
			}
			printf("%d ", j);
		}
		printf("\n");
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