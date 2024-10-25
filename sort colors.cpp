#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
      vector<int> zero  = {};
      vector<int> one  = {};
      vector<int> two  = {};
      for (int i =0;i<nums.size();i++){
        if(nums[i]==0){
            zero.push_back(0);
        }
        if(nums[i]==1){
            one.push_back(1);
            
        }
        if(nums[i]==2){
            two.push_back(2);
        }

      }
      nums.clear();
      nums.insert(nums.end(), zero.begin(), zero.end()); 
    nums.insert(nums.end(), one.begin(), one.end());   
    nums.insert(nums.end(), two.begin(), two.end());   
    }
};

int main()
{
    Solution sol;
    std::vector<int> nums = {2,0,2,1,1,0};
    // int target = 6;
    sol.sortColors(nums);
    
    return 0;
}