#include<stdio.h>
union student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	union student s={101,"yuva",99.80};
	printf("%d",s.rno);
	printf("%s",s.name);
	printf("%f",s.per);
	return 0;
}
