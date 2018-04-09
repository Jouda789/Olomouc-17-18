#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cisla2.txt"

struct Node
{
	int order;
	int item[3];
	struct Node *child[4];
};

int Pruchod(struct Node *u){
   if (u==NULL){
   	return 0;
   }   
   Pruchod(u->child[0]);
   int i = 0;
   while (i<(u->order-1)){
    printf("%i ", u->item[i]);
    i++;
    Pruchod(u->child[i]);
   }
}

struct Node *Prohledani(struct Node *T, int hodnota){
   struct Node *u = T;
   int i;
   while(u != NULL){
      i = 0;
      while(i<(u->order-1)&&(hodnota>=(u->item[i]))){
         if (hodnota == u->item[i])
           return u;
           i++;
           }
      u = u->child[i];
   }
   return NULL;
}


struct Node *Vytvoreni(int hodnota, struct Node *potomek1, struct Node *potomek2){
  struct Node *u = malloc(sizeof(struct Node));
  u->order = 2;
  u->item[0] = hodnota;
  u->child[0] = potomek1;
  u->child[1] = potomek2;
  u->child[2] = NULL;
  u->child[3] = NULL;
  return u;
}

struct Node *Rozdel(struct Node *u, struct Node *v){
 if (v == NULL){
    u->child[0] = Vytvoreni(u->item[0],u->child[0],u->child[1]);
    u->child[1] = Vytvoreni(u->item[2],u->child[2],u->child[3]);
    u->order = 2;
    u->item[0] = u->item[1];
    return u;
 }
 int j = v->order - 1;
 while ((j>0)&&(u->item[1]<v->item[j-1])){
    v->item[j] = v->item[j-1];
    v->child[j+1] = v->child[j];
    j--;
 }
 v->item[j] = u->item[1];
 v->child[j] = u;
 u->order = 2;
 v->child[j+1] = Vytvoreni(u->item[2],u->child[2],u->child[3]);
 v->order = v->order+1;
 return v;
};

int Vlozeni(struct Node **T, int hodnota){
 struct Node *u = *T;
 if (*T == NULL){
    *T = Vytvoreni(hodnota, NULL, NULL);
    return 1;
 }
 struct Node *v = NULL;
 int i, j;
 while(1){
    if (u->order == 4){
    	u = Rozdel(u,v);
	}
      
    i = 0;
  while ((i < u->order-1) && (hodnota >= u->item[i])){
     if (hodnota == u->item[i])
      return 0;
     i++;}
    if (u->child[i] != NULL){	
    v = u;
    u = u->child[i];}
   else{
  j = u->order-1;
  while (j>i){
   u->item[j] = u->item[j-1];
   j--;}
   u->item[i] = hodnota;
   u->order = u->order+1;
    return 1;} 
 }
}

int main(){
 int i;
 struct Node *u = NULL;
 for(i=0;i<Pocet;i++)
{
    Vlozeni(&u, Cisla[i]);
}
 Pruchod(u);
}

