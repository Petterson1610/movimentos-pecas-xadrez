# ♟️ Fundamentos de Programação em C: Movimentos de Xadrez

Este projeto simples foi desenvolvido como um exercício prático para o estudo e domínio de **estruturas de controle de fluxo** na linguagem C, com foco na **recursividade** e **iteração (loops)**.

O código simula a movimentação de algumas peças básicas de xadrez (Torre, Dama, Bispo e Cavalo), imprimindo a direção de cada passo no console com base na quantidade de casas informada pelo usuário.

---

## 🚀 Tecnologias e Conceitos Aplicados

| Conceito | Aplicação no Código | Peças Envolvidas |
| :--- | :--- | :--- |
| **Recursividade** | Funções que chamam a si mesmas, utilizadas para simular movimentos em linha reta e longos, definindo uma **condição de parada** clara. | Torre, Dama, Bispo |
| **Loops (do-while)** | Essencial para a **validação da entrada** do usuário, garantindo que o número de casas a ser movido esteja sempre dentro do limite de 1 a 8. | Todas (na função `main`) |
| **Loops Aninhados (for)** | O uso de um *loop* dentro de outro para simular a combinação de movimentos complexos em duas etapas. | Cavalo |
| **I/O Padrão** | Uso de `printf()` e `scanf()` para interação básica com o usuário. | Todas |

---

## 🎯 Objetivo de Aprendizagem

O principal objetivo deste exercício foi solidificar a compreensão sobre como estruturar a lógica de um programa usando **recursividade vs. iteração**.

* Demonstrar a **elegância da recursividade** em problemas que podem ser divididos em instâncias menores.
* Garantir a **robustez** do programa com a validação de dados de entrada (`do-while`).
* Praticar a sintaxe básica de **funções** e a passagem de argumentos em C.

---

## ⚙️ Como Compilar e Executar

1.  **Salve** o código em um arquivo chamado `movimentos_xadrez.c`.
2.  **Compile** usando um compilador C (como o GCC) no terminal:
    ```bash
    gcc movimentos_xadrez.c -o movimentos
    ```
3.  **Execute** o programa:
    ```bash
    ./movimentos
    ```
O programa solicitará o número de casas para cada peça, e em seguida, simulará os movimentos.
