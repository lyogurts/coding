#include <stdio.h>
int main(void)
{
	int a, b, c,average;
	printf("����������������");
	//scanf_s("a,b,c", &a, &b, &c);scanf�ڼ�������c��������
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
	printf("max��%d,min��%d��average��%d", a, c, average);
	return 0;

}