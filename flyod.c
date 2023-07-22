#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int i,j,k,n;
    int d[10][10];
    printf("enter the no of nodes:\n");
    scanf("%d",&n);
    printf("Enter the cost matrix:\n");
    for(i=0;i<n;i++)
    for ( j =0;j<n;j++)
    scanf("%d",&d[i][j]);
    
    for(k=0;k<n;k++)
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    d[i][j]=__min(d[i][j],d[i][k]+d[k][j]);
    printf("Shortest path is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d\t",d[i][j]);
    }
    getch();
}