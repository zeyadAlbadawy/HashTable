
class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {

        int size = nums.size();
        map<int, int> mp;

        for (int i = 0; i < size; i++)
        {
            mp[nums[i]]++;
        }

        auto it = mp.begin();
        int max = mp[0];
        int value = 0;

        for (; it != mp.end(); it++)
        {
            if ((it->second) >= max)
            {
                value = it->first;
                max = it->second;
            }
        }

        return value;
    }
}
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/submissions/911137321/