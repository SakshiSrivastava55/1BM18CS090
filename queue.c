#include<stdio.h>
#include<stdlib.h>

#define MAX 50
void insert();
void delete();
void display();
void main()
{
int choice;
int queue_array[MAX];
int front=-1;
int rear=-1;
int x=MAX;
int j=1;
int i;
while(1)
{ 	printf("1.INSERT ELEMENTS TO THE QUEUE:\n");
	printf("2.DELETE ELEMENTS FROM THE QUEUE\n");
	printf("3.DISPLAY THE ELEMENTS OF THE QUEUE\n");
	printf("4.QUIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
switch(choice)
{	case 1:insert();
		break;
	case 2:delete();
		break;
	case 3:display();
		break;
	case 4:exit(0);
	default:
	printf("WRONG CHOICE");
}
}
}
void insert(int add_item)
{

int queue_array[20];
int rear=-1;int front=-1;int x;
	if(rear==x)
	{printf("QUEUE OVERFLOW\n");}
	else 
	{
		
	
	
	
	printf("INSERT THE ELEMENT IN THE QUEUE\n");
	scanf("%d",&queue_array[rear++]);
}	
}
void delete()
{int queue_array[20],front=-1,rear=-1;
int x;
if(front==rear)
{ printf("QUEUE empty\n");
return;
}
else
{ printf("\nDELETED ELEMENTS IS %d",queue_array[front++]);
x++;
}
}
void display()
{int queue_array[20];
int front,rear;
printf("QUEUE ELEMENTS ARE\n");
if(front==rear)
{ printf("QUEUE empty\n");}
else{
	for(int i=front;i<rear;i++)
{printf("%d",queue_array[i]);
printf("/n");
}
}
}




