#include<stdio.h>
int main()
{
    int i=6;
    while(i==6)
    {
        int t,uhr,umin,nhr,nmin,temphr,tempmin;
        printf("\n\n...........................................................\nEnter the UTC Hour:\t");
        scanf("%d",&uhr);
        printf("\nEnter the UTC minute:\t");
        scanf("%d",&umin);
                        //NPT is 5:45 minutes ahead of UTC
        temphr=uhr+5;
        tempmin=umin+45; 
        if(temphr<12 && tempmin>=60)
        {
            nhr=temphr+1;
            nmin=tempmin-60;
            printf("\n%d:%d UTC = %d:%d NPT\n",uhr,umin,nhr,nmin);
        }
        else if(temphr>=12 && tempmin>=60)
        {
            nhr=temphr-11;
            nmin=tempmin-60;
            printf("\n%d:%d UTC = %d:%d NPT\n",uhr,umin,nhr,nmin);
        }
        else if(temphr>=12 && tempmin<60)
        {
            nhr=temphr-12;
            printf("\n%d:%d UTC = %d:%d NPT\n",uhr,umin,nhr,tempmin);    
        }
        else 
        printf("\n%d:%d UTC = %d:%d NPT\n",uhr,umin,temphr,tempmin);
    }
    return 0;
}