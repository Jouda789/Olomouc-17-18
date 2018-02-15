#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int porovnej(char *t1, char *t2){
  
  int vel1 = strlen(t1);
  int vel2 = strlen(t2);
  int velikost;
  
  if (vel1 < vel2) velikost = vel1;
  else velikost = vel2;
  
  int i;
  
  for(i=0;i<velikost;i++){
    if (int(t1[i])>int(t2[i])) return 1;
    else if (int(t1[i])<int(t2[i])) return -1;
    else continue;    
  }
    
  if (vel1 == vel2) return 0;
  else if (vel1 < vel2) return -1;
  else return 1;
  
}

int main()
{
  char slovo1[] = "babicka";
  char slovo2[] = "babickaaaa";
  
  int vysledek = porovnej(slovo1, slovo2);
  printf("%i \n", vysledek);  
  
  return 0;
}


/* nebo */

int porovnej(char *t1, char *t2){
  
  while (*t1 || *t2){
    
    if (*t1 < *t2) return -1;
    else if (*t1 > *t2) return 1;
    else {
      
      t1 += 1;
      t2 += 1;    
            
    }        
  } 
  return 0;  
}
