#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(void)
    {   
     //int n = 8; 
     int n = 729; 
    // int n = 18; 
     printf("All prime factors of %d are: ",n);
     if (n>0)
	  {	
       while (n%2==0) 
        { 
            printf("2 "); 
            n /= 2; 
        } 
  
        for (int i = 3; i <= sqrt(n); i+= 2) 
        { 
            while (n%i == 0) 
            { 
                printf("%d ",i); 
                n /= i; 
            } 
        } 
        if (n > 2) 
            printf("%d ",n); 
       }
       return 0;
	}