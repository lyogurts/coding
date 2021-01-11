#include <stdio.h>
int main(void)
{
	/*
	char s[20] = { "郑州工商学院" }, * p;
	for (p = s; *p != 0; p++)
		printf("%c", *(p++));先使用后递增为了输出下一个，凑够汉字
	printf("%c", *p);
	*/
	//printf("%c", *p);
	//printf("%c", *(p+1));
	char s[20] = { "不忘初心牢记使命" }, * p;
	for (p = s; *p; p = p + 2)
	{ 
		printf("%c%c", *p, *(p + 1));
		printf(" ");
	}
	return 0;
}