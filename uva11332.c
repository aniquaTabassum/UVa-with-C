#include<stdio.h>
#include<conio.h>
int sum(int num)
{
    int r,s,q;
    while(1)
    {
    q=num%10;
    num = num/10;
    printf("sum from function %d/n",num);
    if(q == 0)
        break;
    else
    {
        s+=r;

    }
    num = q;
    }
    return s;
}
int main()
{
    int total;
    while(1)
    {
        total = 0;
        int number;
        scanf("%d",&number);
        if(number == 0)
            return;
        else if(number/10 == 0)
        {
            printf("entered in else if\n");
                total = number;
        }
        else
        {
            printf("entered in last condition\n");
            total = sum(number);
            while((total/10)!=0)
            {
                total = sum(number);
            }
        }
     printf("%d\n",total);
    }

}
