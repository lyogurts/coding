//�Գ����������������������㣬������Ϊ 0 ʱ��ȡ��ǰ��ʽ����Ϊ���Լ��
/*int gcd(int m, int n)
{
	int r;//r������
	printf("��������������m: n:");
	scanf_s("%d%d", m, n);
	while (r = m % n)//����Ϊ0ֹͣ
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
