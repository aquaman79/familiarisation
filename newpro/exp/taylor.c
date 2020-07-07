/*#include <stdio.h>
#include <stdlib.h>

float		ft_power(float nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_power(nb, power - 1));
}
unsigned long long 		ft_factorial(int nb)
{
	if ((nb < 0 || nb >= 13))
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_factorial(nb - 1));
}

void taylor(float x , int n )
{
    float somme ; 
    somme = 0 ; 
    int i ;     
    i = 0 ; 
    while (i < n)
    {
        somme = somme + ft_power(x,i)/ft_factorial(i);
        i++;
       // printf("%d \t",i);
        //printf("%d",ft_factorial(i));
    } 
    printf("%f",somme);
}
int main ()
{
    taylor(5,10);
    printf("lALA");

}*/
#include <stdio.h>
#include <stdlib.h>

 float Taylor_exponential(int n, float x) 
    { 
        float exp_sum = 1;     
        for (int i = n - 1; i > 0; --i ) 
            exp_sum = 1 + x * exp_sum / i;    
        return exp_sum; 
    } 
  int main(void)
    {  
       int n = 10;
       float x = 5.0;    
       
       if (n>0 && x>0)
		{	
		 printf("value of n = %d and x = %f ", n, x );
		 printf("\ne^x = %f",Taylor_exponential(n,x)); 
		}         
   }