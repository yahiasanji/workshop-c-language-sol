#include <stdio.h> 

int main(){
	float temp; 

	printf("Please enter water temperature in Celsius: ");
	scanf("%f",&temp); 
	if (temp < 0) {
		printf("The water is : solid"); 
	}
	else if (temp >= 100) {
		printf("The water is : Gaz"); 
	}
	else 
		printf("The water is : Liquid"); 
}
