#include<stdlib.h>
#include<stdio.h>

//fonction d'ajoute.
void Ajouter(){
    int c = 0;
    char Titre[60][15];
    printf("entrer le titre:");
   //for(int i=0;i<60;i++){
    gets(Titre[c]);
    //break;
   //}
    char auteur[60][15];
    printf("entrer l'auteur:");
   //for(int i=0;i<60;i++){
    gets(auteur[c]);
    //break;
   //}
   c++;
char all[60][15][2];
 for(int i=0;i<60;i++){
 for(int j=0;j<15;j++){
    all[i][j][0]=auteur[i][j];
    all[i][j][1]=Titre[i][j];
 }
}
puts(all);
}


int main(){

Ajouter();

}
