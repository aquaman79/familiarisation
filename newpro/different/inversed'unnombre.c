#include <stdio.h>
#include <string.h>
#include <math.h>

int taile (int nbr)
{
    int n;
    n = 0 ; 
    while (nbr!=0)
    {
        nbr=nbr/10;
        n++; 
    }
    return n; 
}
int main ()
{
    int nbr ; 
    int temp ;
    int n;
    int somme ; 
    somme = 0 ;
    n = 0 ; 
    printf("donner un nombre");
    scanf("%d",&nbr);
    printf("le nombre est %d \n",nbr);
    n = taile(nbr);
    printf("la taille est %d \n",n);
    while (nbr!=0)
    {
        temp = nbr;
        temp = temp%10;
        nbr =nbr/10;
        somme = somme+temp*pow(10,n--); 
    }
    somme = somme / 10;
    printf("l'inverse est %d",somme);
    return 0 ; 
}