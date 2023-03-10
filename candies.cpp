class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        map<int, int> mp;
        int n = candyType.size();
        int size = n / 2;
        int mpSize = 0;
        for (int i = 0; i < n; i++)
        {
            mp[candyType[i]]++;
        }

        if (size == mp.size())
        {
            mpSize = size;
        }
        else if (mp.size() > size)
        {
            mpSize = size;
        }
        else if (mp.size() < size)
        {
            mpSize = mp.size();
        }

        return mpSize;
    }
};

// https://leetcode.com/problems/distribute-candies/submissions/912131470/