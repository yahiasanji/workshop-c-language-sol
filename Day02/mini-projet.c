#include<stdio.h> 


int main(){
	int opt; 
	char titles[10][50];
	char authors[10][20];
	int prices[10]; 
	int quants[10]; 

	
	int count = 0; 
	while(1){
		printf("********************************************\n");
	       	printf("          GESTIONNAIRE DE STOCK\n");
		printf("********************************************\n");
	       	printf("[1] - Ajouter Un Livre au stock\n");
		printf("[2] - Afficher tous les livres disponibles\n");
		printf("[3] - Mettre à jour la quantité d'un livre\n"); 
		printf("[4] - Supprimer un livre du stock\n"); 
		printf("[5] - Afficher le nombre total de livres en stock\n");
		printf("[0] - Exit\n");
		printf("Entrer Une option: ");
		scanf("%d",&opt);
		switch(opt){
		case 1:
			printf("Titre: ");
			scanf("%s",titles[count]);
			printf("\nAuteur: ");
			scanf("%s", authors[count]);
			printf("\nPrix: "); 
			scanf("%d",&prices[count]);
			printf("\nQuantite: "); 
			scanf("%d",&quants[count]); 
		       	count++;	
			break; 
		case 2: 
			if (count != 0){
			for(int i = 0; i < count; i++){
			printf("Livre %d :\n----------\n",i);
			printf("Titre: %s",titles[i]);
			printf("\nAuteur: ");
			printf("%s",authors[i]);
			printf("\nPrix: "); 
			printf("%d",prices[i]);
			printf("\nQuantite: ");
		        printf("%d\n",quants[i]);}}
			else {printf("no books found \n");}	
			break; 
		case 3: 
			char recherche[50];
			int upquant; 
			printf("entrer le titre du livre: ");
			scanf("%s",recherche);
			printf("\n Entrer la nouvelle quantite: ");
			scanf("%d",&upquant);
			int wanted_index=0; 
			for(int i = 0;i<10;i++ ){
				for(int j =0; titles[i][j] == recherche[j];j++){
					if ( recherche[j] == '\0'){
						wanted_index = i;
					   	break;	
					}	

				}}
			quants[wanted_index] = upquant;
			break; 
		case 4: 
			char recherche2[50]; 
			int index; 
			printf("entrer le titre du livre: "); 
			scanf("%s", recherche2); 
			for(int k =0 ; k<10; k++){
				for(int n=0; titles[k][n] == recherche2[n];n++)
					if(recherche2[n] == '\0'){
						index = k;
						break;
					}
			}
			    int l;
   			for(l = index; l < 5 - 1; l++)
    			{
    				for(int n = 0;n<10;n++){
    					titles[l][n] = titles[l + 1][n];
					authors[l][n] = authors[l+1][n];
				if(l>count){
					titles[l][n] = '\0';
					authors[l][n] = '\0';}}
				quants[l] = quants[l+1];
				prices[l] = prices[l+1]; 
    			}	
			count--; 
			break; 
		case 5: 
			int sum = 0;
			for(int z = 0;z<count;z++){
				sum = sum + quants[z]; 
			}		
			printf("la somme des livres en stock: %d \n",sum);
			break; 
		default:
			return 0; 
		}
	}
}
