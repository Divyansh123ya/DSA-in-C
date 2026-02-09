#include<stdio.h>
void linearsearch(int key,int arr[],int n)
{
    int i,flag=0,pos=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    if(flag==0)
    {
        printf("Elements not exits\n");
    }
    else{
        printf("Elements found at %d\n",pos+1);
    }
}
int main()
{
    int n,i,arr[100],key;
    printf("Enter the no. of elements of an array\n");
    scanf("%d",&n);
    printf("Enter the elements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elemts wants to search\n");
    scanf("%d",&key);
    linearsearch(key,arr,n);
}