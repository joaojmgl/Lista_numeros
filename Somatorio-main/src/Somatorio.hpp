#ifndef LISTA_H 
#define LISTA_H
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>
using namespace std;

#define MAXTAM 100

typedef struct Item{
	int val;	
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
	//string Numbers;
	//int Number;	
}Lista;


void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LRemove(Lista *l, Item d);
void Swap(Item *a, Item *b);
void LImprime(Lista *l);
void Maxsum(Lista *l);
void Read_arch(Lista *l);

#endif