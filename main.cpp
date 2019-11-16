#include "lista.hpp"

int main(){
	lista lista_frascos;
	lista lista_medidas;
	
	lista_medidas.insere_no(0, 0);
	
	std::string entrada;
	int entrada_ml;
	int medida;
	while(std::cin >> entrada_ml){
		std::cin >> entrada;
		if(entrada == "i"){
			lista_frascos.insere_no(entrada_ml, 0);
		} else if(entrada == "r"){
			lista_frascos.remove_no(entrada_ml);
		} else if(entrada == "p"){
			lista_medidas.esvazia_lista();
			medida = lista_medidas.combina_frascos(entrada_ml, &lista_frascos);
			std::cout << medida << std::endl;
		}
	}
	lista_frascos.deleta_lista();
	lista_medidas.deleta_lista();
	return 0;
}