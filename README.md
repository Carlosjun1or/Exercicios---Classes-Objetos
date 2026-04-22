# 📚 Lista de Exercícios sobre Classes e Objetos em C++

Este repositório contém uma coleção de exercícios práticos desenvolvidos em C++ com foco nos princípios fundamentais da **Programação Orientada a Objetos (POO)**. O objetivo é solidificar o entendimento de conceitos como classes, objetos, construtores, métodos e encapsulamento através de implementações claras e funcionais.

## 📋 Descrição do Projeto

O projeto consiste em um programa interativo que permite ao usuário selecionar e executar diferentes exercícios relacionados à POO. Cada exercício é implementado como uma classe separada, demonstrando a aplicação de atributos e métodos para resolver problemas específicos. O menu principal facilita a navegação entre as soluções.

### Exercícios Incluídos:

- **Operações Matemáticas:** Uma classe para realizar cálculos básicos.
- **Verificação e Classificação de Triângulos:** Uma classe para analisar as propriedades de triângulos.
- **Cálculo de Valor em Estacionamento:** Uma classe para gerenciar o cálculo de custos de estacionamento.

## ⚙️ Funcionalidades Detalhadas

### 1. Classe `Matematica`

Esta classe é projetada para demonstrar operações aritméticas básicas utilizando POO. Ela gerencia dois valores inteiros (`a` e `b`) e oferece métodos para realizar cálculos.

- **Atributos:**
  - `int a`: Primeiro operando.
  - `int b`: Segundo operando.

- **Métodos:**
  - `void entrada()`: Solicita ao usuário a entrada dos valores para `a` e `b`.
  - `int soma()`: Retorna a soma de `a` e `b`.
  - `int subtracao()`: Retorna a diferença entre `a` e `b`.
  - `int multiplicacao()`: Retorna o produto de `a` e `b`.
  - `float divisao()`: Retorna o quociente de `a` por `b`. Inclui tratamento para evitar divisão por zero.

### 2. Classe `Triangulo`

Esta classe foca na validação e classificação de triângulos com base nos comprimentos de seus lados.

- **Atributos:**
  - `float a`: Comprimento do primeiro lado.
  - `float b`: Comprimento do segundo lado.
  - `float c`: Comprimento do terceiro lado.

- **Construtor:**
  - `Triangulo(float a, float b, float c)`: Inicializa os lados do triângulo.

- **Métodos:**
  - `bool verificaTriangulo()`: Verifica se os três valores fornecidos podem formar um triângulo válido (a soma de dois lados deve ser maior que o terceiro lado).
  - `void tipoTriangulo()`: Classifica o triângulo como Equilátero, Isósceles ou Escaleno, mas somente após a validação de que os lados formam um triângulo.
    - **Equilátero:** Todos os três lados são iguais.
    - **Isósceles:** Dois lados são iguais.
    - **Escaleno:** Todos os três lados são diferentes.

### 3. Classe `Estacionamento`

Esta classe simula o cálculo do valor a ser pago em um estacionamento, baseando-se na duração da estadia.

- **Atributos:**
  - `int dia`: Dia da semana (embora não utilizado no cálculo atual, pode ser uma extensão futura).
  - `int horaEntrada`: Hora de entrada no estacionamento.
  - `int horaSaida`: Hora de saída do estacionamento.
- **Métodos:**
  - `void entrada()`: Solicita ao usuário o dia, a hora de entrada e a hora de saída.
  - `float calcularValor()`: Calcula o custo total. A regra é de **R$ 5,00 por hora**. Inclui tratamento para horários inválidos (saída antes da entrada).
