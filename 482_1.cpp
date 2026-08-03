#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

char* licenseKeyFormatting(char* s, int k) {
	
	int length_1= strlen(s);
	int count_1 = 0;
	
	for (int i = 0; i < length_1 ; i++)
	{
		
		if (s[i] != '-')
		{
			
			count_1 ++ ;
							
		 }
		  
	}
	

	int dash;
	
	if (count_1>0){
	
		dash = (count_1-1)/k;
	
	} 
	
	else { 
	
		dash = 0;
	
	}
	
	
	int totalLength = count_1 + dash;
	
	char* result =(char*) malloc(totalLength+1);
	
	result[totalLength] ='\0';
	
	
	int totalLength_idx = totalLength - 1;
	
	int count_2 = 0;

	
	for (int i = length_1-1; i >= 0 ; i--){
		
		if (s[i] =='-'){
		
			continue;
		}
		
		result[totalLength_idx--] = toupper(s[i]);
		count_2 ++;
		
		
		if (count_2==k && count_2 >=0)
		{
				
			result[totalLength_idx--] = '-';
			
			count_2 = 0;
			
				
		}
	
	
	}
	
	
	return result;
	
	
}



int main(){

	char s[] = "5F3Z-2e-9-w";
	int k = 4;

	char* result =  licenseKeyFormatting(s, k);
	
	printf(result);

}


