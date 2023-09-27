//ques.no:1281 subract product and sum of given integer number
#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int mod, sum = 0, multi = 1;
    while (n != 0)
    {
        mod = n % 10;

        multi = multi * mod;
        sum = sum + mod;

        n = n / 10;
    }
    return (multi - sum);
}
int main()
{
    int n = 234;

    int ans = subtractProductAndSum(n);

    cout << "Answer:" << ans;
}