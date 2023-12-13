#include <iostream>
#include <cmath>

// Função para calcular a derivada de uma função polinomial
double derivadaPolinomial(double coeficientes[], int grau, double x) {
    double resultado = 0;
    for (int i = 1; i <= grau; i++) {
        resultado += i * coeficientes[i] * std::pow(x, i - 1);
    }
    return resultado;
}

// Função para calcular a derivada de uma função exponencial
double derivadaExponencial(double a, double x) {
    return a * std::exp(a * x);
}

// Função para calcular a derivada de uma função trigonométrica (seno)
double derivadaSeno(double x) {
    return std::cos(x);
}

// Função para calcular a derivada de uma função trigonométrica (cosseno)
double derivadaCosseno(double x) {
    return -std::sin(x);
}

// Função para calcular a derivada de uma função logarítmica
double derivadaLogaritmica(double x) {
    return 1 / x;
}

// Função para calcular a derivada da regra do produto
double derivadaProduto(double u(double), double v(double), double x) {
    return u(x) * v(x) + u(x) * v(x);
}

// Função para calcular a derivada da regra do quociente
double derivadaQuociente(double u(double), double v(double), double x) {
    return (u(x) * v(x) - u(x) * v(x)) / (v(x) * v(x));
}

int main() {
    int escolha;
    double x;

    std::cout << "Escolha o tipo de função:\n";
    std::cout << "1 - Polinomial\n";
    std::cout << "2 - Exponencial\n";
    std::cout << "3 - Trigonométrica SENO\n";
    std::cout << "4 - Trigonométrica COSSENO\n";
    std::cout << "5 - Logarítmica\n";
    std::cout << "6 - Regra do Produto\n";
    std::cout << "7 - Regra do Quociente\n";

    std::cin >> escolha;

    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    switch (escolha) {
        case 1: {
            int grau;
            std::cout << "Digite o grau do polinômio: ";
            std::cin >> grau;

            double coeficientes[grau + 1];
            std::cout << "Digite os coeficientes do polinômio, do termo constante ao termo de maior grau:\n";
            for (int i = 0; i <= grau; i++) {
                std::cin >> coeficientes[i];
            }

            double resultado = derivadaPolinomial(coeficientes, grau, x);
            std::cout << "A derivada no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 2: {
            double a;
            std::cout << "Digite o valor de a para a função exponencial: ";
            std::cin >> a;

            double resultado = derivadaExponencial(a, x);
            std::cout << "A derivada no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 3: {
            double resultado = derivadaSeno(x);
            std::cout << "A derivada no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 4: {
            double resultado = derivadaCosseno(x);
            std::cout << "A derivada no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 5: {
            double resultado = derivadaLogaritmica(x);
            std::cout << "A derivada no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 6: {
            // Defina as funções u e v para a regra do produto
            auto u = std::sin;
            auto v = std::cos;

            double resultado = derivadaProduto(u, v, x);
            std::cout << "A derivada da regra do produto no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        case 7: {
            // Defina as funções u e v para a regra do quociente
            auto u = std::sin;
            auto v = std::cos;

            double resultado = derivadaQuociente(u, v, x);
            std::cout << "A derivada da regra do quociente no ponto " << x << " é: " << resultado << "\n";
            break;
        }
        default:
            std::cout << "Opção inválida.\n";
    }

    return 0;
}
