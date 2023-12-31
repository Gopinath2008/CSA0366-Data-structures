#include <stdio.h>
#include <stdlib.h>
int compareAscending(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}
int compareDescending(const void *a, const void *b) 
{
    return (*(int *)b - *(int *)a);
}

int main()
{
	int arr[] = {34, 12, 45, 23, 6, 78, 56, 89, 32, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    for (int i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    qsort(arr, n, sizeof(int), compareAscending);
    printf("Array in ascending order:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    qsort(arr, n, sizeof(int), compareDescending);
    printf("Array in descending order:\n");
    for (int i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
