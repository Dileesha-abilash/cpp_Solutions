#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (target >= nums[i] || (target <= 0))
            {
                // std::cout<< nums[i];

                auto it = std::find(nums.begin(), nums.end(), target - nums[i]);

                if (it != nums.end())
                {
                    int index = std::distance(nums.begin(), it);
                    std::cout << index;
                    if (i != index)
                    {

                        return {i, index};
                    }
                }

                // int index = Lastptr - nums;

                // return [i,index];
            }
        }
        return {100, 100};
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    vector<int> result = sol.twoSum(nums, target);
    for (int value : result)
    {
        std::cout << value << " ";
    }
    return 0;
}