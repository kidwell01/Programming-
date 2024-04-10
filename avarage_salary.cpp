#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) 
    {
        int size;
        cout << "enter size: ";
        cin >> size;
        //int max = salary[0];
        
        for(int i = 0; i < size; i++)
        {
            int s;
            cin >> s;
            salary.push_back(s);
        }
        //find min and max salary
        int min = salary[0];
        int max = salary[0];
        for(int j = 0; j < salary.size(); j++)
        {
            
            if(salary[j] < min)
            {
                min = salary[j];
            }
            if(salary[j] > max)
            {
                max = salary[j];
            }
           
        }
         cout << "minimum: "<< min << endl;
         cout << "maximum: "<< max << endl;
        //sum of the salaries
         double sum = 0;
         sort(salary.begin(),salary.end());
         for(int k = 1; k < salary.size() - 1;k++)
         {
            sum += salary[k];
         }
         cout << "sum: "<< sum / (salary.size() - 2) << endl;
        
       return sum / (salary.size() - 2); 
    }
};
int main()
{
    vector<int>salary;
    Solution s;
    s.average(salary);
}