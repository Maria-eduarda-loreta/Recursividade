//1- 
#include <stdio.h>

int calcular_fatorial(int numero) {
    if (numero == 0) return 1;
    return numero * calcular_fatorial(numero - 1);
}

int main() {
    int valor = 6;
    printf("O fatorial de %d é: %d\n", valor, calcular_fatorial(valor));
    return 0;
}

//2-
#include <stdio.h>

int somar_naturais(int total) {
    if (total == 0) return 0;
    return total + somar_naturais(total - 1);
}

int main() {
    int limite = 7;
    printf("A soma dos primeiros %d números naturais é: %d\n", limite, somar_naturais(limite));
    return 0;
}

//3-
#include <stdio.h>

int termo_fibonacci(int indice) {
    if (indice == 0) return 0;
    if (indice == 1) return 1;
    return termo_fibonacci(indice - 1) + termo_fibonacci(indice - 2);
}

int main() {
    int posicao = 8;
    printf("O termo %d da sequência de Fibonacci é: %d\n", posicao, termo_fibonacci(posicao));
    return 0;
}

//4-
#include <stdio.h>

int calcular_potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    return base * calcular_potencia(base, expoente - 1);
}

int main() {
    int numero = 3, potencia = 4;
    printf("%d elevado a %d é: %d\n", numero, potencia, calcular_potencia(numero, potencia));
    return 0;
}

//5-
#include <stdio.h>

void exibir_regressiva(int inicio) {
    if (inicio < 0) return;
    printf("%d ", inicio);
    exibir_regressiva(inicio - 1);
}

int main() {
    int inicio = 5;
    printf("Iniciando a contagem regressiva a partir de %d: ", inicio);
    exibir_regressiva(inicio);
    printf("\n");
    return 0;
}

//6-
#include <stdio.h>

int somar_digitos(int valor) {
    if (valor == 0) return 0;
    return (valor % 10) + somar_digitos(valor / 10);
}

int main() {
    int numero = 9876;
    printf("A soma dos dígitos de %d é: %d\n", numero, somar_digitos(numero));
    return 0;
}

//7-
#include <stdio.h>
#include <string.h>

void reverter_string(char *texto, int inicio, int fim) {
    if (inicio >= fim) return;
    
    char aux = texto[inicio];
    texto[inicio] = texto[fim];
    texto[fim] = aux;
    
    reverter_string(texto, inicio + 1, fim - 1);
}

int main() {
    char palavra[] = "computador";
    reverter_string(palavra, 0, strlen(palavra) - 1);
    printf("A palavra invertida é: %s\n", palavra);
    return 0;
}

//8-
#include <stdio.h>
#include <string.h>

int eh_palindromo(char *texto, int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (texto[inicio] != texto[fim]) return 0;
    return eh_palindromo(texto, inicio + 1, fim - 1);
}

int main() {
    char palavra1[] = "arara";
    int tamanho = strlen(palavra1) - 1;
    printf("%d\n", eh_palindromo(palavra1, 0, tamanho)); 
    char palavra2[] = "casa";
    tamanho = strlen(palavra2) - 1;
    printf("%d\n", eh_palindromo(palavra2, 0, tamanho)); 
    return 0;
}

//9-
#include <stdio.h>

int calcular_mdc(int numero1, int numero2) {
    if (numero2 == 0) return numero1;
    return calcular_mdc(numero2, numero1 % numero2);
}

int main() {
    printf("%d\n", calcular_mdc(48, 18)); 
    return 0;
}

//10-
#include <stdio.h>

int multiplicar(int multiplicando, int multiplicador) {
    if (multiplicador == 0) return 0;
    return multiplicando + multiplicar(multiplicando, multiplicador - 1);
}

int main() {
    printf("%d\n", multiplicar(4, 5)); 
    return 0;
}

//11-
#include <stdio.h>

int contar_caractere(char *texto, char caractere) {
    if (*texto == '\0') return 0;
    return (*texto == caractere) + contar_caractere(texto + 1, caractere);
}

int main() {
    printf("%d\n", contar_caractere("abracadabra", 'a')); 
    return 0;
}

//12-
#include <stdio.h>

int somar_array(int vetor[], int tamanho) {
    if (tamanho == 0) return 0;
    return vetor[tamanho - 1] + somar_array(vetor, tamanho - 1);
}

int main() {
    int numeros[] = {1, 2, 3, 4};
    printf("%d\n", somar_array(numeros, 4));
    return 0;
}

