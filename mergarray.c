#include<stdio.h>
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]);
int main()
{
    int arr1[100],arr2[100],n1,n2,i,arr3[200];
    printf("enter the number of elements in first array\n");
    scanf("%d",&n1);
    printf("enter the elements in first array\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the number of elements in second array\n");
    scanf("%d",&n2);
    printf("enter the elements in second array\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    merge(arr1,arr2,n1,n2,arr3);
    printf("Merged Array");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",arr3[i]);
    }
    return 0;
}
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else
        {
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr3[k++]=arr2[j++];
    }
}