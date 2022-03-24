/*Expt. No. 7
Compue sin(x)/cos(x) using taylor series approximation. Compare your result with the built-in library function. Print both the results with approximate inferences 

USN: N-03
Name: B Tarika
Date: 03/02/2022

sin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - ............

cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + x^8/8! - ............


*/

#include <stdio.h>
#include <math.h>
#define PI 3.14156
int main()
{
      float x,degree;
      float sum;
      float term, nume, deno;
      int i;

      printf("Enter the degree: ");
      scanf("%f", &degree);
      x = degree*(PI/180);
      
      sum = 0;
      nume = x;
      deno = 1;
      i = 1;

      do{
              term = nume/deno;
              sum = sum + term;
              i = i + 2;
              nume = -1*nume*x*x;
              deno = deno*(i - 1)*i;
        }while(fabs(term) >= 0.00001);
      
      printf("Computed value of sin(%f)=%f\n", degree, sum);
      printf("Value of sin(%f) from the library function = %f\n", degree, sin(x));
      return 0;


}
