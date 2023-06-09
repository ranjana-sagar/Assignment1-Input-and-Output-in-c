#include<stdio.h>
int main()
{
     int h,m;
     char c;
     printf("Enter the time-(HH:MM):");
     scanf("%d%c%d",&h,&c,&m);
     printf("%d hour and %d minute",h,m);
     return 0;


}