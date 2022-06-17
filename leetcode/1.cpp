// The Tribonacci sequence Tn is defined as follows:

// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

// Given n, return the value of Tn.
class Solution
{
public:
    int tribonacci(int n)
    {

        vector<int> ans(n + 1, 0);
        if (n == 0)
            return 0;
        if (n == 1 || n == 2)
            return 1;
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 1;
        for (int i = 3; i <= n; ++i)
        {
            ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];
        }
        return ans[n];
    }
};