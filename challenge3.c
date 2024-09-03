#include <stdlib.h>
#include <stdio.h>
int main(){

int T[100],N;
int *P1,*P2;
printf("saisir la taille des tableau:");
scanf("%d",&N);
for(P1=T;P1<T+N;P++){
    printf("T[%d]=");
    scanf("&d",P1);
}
for(P1=T,P2=T;P1<T+N;P1++,P2++){

}

}
