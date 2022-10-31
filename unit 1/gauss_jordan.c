#include<stdio.h>

void main()
{
    int n;
    printf("enter the number of unknown variables\n");
    scanf("%d",&n);

    float mat[n][n+1],t,x[n],sum;

    // taking the coefficent of the matrix
    printf("enter the coeficients: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }
    
    //printing the entered matrix
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            printf(" %f ",mat[i][j]);
        }
    }

    //making the diagonal matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            t=mat[j][i]/mat[i][i];
            if(i!=j)
            {
                for(int k=0;k<n+1;k++)
                {
                    mat[j][k]=mat[j][k]-t*mat[i][k];
                }
            }
        }
    }

    //printing the diagonal matrix;
    printf("\n\n printing the diagonal matrix\n\n");

    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            printf(" %f ",mat[i][j]);
        }
    }

    // backward subsitution
    for(int i=n-1;i>=0;i--)
    {
        x[i]=mat[i][n]/mat[i][i];
    }

    //printing the value of the unknown variables
    printf("\n\n the value of the unknown variables are \n");
    for(int i=0;i<n;i++)
    {
        printf(" %f ",x[i]);
    }

}