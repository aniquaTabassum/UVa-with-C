#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    if((scanf("%d%d"),&x,&y)!=EOF)
    {
        if(x>y)
            printf("%d",x-y);
        else
            printf("%d",y-x);
    }
    return 0;
}
