#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start = NULL, *temp, *last, *t1, *t2;
void firstinsert()
{
    int e;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter an element to store in node: ");
    scanf("%d",&e);
    temp->data = e;
    temp->link = NULL;
    if(start==NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        temp->link = start;
        start = temp;
    }
}
void lastinsert()
{
    int e;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter an element to store in node: ");
    scanf("%d",&e);
    temp->data = e;
    temp->link = NULL;
    if(start==NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
}
void middleinsert()
{
    int e,pos,i=1;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\n\tEnter an element to store in node: ");
    scanf("%d",&e);
    temp->data = e;
    temp->link = NULL;
    printf("\nEnter the position to insert: ");
    scanf("%d",&pos);
    if(start==NULL)
    {
        start = temp;
    }
    else
    {
    	printf("\n inside of middle insert fun");
        t1 = start;
        while(i < pos)
        {
            t2 = t1;
            t1=t1->link;
            i++;
        }
        temp->link=t2->link;
        t2->link=temp;
    }
}
void firstdelete()
{
	if(start==NULL)
	{
		printf("\n\t linked list is empty,no nodes to perform delete operation");
	}
	else
{
    start = start->link;
    printf("\n\tfirst node is deleted successfully");
}
}
void lastdelete()
{
    if (start==NULL)
        printf("\n\tNo nodes in linked list to delete");
    else
    {
        t1 = start;
        while (t1->link != NULL)
        {
            t2 = t1;
            t1 = t1->link;
        }

        t2->link = NULL;
        last = t2;
    }
}
void middledelete()
{
    int pos, i = 1;
    printf("\n Enter the position to delete the node");
    scanf("%d", &pos);
    if (start==NULL)
        printf("\n\tNo element to delete, linked list is empty");
    else
    {
        t1 = start;
        while (i < pos)
        {
            t2 = t1;
            t1 = t1->link;
            i++;
        }
        t2->link = t1->link;
    }
}
void disp()
{
    if (start==NULL)
    {
        printf("\nNo elements in linked list --------");
    }
    else
    {
        printf("\n\tLinked list elements are --------");
        temp = start;
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->link;
        }
    }
}
int main()
{
    int ch, k;
    while (1)
    {
        printf("\n\n\t\t.... Linked List Operations ....");
        printf("\n\n\t\t 1. First Insert");
        printf("\n\n\t\t 2. Last Insert");
        printf("\n\n\t\t 3. Middle Insert");
        printf("\n\n\t\t 4. First Delete");
        printf("\n\n\t\t 5. Last Delete");
        printf("\n\n\t\t 6. Middle Delete");
        printf("\n\n\t\t 7. Display");
        printf("\n\n\t\t 8. exit");
		printf("\n\n\tEnter your choice...");
scanf("%d",&ch);
switch(ch)
{
    case 1: firstinsert(); 
            break;
    case 2: lastinsert(); 
            break;
    case 3: middleinsert(); 
            break;
    case 4: firstdelete(); 
            break;
    case 5: lastdelete(); 
            break;
    case 6: middledelete(); 
            break;
    case 7: disp(); 
            break;
    case 8: exit(0);
}
}
return 0;
}
