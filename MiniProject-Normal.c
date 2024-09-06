#include<stdlib.h>
#include<stdio.h>
#include<string.h>

    int c=0;
    float prix[60];
    int quantite[60];
    char Titre[60][15];
    char auteur[60][15];

                           //fonction clear.
    void clear(){
        system("@cls||clear");
    }
                           //fonction comparaison.


    int comparaison(char *Name){
        int N=-1;

    for(int i=0;i<c;i++){
        if(!strcmp(Titre[i],Name)){
            N=i;

        }
    }
    return N;
    }

                             //fonction d'ajoute.



    void Ajouter(){
       printf("saisir le prix:");
       scanf("%f",&prix[c]);

       printf("saisir le quantite:");
       scanf("%d",&quantite[c]);

       printf("entrer le titre:");
       scanf("%s",&Titre[c]);

       printf("entrer l'auteur:");

       scanf("%s",&auteur[c]);
       c=c+1;

    }

                              //fonction d'afficher.




    void affichage(){

    if(c>0){
         for(int i=0;i<c;i++){
            printf("le titre :%s,auteur:%s,prix:%.2fDh,quantite=%d  \n",Titre[i],auteur[i],prix[i],quantite[i]);
         }
     }else{
            printf("aucun livre dans le stock.\n");
     }
    }



                          // fonction Recherche.




    void Recherche(){
        char Name[15];

        printf("saisir le nom de livre: ");
        scanf("%s",&Name);

        int count=comparaison(&Name);

        if(count>=0){
            printf("le titre :%s,auteur:%s,prix:%.2fDh,quantit�=%d  \n",Titre[count],auteur[count],prix[count],quantite[count]);

        }else{
            printf("ce livre n'existe pas.\n");

        }

    }

                           //fonction mettre a jour.

    void ModificationQuantite(){
        char Name[15];

        printf("saisir le nom de livre pour changer la quantite: ");
        scanf("%s",&Name);


         int count=comparaison(&Name);

        if(count>=0){
                int q;
               printf("saisir la quantite:");
               scanf("%d",&q);
               quantite[count]=q;
        }else{
            printf("ce livre n'existe pas.\n");

        }


    }

                          //fonction suppression;


    void suppression(){
        char Name[15];
        printf("saisir le nom de livre pour supprimer le livre: ");
        scanf("%s",&Name);
    //
      int count=comparaison(&Name);

        if(count>=0){
               for(int j=count;j<c;j++){
             strcpy(Titre[j],Titre[j+1]);
             strcpy (auteur[j],auteur[j+1]);
             prix[j]=prix[j+1];
             quantite[j]=quantite[j+1];
             c--;}


        }else{
            printf("ce livre n'existe pas.\n");

        }
    //

    }

                         //fonction AffichageStock.
    void AffichageStock(){

        int Stock=0;

     if (c>0){
        for(int i=0;i<c;i++){
            Stock+= quantite[i] ;
    }
            printf(" le Nombre Total de Livres en Stock:%d\n",Stock);
    }else{
            printf("aucun livre dans le stock.\n");
    }
     }



                          //main fonction.
int main(){
    int N;
    while(1){
        int N;

        printf("1-Ajouter un livre au stock:\n");
        printf("2-Afficher tous les livres disponibles:\n");
        printf("3-Rechercher un livre par son titre:\n");
        printf("4-Mettre � jour la quantit� d'un livre:\n");
        printf("5-Supprimer un livre du stock:\n");
        printf("6-Afficher le nombre total de livres en stock:\n");

        printf("CHOISIR UN NOMBRE:");
        scanf("%d",&N);

        switch(N){
            case 1:
                clear();
                Ajouter();
                break;
            case 2:
                clear();
                affichage();
                break;
            case 3:
                clear();
                Recherche();
                break;
            case 4:
                clear();
                ModificationQuantite();
                 break;
            case 5:
                clear();
                suppression();
                 break;
            case 6:
                clear();
                AffichageStock();
                break;
        }
    }
    return 0;
}
