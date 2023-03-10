
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int ss = s.size();
        int tt = t.size();

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char c1, c2, c3;
        if (ss > tt)
        {
            c1 = s[ss - 1];
        }
        else if (tt > ss)
        {
            for (int i = 0; i < tt; i++)
            {
                if (s[i] != t[i])
                {
                    c2 = t[i];
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < ss; i++)
            {
                if (s[i] != t[i])
                {
                    c3 = s[i];
                    break;
                }
            }
        }

        if (ss > tt)
            return c1;
        else if (tt > ss)
            return c2;
        else
            return c3;
    }
};


// https: // leetcode.com/problems/find-the-difference/submissions/911116463/