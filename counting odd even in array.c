#include<stdio.h>
int main(){
int arr[5];
int i;
int even=0;
int odd=0;
printf("enter all the number :");
for (i=0;i<=4;i++)
{
    scanf("%d",&arr[i]);
}
printf("the number of even numbers are :");
for(i=0;i<=4;i++)
{
    if (arr[i]%2==0)
    {
     even++;
    }
    else
    {
        odd++;
    }

}
printf("number of even : %d\n",even);
printf("number of odd numbers : %d\n",odd);

return 0;


}
