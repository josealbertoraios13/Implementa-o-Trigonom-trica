# myMath

Biblioteca em C para funções matemáticas e trigonométricas implementadas manualmente, com foco em aproximações numéricas e séries de Taylor.

## Visão Geral

O projeto compila um executável único `my_math` que roda uma bateria de testes e exemplos de funções matemáticas implementadas em `src/trig/trig.c`.

A implementação evita o uso direto das funções trigonométricas e logarítmicas da biblioteca padrão, exceto para manter constantes e compatibilidade de linking via `-lm`.

## Recursos Implementados

### Conversão de Ângulos

* `m_deg_to_rad(double x)` - converte graus para radianos
* `m_rad_to_deg(double x)` - converte radianos para graus

### Operações Básicas

* `m_abs(double x)` - valor absoluto
* `m_sqrt(double x)` - raiz quadrada
* `m_exp(double x)` - exponencial base `e`
* `m_ln(double x)` - logaritmo natural
* `m_mod(double a, double b)` - operação de módulo para valores reais

### Funções Trigonométricas

* `m_sin(double rad)` - seno
* `m_cos(double rad)` - cosseno
* `m_tan(double rad)` - tangente

* `m_sec(double rad)` - secante
* `m_csc(double rad)` - cossecante
* `m_cot(double rad)` - cotangente

### Funções Hiperbólicas

* `m_sinh(double x)` - seno hiperbólico
* `m_cosh(double x)` - cosseno hiperbólico
* `m_tanh(double x)` - tangente hiperbólica

* `m_sech(double x)` - secante hiperbólica
* `m_csch(double x)` - cossecante hiperbólica
* `m_coth(double x)` - cotangente hiperbólica

### Funções Inversas

* `m_arcsin(double x)` - arco seno
* `m_arccos(double x)` - arco cosseno
* `m_arctan(double x)` - arco tangente

* `m_arcsec(double x)` - arco secante
* `m_arccsc(double x)` - arco cossecante
* `m_arccot(double x)` - arco cotangente

### Funções Inversas Hiperbólicas

* `m_arcsinh(double x)` - arco seno hiperbólico
* `m_arccosh(double x)` - arco cosseno hiperbólico
* `m_arctanh(double x)` - arco tangente hiperbólica

* `m_arcsech(double x)` - arco secante hiperbólica
* `m_arccsch(double x)` - arco cossecante hiperbólica
* `m_arccoth(double x)` - arco cotangente hiperbólica

## Arquitetura do Projeto

* `CMakeLists.txt` - arquivo de build principal
* `src/main.c` - executável que chama as rotinas de teste
* `src/trig/trig.c` - implementação das funções matemáticas
* `src/tests/tests.c` - casos de teste e saída de demonstração
* `include/trig.h` - cabeçalhos e constantes matemáticas
* `include/tests.h` - declarações das funções de teste

## Requisitos

* CMake 3.16 ou superior
* GCC ou compilador compatível com C17
* Biblioteca matemática padrão (`-lm`) é vinculada pelo CMake

## Como Compilar

```bash
mkdir -p build
cd build
cmake ..
cmake --build .
```

## Como Executar

```bash
./build/my_math
```

O binário exibirá exemplos e resultados de todos os testes implementados.

## Observações

* O projeto já compila com sucesso em `build`.
* O `main` não possui um framework de testes automatizado; ele executa uma sequência de funções de demonstração e imprime resultados no terminal.
* A implementação usa aproximações numéricas, então alguns valores podem divergir levemente das versões da biblioteca padrão.

## Melhorias Possíveis

* Adicionar um framework de teste unitário (por exemplo, `CTest` ou `Unity`).
* Cobrir casos de erro de entrada para funções trigonométricas inversas e hiperbólicas além das condições atuais.
* Adicionar documentação de API e exemplos de uso em código.
* Implementar mais funções matemáticas, como `m_pow`, `m_log10`, ou transformadas trigonométricas adicionais.