#include <stdio.h>


int peakIndexInMountainArray(int* arr, int arrSize) {
	
	int l = 0;
	int r = arrSize -1;
	
	while (l < r){
		
		int mid = l + (r-l)/2;
		
		if (arr[mid] < arr[mid+1])
		{
		
			l = mid + 1;
	    }
	
		else
		
		{
			r = mid;
	    }
			
	}
	
	return l;
	
}



int main(){
	
	int arr[] = {0,1,0};
	
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	
	int PI = peakIndexInMountainArray(arr, arrSize);
	

	printf("Input Array:[0,1,0]\n");
	printf("Peak Index: %d\n", PI);
	printf("Peak Value: %d\n", arr[PI]);
	
		
	return 0;

}


