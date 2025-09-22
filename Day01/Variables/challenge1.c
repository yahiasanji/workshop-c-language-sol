#include <stdio.h> 

int main(){
	char nom[20];
	char prenom[20];
	int age;
	char sex[6]; 
	char mail[30];

	printf("Please enter your Name: ");
	scanf("%s",nom); 
	printf("\n Please enter your Last Name:");
	scanf("%s", prenom);
	
	printf("\n Please enter your age:");
	scanf("%d", &age);

	printf("\n Please enter your gender:");
	scanf("%s", sex);

	printf("\n Please enter your e-mail:");
	scanf("%s", mail);

	printf("\n Name: %s \n Last Name: %s \n Age: %d \n gender: %s \n e-mail: %s \n", nom,prenom, age, sex, mail); 
}
