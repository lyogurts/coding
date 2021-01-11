/*
#include <stdio.h>
int main(void)
{
	int a[10] = { 9,7,6,8,4,5,3,3,1,0, }, i;
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	*（a+i）下标法 
	指针中加一加的是指针类型所指向的元素的字节，同等数据类型位置
	基址+变址（偏移量）
}
*/
#include <stdio.h>
int main(void)
{
	int a[10] = { 9,7,6,8,4,5,3,3,1,0, }, * p;//指针法
	for (p = a; p < a + 10; p++)//p指向数组首地址，p++是加数据类型
		printf("%d", *p);
	printf("\n");
	return 0;
}
