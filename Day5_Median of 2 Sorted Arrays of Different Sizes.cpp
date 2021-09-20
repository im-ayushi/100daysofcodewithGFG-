class GFG 
{ 
    static double medianOfArrays(int n, int m, int a[], int b[]) 
    {
        int arr[] = new int[m+n];
        int i =0;
        int j =0;
        int t=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j]) 
            {
                arr[t] = a[i];
                i++;
            }
            else
            {
                arr[t] = b[j];
                j++;
            } 
            t++;
        }
        while(i<n)
        {
            arr[t] = a[i];
            i++;
            t++;
        }
        while(j<m)
        {
            arr[t] = b[j];
            j++;
            t++;
        }
        int l =0;
        int r = arr.length-1;
        int mid = l + (r-l)/2;
        if(arr.length%2==0)
            return (double)(arr[mid] + arr[mid+1])/2;
        return arr[mid];
    }
}
