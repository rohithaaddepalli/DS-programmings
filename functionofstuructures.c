#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
}s1={101,"rohi",93.23};
int main()
{
 struct student s2={102,"yuva",89.09},s3;
 printf("enter student 3 details");
 scanf("%d %s %f",&s3.rno,&s3.name,&s3.per);
 display(s1);
 display(s2);
 display(s3);
 return 0;
}
void display(struct student s)
{
 printf("\n %d %s %f",s.rno,s.name,s.per);
}
