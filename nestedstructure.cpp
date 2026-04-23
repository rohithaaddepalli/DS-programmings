#include<stdio.h>

struct student
{
    int rno;
    char name[10];
    float per;
}s1={164,"bobby",97.89};

void display (struct student s);

int main()
{
    struct student s2={102,"bunny",89.90},s3;

    printf("Enter s3 details: ");
    scanf("%d %s %f",&s3.rno, s3.name, &s3.per);

    display(s1);
    display(s2);
    display(s3);

    return 0;	
}

void display(struct student s)
{
    printf("\n%d %s %.2f",s.rno,s.name,s.per);
}
