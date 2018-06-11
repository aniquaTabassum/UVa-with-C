#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c,flag;
    while(1)
    {
     flag = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(a== 0 && b==0 && c==0)
        return 0;
    else
    {
        if(a*a == b*b + c*c)
            {printf("right\n");
            flag = 1;
            continue;}
             if(b*b == a*a + c*c)
            {printf("right\n");
            flag = 1;
            continue;}
            if(c*c == a*a + b*b)
            {printf("right\n");
            flag = 1;
            continue;}
            if(flag == 0)
                printf("wrong\n");
    }
    }
    return 0;
}
