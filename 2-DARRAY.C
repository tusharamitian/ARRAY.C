#include<stdio.h>
#include<conio.h>
main()
{int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
clrscr();
for (i=0 ;i<=3-1 ; i++ )
{
for (j=0;j<=3-1 ; j++ )
{
printf("%d",a[i][j]);
}
printf("\n");
}
getch();
}