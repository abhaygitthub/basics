#include<stdio.h>
int main(){
int arr[5];
int i;
int sum=0;
for (i=0;i<=4;i++)
{
    scanf("%d",&arr[i]);
}
printf("the sum of an array is : ");
for (i=0;i<=4;i++)
{
    sum +=arr[i];
}
printf("%d",sum);
return 0;
}
