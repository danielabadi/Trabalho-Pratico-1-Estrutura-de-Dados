# Trabalho Prático 1: O problema da mediçãao de Rick Sanchez
## Introdução

Rick Sanchez é o mais brilhante cientista que já caminhou pela humanidade, sendo responsável pelo início da exploração do multiverso por meio de seu aparato de portais interdimensionais. Cotidianamente, Rick realiza experimentos científicos, que necessitam de medições muito cautelosas de diferentes tipos de reagentes.

Rick utiliza recipientes próprios para fazer as medições. No entanto, as medições variam muito, de modo que Rick precise combinar diferentes recipientes pra obter a quantidade desejada. Um outro detalhe é que Rick é muito desastrado, e ele quebra, com certa frequência, seus recipientes. Além disso, seu neto Morty (que o ajuda nas medições) encontra recipientes que estavam perdidos pelo laboratório, que podem ser usados nas medições.

Como Rick é muito ocupado, ele pediu para você desenvolver um programa que, dados os recipientes a serem utilizados e uma determinada medição, calcule o número mínimo de operações necessárias para se obter a medida. Rick ainda deseja poder informar se um recipiente quebrou ou se um novo recipiente foi encontrado no laboratório.

## Detalhes do problema

O objetivo deste trabalho é praticar os conceitos relacionados a estruturas de dados elementares. Você deverá desenvolver um programa que atenda os seguintes critérios:
• Ler a medida dos recipientes do laboratório (o número máximo de recipientes não é conhecido);
• Ler a informação de que um recipiente foi quebrado;
• Ler a medição requerida por Rick;
• Informar o número mínimo de operações necessárias para conseguir a medida exata desejada por Rick;
 
Para ilustrar o problema, vamos considerar o seguinte caso: no laboratório de Rick, há apenas 3 recipientes: 100 ml; 300 ml; e 500 ml. Rick quer medir 400 ml. Há diferentes manipulações possíveis para atingir a quantidade, podemos citar:
1. Adicionar 500 ml e depois retirar 100 ml;
2. Adicionar 300 ml e depois adicionar mais 100 ml;
3. Adicionar 100 ml por quatro vezes consecutivas.

Embora as três manipulações apresentadas sejam válidas, a terceira não é uma solução para o problema, pois necessita de 4 operações, enquanto a primeira e segunda necessitam apenas de duas. Considere ainda que, após essa medição, Rick quebrou o recipiente de 300 ml. Caso ele quisesse medir novamente 400 ml, apenas a primeira operação apresentada seria uma solução válida.

Mais detalhes no arquivo de especificação.
