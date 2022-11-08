#include <stdio.h>
int LinearSearch(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int size, int el)
{
    int start, mid, end;
    start = arr[0];
    end = arr[size - 1];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == el)
        {
            return mid;
        }
        if (arr[mid] > el)
        {
            end = mid - 1;
        }
        if (arr[mid] < el)
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[50];
    int element, num, n;
    for (int i = 0; i < 50; i++)
    {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 50; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n\nEnter the number you want to search in the above array - ");
    scanf("%d", &num);
    printf("Binary Search - ");
    n = binarySearch(arr, 50, num);
    printf("%d\n", n);
    printf("Linear Search - ");
    n = LinearSearch(arr, 50, num);
    printf("%d\n", n);
    return 0;
}