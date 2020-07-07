#include <stdio.h>
#include <string.h>

typedef struct data {
    int a ; 
    int b ; 
    int c ; 
    int d ; 
    int nieme; 
}data ;
void swap(char *x, char *y) 
{ 
    char temp; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
/* Function to print permutations of string 
   This function takes three parameters: 
   1. String 
   2. Starting index of the string 
   3. Ending index of the string. */
void permute(char *a, int l, int r) 
{ 
   int i; 
   if (l == r) 
     printf("%s\n", a); 
   else
   { 
       for (i = l; i <= r; i++) 
       { 
          swap((a+l), (a+i)); 
          permute(a, l+1, r); 
           swap((a+l), (a+i)); //backtrack 
       } 
   } 
} 
int main ()
{
    char str[50]="";
    data diali ; 
    int  ro;
    ro = 0 ; 
    printf("donner combien de A ");
    scanf("%d",&diali.a);
    printf("donner combien de b ");
    scanf("%d",&diali.b );
    printf("donner combien de c ");
    scanf("%d",&diali.c );
    printf("donner combien de d ");
    scanf("%d",&diali.d );
    //printf("%s",str);
   // printf("%d",diali.a);
    while (diali.a !=0 )
    {
       strcat(str,"A");
        diali.a--;
        //printf("salam");
    }
    while (diali.b !=0 )
    {
       strcat(str,"B");
        diali.b--;
        //printf("salam");
    }
    while (diali.c !=0 )
    {
       strcat(str,"C");
        diali.c--;
        //printf("salam");
    }
    while (diali.d !=0 )
    {
       strcat(str,"D");
        diali.d--;
        //printf("salam");
    }
    printf("%s",str);
    ro=strlen(str);
    printf("la taille est %d",ro);
    permute(str,0,ro-1);
}