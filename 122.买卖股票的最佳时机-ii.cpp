/*
 * @lc app=leetcode.cn id=122 lang=cpp
 *
 * [122] 买卖股票的最佳时机 II
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        // 等价于所有上升区间的和
        int result = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                result += prices[i] - prices[i - 1];
            }
        }
        return result;
    }
};
// @lc code=end
