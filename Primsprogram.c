#include<stdio.h>
#include<conio.h>

int a,b,n,u,v,i,j,ne=1;
int vis[10]={0},min,mincost=0,c[10][10];

void main()
{
  clrscr();
  printf("Enter the no of nodes: ");
  scanf("%d",&n);
  printf("Enter the adjceny matrix:",&n);
  for(i=1;i<=n;i++)
      {
       for(j=1;j<=n;j++)
           {
               scanf("%d",&c[i][j]);
               if(c[i][j]==0)
	            c[i][j]=999;
            }
      }
  vis[1]=1;
  printf("\n");

  while(ne < n)
   {
    for(i=1,min=999;i<=n;i++)
	 for(j=1;j<=n;j++)
	      if(c[i][j]<min)
	      if(vis[i]!=0)
	         {
	            min=-c[i][j];
	            a=u=i;
	            b=v=j;
	         }
         if(vis[u]==0||vis[v]==0)
	         {
	            printf("\nedge %d:(%d %d)cost : %d",ne++,a,b,min);
	            mincost=mincost+min;
	            vis[b]=1;
	         }
   c[a][b]=c[b][a]=999;
  }
  printf("\n Minimum cost=%d",mincost);
  getch();
}





