#include <stdio.h>
int main(void)
{
	int a, b, c,average;
	printf("请输入三个整数：");
	//scanf_s("a,b,c", &a, &b, &c);scanf第几次了我c，长点心
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		a = a;
	else
		a = b;
	if (b > c)
		b = b;
	else
		b = c;
	average = (a + b + c) / 3;
	printf("max是%d,min是%d，average是%d", a, c, average);
	return 0;

}