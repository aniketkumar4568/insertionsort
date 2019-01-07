#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,arr[23];
    printf("enter no. of elements\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
                   scanf("%d",&arr[i]);
    }
    Insertionsort(arr,n);
    printf("the sorted elements are \n");
    for(i=0;i<n;i++)
    {
                   printf("%d ",arr[i]);
    }
    return 0;
}
void Insertionsort(int arr[],int n)
{
               int i,j,hole,value;
               for(j=0;j<n;j++)
               {
               for(i=1;i<=n-1;i++)
               {
                   value=arr[i];
                   hole=i;
                   while(hole>0 && arr[hole-1]>arr[hole])
                   {
                                  arr[hole]=arr[hole-1];
                                  hole=hole-1;
                   }
                   arr[hole]=value;
               }
               }
}
