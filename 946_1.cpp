#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize) {
	
	
	if (pushedSize != poppedSize){ 
	
		return false;

	}
	
	
	int* stack = (int*) malloc(pushedSize * sizeof(int));
	int i = 0;
	int top = -1;
	
	
	for (int j=0 ; j < pushedSize ; j++) {
		
		int x = pushed[j];
		
		stack[++top] = x;
		
		while(top >= 0 && stack[top] == popped[i])
		{
			
			top--;
			i++;
			
		}
			
	} 
	
	
	bool empty = (top == -1);
	
	free(stack);
	
	
	return empty;
	
}




int main(){
	
	int pushed1[] = {1,2,3,4,5};
	int popped1[] = {4,5,3,2,1};
	
	int pushedSize1 = sizeof(pushed1)/sizeof(pushed1[0]);
	int poppedSize1 = sizeof(popped1)/sizeof(popped1[0]);
	
	bool res1 = validateStackSequences(pushed1, pushedSize1, popped1, poppedSize1);
	
	
	printf("Input Array : pushed = [1,2,3,4,5], popped = [4,5,3,2,1]\n");
	printf("Answer: %s\n\n", res1 ? "true" : "false");
	
	//Output: true

	int pushed2[] = {1,2,3,4,5};
	int popped2[] = {4,3,5,1,2};
	
	
	int pushedSize2 = sizeof(pushed2)/sizeof(pushed2[0]);
	int poppedSize2 = sizeof(popped2)/sizeof(popped2[0]);
	
	bool res2 = validateStackSequences(pushed2, pushedSize2, popped2, poppedSize2);
	
	
	printf("Input Array : pushed = [1,2,3,4,5], popped = [4,3,5,1,2]\n");
	printf("Answer: %s\n\n", res2 ? "true" : "false");
	
	//Output: false
	
}
