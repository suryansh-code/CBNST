#include<stdio.h>

void main()
{
    int n;
    printf("enter the unknown variabels:- ");
    scanf("%d",&n);

    float x[n][n+1];
    float ans[n];

    // input the matrix elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&x[i][j]);
        }
    }

    //printing the matrix elements
    printf("\n out mstrix is\n");
    {
        for(int i=0;i<n;i++)
        {
            printf("\n");
            for(int j=0;j<=n;j++)
            {
                printf("  %f  ",x[i][j]);
            }
        }
    }

    float t;

   //making the diagonal matricx
   printf("\n the digonal matrix is\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t=x[j][i]/x[i][i];
            if(i!=j)
            {
                for(int k=0;k<n+1;k++)
                {
                    x[j][k]=x[j][k]-t*x[i][k];
                }
            }
        }
    }

    //printing the diagonal matrix;
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            printf("  %f  ",x[i][j]);
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        ans[i]=x[i][n]/x[i][i];
    }

    printf("\n\n our values of unknown variables are:\n\n");
    for(int i=0;i<n;i++)
    {
        printf(" %f ",ans[i]);
    }

}