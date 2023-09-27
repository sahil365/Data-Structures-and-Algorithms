//ques.no:1342 Number of steps to Reduce Number into zero
#include<iostream>
using namespace std;
int numberOfSteps(int num) {
        int count = 0;

        while(num > 0)
        {
            if(num % 2 == 0)
            {
                num = num / 2;
                count++;
            }
            else
            {
                num--;
                count++;
            }
        }
        return count;
    }
int main()
{
    int n = 14;

    int ans = numberOfSteps(n);

    cout << "Number of steps for convert number into zero is: " << ans;

}