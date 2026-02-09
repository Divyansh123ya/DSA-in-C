#include<stdio.h>
int binarysearch(int data,int arr[],int n)
{
    int l=0,r=n-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data==arr[mid])
            return mid;
        else if(data<arr[mid])
            r=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
int main()
{
    int i,arr[100],n,data,pos;
    printf("Enter the no. elements of array\t");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemets want to find");
    scanf("%d\n",&data);
    pos=binarysearch(data,arr,n);
    if(pos==-1)
    {
        printf("Elemets does not found");
    }
    else
    {
        printf("element found at index %d\n",pos);
        printf("element found at postion %d",pos+1);
    }
    return 0;
}