#include <stdio.h>
#include<math.h>
int main()
{
   int a[10];
   int n,i,j,temp,first,last,mid,key;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   
   printf("Enter %d integers:",n);
   for(i=0;i<n;i++)
   {   
      scanf("%d",&a[i]);
   }
    
   for(i=0;i<n-1;i++)
   {  
      for(j=0;j<n-1-i;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }

   printf("The sorted array is....\n");
   for(i=0;i<n;i++)
   {
      printf("%d\t",a[i]);
   }
   first=0;
   last=n-1;
   printf("Enter the key element:");
   scanf("%d",&key);
   while(first<=last)
   {
      mid=(first+last)/2;
      if(key=a[mid])
     {
        printf("Element %d is found at %d", key,mid+1);
        return 0;
     }
     else if(key<a[mid])
     {   
        last=mid-1;
     }
     else first=mid+1; 
   }
   printf("Element %d not found",key);
   return 0;
}
