#include <stdio.h>
#include<string.h>
struct student
{
	char name[25];
	int marks;
};
int main()
{
	struct student student1,student2;
	strcpy(student1.name,"rohitha");
	student1.marks=90;
	student2=student1;
	printf("name: %s, marks:%d\n",student2.name,student2.marks);
	return 0;
}
