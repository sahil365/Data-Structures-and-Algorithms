// 75 sort colors
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int row = 0; row < v.size(); row++)
    {
        cout << v[row] << "  ";
    }
}

void sortColors(vector<int> &v)
{
    int left = 0, right = v.size() - 1, index = 0;
    while (index <= right)
    {
        if (v[index] == 0)
        {
            swap(v[index], v[left]);
            left++;
            index++;
        }
        else if (v[index] == 2)
        {
            swap(v[index], v[right]);
            right--;
            // no need for index++ bcuz after swapping we also need to check after swapped value of index
        }
        else
        {
            index++;
        }
    }
}

int main()
{
    vector<int> v{1, 2, 0, 1, 2, 1, 0, 2, 1};

    sortColors(v);

    print(v);
}