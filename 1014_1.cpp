#include<stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int maxScoreSightseeingPair(int* values, int valuesSize) {
	
	int max_score;
	
	int prev = values[0] + 0;
	
	for (int j =1 ; j < valuesSize ; j++)
	{
		
		max_score = Max(max_score, prev + values[j] -j);
		
		
		prev = Max(prev, values[j] + j);
		
				
		
	}
	
	return max_score;
    
}




int main(){
	

int arr1[] = {8,1,5,2,6};

int arrSize1  = sizeof(arr1)/sizeof(arr1[0]);

int ans1 = maxScoreSightseeingPair(arr1, arrSize1);


printf("Input Array: [8,1,5,2,6]\n");

printf("Answer = %d \n\n", ans1);

//Output: 11


int arr2[] = {1,2};

int arrSize2 = sizeof(arr2)/sizeof(arr2[0]);

int ans2 = maxScoreSightseeingPair(arr2, arrSize2);


printf("Input Array: [1,2]\n");

printf("Answer = %d", ans2);
	
	
//Output: 2	
	
return 0;	
	
	
}
