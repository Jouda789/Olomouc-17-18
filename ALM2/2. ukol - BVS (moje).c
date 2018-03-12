#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "Jmena2"

const char *Jmena[]=
{ "Marie","Jan","Jana","Petr","Josef","Pavel","Jaroslav","Martin","Miroslav","Eva",
  "Anna","Hana","Karel","Lenka","Milan","Michal","Alena","Petra","Lucie","Jaroslava",
  "Ludmila","Helena","David","Ladislav","Jitka","Martina","Jakub","Veronika","Jarmila","Stanislav",
  "Michaela","Ivana","Roman","Monika","Tereza","Zuzana","Radek","Vlasta","Marcela","Marek",
  "Dagmar","Dana","Daniel","Marta","Irena","Miroslava","Barbora","Pavla","Miloslav","Olga",
  "Andrea","Iveta","Filip","Blanka","Milada","Ivan","Zdenka","Libor","Renata","Rudolf",
  "Vlastimil","Nikola","Gabriela","Adam","Radka","Simona","Milena","Miloslava","Iva","Daniela",
  "Patrik","Bohumil","Denisa","Robert","Romana","Aneta","Ilona","Dominik","Stanislava","Emilie",
  "Radim","Richard","Kamila","Ivo","Rostislav","Vladislav","Bohuslav","Alois","Vit","Kamil",
  "Jozef","Vendula","Bohumila","Viktor","Emil","Michael","Ladislava","Magdalena","Eduard","Dominika",
  "Marcel","Sabina","Julie","Antonie","Alice","Peter","Dalibor","Kristina","Otakar","Karla",
  "Hedvika","Alexandra","Silvie","Erika","Nela","Vratislav","Nikol","Leona","Jolana","Margita",
  "Bohuslava","Radovan","Josefa","Terezie","Marian","Linda","Igor" };

const unsigned Pocet=sizeof(Jmena)/sizeof(*Jmena);

typedef struct Uzel {
 const char *jmeno;
 struct Uzel *levy;
 struct Uzel *pravy;
} Uzel;

struct Uzel *Novy (const char *jmeno){
   Uzel *u = malloc(sizeof(struct Uzel));
  u->jmeno = jmeno;
  u->levy = NULL;
  u->pravy = NULL;
 return u;
}

char Pridat(struct Uzel **koren, const char *jmeno){
  if (*koren == NULL){
    *koren = Novy(jmeno);
    return 1;
  }
  struct Uzel *u = *koren;

  if(strcmp(jmeno, u->jmeno) > 0)
		Pridat(&u->pravy, jmeno);

  else if(strcmp(jmeno, u->jmeno) < 0)
		Pridat(&u->levy, jmeno);
}

void inOrderWalk(struct Uzel **root)
{
	if(*root==0)
		return;

	inOrderWalk(&(*root)->levy);
	printf("%s ", (*root)->jmeno);
	inOrderWalk(&(*root)->pravy);
}

int maxHeight(struct Uzel **root)
{
	if(*root==0)
		return -1;

	int mLeft = maxHeight(&(*root)->levy);
	int mRight = maxHeight(&(*root)->pravy);

	if (mLeft > mRight) return mLeft +1;
	else return mRight +1;
}

int main()
{
    struct Uzel *Koren = NULL;
    int i = Pocet;
    while(i--){
        Pridat(&Koren, Jmena[i]);
    }
    inOrderWalk(&Koren);
    printf("\nVyska stromu: %i\n", maxHeight(&Koren));
    return 0;
}
