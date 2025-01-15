#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
void sortArray(T arr[], int size, bool descending = false)
{
    if (descending)
    {
        sort(arr, arr + size, greater<T>());
    }
    else
    {
        sort(arr, arr + size);
    }
}

int main()
{
    int arr[10] = {5, 1, 8, 3, 9, 2, 7, 4, 6, 0};

    cout << "Before sorting:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    sortArray(arr, 10, true);

    cout << "After sorting:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
