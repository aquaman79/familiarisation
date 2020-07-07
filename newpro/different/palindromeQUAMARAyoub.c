#include <stdio.h>
int check (unsigned long long nbr )
{
 unsigned long long tmp ; 
 unsigned long long  reverse ; 
 tmp = nbr ;
 reverse =  0 ; 
 while(tmp != 0)
    {
        reverse = reverse*10;
        reverse = reverse+tmp%10 ; 
        tmp = tmp / 10 ;
    }
if (reverse == nbr)
    return 1 ; 
return 0 ; 
}
int main()
{
    unsigned long long a ; 
    int b = 0 ; 
    printf("donner un nombre "); 
    scanf("%llu",&a);
    //printf("%d",check(a));
    while (1 != b)
    {
        a = a+1 ; 
        if (check(a)==1)
        {
            printf("%llu",a);
            b = 1 ;
        }

    }

    return 0;
}
