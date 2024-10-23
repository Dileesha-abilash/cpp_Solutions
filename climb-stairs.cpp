#include <iostream>
#include <map>

using namespace std;

class Solution
{
public:
    int climbStairs(int n, map<int, int> &memo)
    {
        // for (const auto &pair : memo)
        // {
        //     std::cout << pair.first << ": " << pair.second << std::endl;
        // }
        if (n >= 2)
        {
            if (n == 2)
            {
                return 2;
            }
            else if (n == 3)
            {
                return 3;
            }
            else
            {
                if (memo.find(n)!=memo.end())
                {
                    return memo[n];
                }
                else
                {
                    memo[n] = climbStairs(n - 1,memo) + climbStairs(n - 2,memo);
                    return climbStairs(n - 1, memo) + climbStairs(n - 2, memo);
                }
            }
        }
        else
        {
            return 1;
        }
    }
    int climbStairs (int n ){
        map<int,int> memo;
        return climbStairs(n,memo);
    }
};

int main()
{
    Solution sol;
    cout << sol.climbStairs(45);

    return 1;
}