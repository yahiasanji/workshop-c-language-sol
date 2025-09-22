#include <stdio.h> 

int main(){
	float Kmh;
	float ms; 

	printf("enter la vitesse  en Kilometre/h: ");
	scanf("%f",&Kmh); 

	printf("\n la vitesse en metres/secondes est: %.3f",Kmh * 0.27778); 
}
