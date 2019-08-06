#include<conio.h>
#include<stdio.h>
struct Student
{
char name[20];
char USN[20];
 struct marks
 { int m1,m2,m3;
 }m;
 }s;
 void main()

 {clrscr();
  printf("ENTER STUDENT'S NAME\n");
 gets(s.name);
 printf("ENTER USN:\n");
 gets(s.USN);
 printf("ENTER THE MARKS OF 3 SUBJECTS:\n");
 scanf("%d%d%d",&s.m.m1,&s.m.m2,&s.m.m3);
 printf("NAME:%s",s.name);
 printf("\nUSN:%s",s.USN);
 printf("\nMARKS OF 3 SUBJECTS:%d,%d,%d",s.m.m1,s.m.m2,s.m.m3);
 printf("\nTOTAL MARKS OF THREE SUBJECTS=%d",(s.m.m1+s.m.m2+s.m.m3)) ;
 getch();
 }

