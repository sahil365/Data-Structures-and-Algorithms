//replace kth bit at bit level by 1

#include<iostream>
using namespace std;

int replaceKthBit(int n , int bitIndex)
{
    int mask = 1 << bitIndex-1; //in shift count start from 0 by default
    int ans = n | mask ;
    
    return ans;
}

int main()
{
    int n , bitIndex;
    cout << "Enter value:";
    cin >> n;
    cout << "Enter K bit position:";
    cin >> bitIndex;

    int ans = replaceKthBit(n, bitIndex);

    cout << "Answer: " << ans ; 

}