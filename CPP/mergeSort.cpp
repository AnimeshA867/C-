#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void mergeSort(int *arr, int left, int right, int pivot, int len)
{
    while (left < right)
    {
        if (arr[left] <= arr[pivot])
        {
            left++;
        }
        if (arr[right] >= arr[pivot])
        {
            right--;
        }
        if (arr[left] > arr[pivot] && arr[right] < arr[pivot] && arr[left] > arr[right])
        {
            swap(arr[left], arr[right]);
        }
    }
    swap(arr[pivot], arr[right]);
    if (len <= 0)
    {
        }
    else
    {
        mergeSort(arr, 1, right - 1, 0, right);
        mergeSort(arr, right + 1, len - 1, 0, len - right);
    }
}

int main()
{
    int arr[] = {1, 4, 2, 3, 54, 65, 34, 23};
    mergeSort(arr, 1, 7, 0, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}