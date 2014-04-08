
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <ctype.h>
#include <sstream>
//#include "pascal_lexico.cpp"
//#include "autPasc.cpp"

using namespace std;

class tokenNo{
public:
	string dado;
	string tipo;
	tokenNo* prox;
	tokenNo()
	{
		prox = NULL;
	}
};

class analise{
public:
	tokenNo* raiz;
	tokenNo* last;
	analise()
	{
		raiz = last = NULL;
	}
	void automato(string token, analise tok);
	void inserir(string item, string categ);
	void imprimir();
	void output(string final);
	void outFromList();//salva da lista para o arquivo
};

void analise::inserir(string item, string categ)
{
	tokenNo* ptr = new tokenNo;	
	if(raiz==NULL){
		ptr->dado = item;
		ptr->tipo = categ;
		raiz = ptr;
		last = ptr;
		last->prox = NULL;
	}else{
		ptr->dado = item;
		ptr->tipo = categ;
		last->prox = ptr;
		last = last->prox;
		last->prox = NULL;
	}
}

void analise::imprimir()
{
	tokenNo* ptr=raiz;
	while(ptr!=NULL){
		cout<<ptr->dado<<" "<<ptr->tipo<<" "<<endl;
		ptr=ptr->prox;
	}
}

void analise::outFromList()
{
	tokenNo* ptr=raiz;
	std::ofstream out("outputLexico.txt", std::ofstream::app);
	char space = ' ';
	while(ptr!=NULL){
		long size = ptr->dado.length();
		long tsize = ptr->tipo.length();
		char* ch, *ctipo ;
		ch = new char[size];
		ctipo = new char[tsize];

		for(int i=0;i<ptr->dado.length();i++)
			ch[i] = ptr->dado[i];

		out.write(ch,size);
		//out.write(" ",size);

		for(int i=0;i<ptr->tipo.length();i++)
			ctipo[i] = ptr->tipo[i];
		out.write(ctipo,tsize);
		//out.write(" ",tsize);

		ptr=ptr->prox;
	}
}

void analise::output(string final)//vamos salvar da lista ligada, é melhor
{
	std::ofstream out("output.txt", std::ofstream::app);
	long size = final.length();
	char* ch;
	ch = new char[final.length()];
	for(int i=0;i<final.length();i++)
	{
		ch[i] = final[i];
	}
	out.write(ch, size);
}

/*int main()
{
	analise tokn;
	string c = "exemplo";
	string a = " lista";
	string p = "parametro";
	string s = "string";
	//tokn.start();
	tokn.inserir(c,p);
	tokn.inserir(a,s);
	tokn.inserir(c,s);
	tokn.inserir(a,p);

	tokn.imprimir();
}*/

