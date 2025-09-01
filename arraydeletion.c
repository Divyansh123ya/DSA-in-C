#include<stdio.h>
int main()
{
    int i,arr[100],n,e,flag=0,pos;
    printf("Enter the no. of elements of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element want to delete");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
        if(arr[i]==e)
        {
            flag=1;
            break;
        }
    }
    pos=i;
    if(flag==0)
    {
        printf("Element does not exits");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("Array after deletion");
        for(i=0;i<n-1;i++)
        {
            printf("%d",arr[i]);
        }
    }
    return(0);

}