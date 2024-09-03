#include<stdlib.h>
#include<stdio.h>

int maximum(int T[],int N){
    int mx=T[0];
    for(int i=0;i<N;i++){
   if (mx<T[i]){
    mx=T[i];
   }
}
  return mx;
}
int minimum(int T[],int N){
    int mn=T[0];
    for(int i=0;i<N;i++){
   if (mn>T[i]){
    mn=T[i];
   }
}
  return mn;
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
int max=maximum(T,N);
int min=minimum(T,N);

printf("le maximum est %d\n",max);
printf("le minimum est %d",min);

}
