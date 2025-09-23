#include<stdio.h> 

int main(){
	int n; 
	printf("enter a number: \n"); 
	scanf("%d",&n); 
	int sum = 0;
	int i; 
	for(i=0;i<n; i++){
		sum = sum + i; 
	}
	printf("la somme des %d premier entiers est: %d", n , sum); 
}
