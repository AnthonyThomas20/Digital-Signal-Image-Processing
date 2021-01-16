#include<stdio.h>
#include<complex.h>
int main()
{
    int i,j;
    double xn[4];
    double complex w[4][4]={ {1,1,1,1}, 
                            {1,-I,-1,I},
                            {1,-1,1,-1},
                            {1,I,-1,-I} };
    double complex Xk[100];
    printf("\n-----4-point DFT-----\n");
    printf("\nEnter the elements of given sequence:\n");
    for(i=0;i<4;i++)
    {
        scanf("%lf",&xn[i]);
    }
    printf("\nThe given sequence is:\n");
    for(int i=0;i<4;i++)
    {
        printf("%.0f + %.0fj\n",creal(xn[i]),cimag(xn[i]));
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            Xk[j]=Xk[j]+xn[i]*w[j][i];
        }
    }
    printf("\nThe 4-point DFT for given sequence is:\n");
    for(i=0;i<4;i++)
    {
        printf("%.0f + %.0fj\n",creal(Xk[i]), cimag(Xk[i]));
    }
return 0;
}
