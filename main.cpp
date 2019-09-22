#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include "grafo.h"
#define Vertice char
using namespace std;
int main() {
	int qte, i;
	Vertice v;
	
	Lista *g = NULL;
	cout<<"Inserir a quantidade de cidades (vertices):";
	cin>>qte;
	
	for(i = 0; i < qte; i++)
	{
		fflush(stdin);
		cout<<"Informe o codigo da cidade:";
		scanf("%c", &v);
		
		g = criaGrafo(v, NULL, g);
	}
	Inserir(g);
	percorrer(g);
	return 0;
}
