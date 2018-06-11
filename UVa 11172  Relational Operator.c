#include<stdio.h>
int main()
{
    int test,a,b;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d%d",&a,&b);
        if(a>b)
            printf(">\n");
         if(a<b)
            printf("<\n");
             if(a==b)
            printf("=\n");
            test--;
    }
    return 0;
}
