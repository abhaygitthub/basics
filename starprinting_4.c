#include<stdio.h>
int main(){
int i;
int j;
for (i='A';i<='E';i++)
{
    for(j='A';j<=i;j++)
    {
        printf("%c",j);
    }
    printf("\n");
}
return 0;
}
