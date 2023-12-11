<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Derivação de Funções</title>
    <script>
        function derivar() {
            var tipoFuncao = document.getElementById('tipo-funcao').value;

            if (tipoFuncao === 'polinomio') {
                derivarPolinomio();
            } else if (tipoFuncao === 'exponencial') {
                derivarFuncaoExponencial();
            } else if (tipoFuncao === 'seno') {
                derivarSeno();
            } else if (tipoFuncao === 'cosseno') {
                derivarCosseno();
            } else if (tipoFuncao === 'logaritmo') {
                derivarLogaritmo();
            } else if (tipoFuncao === 'produto') {
                derivarRegraDoProduto();
            } else if (tipoFuncao === 'quociente') {
                derivarRegraDoQuociente();
            }
        }

        function derivarPolinomio() {
            var coeficientesInput = document.getElementById('coeficientes').value;
            var coeficientes = coeficientesInput.split(',').map(parseFloat);

            var derivada = derivarPolinomioFunc(coeficientes);

            document.getElementById('resultado-original').innerText = 'Polinômio Original: ' + coeficientes.join(', ');
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada.join(', ');
        }

        function derivarPolinomioFunc(coeficientes) {
            if (coeficientes.length < 2) {
                return [0];
            }

            var derivadaCoeficientes = coeficientes.slice(1).map(function (coef, indice) {
                return (indice + 1) * coef;
            });

            return derivadaCoeficientes;
        }

        function derivarFuncaoExponencial() {
            var coeficiente = parseFloat(document.getElementById('coeficiente').value);
            var expoente = parseFloat(document.getElementById('expoente').value);

            var derivada = derivarFuncaoExponencialFunc(coeficiente, expoente);

            document.getElementById('resultado-original').innerText = 'Função Exponencial Original: ' + coeficiente + ' * e^(' + expoente + 'x)';
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarFuncaoExponencialFunc(coeficiente, expoente) {
            var derivada = expoente * coeficiente + ' * e^(' + expoente + 'x)';
            return derivada;
        }

        function derivarSeno() {
            var amplitude = parseFloat(document.getElementById('amplitude-seno').value);
            var frequencia = parseFloat(document.getElementById('frequencia-seno').value);

            var derivada = derivarSenoFunc(amplitude, frequencia);

            document.getElementById('resultado-original').innerText = 'Função Seno Original: ' + amplitude + ' * sin(' + frequencia + 'x)';
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarSenoFunc(amplitude, frequencia) {
            var derivada = amplitude * frequencia + ' * cos(' + frequencia + 'x)';
            return derivada;
        }

        function derivarCosseno() {
            var amplitude = parseFloat(document.getElementById('amplitude-cosseno').value);
            var frequencia = parseFloat(document.getElementById('frequencia-cosseno').value);

            var derivada = derivarCossenoFunc(amplitude, frequencia);

            document.getElementById('resultado-original').innerText = 'Função Cosseno Original: ' + amplitude + ' * cos(' + frequencia + 'x)';
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarCossenoFunc(amplitude, frequencia) {
            var derivada = -amplitude * frequencia + ' * sin(' + frequencia + 'x)';
            return derivada;
        }

        function derivarLogaritmo() {
            var base = parseFloat(document.getElementById('base-logaritmo').value);

            var derivada = derivarLogaritmoFunc(base);

            document.getElementById('resultado-original').innerText = 'Função Logaritmo Original: ln(' + base + 'x)';
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarLogaritmoFunc(base) {
            // Derivada de ln(ax) é 1/x, onde x é a variável
            var derivada = '1 / x';
            return derivada;
        }

        function derivarRegraDoProduto() {
            var funcao1 = document.getElementById('funcao1-produto').value;
            var funcao2 = document.getElementById('funcao2-produto').value;

            var derivada = derivarRegraDoProdutoFunc(funcao1, funcao2);

            document.getElementById('resultado-original').innerText = 'Produto das Funções: ' + funcao1 + ' * ' + funcao2;
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarRegraDoProdutoFunc(funcao1, funcao2) {
            // Derivada da regra do produto: (u*v)' = u'v + uv'
            return '(' + funcao1 + ')' + '*' + derivarFuncaoExponencialFunc(funcao2);
        }

        function derivarRegraDoQuociente() {
            var numerador = document.getElementById('numerador-quociente').value;
            var denominador = document.getElementById('denominador-quociente').value;

            var derivada = derivarRegraDoQuocienteFunc(numerador, denominador);

            document.getElementById('resultado-original').innerText = 'Quociente das Funções: ' + numerador + ' / ' + denominador;
            document.getElementById('resultado-derivada').innerText = 'Derivada: ' + derivada;
        }

        function derivarRegraDoQuocienteFunc(numerador, denominador) {
            // Derivada da regra do quociente: (u/v)' = (u'v - uv') / v^2
            return '(' + derivarFuncaoExponencialFunc(numerador) + '*' + denominador + ' - ' + numerador + '*' + derivarFuncaoExponencialFunc(denominador) + ') / (' + denominador + '^2)';
        }
    </script>
</head>
<body>
    <h1>Derivação de Funções</h1>

    <label for="tipo-funcao">Escolha o tipo de função:</label>
    <select id="tipo-funcao">
        <option value="polinomio">Polinômio</option>
        <option value="exponencial">Função Exponencial</option>
        <option value="seno">Seno</option>
        <option value="cosseno">Cosseno</option>
        <option value="logaritmo">Logaritmo Natural</option>
        <option value="produto">Regra do Produto</option>
        <option value="quociente">Regra do Quociente</option>
    </select>

    <!-- Elementos para polinômio -->
    <div id="polinomio" style="display: block;">
        <label for="coeficientes">Digite os coeficientes do polinômio separados por vírgula:</label>
        <input type="text" id="coeficientes" placeholder="Ex: 7, -5, 2, 3">
    </div>

    <!-- Elementos para função exponencial -->
    <div id="exponencial" style="display: none;">
        <label for="coeficiente">Digite o coeficiente:</label>
        <input type="text" id="coeficiente" placeholder="Ex: 3">

        <label for="expoente">Digite o expoente:</label>
        <input type="text" id="expoente" placeholder="Ex: 2">
    </div>

    <!-- Elementos para função seno -->
    <div id="seno" style="display: none;">
        <label for="amplitude-seno">Digite a amplitude:</label>
        <input type="text" id="amplitude-seno" placeholder="Ex: 1">

        <label for="frequencia-seno">Digite a frequência:</label>
        <input type="text" id="frequencia-seno" placeholder="Ex: 2">
    </div>

    <!-- Elementos para função cosseno -->
    <div id="cosseno" style="display: none;">
        <label for="amplitude-cosseno">Digite a amplitude:</label>
        <input type="text" id="amplitude-cosseno" placeholder="Ex: 1">

        <label for="frequencia-cosseno">Digite a frequência:</label>
        <input type="text" id="frequencia-cosseno" placeholder="Ex: 2">
    </div>

    <!-- Elementos para função logaritmo -->
    <div id="logaritmo" style="display: none;">
        <label for="base-logaritmo">Digite a base do logaritmo:</label>
        <input type="text" id="base-logaritmo" placeholder="Ex: 2">
    </div>

    <!-- Elementos para regra do produto -->
    <div id="produto" style="display: none;">
        <label for="funcao1-produto">Digite a primeira função:</label>
        <input type="text" id="funcao1-produto" placeholder="Ex: x^2">

        <label for="funcao2-produto">Digite a segunda função:</label>
        <input type="text" id="funcao2-produto" placeholder="Ex: e^x">
    </div>

    <!-- Elementos para regra do quociente -->
    <div id="quociente" style="display: none;">
        <label for="numerador-quociente">Digite o numerador:</label>
        <input type="text" id="numerador-quociente" placeholder="Ex: x^2">

        <label for="denominador-quociente">Digite o denominador:</label>
        <input type="text" id="denominador-quociente" placeholder="Ex: e^x">
    </div>

    <button onclick="derivar()">Derivar</button>

    <h2>Resultados:</h2>
    <p id="resultado-original"></p>
    <p id="resultado-derivada"></p>

    <script>
        // Adiciona um ouvinte de eventos para alternar entre elementos de entrada com base no tipo de função selecionado
        document.getElementById('tipo-funcao').addEventListener('change', function () {
            var tipoFuncao = this.value;
            if (tipoFuncao === 'polinomio') {
                document.getElementById('polinomio').style.display = 'block';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'none';
                document.getElementById('quociente').style.display = 'none';
            } else if (tipoFuncao === 'exponencial') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'block';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'none';
                document.getElementById('quociente').style.display = 'none';
            } else if (tipoFuncao === 'seno') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'block';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'none';
                document.getElementById('quociente').style.display = 'none';
            } else if (tipoFuncao === 'cosseno') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'block';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'none';
                document.getElementById('quociente').style.display = 'none';
            } else if (tipoFuncao === 'logaritmo') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'block';
                document.getElementById('produto').style.display = 'none';
                document.getElementById('quociente').style.display = 'none';
              } else if (tipoFuncao === 'produto') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'block';
                document.getElementById('quociente').style.display = 'none';
            }
               else if (tipoFuncao === 'quociente') {
                document.getElementById('polinomio').style.display = 'none';
                document.getElementById('exponencial').style.display = 'none';
                document.getElementById('seno').style.display = 'none';
                document.getElementById('cosseno').style.display = 'none';
                document.getElementById('logaritmo').style.display = 'none';
                document.getElementById('produto').style.display = 'block';
                document.getElementById('quociente').style.display = 'none';
            }
          });
    </script>
</body>
</html>
