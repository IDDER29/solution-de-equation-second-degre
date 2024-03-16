#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,C;
    float S;

    int delta;
    printf("Hello world!\n");
    printf("Enter Number a : ");
    scanf("%d", &A);

    printf("Enter Number b : ");
    scanf("%d", &B);

    printf("Enter Number c : ");
    scanf("%d", &C);

    printf("les solution posible de set equation %dX^2 + %dX + %d et \n ", A,B,C);

    delta = pow(B,2) - 4*A*C;

    if(delta > 0){
        float x1 = ((-B) - sqrt(delta))/(2*A);
        float x2 = ((-B) + sqrt(delta))/(2*A);
        printf("X1 = %.2f : X2 = %.2f ", x1,x2);
    }else if(delta == 0){
        float x3 = (-B)/(2*A);
        printf("X = %.2f ", x3);
    }else{
        printf("imposible solution ");

    }


    return 0;
}
