#include <stdio.h>
void swap(int* x, int* y)//��ַ��������ʽ����
{
	int t;
	t = *x;//(2)xָ�����,*x���ܵ���a�ĵ�ַ����a�ĵ�ַ��ֵ��t,t=a
	*x = *y;//a=b
	*y = t;//b=t
}
int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);//(1)ʵ���ǵ�ַ
	if (a > b)
		swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//tip�������������ݵĵ�ַ������������