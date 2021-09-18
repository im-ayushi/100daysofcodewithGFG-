class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        vector<int>ve;
       int j=0,k=1,sum;
      while(q--){
          int l=queries[j],r=queries[k];
           sum=0;
           for(int ii=l-1;ii<r;ii++)
            sum+=arr[ii];
           j+=2;
           k+=2;
           ve.push_back(sum);
           }
       return ve;
    }
};
