#include<stdio.h>
#include<conio.h>

#include<unistd.h>
int main()
{
    int hour,minute,second,;
    printf("Enter Hour,Minute and Second:");
    scanf("%d%d%d",& hour,&minute,&second);

    int h=0,m=0,s=0;
    while(1)
    {

    printf("%.2d:%.2d:%.2d\n",h,m,s);
    if(h==hour && m==minute && s==second)
    {
        break;
    }
    else
    {
    }
    s++;
    sleep(1);
    if(s==60)
    {
        m++;
        s=0;
    }
    if(m==60)
    {
        h++;
        m=0;
    }
    }



    return 0;
}
