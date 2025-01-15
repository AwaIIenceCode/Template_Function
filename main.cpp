#include <iostream>

using namespace std;

template <typename T>
double calculateAverage(T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return static_cast<double>(sum) / size;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Average -> " << calculateAverage(arr, 5) << endl;

    return 0;
}
