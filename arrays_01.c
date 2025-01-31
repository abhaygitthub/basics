#include<stdio.h>
int main(){
int arr[5];
int i;
for (i=0;i<=4;i++)
{
    scanf("%d",&arr[i]);
}
printf("the given numbers are : ");
for (i=0;i<=4;i++)
{
    printf("\n%d",arr[i]);
}
return 0;

}
