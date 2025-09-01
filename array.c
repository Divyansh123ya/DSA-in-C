#include<stdio.h>
int main()
{
    int i,a[100],b[100],c[100],n,m;
    printf("Enter number of element of first array ");
    scanf("%d",&n);
    printf("Enter element of first array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of element of second array ");
    scanf("%d",&m);
    printf("Enter element of second array ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<m;i++)
    {
        printf(" %d",c[i]);
    }
    return(0);
}