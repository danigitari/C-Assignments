#include <stdio.h>
#include <stdlib.h>
// simple program to sort arrays using the bubblesort algorithm

void bubbleSort(int arr[], int n)
{
    int a , b , i , temp, flag;
    for(a = 0; a < n; a++)
    {
        for(b = 0; b < n; b++)

        {   if(arr[b] > arr[b+1])
        {
            temp=arr[b];
            arr[b]=arr[b+1];
            arr[b+1]=temp;
            flag = 1;
        }
        }
        if(flag == 0)
            {
                break;
            }
    }
    printf("the new sorted array: ");

    for(i=0;i<n;i++)
        {
        printf("%d  ", arr[i]);
        }

}
int main()
{
    int arr[100], i, n;
    printf("enter the number of elements in your array\n");
    scanf("%d",&n);
    for(i = 0;i < n; i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,n);

    return 0;
}
