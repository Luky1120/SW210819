#include<stdio.h>
//10���� ���� �Է� �޾�, �� �߿��� Ȧ���� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
//
//
//[���� ����]
//
//�� ���� 0 �̻� 10000 ������ �����̴�.
//
//
//[�Է�]
//
//���� ù �ٿ��� �׽�Ʈ ���̽��� ���� T�� �־�����, �� �Ʒ��� �� �׽�Ʈ ���̽��� �־�����.
//
//�� �׽�Ʈ ���̽��� ù ��° �ٿ��� 10���� ���� �־�����.
//
//
//[���]
//
//����� �� ���� '#t'�� �����ϰ�, ������ �� ĭ �� ���� ������ ����Ѵ�.
//
//(t�� �׽�Ʈ ���̽��� ��ȣ�� �ǹ��ϸ� 1���� �����Ѵ�.)
int main(void) {
    int n;
    int num;
    scanf("%d", &n);
    if (n >= 0 && n <= 1000) {

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < 10; j++) {
                scanf("%d", &num);
                if (num % 2 != 0) {
                    sum += num;
                }
            }
            printf("#%d %d\n", i + 1, sum);
        }
    }
    return 0;
}