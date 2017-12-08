#include <stdio.h>

//predpokladame obdelnik rovnobezny s osami
//staci nam znat dva protilehle vrcholy

typedef struct {
  int vrcholAx;
  int vrcholAy;
  int vrcholCx;
  float vrcholCy;
} obdelnik;

int obvodObdelnika(obdelnik obd){
  
  int strana1 = obd.vrcholCx - obd.vrcholAx;
  int strana2 = obd.vrcholCy - obd.vrcholAy;
  return 2*strana1 + 2*strana2; 
  
}

int obsahObdelnika(obdelnik obd){
  
  int strana1 = obd.vrcholCx - obd.vrcholAx;
  int strana2 = obd.vrcholCy - obd.vrcholAy;
  return strana1*strana2; 
  
}


int protnuti(obdelnik obd1, obdelnik obd2){
  
  if (((obd1.vrcholAx < obd2.vrcholCx) && (obd2.vrcholAy < obd1.vrcholCy)) ||
      (obd2.vrcholAx < obd1.vrcholCx) && (obd1.vrcholAy < obd2.vrcholCy )) return 1;
  else return 0;
    
}

int uvnitr(obdelnik obd1, obdelnik obd2){
  
  if (((obd1.vrcholAx < obd2.vrcholAx) && (obd1.vrcholCx > obd2.vrcholCx) &&
       (obd1.vrcholAy < obd2.vrcholAy) && (obd1.vrcholCy > obd2.vrcholCy)) ||
      ((obd2.vrcholAx < obd1.vrcholAx) && (obd2.vrcholCx > obd1.vrcholCx) &&
       (obd2.vrcholAy < obd1.vrcholAy) && (obd2.vrcholCy > obd1.vrcholCy))) return 1;
  else return 0;
    
}

int main()
{
 
  obdelnik obd2 = {3,2,7,4};
  obdelnik obd = {4,1,5,3};
  printf("Obvod daneho obdelnika je %d.", obvodObdelnika(obd));
  printf("\n");
  printf("Obsah daneho obdelnika je %d.", obsahObdelnika(obd));
  printf("\n");
  if (protnuti(obd,obd2)) printf("Obdelniky se protinaji.");
  else printf("Obdelniky se neprotinaji.");
  printf("\n");
  if (uvnitr(obd,obd2)) printf("Obdelnik je uvnitr.");
  else printf("Obdelnik neni uvnitr.");
  printf("\n");
  
}
