#include<stdio.h> 
#include<stdlib.h>

int main(){
	int val = rand() % (800); 
	if (val < 100)
		printf("Lundi"); 
	if (val < 200) 
		printf("Mardi");
	if (val < 300) 
		printf("Mercredi");
	if (val < 400) 
		printf("Jeudi"); 
	if (val < 500)
		printf("Vendredi"); 
	if (val < 600) 
		printf("Samedi");
	if (val > 700) 
		printf("Dimanche"); 
}
