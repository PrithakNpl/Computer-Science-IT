//Written By Madhav SIgdel
#include<stdio.h>
float area(float r);
float volume(float r); //Prithan Nepal
int main()
{
    float r;
    printf("\n\nEnter the radius of the sphere:\t");
    scanf("%f",&r);
    printf("\nThe area of the sphere is:\t%.2f\n",area(r));
    printf("The volume of the sphere is:\t%.2f\n",volume(r));
    return 0;
}
float area(float r)
{
    float area=4*3.14*r*r;
    return area;
}
float volume(float r)
{
    float volume=(4.0/3.0)*3.14*r*r*r;
    return volume;
}
