#include<stdio.h>
void Bubble(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={9,7,10,4,6,3};
    int n=6;
    Bubble(arr,n);
    for(int i=0;i<6;i++)
    {
        printf("%d  ",arr[i]);
    }
}