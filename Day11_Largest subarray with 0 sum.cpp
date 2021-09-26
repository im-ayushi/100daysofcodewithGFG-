class Solution
{
    public:
    int maxLen(vector<int>&vt, int n)
    {   
        vector<int> pre(n);
        pre[0] = vt[0];
        int answer =  0;
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + vt[i];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (pre[i] == 0)
            {
                answer = i + 1;
                continue;
            }
            if (mp[pre[i]])
            {
                answer = max((i + 1 - mp[pre[i]]), answer);
            }
            else
                mp[pre[i]] = i + 1;
        }
        return answer;
    }
};
