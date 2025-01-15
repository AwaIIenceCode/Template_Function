#include <iostream>

using namespace std;

template <typename T>
void countElements(T arr[], int size, int& positives, int& negatives, int& zeros)
{
    positives = 0;
    negatives = 0;
    zeros = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            positives++;
        else if (arr[i] < 0)
            negatives++;
        else
            zeros++;
    }
}

int main()
{
    int arr[10] = {1, -2, 0, 5, -3, 0, 7, -4, 2, -1};
    int positives, negatives, zeros;

    countElements(arr, 10, positives, negatives, zeros);

    cout << "Positives: " << positives << endl;
    cout << "Negatives: " << negatives << endl;
    cout << "Zeros: " << zeros << endl;

    return 0;
}
