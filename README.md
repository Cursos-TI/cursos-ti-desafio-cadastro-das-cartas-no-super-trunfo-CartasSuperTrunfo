# Desafio Super Trunfo - Países - Cadastro das Cartas

Este projeto consiste em um sistema inicial para o jogo Super Trunfo, onde o jogador cadastra cartas representando países (ou cidades) e compara os atributos para determinar a carta vencedora. O desafio está estruturado em três níveis (Novato, Aventureiro e Mestre), sendo que no nível Mestre são implementadas as comparações baseadas nos atributos cadastrados e calculados.

## Funcionalidades do Sistema

- **Nível Novato:**
  - Cadastro de cartas com propriedades básicas: População, Área, PIB e Número de Pontos Turísticos.
  - Exibição dos dados cadastrados de forma organizada.

- **Nível Aventureiro:**
  - Cálculo automático de propriedades adicionais:
    - Densidade Populacional (População / Área)
    - PIB per Capita (PIB / População)

- **Nível Mestre:**
  - Comparação entre duas cartas utilizando os atributos:
    - População, Área, PIB, Densidade Populacional, PIB per Capita, Pontos Turísticos e Super Poder.
  - Regra de comparação: vence a carta com maior valor para todos os atributos, exceto para Densidade Populacional, onde vence a carta com menor valor.
  - Exibição do resultado com o nome dos países, valores dos atributos e indicação do vencedor (ou "Empate!" em caso de igualdade).

## Como Executar o Programa

### Pré-requisitos

- Compilador C (por exemplo, GCC)
- Terminal de comando

### Passos para Compilar e Executar

1. **Clonar o Repositório**

   ```sh
   git clone https://github.com/seu-usuario/desafio-cadastro-das-cartas-no-super-trunfo-andream001.git
   cd desafio-cadastro-das-cartas-no-super-trunfo-andream001
