#include<stdio.h>
double toFar(double tem)
{
    double F = (9*tem)/5;
    F+=32;
    return F;
}
double toCel(double fin)
{
    double c = 5*fin;
    c-=160;
    c=c/9;
    return c;
}
double approx(double fin)
{
    int dig;
    double ret = fin;
    fin = fin*1000;
    int round = fin;
    dig = round%10;
    if(dig>4)
        ret = ret+0.010;
    return ret;
}
int main()
{
    int i = 1;
    int test;
    scanf("%d",&test);
    double tem, inc, fin,far;
    while(test--)
    {
        scanf("%lf%lf",&tem,&inc);
        fin = toFar(tem);
        fin+=inc;
        fin = toCel(fin);
        //fin = approx(fin);
        printf("Case %d: %.2f\n",i,fin);
    }
    return 0;
}
