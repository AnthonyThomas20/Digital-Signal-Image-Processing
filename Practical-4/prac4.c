#include <stdio.h>
#include <conio.h>
int main()
{
    int n1,n2,x1[10],x2[10],n,i,cir[10][10],j,k,value[10],v;
    printf("\nEnter length of first sequence: ");
    scanf("%d", &n1);
    printf("\nEnter the first sequence:\n");
    for (i=0; i<n1; i++)
    {
        scanf("%d",&x1[i]);
    }
    printf("\nEnter length of second sequence: ");
    scanf("%d", &n2);
    printf("\nEnter the second sequence:\n");
    for (i=0; i<n2; i++)
    {
        scanf("%d",&x2[i]);
    }  
    if(n2<n1)
    {
        for(i=n2;i<n1;i++)
        {
            x2[i]=0;
        }
    }

    for(i=0;i<n1;i++)
    {
        cir[i][0]=x2[i];
    }
    for(i=1;i<n1;i++)
    {
        cir[0][i] = cir[n1-1][i-1];
        for(j=1,k=0;j<n1,k<n1-1;j++,k++)
        {
            cir[j][i] = cir[k][i-1];
        }
    }
    printf("\nyc(n) = x2(n) * x1(n) \n\n ");
    for(i=0;i<n1;i++)
    {
        v=0;
        printf("\t| ");
        for(j=0;j<n1;j++)
        {
            printf("%d ", cir[i][j]);
            v += cir[i][j]*x1[j];
        }
        value[i]=v;
        if(i==1)
        {
            printf("| * | %d | = | %d |\n", x1[i], value[i]);
        }
        else
        {
            printf("|   | %d |   | %d |\n ", x1[i], value[i]);
        }    
    }
    printf("\n\nyc(n) = [");
    for(i=0;i<n1;i++)
    {
        printf("%d ", value[i]);
    }
    printf("]");
    
    return 0;
}
