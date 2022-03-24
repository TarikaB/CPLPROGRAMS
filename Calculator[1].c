/*
Experiment No.1
Question:Simulation of Simple Calculator
Name:Ms.Tarika
Roll no.:N-03
Date:30/12/21
*/
#include <stdio.h>
int main()
{
   char op;
   int num1, num2, result;
   printf("Enter the Operator:\n");
   scanf("%c",&op);
   printf("Enter two integers:\n");
   scanf("%d%d",&num1,&num2);
   if(op=='+')
   {
      result=num1+num2;
   }
   else if(op=='-')
   {  
      result=num1-num2;
   }
   else if(op=='*')
   {
      result=num1*num2;
   }
   else if(op=='/')
   { 
      if(num2==0)
      {
         printf("Divide by zero error\n");
         return 1;
      }
      else
      {
         result=num1/num2;
      }
   }
   else if(op=='%')
   {
      result=num1%num2;
   }
   else
   {
      printf("Invalid Operator");
      return 2;
   }
   printf("Result of %d%c%d=%d", num1,op,num2,result);
   return 0;
}
  
