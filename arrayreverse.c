#include<stdio.h>
int main()
{
    int arr[100],n,k;
    printf("Enter the no. of elements of an array\n");
    scanf("%d",&n);
    printf("Enter the elements of an array\n");
    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    int i=0,j=n-1;
    while (i<j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
    }
    printf("Array after reversal\n");
    for(k=0;k<n;k++)    
    {
        printf("%d",arr[k]);
    }
    return(0);
    
}