#include <iostream>
using namespace std;

void makeArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "enter value " << i + 1 << " : ";
        cin >> arr[i];
    }
}

int searchIndex(int sValue, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (sValue == arr[i])
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int n, sValue;
    cout << "enter total number of value: ";
    cin >> n; // total array size
    int arr[n];

    makeArray(arr, n); // array creation function call
    cout << "values sucessfuly stored." << endl;

    cout << "Enter searching value: ";
    cin >> sValue;                                      // get searching value
    int searchIndexValue = searchIndex(sValue, arr, n); // call searching function and take index value

    if (searchIndexValue != -1)
    // check value found or not
    {
        cout << "Value found at Index: " << searchIndexValue;
    }
    else
        cout << "Value not found";
}