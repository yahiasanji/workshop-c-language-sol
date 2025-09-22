#include <stdio.h>

int main()
{

float nb1, nb2, nb3, moyp;
printf("Entrez 1ere nombre : ");
scanf("%f", &nb1);
printf("Entrez le 2eme nombre : "); 
scanf("%f", &nb2);
printf("Entrez le 3eme nombre : "); 
scanf("%f", &nb3); 

moyp  = (nb1 * 2 + nb2 * 3 + nb3 * 5) / 10;
printf("La moyenne pondedree est : %.2f\n", moyp);
    return 0;
}
