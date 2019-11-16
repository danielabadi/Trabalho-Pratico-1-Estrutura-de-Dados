#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include "no.hpp"

struct lista{
	no* cabeca = nullptr;
	no* cauda = nullptr;
	
	void insere_no(int mililitros, int operacoes);
	void remove_no(int mililitros);
	int combina_frascos(int mililitros, lista* lista_frascos);
	void esvazia_lista();
	void deleta_lista();
};
#endif