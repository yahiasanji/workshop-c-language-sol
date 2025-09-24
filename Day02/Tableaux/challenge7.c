#include<stdio.h> 

void sort(int T[], int size){
	for (int i = 0; i < size; i++){
		int current = T[i];
	       	int j = i - 1; 	
		while(j>=0 && T[j] > current){
			T[j+1] = T[j];
			j--; 
		}
		T[j+1] = current;
	}
}
int main(){
	int arr[7] = {1, 20, 15, 46, 25, 12, 15};
	printf("before: ");
	for(int i = 0; i < 7; i++)
	       printf("%d ", arr[i]);
	sort(arr,7);
	printf("\n after: " ); 
	for(int j = 0; j < 7; j++)
	       printf("%d ", arr[j]);
}
/* 1 20 15 46 25 12 15 

1 15 20 46 25 12 15 
1 15 20 25 46 12 15 
1 15 20 25 12 46 15 
1 15 20 25 12 15 46 
1 15 20 12 25 15 46 
1 15 20 12 15 25 46 
1 15 12 20 15 25 46 
1 12 15 20 15 25 46 
1 12 15 15 20 25 46 

void sort(int T[], int size){
	for (int i = 0; i < size; i++){
		int current = arr[i];
	       	int j = i - 1; 	
		while(j>=0 && arr[j] > current){
			arr[j+1] = arr[j];
			j--; 
		}
		arr[j+1] = current;
	}
}
0   1   2   3    4   5   6  7 
200 7   0   15   66  13  44 55
 o
i = 0 ; current = arr[0];j = -1 -- no
	arr[0] = arr[0] 
    o
200 7 0 15 66 13 44 55 

i = 1 ; current = arr[1];j=0 --> arr[0] > arr[1] ? yes
	arr[1] = arr[0];j = -1 
	arr[0] = current; 
	o
7  200  0   15   66   13  44  55
        
i = 2; current = arr[2]; j = 1 --> arr[1] > arr[2]?yes
	arr[2] = arr[1];
7  200  200  ------------------ 
	j = 0 ; arr[0] > arr[2]?
       		arr[1] = arr[0] 
7  7    200 ----------------- 
		j = -1;--no 
		arr[0] = current
0   7   200  ------------------  	
0 7 200 15 66 13 44 55 


*/ 
