class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {

        map<int, int> mp;
        vector<int> v, z;

        for (int i = 0; i < nums1.size(); i++)
        {
            mp[nums1[i]]++;
        }

        for (int j = 0; j < nums2.size(); j++)
        {
            auto it = mp.find(nums2[j]);
            if (it != mp.end() && it->second > 0)
            {
                vector<int>::iterator itt = find(v.begin(), v.end(), nums2[j]);
                if (itt != v.end())
                {
                    continue;
                }
                else
                {
                    v.push_back(nums2[j]);
                }
            }
            it->second--;
        }

        return v;
    }
};

// https://leetcode.com/problems/intersection-of-two-arrays/submissions/912187793/