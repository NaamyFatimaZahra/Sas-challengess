#include <stdlib.h>
#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
void inverse(int T[],int N){
    int X;

for(int i=0;i<N/2;i++){
    X=T[N-i-1];
    T[N-i-1]=T[i];
    T[i]=X;
}
}
int main(){
    int N;
    printf("saisir la taille:");
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
inverse(T,N);
for(int i=0;i<N;i++){
    printf("T[%d]=%d\n",i+1,T[i]);
    }
}
