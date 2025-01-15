#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T arr[], int start, int end, bool descending)
{
    for (int i = start + 1; i <= end; i++)
    {
        T key = arr[i];
        int j = i - 1;

        while (j >= start && ((descending && arr[j] < key) || (!descending && arr[j] > key)))
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

template <typename T>
void sortHalfArray(T arr[], int size)
{
    int mid = size / 2;

    insertionSort(arr, 0, mid - 1, true);
    insertionSort(arr, mid, size - 1, false);
}

int main()
{
    int arr[10] = {9, 7, 3, 1, 6, 5, 4, 2, 8, 0};

    cout << "Before sorting:\n";

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    sortHalfArray(arr, 10);

    cout << "After sorting:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