//13-
#include <stdio.h>
#include <math.h>

int eh_primo_aux(int numero, int divisor) {
    if (divisor == 1) return 1;
    if (numero % divisor == 0) return 0;
    return eh_primo_aux(numero, divisor - 1);
}

int eh_primo(int numero) {
    if (numero <= 1) return 0;
    return eh_primo_aux(numero, (int)sqrt(numero));
}

int main() {
    printf("%d\n", eh_primo(7)); 
    printf("%d\n", eh_primo(9)); 
    return 0;
}

//14-
#include <stdio.h>

void decimal_para_binario(int decimal) {
    if (decimal == 0) return;
    decimal_para_binario(decimal / 2);
    printf("%d", decimal % 2);
}

int main() {
    decimal_para_binario(10); 
    printf("\n");
    return 0;
}

//15-
#include <stdio.h>

void imprimir_pares(int limite) {
    if (limite < 0) return;
    imprimir_pares(limite - 2);
    printf("%d ", limite);
}

int main() {
    imprimir_pares(6);
    printf("\n");
    return 0;
}

//16-
#include <stdio.h>

void imprimir_impares(int limite) {
    if (limite < 1) return;
    imprimir_impares(limite - 2);
    printf("%d ", limite);
}

int main() {
    imprimir_impares(7); 
    printf("\n");
    return 0;
}

//17-
#include <stdio.h>

int buscar_elemento(int vetor[], int tamanho, int elemento) {
    if (tamanho == 0) return 0;
    if (vetor[tamanho - 1] == elemento) return 1;
    return buscar_elemento(vetor, tamanho - 1, elemento);
}

int main() {
    int numeros[] = {2, 4, 6, 8};
    printf("%d\n", buscar_elemento(numeros, 4, 6)); 
    printf("%d\n", buscar_elemento(numeros, 4, 5)); 
    return 0;
}
//18-
#include <stdio.h>

int comprimento_string(char *texto) {
    if (*texto == '\0') return 0;
    return 1 + comprimento_string(texto + 1);
}

int main() {
    printf("%d\n", comprimento_string("recursivo")); 
    return 0;
}

//19-
#include <stdio.h>

void torre_hanoi(int discos, char origem, char destino, char auxiliar) {
    if (discos == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }
    torre_hanoi(discos - 1, origem, auxiliar, destino);
    printf("Mover disco %d de %c para %c\n", discos, origem, destino);
    torre_hanoi(discos - 1, auxiliar, destino, origem);
}

int main() {
    torre_hanoi(2, 'A', 'C', 'B');
    return 0;
}

//20-
#include <stdio.h>
#include <string.h>

void trocar(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutacoes(char *texto, int inicio, int fim) {
    if (inicio == fim) {
        printf("%s\n", texto);
    } else {
        for (int i = inicio; i <= fim; i++) {
            trocar(&texto[inicio], &texto[i]);
            permutacoes(texto, inicio + 1, fim);
            trocar(&texto[inicio], &texto[i]);
        }
    }
}

int main() {
    char texto[] = "abc";
    permutacoes(texto, 0, strlen(texto) - 1);
    return 0;
}

//21-
#include <stdio.h>

void combinacoes(int vetor[], int combinacao[], int inicio, int fim, int posicao, int tamanho_combinacao) {
    if (posicao == tamanho_combinacao) {
        printf("{");
        for (int i = 0; i < tamanho_combinacao; i++) {
            printf("%d", combinacao[i]);
            if (i < tamanho_combinacao - 1) printf(", ");
        }
        printf("}\n");
        return;
    }
    
    for (int i = inicio; i <= fim && fim - i + 1 >= tamanho_combinacao - posicao; i++) {
        combinacao[posicao] = vetor[i];
        combinacoes(vetor, combinacao, i + 1, fim, posicao + 1, tamanho_combinacao);
    }
}

int main() {
    int numeros[] = {1, 2, 3};
    int k = 2;
    int combinacao[k];
    combinacoes(numeros, combinacao, 0, 2, 0, k);
    return 0;
}

//22-
#include <stdio.h>

void subconjuntos(int vetor[], int tamanho, int indice, int subconjunto[], int tamanho_subconjunto) {
    if (indice == tamanho) {
        printf("{");
        for (int i = 0; i < tamanho_subconjunto; i++) {
            printf("%d", subconjunto[i]);
            if (i < tamanho_subconjunto - 1) printf(", ");
        }
        printf("}\n");
        return;
    }
    
    subconjuntos(vetor, tamanho, indice + 1, subconjunto, tamanho_subconjunto);
    
    subconjunto[tamanho_subconjunto] = vetor[indice];
    subconjuntos(vetor, tamanho, indice + 1, subconjunto, tamanho_subconjunto + 1);
}

int main() {
    int numeros[] = {1, 2};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int subconjunto[n];
    subconjuntos(numeros, n, 0, subconjunto, 0);
    return 0;
}

//23-
#include <stdio.h>
#include <stdlib.h>

void mesclar(int vetor[], int esquerda, int meio, int direita) {
    int i, j, k;
    int tamanho_esquerda = meio - esquerda + 1;
    int tamanho_direita = direita - meio;
    
    int vetor_esquerdo[tamanho_esquerda], vetor_direito[tamanho_direita];
    
    for (i = 0; i < tamanho_esquerda; i++)
        vetor_esquerdo[i] = vetor[esquerda + i];
    for (j = 0; j < tamanho_direita; j++)
        vetor_direito[j] = vetor[meio + 1 + j];
    
    i = 0;
    j = 0;
    k = esquerda;
    
    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (vetor_esquerdo[i] <= vetor_direito[j]) {
            vetor[k] = vetor_esquerdo[i];
            i++;
        } else {
            vetor[k] = vetor_direito[j];
            j++;
        }
        k++;
    }
    
    while (i < tamanho_esquerda) {
        vetor[k] = vetor_esquerdo[i];
        i++;
        k++;
    }
    
    while (j < tamanho_direita) {
        vetor[k] = vetor_direito[j];
        j++;
        k++;
    }
}

