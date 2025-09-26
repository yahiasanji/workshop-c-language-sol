#include<stdio.h>
#include<string.h>

struct rectangle{
    int l; 
    int L;
};
struct livre{
    char title[50];
    char auteur[50];
    int year; 
};


struct livre initialize(struct livre book){
    strcpy(book.title, "exoskeleton");
    strcpy(book.auteur, "yahia");
    book.year = 1974;
    return book;
}

int area(struct rectangle *r){
    return r->l * r->L;
}

int main(){
 struct rectangle r1;
 r1.l = 10;
 r1.L = 5;
 struct rectangle *ptr = &r1;
 int area1 = area(ptr);
 printf("the area is : %d\n",area1);

 struct livre uninit;
 printf("Uninitialized: %s , %s , %d\n",uninit.title,uninit.auteur,uninit.year);

 struct livre init = initialize(uninit);
 printf("Initialized: %s , %s , %d\n",init.title,init.auteur,init.year);
}
