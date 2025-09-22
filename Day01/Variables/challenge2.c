#include <stdio.h> 

int main(){
	float K;
	float C; 

	printf("enter temperature in Celsius: ");
	scanf("%f",&C); 

	printf("\n The temperature in Kelvin is: %.2f",C + 273.15); 
}
