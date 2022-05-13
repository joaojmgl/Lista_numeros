#include "Somatorio.hpp"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LRemove(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].val == d.val){
				Swap(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}


void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		cout << l->vet[i].val << endl;
	
}
void Read_arch(Lista *l) {
	ifstream arq;
	Item aux;
	arq.open("Lista_numeros.txt");
	string n;
	if(arq.is_open()){
		while(!arq.eof()){
			getline(arq, n);
			aux.val = stoi(n);
			LInsert(l, aux);
		}
	}
}		

void Maxsum(Lista *l){

	int start, fim, i, j;
	start = l -> first;
	fim = l -> last;
	int soma, maxsum = -500000;
	int posicao_inicial, posicao_final;

	for (i = start; i <= fim; i++) {
		soma = 0;
		for (j = i; j < fim; j++) {
			soma += l -> vet[j].val;
			if (soma > maxsum && i != j) {
				maxsum = soma;
				posicao_inicial = i;
				posicao_final = j;
			}
		}
	}

	cout << "MAIOR SOMA: " << maxsum;
	cout << endl << "POSICAO INICIAL: " << posicao_inicial << endl;
	cout << "POSICAO FINAL: " << posicao_final;
}




