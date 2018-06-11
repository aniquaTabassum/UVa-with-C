#include<stdio.h>
#include<math.h>
double time(double v, double u, double a)
{
    double t;
    t = v-u;
    t=t/a;
    printf("t is %.3f",t);
    return t;
}
double acc(double v, double u, double t)
{
    double a;
    a = v-u;
    a=a/t;
    printf("a is %.3f",a);
    return a;
}
double sh(double u, double a, double t)
{
    double s;
    s = u*t;
    s = s + 0.5*a*t*t;
    printf("s is %.3f",s);
    return s;
}
double vel(double u, double a, double s)
{
    double v;
    v = u*u;
    v = v+2*a*s;
    v = sqrt(v);
    printf("v is %.3f",v);
    return v;
}
double ul(double v, double a, double s)
{
    double u;
    u = v*v;
    u = u-2*a*s;
    u = sqrt(u);
    printf("u is %.3f",u);
    return u;
}
int main()
{
    int serial,i = 1;
    double u,v,a,s,t;
    while(1)
    {
        scanf("%d",&serial);
         if(serial == 0)
            return 0;
        u=0;
        v=0;
        s=0;
        a=0;
        t=0;
        scanf("%lf,%lf,%lf",&u,&v,&a);

            if(serial == 1)
            {
                t = a;
                a = acc(v,u,t);
                s= sh(u,a,t);
                printf("1Case %d: %.3f %.3f\n",i,s,a);
                i++;
            }
            if(serial == 2)
            {
                t = time(v,u,a);
                s= sh(u,a,t);
                printf("2Case %d: %.3f %.3f\n",i,s,t);
                i++;
            }
            if(serial == 3)
            {
                int temp;
                temp = a;
                a = v;
                s = temp;
                v = vel(u,a,s);
                t = time(v,u,a);
                i++;
                printf("3Case %d: %.3f %.3f\n",i,v,t);
            }
            if(serial == 4)
            {
                int temp;
                temp = a;
                a = v;
                v = u;
                s = temp;
                u = ul(v,a,s);
                t = time(v,u,a);
                i++;
                printf("4Case %d: %.3f %.3f\n",i,u,t);
            }
    }
    return 0;
}
