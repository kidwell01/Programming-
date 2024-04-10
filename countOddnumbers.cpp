#include <iostream>

using namespace std;

class Solution {
public:
    int countOdds(int low, int high) 
    {
          int count = 0;
          for(int i = low; i <= high; i++)
          {
            if(i % 2 != 0)
            {
                count++;
            }
          } 
          cout << count << endl;
          return count;
    }
    
};
int main()
{
    int low, high;
    cin >> low >> high;
    Solution odd;
    odd.countOdds(low,high);
}