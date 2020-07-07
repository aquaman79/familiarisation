#include <stdio.h>
#include <stdlib.h>
 
int count_nums_not_7(int num) 
    { 
        if (num < 7) 
            return num; 
        if (num >= 7 && num < 10) 
            return num-1; 
 
        int r = 1; 
        while (num/r > 9) 
            r = r*10; 
  
        int m = num/r; 
   
        if (m != 7) 
            return count_nums_not_7(m)*count_nums_not_7(r - 1) + count_nums_not_7(m) + count_nums_not_7(num%r); 
        else
            return count_nums_not_7(m*r - 1); 
    }      
     int main(void)
     { 
        int n = 10;  
        if (n>0)
		    printf("Count the numbers without digit 7, from 1 to %d : %d", n, count_nums_not_7(n));		
		n = 687;  
        if(n>0)
		    printf("\nCount the numbers without digit 7, from 1 to %d : %d", n, count_nums_not_7(n));
     }