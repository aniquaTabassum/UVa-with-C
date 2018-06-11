#include<stdio.h>
int average(int a, int b, int c)
{
    int first, second,average;
    if(a>b)
    {
        if(b>c)
            {average = (a+b)/2;
            return average;
            }
        else
        {
            average = (a+c)/2;
            return average;
        }
    }
    else
    {
        if(a>c)
            {average = (a+b)/2;
            return average;
            }
        else
        {
            average = (c+b)/2;
            return average;
        }
    }

}
int main()
{
    int test;
    scanf("%d",&test);
     int i =1;
    while(test--)
    {
        int t1,t2,f,a,ct1,ct2,ct3,av,sum = 0;
        char grade;
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        av = average(ct1,ct2,ct3);
        sum = t1+t2+a+f+av;
        if(sum>=90)
        grade = 'A';
        else if(sum>=80)
            grade = 'B';
        else if(sum>=70)
            grade = 'C';
        else if(sum>=60)
            grade = 'D';
            else
            grade = 'F';

        printf("Case %d: %c\n",i,grade);
        i++;
    }
    return 0;
}
