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
