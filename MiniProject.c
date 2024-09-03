#include<stdlib.h>
#include<stdio.h>

//fonction d'ajoute.
void Ajouter(){
    char Titre[60][15];
    printf("entrer le titre:");
   for(int i=0;i<60;i++){
    gets(Titre[i]);
   }

}

int main(){

Ajouter();

}
