#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void arrayPrint(int *tab, int size) {
	std::cout <<  "[";
	for (int i = 0; i < size; i++) {
		std::cout << tab[i];
		if (i != size - 1) {
		std::cout << ",";
		}
	}
	std::cout << "]\n";
}

void minmax(int *tab, int taille, int *min, int *max) {

	for (int i = 0; i < taille; i++) 
	{
		if (tab[i] < *min)
		{
			*min = tab[i];
		}
		if (tab[i] > *max)
		{

			*max = tab[i];
		}
	}
}

int main()
{
	srand(time(NULL));
	int taille = rand() % 10;
	std::cout << taille << "\n";
	int *tab = new int[taille];
	for (int i=0; i < taille; i++)
	{
		tab[i] = rand() % 10;
	}
	arrayPrint(tab, taille);
	int min = tab[0];
	int max = tab[0];
	minmax(tab, taille, &min, &max);
	std::cout << "Le minimum est " << min << "\n";
	std::cout << "Le maximum est " << max << "\n";
	return 0;
}