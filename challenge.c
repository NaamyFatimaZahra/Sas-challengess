#include<stdio.h>
#include<stdlib.h>
int main(){
int N;
printf("saisir la taille:");
scanf("%d",&N);
int T[N];
for(int i=0;i<N;i++){
    printf("T[%d]=",i+1);
    scanf("%d",&T[i]);
}
for (int i=0;i<N;i++){
    if(T[i]%2==0){

        T[i]*=3;
    }
}
for(int i=0;i<N;i++){
    printf("T[%d]=%d",i+1,T[i]);

}
}
