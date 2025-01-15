#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
void findAndSortNegatives(T arr[], int size)
{
    int left = -1, right = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            if (left == -1)
                left = i;
            right = i;
        }
    }

    if (left != -1 && right != -1 && right > left)
        sort(arr + left + 1, arr + right);
}

int main()
{
    int arr[10] = {15, -10, 12, -5, 3, 7, -2, 11, -3, 20};

    cout << "Before sorting:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    findAndSortNegatives(arr, 10);

    cout << "After sorting between negatives:\n";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}
