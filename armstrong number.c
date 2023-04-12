#include<stdio.h>
int armstrong(int,int);
void main()
{
    int x,ans;
    printf("enter number:");
    scanf("%d",&x);
    ans=armstrong(x);
    printf("%d",ans);
    getch();
}
int armstrong(int y)
{
    int temp,sum=0,rem;
    temp=y;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    return sum;
}
