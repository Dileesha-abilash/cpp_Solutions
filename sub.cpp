#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int number = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] + number < 0)
            {
                number = 0;
            }
            else
            {
                if (nums[i] + number > sum)
                {
                    sum = nums[i] + number;
                }
                number =nums[i]+number ;
            }
        }if(sum==0){
            int max =nums[0];
            for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]>max){

                max = nums[i];
            }
        }
                return max;
            }
            // cout << sum << endl;
            return sum;
        // return 0;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    sol.maxSubArray(nums);
}