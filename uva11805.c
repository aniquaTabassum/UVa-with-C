#include<stdio.h>
int main()
{
    int test,players,passes,passedTo,i=1;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d%d%d",&players,&passedTo,&passes);\
        while(passes)
        {

            if(passedTo == players)
                passedTo = 1;
            else
                passedTo++;
            passes--;
        }
       printf("Case %d: %d\n",i,passedTo);
       i++;
       test--;
    }
}
