#include <stdio.h>

void adjust_item(int *item);
void adjust_arr(int *arr, int size);
int main()
{
    int arr[5] = {1,2,5,4,3};
    adjust_arr(arr,5);
    for(int i =0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void adjust_item(int *item)
{
    if(*item % 2 ==0)
        *item *= 2;
    else
        *item *= 3;
}
void adjust_arr(int *arr, int size)
{
    for(int i =0;i<size;i++)
    {
        adjust_item(&arr[i]);
    }
}
