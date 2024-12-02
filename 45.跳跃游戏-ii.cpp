/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int start = 0, end = 0, maxPos = 0, step = 0;
        while (end < nums.size() - 1)
        {
            for (int i = start; i <= end; i++)
            {
                maxPos = max(maxPos, i + nums[i]);
            }
            start = end + 1;
            end = maxPos;
            step++;
        }
        return step;
    }
};
// @lc code=end
