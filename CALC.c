#include <stdio.h>
#include <math.h>

// Função para calcular a derivada de uma função polinomial
double derivadaPolinomial(double coeficientes[], int grau, double x) {
    double resultado = 0;
    int i;
    for (i = 1; i <= grau; i++) {
        resultado += i * coeficientes[i] * pow(x, i - 1);
    }
    return resultado;
}

// Função para calcular a derivada de uma função exponencial
double derivadaExponencial(double a, double x) {
    return a * exp(a * x);
}

// Função para calcular a derivada de uma função trigonométrica (seno)
double derivadaTrigonometricaS(double x) {
    return cos(x);
}
double derivadaTrigonometricaC(double x) {
    return -sin(x);
}

// Função para calcular a derivada de uma função logarítmica
double derivadaLogaritmica(double x) {
    return 1 / x;
}

// Função para calcular a derivada da regra do produto
double derivadaRegraProduto(double u(double), double v(double), double x) {
    return u(x) * v(x) + u(x) * v(x);
}

// Função para calcular a derivada da regra do quociente
double derivadaRegraQuociente(double u(double), double v(double), double x) {
    return (u(x) * v(x) - u(x) * v(x)) / (v(x) * v(x));
}

int main() {
    int escolha;
    double x;

    printf("Escolha o tipo de funcao:\n");
    printf("1 - Polinomial\n");
    printf("2 - Exponencial\n");
    printf("3 - Trigonometrica SENO\n");
    printf("4 - Trigonometrica COSSENO\n");
    printf("5 - Logaritmica\n");
    printf("6 - Regra do Produto\n");
    printf("7 - Regra do Quociente\n");

    scanf("%d", &escolha);

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    switch (escolha) {
        case 1: {
            int grau;
            printf("Digite o grau do polinomio: ");
            scanf("%d", &grau);

            double coeficientes[grau + 1];
            printf("Digite os coeficientes do polinomio, do termo constante ao termo de maior grau:\n");
            for (int i = 0; i <= grau; i++) {
                scanf("%lf", &coeficientes[i]);
            }

            double resultado = derivadaPolinomial(coeficientes, grau, x);
            printf("A derivada no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        case 2: {
            double a;
            printf("Digite o valor de a para a funcao exponencial: ");
            scanf("%lf", &a);

            double resultado = derivadaExponencial(a, x);
            printf("A derivada no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        case 3: {
            double resultado = derivadaTrigonometricaS(x);
            printf("A derivada no ponto %lf e: %lf\n", x, resultado);
            break;
        }
             case 4: {
            double resultado = derivadaTrigonometricaC(x);
            printf("A derivada no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        case 5: {
            double resultado = derivadaLogaritmica(x);
            printf("A derivada no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        case 6: {
            // Defina as funções u e v para a regra do produto
            double (*u)(double) = sin;
            double (*v)(double) = cos;

            double resultado = derivadaRegraProduto(u, v, x);
            printf("A derivada da regra do produto no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        case 7: {
            // Defina as funções u e v para a regra do quociente
            double (*u)(double) = sin;
            double (*v)(double) = cos;

            double resultado = derivadaRegraQuociente(u, v, x);
            printf("A derivada da regra do quociente no ponto %lf e: %lf\n", x, resultado);
            break;
        }
        default:
            printf("Opcao invalida.\n");
    }

return 0;
}
