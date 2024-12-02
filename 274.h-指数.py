#
# @lc app=leetcode.cn id=274 lang=python3
#
# [274] H 指数
#

# @lc code=start
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        # 计数排序
        n = len(citations)
        counter = [0 for _ in range(n+1)]
        for citation in citations:
            counter[min(citation,n)] += 1
        h = n
        s = counter[n]
        while h > s:
            h -= 1
            s += counter[h]
        return h
# @lc code=end

