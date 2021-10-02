/*Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/



void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	
	while (mid <= hi) {
            if(a[mid]==0)
			    swap(a[lo++], a[mid++]);
		    if(a[mid]==1)
			     mid++;
			if(a[mid]==2)
			    swap(a[mid], a[hi--]);
		
		
	}
}






