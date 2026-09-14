#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int a, b;
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao;
    float x, y, resultado;
    float altura, peso;

    // 1. Nome
    printf("Digite seu nome: ");
    scanf("%s", &nome);                // Primeiro erro:    scanf("%s", nome);     falta &
    printf("Ola, %s!\n", nome);        // Segundo erro:    printf("Ola, %d!\n", nome);    para char[], usa %s

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);               // Quinto erro:     scanf("%f", &idade);    deveria ser %d para INTEIROS

    if (idade >= 18)
        printf("Entrada permitida\n");
    else
        printf("Entrada nao permitida\n");

    // 3. Soma
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma = %d\n", a + b);        // Terceiro erro:     printf("Soma = %d\n", a - b);   Erro aritmético: Usando subtração ao invés de soma

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b);        

    if (a > b)                          // Quarto Erro:    if (a < b)    Erro aritmético: usando < ao invés de >
        printf("Maior = %d\n", a);
    else
        printf("Maior = %d\n", b);

    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2.0;       // Sexto Erro:    media = nota1 - nota2;    Erro aritmético: usando subtração ao invés de soma e faltou dividir por 2

    if (media >= 6)                        // Possível erro:     if (media >= 7)    Normalmente é aprovado quando >= 6
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero < 0)                      // Sétimo erro:    if (numero > 0)    Erro aritmético: usando < ao invés de >
        printf("Negativo\n");
    else if (numero > 0)                 // Oitávo erro:    else if (numero < 0)    Erro aritmético: usando > ao invés de <
        printf("Positivo\n");
    else
        printf("Zero\n");

    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)                // Nono erro:   if (numero % 2 == 1)    Quando resta 1 é impar, não par
        printf("Par\n");
    else
        printf("Impar\n");

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;   // Soma 
            break;
        case 2:
            resultado = x - y;   // Subtracao
            break;
        case 3:
            resultado = x * y;   // Multiplicacao
            break;
        case 4:
            resultado = x / y;   // Divisao
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %.2f\n", resultado);    // Decimo erro:       printf("Resultado = %d\n", resultado);    Deveria usar %.(numero)f ao invés de %d

    // 9. Salario
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salario *= 1.10;        // Decimo primeiro erro:    salario = salario - salario * 0.10;    Deveria ser um aumento de 10%

    printf("Novo salario: %.2f\n", salario);

    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", &nome);        // Decimo segundo erro:    scanf("%s", nome);    Faltou &

    printf("Digite sua nota: ");
    scanf("%f", &nota1);       // Decimo sexto erro:    scanf("%d", &nota1);    Usando %d ao invés de %f   

    if (nota1 >= 60.0)          
        printf("%s: aprovado\n", nome);
    else 
        printf("%s: reprovado\n", nome);
    

    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("\nNome: ");
    scanf("%s", &nome);           // Decimo terceiro erro:    scanf("%s", nome);    Faltou &

    printf("\nIdade: ");
    scanf("%d", &idade);

    printf("\nAltura: ");
    scanf("%f", &altura);      // Decimo quarto erro    scanf("%d", &altura);    Usando %d ao invés de %f

    printf("\nPeso: ");
    scanf("%f", &peso);        // Decimo quinto erro:    scanf("%d", &peso);    Usando %d ao invés de %f   

    printf("\n===== RELATORIO =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}
