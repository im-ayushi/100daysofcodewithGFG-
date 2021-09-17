class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
         int r = 0;
       int i =0, j =0, tk=0;
       
       while(i < n && j < m)
       {
           if(tk == k ) 
            return r;
           r = arr1[i] < arr2[j] ? arr1[i++] : arr2[j++];
           tk++;
           
       }
       while(i < n && tk < k)
       {
           r = arr1[i++];
           tk++;
       }
       
       while(j < m && tk < k)
       {
           r = arr2[j++];
           tk++;
       }
       return r;
    }
};
