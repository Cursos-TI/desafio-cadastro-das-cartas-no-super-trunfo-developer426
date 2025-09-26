# Desafio Super Trunfo - Países - Cadastro das Cartas

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde você comparará os atributos das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior.  **Você deve escolher qual desafio quer realizar.**

🚨 **Atenção:** O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções `scanf` para ler os dados e `printf` para exibi-los.

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.  Imagine um país dividido em oito estados (A a H), e cada estado com quatro cidades (1 a 4).  A combinação forma o código da carta (ex: A01, B02).

🚩 **Objetivo:** Criar um programa em C que cadastra **duas** cartas com os seguintes atributos:

*   População (`int`)
*   Área (`float`)
*   PIB (`float`)
*   Número de pontos turísticos (`int`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

**Simplificações para o Nível Novato:**

*   Cadastre apenas **duas** cartas.
*   Concentre-se na leitura, armazenamento e exibição. Não implemente comparações ou outros recursos.
*   **Não use** laços (`for`, `while`) ou condicionais (`if`, `else`).


## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, você expandirá o sistema para incluir o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.

🆕 **Diferença em relação ao Nível Novato:**

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

**Simplificações para o Nível Intermediário:**

*   Continue cadastrando apenas **duas** cartas.
*   Continue **sem usar** laços (`for`, `while`) ou condicionais (`if`, `else`).



## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, você implementará a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma (1/densidade).  Tipo: `float`.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.

**Observação:**  Preste atenção à conversão de tipos ao calcular o Super Poder!

## 🏆 Nível Aventureiro: Interatividade no Super Trunfo

No nível Aventureiro, você irá implementar a interação do usuário com a comparação das Cartas Super Trunfo.

⚙️ **Funcionalidades do Sistema:**

*   Possibilidade do usuário interagir com o programa, escolhendo com qual alternativa deseja interagir;
*   Logo após o usuário escolhendo a opção desejada, a comparação dos atributos é realizada informando o vencedor;
*   Caso seja escolhida uma opção indisponível, o sistema informa ao usuário.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Para realizar a lógica de comparação, foi utilizado o 'Switch';
*   Foi utilizado o metodo 'case' para separar um atributo do outro.

## 🏆 Nível Mestre: Implementando Comparações Avançadas com Atributos Múltiplos em C

No Desenvolvimento da lógica do jogo NÍVEL MESTRE, você implementará a lógica de comparação entre dois atributos.

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de atributos:** O usuário poderá escolher 2 atributos a serem comparados.
*   **Escolha de atributo:** Menu interativo que permite ao usuário realizar a escolha.

⚙️ **Funcionalidades do Sistema:**

*   Escolha do atributo: permite ao usuário escolher 2 atributos da sua escolha para realizar a comparação.
*   O sistema irá somar os valores dos atributos para cada carta escolhida. Vence a carta que tiver a maior soma.
*   Após o primeiro atributo de comparação ser escolhido pelo usuário, o mesmo não estará mais disponível na seleção do segundo atributo.

📥 **Entrada** e 📤 **Saída de Dados:**

*   No cálculo da densidade populacional e PIB per capita, foi utilizado o tipo 'float'.
*   A saída mostrara a escolha do atributo escolhido, caso o usuário tente escolher o mesmo atributo 2 vezes, será apresentada uma mensagem de erro.


## 🏁 Conclusão

Ao concluir qualquer um dos níveis, você terá dado um passo importante no desenvolvimento do Super Trunfo - Países. Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
content_copy
