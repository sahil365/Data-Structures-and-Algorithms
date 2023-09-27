// find an unique number from given array
#include<iostream>
using namespace std;

int main()
{

    int arr[5] = {20,4,85,4,85};
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        ans = arr[i] ^ ans;
    }

    cout << "Unique Number is: " << ans;
    

}