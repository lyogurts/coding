#include <stdio.h>
int main(void)
{
	int x;
	printf("请输入一个数：");
	scanf_s("%d", &x);//%d我写成x我是煞笔
	printf("%d\n", x);
	return 0;
}