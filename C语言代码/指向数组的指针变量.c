/*
#include <stdio.h>
int main(void)
{
	int a[10] = { 9,7,6,8,4,5,3,3,1,0, }, i;
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	*��a+i���±귨 
	ָ���м�һ�ӵ���ָ��������ָ���Ԫ�ص��ֽڣ�ͬ����������λ��
	��ַ+��ַ��ƫ������
}
*/
#include <stdio.h>
int main(void)
{
	int a[10] = { 9,7,6,8,4,5,3,3,1,0, }, * p;//ָ�뷨
	for (p = a; p < a + 10; p++)//pָ�������׵�ַ��p++�Ǽ���������
		printf("%d", *p);
	printf("\n");
	return 0;
}
