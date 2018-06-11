#include<stdio.h>
int main()
{

    int test;
    scanf("%d",&test);
    while(test)
    {
        long s =0, d=0,r=0,sub=0,total=0,reduce=0;
        scanf("%ld%ld%ld",&s,&d,&r);
        total = s+d;
        sub = r-1;
        while((total-sub)>0)
        {
            total-=sub;
            reduce+=1;
        }
        printf("%ld\n",reduce);
        test--;
    }
    return 0;
}
