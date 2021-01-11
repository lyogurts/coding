#include <stdio.h>
int main(void)
{
	int a[10]= { 77,66,55,44,99,33,22,11,88,0 };
	int max,min,i,j,k;//数组最大值max，最小值min，数值变量i，j，k最大值最小值下标
	 max = a[0];//第一个数
	 //  int min = a[0];切记不可重新定义
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
	printf("max是%d，下标是%d\n", max, j);
	printf("min是%d，下标是%d\n", min, k);
	return 0;
}