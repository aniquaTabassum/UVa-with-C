#include<stdio.h>
int main()
{
    int test,h1,m1,h2,m2;
    char c;
    scanf("%d",&test);
    while(test--)
    {

        scanf("%d%c%d",&h1,&c,&m1);
        if(h1 == 12)
        {

            if(m1 == 0)
            {
                h2 = 12;
                printf("%d:0%d\n",12, m1);
            }

            else
            {
                m2 = 60-m1;

                if(m2 < 10)
                    printf("%d:0%d\n",11,m2);
                else
                    printf("%d:%d\n",11,m2);
            }

        }
        else
        {
            if(m1 == 0)
            {
                h2 = 12 - h1;
                if(h2 < 10)
                    printf("0%d:00\n",h2);
                else
                    printf("%d:00\n",h2);
            }

            else
            {
                if(h1 == 11)
                {h1+=12;
                h2 = h1-11;}
                else
                  h2 = 11-h1;
                m2 = 60-m1;

                if(m2 < 10)
                {
                    if(h2 < 10)
                        printf("0%d:0%d\n",h2,m2);
                    else
                        printf("%d:0%d\n",h2,m2);
                }

                else
                {
                    if(h2 < 10)
                        printf("0%d:%d\n",h2,m2);
                    else
                        printf("%d:%d\n",h2,m2);
                }
            }

        }
    }
    return 0;
}
