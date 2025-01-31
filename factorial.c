#include<stdio.h>
int main (){
int i; int fac =1;

printf("\nenter the number to find factorial : ");
scanf("%d",&i);
while (i>=1)
{
    fac=fac*i;
    i--;

}
printf("factorial is %d",fac);
return 0;

}
