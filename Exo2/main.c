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

/******************************************/
/*   TPC2022 no 1  exo 2                   */
/*                                        */
/******************************************/



int main() {

	// a-
	// 
	// Donnez le code qui permet de calculer la valeur de Pi  en utilisant la relation ArcTang(1) = Pi/4 et le développement limité
	// de la fonction Arctangente :
	//
	// Pi = 4 * ( 1 - 1/3 + 1/5 - 1/7 + 1/9 -1/11 + ... ) 
	// 
	// On arrêtera de calculer les termes de l'addition quand leur valeur sera inférieure à 10e-10
	// Afficher le résultat avec 10 décimales.
	// 
	double Pi = 0.0;
	int n = 0;
	double termes;
	for (n = 0; ; n++)
	{
		termes = (4.0 * (float)(1.0 / (float)(2 * n + 1)) * (float)pow((-1), n));
		Pi = Pi + termes;

		if (4.0 * (float)(1.0 / (float)(2 * n + 1)) < 10e-10) { break; };

	}
	printf("La valeur de Pi est %f\n", Pi);


	// Ou le code si dessous aussi 
	// 
	//while (n<400) {
	//	Pi = Pi + (4.0 * (float)(1.0 / (float)(2 * n + 1)) * (float)pow((-1), n));
	//	n = n + 1;
	//}
	//printf("%f\n", Pi);

	


	// b- 
	// 
	// Affichez la table des sinus des angles allant de 0 à 90 degrés en faisant varier l'angle de 10 degrés en 10 degrés.
	// Quel fichier d'entêtes .h doit-on utiliser ? On doit utiliser maths.h
	// Définissez la valeur de PI à l'aide d'une constante en lui donnant la valeur 3.1415926535898
	// Afficher la valeur de l'angle en degrés et la valeur du sinus sur la même ligne en alignant les valeurs
	//

	int angle = 0;
	double PI = 3.1415926535898;
	while (angle <= 90) {
		printf("La valeur du sinus de l'angle %d est de %f\n", angle, sin(angle * (PI / 180)));
		angle = angle + 10;
	}







	return EXIT_SUCCESS;
}
