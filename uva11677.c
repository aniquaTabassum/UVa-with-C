#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h,m;


    while(1)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1!=0 || h2!=0 || m1!=0 || m2!=0)
        {
        if(h1 == 0)
            h1 = 24;
        if(h2 == 0)
            h2 = 24;
        h=0;
        m=0;
        if(h2 > h1)
        {
            h = h2 -h1;
            h = h*60;
            if(m2 < m1)
            {

                m = m1 - m2;
                h = h - m;
                printf("%d\n",h);
            }
            else
            {
                m = m2 -m1;
                h = h+m;
                printf("%d\n",h);
            }
        }
        else
        {
            if(h1 == h2)
            {
                if(m2>m1)
                {
                    m = m2 - m1;
                h=m;
                printf("%d\n",h);
                }
                else
                {
                    h2 = 24*60;
                    m = m1 - m2;
                    h = h2-m;
                    printf("%d\n",h);
                }


            }
            else
            {
                h2 = h2+24;
                h = h2 - h1;
                h = h*60;
                if(m2 < m1)
                {
                m = m1 - m2;
                    h = h - m;
                }
                else
                {
                    m = m2 -m1;
                    h = h+m;
                }
                printf("%d\n",h);
            }

        }

        }
        else
            break;
    }
    return 0;
}
