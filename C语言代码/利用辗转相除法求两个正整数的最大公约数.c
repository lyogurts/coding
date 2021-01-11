//以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数
/*int gcd(int m, int n)
{
	int r;//r是余数
	printf("请输入两个数，m: n:");
	scanf_s("%d%d", m, n);
	while (r = m % n)//余数为0停止
	{
		m = n;
		n = r;
	}
	return n;

}
*/
#include <stdio.h>

	int gcd(int m, int n);
	{
		int r;
		while (r = m % n)
		{
			m = n;
			n = r;
		}
		return  n;
	}
