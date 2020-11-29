#include <stdio.h>
#include <stdlib.h>

typedef struct Tableau {
	int* elt; // le tableau d�entiers
	int size; // la taille de ce tableau d�entiers
	int eltsCount; // le nombre d��l�ments dans le tableau
} TABLEAU;

int incrementArraySize(TABLEAU* tab, int incrementValue) {
	int* tmp = tab->elt;
	int taille;
	taille = tab->size + incrementValue; //augmentation de la taille
	tab->elt = (int*)realloc((tab->elt), taille * sizeof(int)); // reallocation de l'�l�ment
	if (tab->elt == NULL) { return -1; } // test si erreur
	return taille;
}

int setElement(TABLEAU* tab, int pos, int element) {
	if ((pos < 0) || (tab == NULL)) { // test pour savoir si la valeur entr�e n'entrenera pas une erreur et si tab diff�rent de NULL
		return 0;
	}
	else {
		if (pos > tab->size) { // on r�gle le probl�me d'agrandissement en premier lieu
			if (incrementArraySize(tab, pos - tab->size) == NULL) {return 0; }
			else { //puis on incr�ment � la position voulue en prenant chaque donn�e de la structure TABLEAU 
				incrementArraySize(tab, pos - tab->size);
				for (int i = tab->size; i = pos; ++i) {
					*(tab->elt + i) = 0;
				}
				*(tab->elt + pos) = element;
				tab->size= incrementArraySize(tab, pos - tab->size);
				tab->eltsCount = tab->eltsCount + 1;
				return pos;
			}
		}
	}
}

int displayElements(TABLEAU* tab, int startPos, int endPos) {
	if ((tab == NULL) || (startPos < 0) || (endPos < 0)) {
		return -1;
	}
	if (startPos >= endPos) {
		for (int i = endPos; i = startPos; ++i) {
			printf("Elt n� %d vaut %d \n", i, *(tab->elt + i)); //affichage de l'element est de sa valeur 
		}
	}
	if (startPos <= endPos) {
		for(int i=startPos; i=endPos; ++i){
			printf("Elt n� %d vaut %d \n", i, *(tab->elt + i)); //affichage de l'element est de sa valeur 
		}
	}
	return 0;
}

int deleteElements(TABLEAU* tab, int startPos, int endPos) {
	if ((tab == NULL) || (startPos < 0) || (endPos < 0)) {
		return -1;
	}
	if (startPos >= endPos) {
		int tmp = startPos;
		startPos = endPos;
		endPos = tmp; //incrementAraySize(TABLEAU * tab , int -incrementValue)??

	}
	else {
		//incrementAraySize(TABLEAU * tab , int -incrementValue)??
	}
}

int aleatoire(int min, int max) {
	int number = (int)((double)rand() / (RAND_MAX + 1) * (max - min)) + min;
	return (number);
}