#include<stdio.h>

int main()
{
    int n,i,j,k;
    printf("enter the unknown variables\n");
    scanf("%d",&n);

    float mat[n][n+1];
    float t;
    float x[n];
    float sum;

    printf("enter the matrix elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }

    printf("the matrix is :\n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            printf(" %f ",mat[i][j]);
        }
    }

    // making of the uppr triangular matrix

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            t=mat[j][i]/mat[i][i];
            for(int k=0;k<n+1;k++)
            {
                mat[j][k]=mat[j][k]-t*mat[i][k];
            }
        }
    }

   // printing the uppr triangular matrix

    printf("\nprinting the uppr triangular matrix\n");
    for(int i=0;i<n;i++)
    {
        printf("\n");
        for(int j=0;j<=n;j++)
        {
            printf(" %f ",mat[i][j]);
        }
    }

    //
    for(int i=n-1;i>=0;i--)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+mat[i][j]*x[j];
        }

        x[i]=(mat[i][n]-sum)/mat[i][i];
    }

    printf("\nthe value of unknown variable is\n");
    for(int i=0;i<n;i++)
    {
        printf(" %f ",x[i]);
    }

}