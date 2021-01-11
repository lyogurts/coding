#include <stdio.h>
 /*typedef struct 
{
	int year, mouth,  date;
}dates; */
struct students //结构体类型不占用内存
{
	char number[15];
	char name[20];
	int score;
	float high;
};
int main(void)
{
	printf("学号      姓名          成绩     身高\n");
	struct students  student[3] = { {"01","卢本伟 ",250,1.80}, {"02","uzi",250,1.60},{"03","godv",251,1.80} };
	//注意指针定义的数据类型1   
	int i;
	for (i = 0; i < 3; i++)
		printf("%s\t %-10s\t %d\t %.2f\n", student[i].number, student[i].name, student[i].score, student[i].high);
	return 0;
}