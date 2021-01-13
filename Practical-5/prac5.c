#include <stdio.h>

void main()
{
    int m,n,x[30],h[30],y[30],i,j,k,x2[30],a[30],s,l=0;
    do{
        printf("\n-----Correlation-----\n");
        printf("\n1. Cross-correlation\n2. Auto-correlation\n\nSelect any one: ");
        scanf("%d",&s);
        switch(s)
        {
            case 1:
            printf("\nEnter length of first sequence: ");
            scanf("%d",&m);
            printf("\nEnter elements of first sequence:\n");
            for(i=0;i<m;i++)
            {
                scanf("%d",&x[i]);
            }
            printf("\nEnter length of second sequence: ");
            scanf("%d",&n);
            printf("\nEnter elements of second sequence:\n");
            for(i=n-1;i>=0;i--)
            {
                scanf("%d",&h[i]);
            }
            for(i=m;i<=m+n-1;i++)
            {
                x[i]=0;
            }
            for(i=n;i<=m+n-1;i++)
            {
                h[i]=0;
            }
            for(i=0;i<m+n-1;i++)
            {
                y[i]=0;
                for(j=0;j<=i;j++)
                {
                    y[i]=y[i]+(x[j]*h[i-j]);
                }
            }
            printf("\nCross-correlation:\n");
            for(i=0;i<m+n-1;i++)
            {
                printf("%d  ",y[i]);
            }
            printf("\n");
            printf("\nTo exit type -1 else 0: ");
            scanf("%d",&l);
            break;
            
            case 2:
            printf("\n");
            printf("Enter length of first sequence: ");
            scanf("%d",&m);
            n=m;
            printf("\nEnter elements of first sequence:\n");
            for(i=0;i<m;i++)
            {
                scanf("%d",&x[i]);
            }
            for(i=0,j=n-1;i<n,j>=0;i++,j--)
            {
                h[j]=x[i];
            }
            for(i=m;i<=m+n-1;i++)
            {
                x[i]=0;
            }
            for(i=n;i<=m+n-1;i++)
            {
                h[i]=0;
            }
            for(i=0;i<m+n-1;i++)
            {
                y[i]=0;
                for(j=0;j<=i;j++)
                {
                    y[i]=y[i]+(x[j]*h[i-j]);
                }
            }
            printf("\nAuto-correlation:\n");
            for(i=0;i<m+n-1;i++)
            {
                printf("%d  ",y[i]);
            }
            printf("\n");
            printf("\nTo exit type -1 else 0: ");
            scanf("%d",&l);
            break;
        }
    }while(l!=-1);
}
