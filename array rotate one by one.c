//rotate the array left by 3 positions
#include<stdio.h>
void left_rotate_byone(int arr[],int d);
void rotate(int arr[], int d, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        left_rotate_byone(arr,d);
    }
}
void left_rotate_byone(int arr[],int d)
{
    int i;
    int temp = arr[0];
    for(i=0; i<d-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[d-1] = temp;
    return;
}
void print(int arr[], int d)
{
    int i;
    for(i=0; i<d; i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    rotate(arr,7,3);
    print(arr,7);
    return 0;
}
