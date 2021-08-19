#include<stdio.h>

int main(void) {
    int n;
    int a;
    scanf("%d", &n);
    if (n >= 10 && n <= 1000) {
        for (int i = 1; i <= n; i++) {
            int count = 0;
            if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9)) {
                count++;
            }
            int a = i / 10;
            if ((a % 10 == 3) || (a % 10 == 6) || (a % 10 == 9)) {
                count++;
            }
            a = a / 10;
            if ((a % 10 == 3) || (a % 10 == 6) || (a % 10 == 9)) {
                count++;
            }
            if (count == 1) {
                printf("- ");
            }
            else if (count == 2) {
                printf("-- ");
            }
            else if (count == 3) {
                printf("--- ");
            }
            else {
                printf("%d ", i);
            }
        }
    }
    return 0;
}