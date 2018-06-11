#include<stdio.h>
int main()
{
    int a[3],i,test,temp = 0,j,k;
    scanf("%d",&test);
    for(j=1;j<=test;j++)
    {
        for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<=1;i++)
    {
        for(k=i+1;k<3;k++)
        {

        if(a[i]>a[k])
        {
            temp = a[k];
            a[k] = a[i];
            a[i] = temp;
        }
        }
    }
        printf("Case %d: %d\n",j,a[1]);

    }
    return 0;
}
