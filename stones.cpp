class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {

        map<char, int> mp;
        int count = 0;
        for (int j = 0; j < jewels.length(); j++)
        {
            for (int i = 0; i < stones.length(); i++)
            {
                if (jewels[j] == stones[i])
                {
                    count++;
                }
            }
        }

        return count;
    }
};

// https://leetcode.com/problems/jewels-and-stones/submissions/911741604/