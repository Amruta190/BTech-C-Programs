#include<stdio.h>
void main()
{
  int i,j,m1,n1,m2,n2,m3,n3,a[100][100],b[100][100],c[100][100],k;
  scanf("%d%d" ,&m1,&n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d " ,&a[i][j]);
        }
    }
    scanf("%d%d" ,&m2,&n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d" ,&b[i][j]);
        }
    }
        if(m1==m2 && n1==n2)
        {
            printf("Addition is\n");
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n1;j++)
                {
                    c[i][j]=a[i][j]+b[i][j];
                    printf("%d " ,c[i][j]);
                }
                printf("\n");
            }
        }
        else
        printf("Addition is not possible\n");
        if(m1==n2&&m2==n1)
        {
            printf("Multiplication is\n");
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n1;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<n1;k++)
                    {
                        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                    }
                    printf("%d" ,c[i][j]);
                }
                printf(" ");
            }
            printf("\n");
        }
        else
        printf("Multiplication is not possible\n");
        printf("The transpose of 1st matrix is\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                printf("%d" ,a[j][i]);
            }
            printf("\n");
        }
}

