#include<stdio.h>
int main()
{
    int n,num;
    printf("Array size: ");
    scanf("%d",&n);
    printf("number want to search: ");
    scanf("%d",&num);
    int a[n];
    printf("Array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array elements: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    int k=-1;
    int first=0;
    int last=n-1;

    while(first<=last)
    {
        int mid=(first+last)/2;
        if(num>a[mid])
        {
            first=mid+1;
        }
        else if(num<a[mid])
        {
            last=mid-1;
        }
        else
        {
            k=mid;
            printf("\n index: %d\n",k);
            break;
        }
    }
    if(k==-1)
    printf("not in list");
}