//ques.no:7 Reverse Integer
#include <iostream>
using namespace std;
int reverseNumber(int number)
{
    int n = number;
    int ans = 0;
    bool checkNumber = false;
    if (n <= INT_MIN)
    {
        return 0;
    }
    
    if (n < 0) // check for number is negative
    {
        checkNumber = true;
        n = -n;
    }
    while (n != 0)
    {
        if (ans > INT_MAX)
        {
            return 0;
        }
        
        int mod = n % 10;
        ans = (ans * 10) + mod;
        n = n / 10;
    }

    return checkNumber ? -ans : ans; // return negative ans if number is negative.
}
int main()
{
    int n;
    cout << "Enter the Value:";
    cin >> n;

    int ans = reverseNumber(n);
    cout << "Reverse Number is: " << ans;
}