#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "Jmena2.h"

const char *Jmena[]=
{"Marie","Jan","Jana","Petr","Josef","Pavel","Jaroslav","Martin","Miroslav","Eva",
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
  "Bohuslava","Radovan","Josefa","Terezie","Marian","Linda","Igor"};

const unsigned Pocet=sizeof(Jmena)/sizeof(*Jmena);

struct node
{
	char name[20];
	struct node *left;
	struct node *right;
};

struct node *add(const char *name, struct node **root);
void inOrderWalk(struct node **root);

int main(int argc, char **argv)
{
	struct node *tree = 0;

	int i;
	for(i=0; i<Pocet; i++)
	{
		add(Jmena[i], &tree);
	}
	inOrderWalk(&tree);
	printf("\nVyska stromu: %i\n", maxHeight(&tree));
	return 0;
}

// Pøidá jméno do stromu
struct node *add(const char *name, struct node **root)
{
	// Pokud koøen neexistuje
	if(*root==0)
	{
		*root = malloc(sizeof(struct node));
		strcpy((*root)->name, name);
		(*root)->left = 0;
		(*root)->right = 0;
	}

	// Pokud je vkládané jméno "vìtší" než koøen
	else if(strcmp(name, (*root)->name) > 0)
		add(name, &(*root)->right);

	// Pokud je vkládané jméno "menší" než koøen
	else if(strcmp(name, (*root)->name) < 0)
		add(name, &(*root)->left);
}

// Projde strom a vypíše jména podle abecedy
void inOrderWalk(struct node **root)
{
	if(*root==0)
		return;

	inOrderWalk(&(*root)->left);
	printf("%s ", (*root)->name);
	inOrderWalk(&(*root)->right);
}

// Vrátí výšku celého stromu
int maxHeight(struct node **root)
{
	if(*root==0)
		// Nikoliv 0. Je potøeba výsledek zmenšit, protože
		//    výška koøene je 0, nikoliv 1.
		return -1;

	int mLeft = maxHeight(&(*root)->left);
	int mRight = maxHeight(&(*root)->right);
	return (mLeft > mRight? mLeft : mRight) + 1;
}
