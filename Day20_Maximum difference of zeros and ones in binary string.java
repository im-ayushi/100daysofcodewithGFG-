class Solution {
    int maxSubstring(String s) 
    {
        int n=s.length();
        int c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            char c=s.charAt(i);
            if(c=='0')
                c1++;
            else
                c1--;
            c0=Math.max(c0, c1);
            if(c1<0)
            c1=0;
        }
        return (c0==0)?-1:c0;
    }
}
