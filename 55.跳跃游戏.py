#
# @lc app=leetcode.cn id=55 lang=python3
#
# [55] 跳跃游戏
#

# @lc code=start
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        canReach = 0;
        for i in range(len(nums)):
            if i > canReach:
                return False
            canReach = max(canReach, i + nums[i])
        return True
# @lc code=end

