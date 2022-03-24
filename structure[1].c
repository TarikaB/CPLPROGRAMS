#include <stdio.h>
int main()
{                                                                                                
   struct student
   {
       int roll_no;
       char name[20];                                                                                              
       float lang_marks;                                                           
       float mat_marks;
       float comp_marks;                                              
       float avg;                                                     
   };
   struct student s[20];
                                                    
   int i,n;                                      
   
   printf("Enter the number of records:");
   scanf("%d",&n);
   
   printf("Enter the student details:");
   for(i=0;i<n;i++)
   {                                       
       printf("Enter the Student ID:");
       scanf("%d",s[i],roll_no);
      
       print("Enter the Student Name:");
       scanf("%c",s[i],name);
       
       printf("Marks scored in Language=");
       scanf("%d",s[i],lang_marks);

       printf("Marks scored in Mathematics=");
       scanf("%d",s[i],mat_marks);

       printf("Marks scored in Computer=");
       scanf("%d",s[i],comp_marks);
   }

   for(i=0;i<n;i++)
   {
       s[i].avg=(s[i].lang_marks+s[i].mat_marks+s[i].comp_marks)/3.0;
   }
   
   printf("Students scoring above the average marks...\n");
   printf("\n\nID\tName\tAverage\n\n");
   
   for(i=0;i<n;i++)
   {
       if(s[i].avg>=35.0)
       printf("%d\t%s\t%f\n",s[i].roll_no,s[i].name,s[i].avg);
   }    
   
   printf("Students scoring below the average marks...\n");
   printf("\n\nID\tName\tAverage\n\n");
   
   for(i=0;i<n;i++)
   {
       if(s[i].avg<35.0)
       printf("%d\t%s\t%f\n",s[i].roll_no,s[i].name,s[i].avg);
   }   
   
   return 0;
}


  







    
 

       













