class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        int max = mp[0];
        int value = 0;
        auto it = mp.begin();

        for (; it != mp.end(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
                value = it->first;
            }
        }

        return value;
    }
};

// https://leetcode.com/problems/majority-element/submissions/912687097/