#include<stdio.h>
int main()
{
    int d,m,y;
    char slash;
    printf("Enter the date of toady_(DD/MM/YYYY):");
    scanf("%d%c%d%c%d",&d,&slash,&m,&slash,&y);
    printf("DAY-%d, Month-%d, year-%d",d,m,y);
    return 0;
}