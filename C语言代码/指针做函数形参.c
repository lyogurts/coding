#include <stdio.h>
void swap(int* x, int* y)//地址做函数形式参数
{
	int t;
	t = *x;//(2)x指向对象,*x接受的是a的地址，把a的地址赋值给t,t=a
	*x = *y;//a=b
	*y = t;//b=t
}
int main(void)
{
	int a, b;
	scanf_s("%d%d", &a, &b);//(1)实参是地址
	if (a > b)
		swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);
	return 0;
}
//tip：输入两个数据的地址，而不是数据