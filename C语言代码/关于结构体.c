#include <stdio.h>
 /*typedef struct 
{
	int year, mouth,  date;
}dates; */
struct students //�ṹ�����Ͳ�ռ���ڴ�
{
	char number[15];
	char name[20];
	int score;
	float high;
};
int main(void)
{
	printf("ѧ��      ����          �ɼ�     ���\n");
	struct students  student[3] = { {"01","¬��ΰ ",250,1.80}, {"02","uzi",250,1.60},{"03","godv",251,1.80} };
	//ע��ָ�붨�����������1   
	int i;
	for (i = 0; i < 3; i++)
		printf("%s\t %-10s\t %d\t %.2f\n", student[i].number, student[i].name, student[i].score, student[i].high);
	return 0;
}