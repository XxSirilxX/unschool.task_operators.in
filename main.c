#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,m,n,o;
    scanf("%d%d",&i,&j);
    k=i+j;
    l=i-j;
    m=i*j;
    n=i%j;
    o=i/j;
    printf("Sum of the numbers is: %d\n",k);
    printf("Difference of the numbers is: %d\n",l);
    printf("Product of the numbers is: %d\n",m);
    printf("Modulus of the numbers is: %d\n",n);
    printf("Division of the numbers is: %d\n",o);
    return 0;

}
