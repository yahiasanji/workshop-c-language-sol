#include <stdio.h>
#include <math.h>

int main()
{

float nb1, nb2, nb3, moyg;
printf("Entrez 1ere nombre : ");
scanf("%f", &nb1);
printf("Entrez le 2eme nombre : "); 
scanf("%f", &nb2);
printf("Entrez le 3eme nombre : "); 
scanf("%f", &nb3); 

moyg  = pow((nb1*nb2*nb3),1/3); 
printf("La moyenne geometrique est : %.2f\n", moyg);
}
