#include <stdio.h>
#include <string.h>

// Zakladni operace se zlomky.

typedef struct {
  int citatel;
  int jmenovatel;
} zlomek;

int NSD(int n1,int n2){
  
  while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
  return n1;  
}

zlomek soucin_zlomku(zlomek a, zlomek b){
  
  zlomek vysledek;
  vysledek.citatel = a.citatel * b.citatel;
  vysledek.jmenovatel = a.jmenovatel * b.jmenovatel;
  
  return vysledek;
}


zlomek soucet_zlomku(zlomek a, zlomek b){
  
  zlomek vysledek;
  vysledek.citatel = a.citatel * b.jmenovatel + b.citatel * a.jmenovatel;
  vysledek.jmenovatel = a.jmenovatel * b.jmenovatel;
  
  return vysledek;
  
}

zlomek rozdil_zlomku(zlomek a, zlomek b){
  
  zlomek vysledek;
  vysledek.citatel = a.citatel * b.jmenovatel - b.citatel * a.jmenovatel;
  vysledek.jmenovatel = a.jmenovatel * b.jmenovatel;
  
  return vysledek;
  
}

zlomek kraceni_zlomku(zlomek a){
  
  zlomek vysledek;
  int pom = 0;
  int pom2 = 0;
  
  if (a.jmenovatel < 0) {
    
    a.jmenovatel *= -1;
    //a.citatel *= -1;
    pom2 = 1;
    
  }
  
  
    
    pom = NSD(a.citatel, a.jmenovatel);
    a.citatel = a.citatel / pom;
    a.jmenovatel = a.jmenovatel / pom;
     
  
  
  vysledek.citatel = a.citatel;
  vysledek.jmenovatel = a.jmenovatel;
  
  if (pom2) vysledek.citatel *= -1;
  
  return vysledek;  
  
}

zlomek podil_zlomku(zlomek a, zlomek b){
  
  zlomek vysledek;
  vysledek.citatel = a.citatel * b.jmenovatel;
  vysledek.jmenovatel = a.jmenovatel * b.citatel;
  
  return vysledek;
  
}

int main ()
{
  zlomek foo = {3,2};
  zlomek bar = {-1,4};
  
  zlomek vysledek1 = soucin_zlomku(foo,bar);
  zlomek vysledek2 = soucet_zlomku(foo,bar);
  zlomek vysledek3 = kraceni_zlomku(vysledek2);
  zlomek vysledek4 = podil_zlomku(foo,bar);
  zlomek vysledek5 = kraceni_zlomku(vysledek4);
  zlomek vysledek6 = rozdil_zlomku(foo,bar);
  zlomek vysledek7 = kraceni_zlomku(vysledek6);
  
  printf("Soucin: %i/%i", vysledek1.citatel, vysledek1.jmenovatel);
  printf("\n");
  printf("Soucet: %i/%i", vysledek2.citatel, vysledek2.jmenovatel);
  printf("\n");
  printf("Kraceni souctu: %i/%i", vysledek3.citatel, vysledek3.jmenovatel);
  printf("\n");
  printf("Podil: %i/%i", vysledek4.citatel, vysledek4.jmenovatel);
  printf("\n");
  printf("Kraceni podilu: %i/%i", vysledek5.citatel, vysledek5.jmenovatel);
  printf("\n");
  printf("Rozdil: %i/%i", vysledek6.citatel, vysledek6.jmenovatel);
  printf("\n");
  printf("Kraceni rozdilu: %i/%i", vysledek7.citatel, vysledek7.jmenovatel);
  printf("\n");
}