void merge_sort(int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        merge_sort(vetor, esquerda, meio);
        merge_sort(vetor, meio + 1, direita);
        mesclar(vetor, esquerda, meio, direita);
    }
}

int main() {
    int numeros[] = {5, 3, 8, 1};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    merge_sort(numeros, 0, n - 1);
    
    for (int i = 0; i < n; i++)
        printf("%d ", numeros[i]);
    printf("\n");
    return 0;
}

//24-
#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int vetor[], int baixo, int alto) {
    int pivo = vetor[alto];
    int i = (baixo - 1);
    
    for (int j = baixo; j <= alto - 1; j++) {
        if (vetor[j] < pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i + 1], &vetor[alto]);
    return (i + 1);
}

void quick_sort(int vetor[], int baixo, int alto) {
    if (baixo < alto) {
        int indice_pivo = particionar(vetor, baixo, alto);
        quick_sort(vetor, baixo, indice_pivo - 1);
        quick_sort(vetor, indice_pivo + 1, alto);
    }
}

int main() {
    int numeros[] = {9, 2, 5, 1, 7};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    quick_sort(numeros, 0, n - 1);
    
    for (int i = 0; i < n; i++)
        printf("%d ", numeros[i]);
    printf("\n");
    return 0;
}

//25-
#include <stdio.h>

int busca_binaria(int vetor[], int esquerda, int direita, int alvo) {
    if (direita >= esquerda) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        if (vetor[meio] == alvo)
            return meio;
        
        if (vetor[meio] > alvo)
            return busca_binaria(vetor, esquerda, meio - 1, alvo);
        
        return busca_binaria(vetor, meio + 1, direita, alvo);
    }
    return -1;
}

int main() {
    int numeros[] = {1, 3, 5, 7, 9};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int alvo = 5;
    int resultado = busca_binaria(numeros, 0, n - 1, alvo);
    printf("%d\n", resultado);
    return 0;
}

//26-
#include <stdio.h>

int exponenciacao_rapida(int base, int expoente) {
    if (expoente == 0) return 1;
    if (expoente % 2 == 0) {
        int temp = exponenciacao_rapida(base, expoente / 2);
        return temp * temp;
    } else {
        return base * exponenciacao_rapida(base, expoente - 1);
    }
}

int main() {
    printf("%d\n", exponenciacao_rapida(3, 4));
    return 0;
}

//27-
#include <stdio.h>

