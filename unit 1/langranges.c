#include<stdio.h>

void main()
{
    int n;
    printf("enter the number of observations: ");
    scanf("%d",&n);

    float x[n],y[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the value of x[%d]:- ",i);
        scanf("%f",&x[i]);

        printf("enter the value of y[%d]:- ",i);
        scanf("%f",&y[i]);


    }

    float a;
    printf("\nenter the value of a - ");
    scanf("%f",&a);

    float b=0;
    for(int i=0;i<n;i++)
    {
        float k=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                k=k*(a-x[j])/(x[i]-x[j]);
            }
        }

        k=k*y[i];
        b=b+k;
    }

    printf("y( %f )= %f ",a,b);
}