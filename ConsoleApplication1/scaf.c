#include<stdio.h>

int main(void)
{
	int num;
	printf("구구단 단수를 입력하시오 :");
	scanf("%d", &num);
	for (int i = 2; i <= 9; i++)
		printf("%d * %d = %d\n", num, i, num*i);

	printf("%d단 출력 끝", num);

	return 0;
}