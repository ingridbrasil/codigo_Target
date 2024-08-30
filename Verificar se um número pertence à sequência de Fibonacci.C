#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c;
    if (num == 0 || num == 1) return 1;
    
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }
    
    return (b == num);
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num))
        printf("%d pertence à sequência de Fibonacci.\n", num);
    else
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    
    return 0;
}
