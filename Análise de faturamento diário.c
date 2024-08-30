#include <stdio.h>

#define TAMANHO 5 // Exemplo de número de dias

int main() {
    float faturamento[TAMANHO] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0};
    float menor = -1, maior = -1, soma = 0;
    int diasComFaturamento = 0, diasAcimaMedia = 0;

    // Encontrando o menor e maior faturamento e calculando a soma
    for (int i = 0; i < TAMANHO; i++) {
        if (faturamento[i] > 0) {
            if (menor == -1 || faturamento[i] < menor) {
                menor = faturamento[i];
            }
            if (maior == -1 || faturamento[i] > maior) {
                maior = faturamento[i];
            }
            soma += faturamento[i];
            diasComFaturamento++;
        }
    }

    // Calculando a média
    float media = soma / diasComFaturamento;

    // Contando os dias acima da média
    for (int i = 0; i < TAMANHO; i++) {
        if (faturamento[i] > media) {
            diasAcimaMedia++;
        }
    }

    printf("Menor faturamento: %.2f\n", menor);
    printf("Maior faturamento: %.2f\n", maior);
    printf("Dias acima da média: %d\n", diasAcimaMedia);

    return 0;
}
