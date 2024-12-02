/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        bool flag = true;
        int h = 0;
        int n = citations.size();
        while (flag == true)
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (citations[i] >= h)
                {
                    count++;
                }
            }
            if (count >= h)
            {
                h++;
            }
            else
            {
                flag = false;
            }
        }
        return h - 1;
    };
};
// @lc code=end
