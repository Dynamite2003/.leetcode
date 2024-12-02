#
# @lc app=leetcode.cn id=122 lang=python3
#
# [122] 买卖股票的最佳时机 II
#

# @lc code=start
import numpy
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # 等价于求所有上升区间的和
        result = 0
        for i in range(1,len(prices)):
            result += max(prices[i] - prices[i-1],0)
        return result
        
# @lc code=end

