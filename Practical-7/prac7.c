#include<stdio.h>
#include<complex.h>
int main()
{
    int i;
    double xn[4],F1[2],F2[2];
    double complex Xk[4], W[2] = {1, -I};
    printf("\n------4-point DFT using DIT-FFT------\n");
    printf("\nEnter the elements of x(n):\n");
    for(i=0;i<4;i++)
    {
        scanf("%lf",&xn[i]);
    }
    printf("\nThe given sequence is: ");
    printf("\nx(n) = { ");
    for(i=0;i<4;i++)
    {
        printf("%.0f  ",xn[i]);
    }
    printf("}");
    printf("\n\nStage 1 calculation:\n");
    F1[0] = xn[0] + xn[2];
    F1[1] = xn[0] - xn[2];
    F2[0] = xn[1] + xn[3];
    F2[1] = xn[1] - xn[3];
    for(i=0;i<2;i++)
    {
        printf("F1[%d] = %.0f\n",i,F1[i]);
    }
    for(i=0;i<2;i++)
    {
        printf("F2[%d] = %.0f\n",i,F2[i]);
    }
    printf("\nStage 2 calculation:\n");
    Xk[0] = F1[0] + W[0]*F2[0];
    Xk[1] = F1[1] + W[1]*F2[1];
    Xk[2] = F1[0] - W[0]*F2[0];
    Xk[3] = F1[1] - W[1]*F2[1];
    for(i=0;i<4;i++)
    {
        printf("X[%d] = %.0f + (%.0f)j\n",i,creal(Xk[i]), cimag(Xk[i]));
    }
    printf("\nThe 4-point DFT for given sequence using DIT-FFT is:");
    printf("\nX(k) = { ");
    for(i=0;i<4;i++)
    {
        printf("%.0f+(%.0f)j  ",creal(Xk[i]), cimag(Xk[i]));
        
    }
    printf("}");
    return 0;
}
