class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        vector<char> v1;
        vector<char> v2;
        for (int i = 0; i < s.size(); i++)
        {
            v1.push_back(s[i]);
        }
        sort(v1.begin(), v1.end());

        for (int i = 0; i < t.size(); i++)
        {
            v2.push_back(t[i]);
        }
        sort(v2.begin(), v2.end());
        if (v1 == v2)
            return true;
        else
            return false;
    }
};

// https://leetcode.com/submissions/detail/910423411/