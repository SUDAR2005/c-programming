#include<stdio.h>
#include<stdlib.h>
int* sortArray(int*, int);
int BinarySearch(int*, int, int);
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n, s = sizeof(array)/sizeof(array[0]),ind;
    int *ptr_array = sortArray(array,s);
    printf("Enter the number to be found:");
    scanf("%d", &n);
    ind = BinarySearch(ptr_array, s, n);
    if(ind == -1)
        printf("\nEntered number is not found in the array.");
    else
        printf("The number is found in index %d.", ind);
    return 0;
}

int* sortArray(int* arr, int size)
{
    int i, j, t;
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    return arr;
}

int BinarySearch(int* arr, int size, int num)
{
    int h_bound = size - 1;
    int l_bound = 0;

    while (h_bound >= l_bound)
    {
        int mid_index = (h_bound + l_bound) / 2;

        if (arr[mid_index] == num)
        {
            return mid_index;
        }
        else if (arr[mid_index] > num)
        {
            h_bound = mid_index - 1;
        }
        else
        {
            l_bound = mid_index + 1;
        }
    }
    return -1;
}
