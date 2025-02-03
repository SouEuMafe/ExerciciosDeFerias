//Exercícios capítulo 1 do livro do André Backers
//Exercício 1, Cap 1

#include <stdio.h>
int main(){
    printf("Início do programa.\n Fim.\n")
    return 0;

}

// Exercício 2, cap 1
#include <stdio.h>

int main() {
    int num;  // Adicionado o ponto e vírgula

    printf("Insira um número inteiro:\n");
    scanf("%d", &num);

    return 0;
}

//Exercício 3, cap 1
#include <stdio.h>

int main() {
    int num;

    printf("Insira um número inteiro:\n");
    scanf("%d", &num);

    printf("Valor lido: %d\n", num);

    return 0;
}

//Exercício 8, cap 1
#include <stdio.h>
int main(){
    int num1, num2;

    printf("Insira o primeiro número inteiro:\n");
    scanf("%d",&num1)

    printf("Insira o segundo número inteiro:\n");
    scanf("%d",&num2);

    printf("Ordem inversa dos números: %d %d\n", &num2, &num1);
    return 0;

}

//Exercício 9, cap 1
#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("Insira dois valores(separando-os por espaço):\n");
    scanf("%f %f", &num1, &num2);
    
    printf("Ordem inversa dos números: %.2f %.2f\n", num2, num1);
    
    return 0;
}

//Exercício 10, cap 1
#include <stdio.h>

int main() {
    int dia, mes, ano;

    printf("Insira o dia, mês e ano (separados por espaço):\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Data inserida: %d/%d/%d\n", dia, mes, ano);

    return 0;
}

//Exercício 11, cap 1
#include <stdio.h>

#define PI = 3.1415
int main(){
    printf("O valor da constante é: %.2f\n", CONSTANTE);
    
    return 0;

}

//Exercício 13, cap 1
#include <stdio.h>

int main() {
    char caractere;
    
    printf("Insira qualquer caractere:\n");
    scanf("%c", &caractere);
    
    printf("\"%c\"\n", caractere);
    
    return 0;
}

//Exercício 15, cap 1
#include <stdio.h>

int main() {
    char caractere;
    int numero;
    float valor;

    printf("Insira um caractere, um número inteiro e um número decimal (separados por espaço):\n");
    scanf("%c %d %f", &caractere, &numero, &valor);

    // Imprimindo as variáveis de três maneiras diferentes

    printf("%c %d %.2f\n", caractere, numero, valor);

    printf("%c\t%d\t%.2f\n", caractere, numero, valor);

    printf("%c\n%d\n%.2f\n", caractere, numero, valor);

    return 0;
}
