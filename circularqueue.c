#include<stdlib.h>
#include<stdio.h>
#define max 3
void enqueue(int q[],int *f,int *r)
{
if((*r-*f==(max-1))||(*r==*f-1))
printf("QUEUEFULL\n");
else
{if(*r==-1)
*f=*r=0;
else
*r=(*r+1)%max;
printf("ENTER ELEMENT:");
scanf("%d",&q[*r]);
printf("/n");
}
}
void dequeue(int q[],int *f,int *r)
{
if(*f==-1)
printf("queue empty\n");
else
{
printf("deleted element:%d\n",q[*f]);
if(*f==*r)
*f=*r=-1;
else
*f=(*f+1)%max;
}
}
void display(int q[],int *f, int *r)
{
int i;
if(*f==-1)
printf("QUEUE EMPTY\n");
else
{
printf("THE QUEUE:");
for(i=*f;;i++)
{
i=i%max;
printf("%d",q[i]);
printf("/n");
if(*r==i)
break;
}
printf("\n");
}
}
int main()
{
int ch,f=-1,r=-1,q[max];
do
{
printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(q,&f,&r);
	break;
case 2:dequeue(q,&f,&r);
	break;
case 3:display(q,&f,&r);
	break;
case 4:break;
}
}while(ch!=4);
return 0;
}

