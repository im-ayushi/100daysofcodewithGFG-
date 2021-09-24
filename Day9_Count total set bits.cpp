class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        /*int i,t,j,c=0;
        for(i=1;i<=n;i++)
        {
            while(i>0)   
            {    
                t=i%2;    
                i=i/2;
                if(t==1)
                c++;
            }    
        }
        return c;*/
        int h = floor(log2(n))  + 1;
       int g = 1;
       int ans = 0;
       for(int i=0;i<h;i++){
           int d = 2*g;
           int gg = (n+1)/d;
           ans += gg*g;
           int rem = (n+1)%d;
           if(rem>g)
           ans += rem%g;
           g= g<<1;
       }
       return ans;
    }
};
