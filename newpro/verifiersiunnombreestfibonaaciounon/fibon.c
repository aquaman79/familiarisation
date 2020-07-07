#include "fibon.h"
/* un nombre n est dit de fibonnaci si est seulement si (5n^2+4) ou (5n^2-4) est un perfect square . */
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main(void)
    {   
     //int n = 12;
	 //int n = 55;
	 int n = 918;
	  if (n>0)
		{	
		 printf("Is %d a Fibonacci number? %d",n, isFibonacci(n)); 
		} 
		return 0;        
   }