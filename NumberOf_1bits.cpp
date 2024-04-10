#include <iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(int32_t n)
    {
    cout <<"n:"<<n<<endl;;
    int SIZE = 32;
    int binary[SIZE];
    for(int i = SIZE - 1; i >= 0; i--) 
    {
        binary[i] = n % 10;
        n /= 10;  
    }
    for(int i = 0; i < SIZE; i++)
    {
        cout  << binary[i];
    }
        return n;
    }
};
int main()
{
    Solution s;
    s.hammingWeight(0011110);
}