#define TAILLEINITIALE 100
#include "structureetfct.h"

TABLEAU tableau(int* p, int size, int eltsCount)
{
	return;
}

TABLEAU newArray() {
	void* p;
	int size = sizeof(TABLEAU);
	if (!(p = malloc(size)) && size) { // on vérifie si l'allocation est possible
		return tableau(NULL, TAILLEINITIALE, 0);
	}
	else {
		TABLEAU tab = { malloc(TAILLEINITIALE * sizeof(int)), TAILLEINITIALE, 0 }; //on alloue la place
		return tab;
	}

}


int main(){
	TABLEAU tab = newArray();
	tab->size = 20;
	for (int i = 0; i = 42; ++i) {
		tab->elts = aleatoire(1, 30);
	}
}