void imprimir_caminho(int x_atual, int y_atual, int x_destino, int y_destino, char caminho[], int posicao) {
    if (x_atual == x_destino && y_atual == y_destino) {
        caminho[posicao] = '\0';
        printf("%s\n", caminho);
        return;
    }
    
    if (x_atual < x_destino) {
        caminho[posicao] = 'B'; 
        imprimir_caminho(x_atual + 1, y_atual, x_destino, y_destino, caminho, posicao + 1);
    }
    
    if (y_atual < y_destino) {
        caminho[posicao] = 'D'; 
        imprimir_caminho(x_atual, y_atual + 1, x_destino, y_destino, caminho, posicao + 1);
    }
}

int main() {
    char caminho[100];
    printf("Caminhos possíveis:\n");
    imprimir_caminho(0, 0, 2, 2, caminho, 0);
    return 0;
}

//28-
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool posicao_segura(int **tabuleiro, int linha, int coluna, int N) {
    int i, j;
    
    for (i = 0; i < coluna; i++)
        if (tabuleiro[linha][i])
            return false;

    for (i = linha, j = coluna; i >= 0 && j >= 0; i--, j--)
        if (tabuleiro[i][j])
            return false;

    for (i = linha, j = coluna; j >= 0 && i < N; i++, j--)
        if (tabuleiro[i][j])
            return false;
    
    return true;
}

bool resolver_n_rainhas(int **tabuleiro, int coluna, int N) {
    if (coluna >= N)
        return true;
    
    for (int i = 0; i < N; i++) {
        if (posicao_segura(tabuleiro, i, coluna, N)) {
            tabuleiro[i][coluna] = 1;
            
            if (resolver_n_rainhas(tabuleiro, coluna + 1, N))
                return true;
            
            tabuleiro[i][coluna] = 0;
        }
    }
    
    return false;
}

void imprimir_tabuleiro(int **tabuleiro, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
}

int main() {
    int N = 4;
    int **tabuleiro = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
        tabuleiro[i] = (int *)calloc(N, sizeof(int));
    
    if (resolver_n_rainhas(tabuleiro, 0, N))
        imprimir_tabuleiro(tabuleiro, N);
    else
        printf("Não há solução\n");
    
    for (int i = 0; i < N; i++)
        free(tabuleiro[i]);
    free(tabuleiro);
    return 0;
}

//29-
#include <stdio.h>
#include <stdbool.h>

#define LINHAS 3
#define COLUNAS 4

bool resolver_labirinto(int labirinto[LINHAS][COLUNAS], int x, int y, int solucao[LINHAS][COLUNAS]) {
    if (x == LINHAS - 1 && y == COLUNAS - 1 && labirinto[x][y] == 0) {
        solucao[x][y] = 1;
        return true;
    }
    
    if (x >= 0 && x < LINHAS && y >= 0 && y < COLUNAS && labirinto[x][y] == 0) {
        if (solucao[x][y] == 1)
            return false;
        
        solucao[x][y] = 1;
        
        if (resolver_labirinto(labirinto, x + 1, y, solucao))
            return true;
        
        if (resolver_labirinto(labirinto, x, y + 1, solucao))
            return true;
    
        if (resolver_labirinto(labirinto, x - 1, y, solucao))
            return true;
     
        if (resolver_labirinto(labirinto, x, y - 1, solucao))
            return true;
        
        solucao[x][y] = 0;
        return false;
    }
    return false;
}

void imprimir_solucao(int solucao[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++)
            printf("%d ", solucao[i][j]);
        printf("\n");
    }
}

int main() {
    int labirinto[LINHAS][COLUNAS] = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0}
    };
    
    int solucao[LINHAS][COLUNAS] = {0};
    
    if (resolver_labirinto(labirinto, 0, 0, solucao))
        imprimir_solucao(solucao);
    else
        printf("Não há solução\n");
    
    return 0;
}

//30-
#include <stdio.h>
#include <stdlib.h>

void gerar_parenteses(char *sequencia, int posicao, int n, int abertos, int fechados) {
    if (fechados == n) {
        printf("%s\n", sequencia);
        return;
    }
    
    if (abertos > fechados) {
        sequencia[posicao] = ')';
        gerar_parenteses(sequencia, posicao + 1, n, abertos, fechados + 1);
    }
    
    if (abertos < n) {
        sequencia[posicao] = '(';
        gerar_parenteses(sequencia, posicao + 1, n, abertos + 1, fechados);
    }
}

int main() {
    int n = 3;
    char *sequencia = (char *)malloc(2 * n + 1);
    sequencia[2 * n] = '\0';
    gerar_parenteses(sequencia, 0, n, 0, 0);
    free(sequencia);
    return 0;
}
