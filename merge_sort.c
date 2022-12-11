#include <stdio.h>
#define max 10
int j,k, i;

int a[12] = { 0,95, 21, 39, 51, 2, 4, 14, 3, 8, 64};
int b[10];
int z=0;

void show_array()
{
    for(i =1 ; i<=max ; i++)
    printf("%5d", a[i]);
}

void merging(int low, int mid, int high)
{
   z++;
   i=low;
   j=mid+1;
   k=low;

   while(i<=mid && j<=high)
   {
       if(a[i]<=a[j])
       {
           b[k]=a[i];
           i++;
       }
       else
       {
           b[k]=a[j];
           j++;
       }
       k++;
   }
   if(i>mid)
   {
       while(j<=high)
       {
           b[k]=a[j];
           j++;
           k++;
       }
   }
   else
   {
       while(i<=mid)
       {
           b[k]=a[i];
           i++;
           k++;
       }
   }
   for(i = low; i <= high; i++)
   {
       a[i] = b[i];
   }
    printf("The array after pass %3d =",z);
    show_array();
    printf("\n");
}

void mergesort(int low, int high)
{
   int mid;
   if(low < high)
   {
      mid=(low + high)/2;
      mergesort(low,mid);
      mergesort(mid+1,high);
      merging(low,mid,high);
   }
}

int main()
{
   int i;

   printf("List before sorting\n");
   show_array();

   printf("\n\n");

   mergesort(1, max);
   printf("\nList after sorting\n");
   show_array();

}
