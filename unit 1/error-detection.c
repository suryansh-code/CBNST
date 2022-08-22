#include<stdio.h>
#include<math.h>

int main()
{
    float no1;
    float no2;
    
    printf("enter the True value than Aprox value ::");
    scanf("%f %f",&no1,&no2);
    
    float Ea = fabs(no1-no2);
    float Er = Ea/no1;
    float Ep = Er*100;
    
    printf("\n the absalute error is: %f",Ea);
    printf(" the relative error is: %f",Er);
    printf(" the percentage error is: %f",Ep);
    
}
