#include<stdio.h>

int main(void)
{
	int num;
	printf("������ �ܼ��� �Է��Ͻÿ� :");
	scanf("%d", &num);
	for (int i = 2; i <= 9; i++)
		printf("%d * %d = %d\n", num, i, num*i);

	return 0;
}