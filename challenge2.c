#include<stdlib.h>
#include<stdio.h>
int main(){
int max,N;

printf("saisir la taille du tableau:");
scanf("%d",&N);
int T[N];
int *P=T;
for(P=T;P<T+N;P++){
    printf("T[%d]=",P-T+1);
    scanf("%d",P);
}

for(P=T;P<T+N;P++){
    if(max<*P){
        max=*P;
    }
}
printf("le max est:%d",max);
}

