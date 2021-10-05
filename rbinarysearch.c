#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are:");
    for(i=0;i<arr.length;i++)
    printf("%d  ",arr.A[i]);
}
int Search(struct Array arr,int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;

        else if(key<arr.A[mid])
        h=mid-1;

        else
        l=mid+1;

    }return -1;
}
int main()
{
    struct Array arr={{1,2,3,4,5,6,7,8,9,10},10,10};
    printf("%d \n",Search(arr,13));
    Display(arr);

}