#include<stdio.h>
#include<stdlib.h>


bool lemonadeChange(int* bills, int billsSize) {
	int five = 0;
	int ten = 0;
	
	
	for (int i = 0; i < billsSize; i++){
		if (bills[i] ==5 ){
			
			five ++;
			
		}
		
		else if (bills[i] == 10){
		
			if(five > 0){
				five--;
				ten++;
		} else{
			
			return false;
		
			}

		}
		
		
		else{
			
			if (ten > 0 && five > 0){
		
			
				ten--;
				five--; 
			}
			else if(five >= 3){
				five -= 3;
				
			}
			else{
				
				return false;
			}
			

		}
				
	} 
 
	return true; 
 
}


int main(){

int bills1[] = {5,5,5,10,20};
//Output: true

int BS1 = sizeof(bills1)/sizeof(bills1[0]);

bool res1 = lemonadeChange(bills1, BS1);


printf("Input Array : [5,5,5,10,20]\n");
printf("Answer: %s\n\n", res1 ? "true":"false");


int bills2[] = {5,5,10,10,20};
//Output: false
    
int BS2 = sizeof(bills2)/ sizeof(bills2[0]);
    
bool res2 = lemonadeChange(bills2, BS2);
    

printf("Input Array : [5,5,10,10,20]\n");
printf("Answer: %s\n", res2 ? "true":"false");
    

return 0;

}