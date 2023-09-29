// This directive deactivate Warnings for unsecure functions that are deprecated by Microsoft.
// This is not a good practice but is used for pedagogic purposes,
// allowing usage of standard C functions as described in manuals.
// You should use only secured functions named with _s postfix
// e.g. printf_s() rather than printf()
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <float.h>
#include <limits.h>

/******************************************/
/*   TPC2022 no 1  exo1                   */
/*                                        */
/******************************************/

// le type 'char' caractérise un entier positif codé sur 8 bits compris entre -128 et +127,
// le bit de poids fort sert au codage du signe.
// un 'unsigned char' pourra donc représenter un nombre positif compris en 0 et 255, 
// soit 256 valeurs.
// La représentation en hexadécimale de 255 est FF (notée 0xFF)
// Le type booléen n'existe pas en C90, une valeur non nulle 
// dans une expression logique est comprise comme 'VRAI'.
// La prise en charge du type booléen peut se faire en ajoutant une directive #include <stdbool.h>

// Compléter le code par des appels à la fonction d’affichage printf pour afficher la valeur 
// de chacune des variables dans un format correct. Attention, le choix du filtre %, modifie le résultat
// car il réalise une conversion de la donnée avant son affichage dans le format souhaité.
// Donc, ce qui s’affiche est ce qui a été demandé, et pas nécessairement la donnée dans son format d’origine.
// Donner pour chaque type, le nombre d’octets utilisés pour le codage, et indiquer quelle valeur minimum
// et quelle valeur maximum(dynamique) on peut représenter avec une variable qui aurait ce type.
// Donner la réponse sous la forme de commentaires dans votre fichier source.

// définition de type
typedef unsigned char byte;

int main() { // accolade ouvrante = début de bloc d'instructions
	// Déclaration de variables réservées au main(), et initialisations facultatives
	char OneLetter = 'A';
	printf("exemple d'affichage d'un caractere %c, codage sur %d octets\n", OneLetter, sizeof(OneLetter));
	//"char" valeur compris entre -128 et +127
	char AnOtherLetter = 66;
	printf("\nexemple d'affichage d'un entier court %c, codage sur % d octets\n", AnOtherLetter, sizeof(AnOtherLetter));
	//"char" valeur compris entre -128 et +127
	byte toto = 0;
	printf("\nexemple d'affichage d'un entier court %d, codage sur % d octets\n", toto, sizeof(toto));
	//"byte"= 0 ou 1
	unsigned char VerySmallCounter = 255;
	printf("\nexemple d'affichage d'un entier court %c, codage sur % d octets\n", VerySmallCounter, sizeof(VerySmallCounter));
	//"unsigned char" valeur compris en 0 et 255
	short SmallCounter = 32767;
	printf("\nexemple d'affichage d'un entier court %hd, codage sur %d octets\n", SmallCounter, sizeof(SmallCounter));
	//"short" valeur comprise entre -32 768 et 32 767
	int Counter = 0;
	printf("exemple d'affichage d'un entier court %d, codage sur %d octets\n", Counter, sizeof(Counter));
	//"int" valeur comprise entre -2 147 483 648 et 2 147 483 648 
	long LargeCounter = 2147483647;
	printf("\nexemple d'affichage d'un entier court %ld, codage sur % d octets\n", LargeCounter, sizeof(LargeCounter));
	//"long" valeur comprise entre −2 147 483 647 et 2 147 483 647
	unsigned long FullRangeLargeCounter = 4294967295;
	printf("\nexemple d'affichage d'un entier court %lu, codage sur % d octets\n", FullRangeLargeCounter, sizeof(FullRangeLargeCounter));
	//"unsigned long" valeur comprise entre 0 et 4 294 967 295
	int ChienDeGarde = 0;
	printf("\nexemple d'affichage d'un entier court %d, codage sur % d octets\n", ChienDeGarde, sizeof(ChienDeGarde));
	// "int" valeur comprise entre -2 147 483 648 et 2 147 483 648
	float Dim1 = 1.414F;
	printf("\nexemple d'affichage d'un entier court %f, codage sur % d octets\n", Dim1, sizeof(Dim1));
	//"float" valeur comprise entre 
	double Dim2 = .5;
	printf("\nexemple d'affichage d'un entier court %f, codage sur % d octets\n", Dim2, sizeof(Dim2));
	//"double" valeur comprise entre 

	bool TestResult = 1;
	printf("\nexemple d'affichage d'un entier court %d, codage sur % d octets\n", TestResult, sizeof(TestResult));
	// Déclaration de constante
	const double Pi = 3.14159265;
	printf("\n%f", Pi, sizeof(Pi));
	
	int A = 1, B = 2, C = 3;
	printf("\n %d (%p)\n %d p)\n %d (%p)\n", A,&A,B,&B,C,&C);


	// les instructions du programme principal : main()
	/********** Debut de programme *****************/
	
	/*********** Fin de programme ******************/

	return(EXIT_SUCCESS);
} // accolade fermante = fin de bloc d'instructions


