#include<stdio.h>
#include<conio.h>

void quicksort(int a[],int low,int high)
{
    int index;
    if(low<high)
    {
        index=partition(a,low,high);
        quicksort(a,low,index-1);
        quicksort(a,index+1,high);
    }
}
int partition(int a[],int low,int high)
{
    int i,j,pivot,temp;
    pivot=a[low];
    i=low+1;
    j=high;
    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i< j);
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}

void main()
{
    int i,a[30],n;
    printf("enter array size=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value a[%d]=",i);
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}