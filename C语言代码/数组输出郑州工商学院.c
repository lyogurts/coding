#include <stdio.h>
int main(void)
{
	/*
	char s[20] = { "֣�ݹ���ѧԺ" }, * p;
	for (p = s; *p != 0; p++)
		printf("%c", *(p++));��ʹ�ú����Ϊ�������һ�����չ�����
	printf("%c", *p);
	*/
	//printf("%c", *p);
	//printf("%c", *(p+1));
	char s[20] = { "���������μ�ʹ��" }, * p;
	for (p = s; *p; p = p + 2)
	{ 
		printf("%c%c", *p, *(p + 1));
		printf(" ");
	}
	return 0;
}