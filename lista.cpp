#include "lista.hpp"

//Insere um elemento na lista.
void lista::insere_no(int mililitros, int operacoes){
	no* auxiliar = new no;
	auxiliar->mililitros = mililitros;
	auxiliar->operacoes = operacoes;
	auxiliar->proximo = nullptr;
	
	if(this->cabeca == nullptr){
		this->cabeca = auxiliar;
		this->cauda = auxiliar;
	} else {
		this->cauda->proximo = auxiliar;
		this->cauda = auxiliar;
	}
}

//Remove um elemento da lista.
void lista::remove_no(int mililitros){
	no* atual = this->cabeca;
	no* anterior = nullptr;
	
	while(atual != nullptr){
		if(atual->mililitros == mililitros){
			if(anterior == nullptr){
				this->cabeca = atual->proximo;
			} else if(atual->proximo == nullptr){
				anterior->proximo = nullptr;
				this->cauda = anterior;
			} else {
				anterior->proximo = atual->proximo;
			}
			delete atual;
			return;
		}
		anterior = atual;
		atual = atual->proximo;
	}
}

/*
Funcao que recebe um ponteiro para a lista de frascos e combina os frascos com as medidas, na forca bruta, ate achar a medicao correta.
2 whiles que, para cada "no" na lista de medidas, compara com cada "no" na lista de frascos.
O primeiro percorre a lista de medidas e o segundo a lista de frascos.
*/
int lista::combina_frascos(int mililitros, lista* lista_frascos){
	if(mililitros == 0){
		return 0;
	}
	no* no_auxiliar_frascos = lista_frascos->cabeca;
	no* no_auxiliar_medidas = this->cabeca;
	int soma;
	int subtracao;
	
	while(no_auxiliar_medidas != nullptr){
		no_auxiliar_frascos = lista_frascos->cabeca;
		while(no_auxiliar_frascos != nullptr){
			soma = no_auxiliar_medidas->mililitros + no_auxiliar_frascos->mililitros;
			subtracao = no_auxiliar_medidas->mililitros - no_auxiliar_frascos->mililitros;
			
			if(soma > 0){
				this->insere_no(soma, no_auxiliar_medidas->operacoes + 1);
			}
			
			if(subtracao > 0){
				this->insere_no(subtracao, no_auxiliar_medidas->operacoes + 1);
			}
			if(soma == mililitros || subtracao == mililitros){
				return no_auxiliar_medidas->operacoes + 1;
			}
			no_auxiliar_frascos = no_auxiliar_frascos->proximo;
		}
		no_auxiliar_medidas = no_auxiliar_medidas->proximo;
	}
	return 0;
}

//Funcao que remove todos os elementos da lista, exceto o primeiro. Util para refazer a lista de medicoes.
void lista::esvazia_lista(){
	no* auxiliar_fixo = this->cabeca;
	no* auxiliar;
	
	while(auxiliar_fixo->proximo != nullptr){
		auxiliar = auxiliar_fixo->proximo; 
		auxiliar_fixo->proximo = auxiliar->proximo;
		if(auxiliar->proximo == nullptr){
			this->cauda = auxiliar_fixo;
		}
		delete auxiliar;
	}
}

//Remove todos os elementos da lista. Usado apenas no fim da execucao para não ocorrer vazamento de memoria.
void lista::deleta_lista(){
	no* auxiliar_fixo = this->cabeca;
	no* auxiliar;
	
	while(auxiliar_fixo->proximo != nullptr){
		auxiliar = auxiliar_fixo->proximo; 
		auxiliar_fixo->proximo = auxiliar->proximo;
		if(auxiliar->proximo == nullptr){
			this->cauda = auxiliar_fixo;
		}
		delete auxiliar;
	}
	delete auxiliar_fixo;
}