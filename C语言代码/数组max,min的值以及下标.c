#include <stdio.h>
int main(void)
{
	int a[10]= { 77,66,55,44,99,33,22,11,88,0 };
	int max,min,i,j,k;//�������ֵmax����Сֵmin����ֵ����i��j��k���ֵ��Сֵ�±�
	 max = a[0];//��һ����
	 //  int min = a[0];�мǲ������¶���
	 min = a[0];
	k = 0;
	j = 0;
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			j = k;
		}
		else if (a[i] < min)
		{
			min = a[i];
			k = i;
		}
	}
	printf("max��%d���±���%d\n", max, j);
	printf("min��%d���±���%d\n", min, k);
	return 0;
}