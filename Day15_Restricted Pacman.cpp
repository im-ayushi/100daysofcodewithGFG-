class Solution{
    public:
    int candies(int m, int n) 
    { 
    	 int max = (m*n)-m-n; //forbenius method
       int  count = max/2 +1; 
       return count;
    } 
};
