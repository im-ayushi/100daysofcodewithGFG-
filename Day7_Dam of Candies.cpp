class Solution
{
    public:
    int maxCandy(int height[], int n) 
    { 
         int ans=0;
       for(int i=0,j=n-1;i<j;)
       {
           if(height[i]<height[j])
           {
               ans=max(height[i]*(j-i-1),ans);
               i++;
           }
           else
           {
               ans=max(height[j]*(j-i-1),ans);
               j--;
           }
       }
       return ans;
    }
}
