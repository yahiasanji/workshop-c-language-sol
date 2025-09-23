#include <stdio.h> 

int main(){
	int age=70,cot = 55 ,mont = 300000,bonusnb=0; 
	if(mont <= 50000)
	{
		bonusnb = mont / 10000;
		int i;
		mont = mont + 0.05*mont*bonusnb; 
	}
	if (age >= 65){
		if(cot >= 30 && mont >= 100000) 
			printf("Plan complet avec pension elevee"); 
		else if (cot >= 20 && mont >=50000) 
			printf("Plan partiel avec pension moyenne"); 
	}
	else {
		printf("Plan epargne non encore disponible"); 
	}
}
