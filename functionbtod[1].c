#include <stdio.h>
int btod(int);
int main()
{
   int bin,dec;
   
   printf("Enter the binary number:\n");
   scanf("%d",&bin);
   
   dec=btod(bin);

   printf("Decimal Equivalent of %d=%d",bin,dec);
   return 0;
}
int btod(int bin)
{
   if(bin==0)
   {
      return 0;
   }
   else 
   {
      return (btod(bin/10))*2+(bin%10);
   }
}
   
