#include<stdio.h>
int main()
{
    int i;
    long int test,a,b,c;
    scanf("%ld",&test);
    for(i=0; i<test; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if((a+b)<c || (a+c)<b || (b+c)<a || (a+b)==c || (a+c)==b || (b+c)==a  || a<=0 || b<=0 || c<=0)
        {
            printf("Case %d: Invalid\n",i+1);
        }
        else if(((a==b)&&a!=c) || ((a==c)&&c!=b) || ((b==c)&&c!=a))

        {
            printf("Case %d: Isosceles\n",i+1);
        }
        else if(a ==b && b==c)
        {
            printf("Case %d: Equilateral\n",i+1);
        }


        else if(a!=b && b!=c && c!=a)
        {
            printf("Case %d: Scalene\n",i+1);
        }
    }
    return 0;
}
