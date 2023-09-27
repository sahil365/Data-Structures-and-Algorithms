#include <iostream>
using namespace std;

void kRightShift(int arr[], int n, int shift)
{
    int temp[shift] = {};

    // step-1 create temp variable
    for (int i = 0; i < shift; i++)
    {
        temp[i] = arr[n - 1 - i];
    }

    // step-2 shift array
    for (int i = n - 1; i >= shift; i--)
    {
        arr[i] = arr[i - shift];
    }

    // step-3 dump temp array into main(arr) array
    int index = 0;
    for (int i = shift - 1; i >= 0; i--)
    {
        arr[i] = temp[index];
        index++;
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int shift = 5;                        // number of right shift
    int n = sizeof(arr) / sizeof(arr[0]); // find number of element of an array

    kRightShift(arr, n, shift); // call function
}