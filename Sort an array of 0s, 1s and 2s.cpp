/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/



class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int p=0,q=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                p+=1;
            else if(a[i]==1)
                q+=1;
            else
                r +=1;
        }
        for (int i=0; i<p; i++)
           a[i] = 0;
        for (int i=p; i<p+q; i++)
           a[i] = 1;
        for (int i=p+q; i<p+q+r; i++)
           a[i] = 2;
       
    }
};
