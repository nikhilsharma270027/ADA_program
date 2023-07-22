#include<stdio.h>
#include<conio.h>
void mergesort(int arr[],int low,int high);
void merge(int arr[],int low,int mid,int high);

void main()
{
 int arr[10],n,i;
 clrscr();
 printf("Enter the size of array:\n");
 scanf("%d",&n);
 printf("enter the array elements:\n");
 for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

 mergesort(arr,0,n-1);

 printf("the sorted arry:\n");
 for(i=0;i<n;i++)
    printf("%d",arr[i]);
 getch();
}

void mergesort(int arr[],int low,int high)
{
 int mid;
 if(low < high)
   {
      mid=(low+high)/2;
      mergesort(arr,low,mid);
      mergesort(arr,mid+1,high);
      merge(arr,low,mid,high);
   }
}

void merge(int arr[],int low,int mid,int high)
{
 int i,j,k,c[10];
 i=low;
 k=low;
 j=mid+1;
 while((i <= mid)&&(j <= high))
       {
	      if(arr[i]<arr[j])
	        {
	            c[k]=arr[i];
	            k++;
	            i++;
	        }
        else
	        {
	            c[k]=arr[j];
	            k++;
	            j++;
	        }
       }
 while(i <= mid)
     {
          c[k]=arr[i];
          k++;
          i++;
     }
 while(j <= high)
     {
        c[k]=arr[j];
        k++;
        j++;
     }
   for(i=low;i<=k-1;i++)
     arr[i]=c[i];
 }

