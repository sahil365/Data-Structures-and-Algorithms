// ques.no:191 number of one bit
#include<iostream>
using namespace std;

int countEvenBit(int n){
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
        {
        count++;
        }
        n = n >> 1;
    }
    
    return count;
}

int main(){
    int n = 23;

    int ans = countEvenBit(n);

    cout << "Number of Bits: " << ans ;
}