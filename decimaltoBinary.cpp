#include <iostream>
#include <math.h>
using namespace std;

int binarytoDecimal(int n)
{
    int ans = 0, count = 0;
    while (n > 0)
    {
        int bit = n & 1;

        ans = bit * pow(10, count) + ans;

        count++;
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter Decimal value:";
    cin >> n;

    int ans = binarytoDecimal(n);
    cout << "Binary: " << ans;
}