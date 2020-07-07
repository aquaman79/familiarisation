#include <stdio.h>
#include <string.h>

void lexo(int n )
{
    int j, m , i = 1 ; 
    while (i<=9)
    {   
        j = 1 ; 
        while (j <= n )
        {
            m = 0 ; 
            while (m <j)
            {
                if(m+j * i <=n)
                    printf("%d \t" , m+j*i);
                m=m+1;
            }
            j = j*10;
        }
        i= i +1;
    }
}
int main ()
{
    lexo(32); 
    return 0 ; 
}