#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define Vertice char
#include<string.h>
#include "grafo.h"
using namespace std;

typedef struct no
{
	Vertice w;
	struct no *prox;	
}No;

typedef struct noGrafo
{
	Vertice v;
	No *adj;
	struct noGrafo *prox;
	float distancia;
}Lista;

No *cria(Vertice v1, No *p)
{
	No *novo;
	novo = (No *)malloc(sizeof(No));
	novo->w = v1;
	novo->prox = p;
	return novo;
}

Lista *criaGrafo(Vertice v1, No *p, Lista *g)
{
	Lista *novo;
	novo = (Lista *)malloc(sizeof(Lista));
	novo->v = v1;
	novo->adj = p;
	novo->prox = g;
	return novo;
}

void Inserir(Lista *g)
{
	No *l;
	int qte, i;
	Vertice v;
	
	while(g != NULL)
	{
		l = NULL;
		cout<<"Informe o numero de ligacoes partindo da cidade "<<g->v<<":";
		cin>>qte;
		fflush(stdin);
		for(i = 0; i < qte;i++)
		{
			cout<<"Codigo da cidade de chegada:";
			scanf("%c", &v);
			cout<<"Informe a quilometragem:";
			cin>>g->distancia;
			fflush(stdin);
			l = cria(v,l);
		}
		g->adj = l;
		g = g->prox;
	}
}

void percorrer(Lista *g)
{
	while(g != NULL)
	{
		cout<<"Codigo da cidade:"<<g->v<<endl;
		while(g->adj != NULL)
		{
			cout<<"Cidade ("<<g->v<<") --> Cidade("<<g->adj->w<<") Distancia: "<<g->distancia<<"km"<<endl;
			g->adj = g->adj->prox;
		}
		g = g->prox;
	}
}

