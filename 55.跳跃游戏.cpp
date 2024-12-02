/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int canReach = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > canReach)
                return false;
            canReach = max(canReach, i + nums[i]);
        }
        return true;
    }
};
// @lc code=end
