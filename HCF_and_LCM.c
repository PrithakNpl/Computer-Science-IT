#include<stdio.h>
int main()
{
    int o,in;
    top:
    printf("Enter the operation:\n1. HCF of two numbers\t2. LCM of two numbers\n\n");
    scanf("%d",&o);
    if(o==1)
    {
        int a,b,h,HCF;
        printf("Enter any two numbers\n");
        scanf("%d%d",&a,&b);
        if(a>b) h=a;else if(b>a) h=b;
        for(int i=1;i<=h;i++)
        {
            if(a%i==0 && b%i==0)
            {
                HCF=i;
            }
        }
        printf("The HCF of two numbers is %d\n\n",HCF);
    }
    else if(o==2)
    {
        int a,b,c,LCM;
        printf("Enter any two numbers\n");
        scanf("%d%d",&a,&b);
        for(int i=1;i<=(a*b);i=i++)
        {
            c=a*i;
            if(c%b==0)
            {
                LCM=c;
                printf("The LCM of two numbers is %d\n\n",LCM);
                break;
            }
        }
    }
    else 
    {
        printf("INVALID INPUT, Enter 1 or 2\n");
        goto top;
    }
    printf("For another input enter 1, else 0\n");
    scanf("%d",&in);
    if(in==1) goto top; else printf("Thanks for trying this out !!!\n");
    return 0;
}