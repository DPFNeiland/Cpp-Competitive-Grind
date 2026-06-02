# C++ Competitive Grind - Estudos e Maratona de Programação

> Repositório dedicado a estudos de algoritmos, estruturas de dados e resolução de problemas de programação competitiva em C++.

Este projeto concentra exercícios, implementações de conceitos fundamentais e soluções de problemas de plataformas e competições de programação. O objetivo é reunir, em um único ambiente, materiais de prática para reforço de lógica, domínio da linguagem C++ e preparo para desafios acadêmicos e competitivos.

---

## Sobre o projeto

O repositório foi organizado para servir como base de estudo contínuo em C++, com foco em:

- prática de fundamentos da linguagem;
- estudo de estruturas condicionais, loops, arrays, matrizes, funções e recursividade;
- implementação de estruturas de dados e técnicas clássicas;
- resolução de problemas de plataformas online;
- treino para competições como OBI, Maratona SBC, Maratona Paulista e contests similares.

Os arquivos são, em sua maioria, independentes entre si. Cada arquivo `.cpp` representa uma solução específica, experimento de estudo ou implementação pontual de algum conceito importante para programação competitiva.

---

## Estrutura do repositório

```text
.
|- CeCPP/
|  |- andre_cpp.cpp          # exercícios e soluções de prática em C++
|  |- bruno.cpp              # códigos avulsos de estudo
|  `- toupeira.cpp           # problemas e experimentos pontuais
|- Estudos/
|  |- Aprendendo/            # primeiros códigos, testes e revisões
|  |- Array/                 # problemas envolvendo vetores e strings
|  |- Bitmask/               # estudos introdutórios de bitmask
|  |- ComecandoDoZero/       # exercícios básicos de lógica
|  |- EstruturasCondicionais/# problemas com if, else e decisões
|  |- FuncaoERecursividade/  # estudos de funções e recursão
|  |- Funcoes/               # implementações usando funções
|  |- Loops/                 # problemas com repetição
|  |- Matrizes/              # exercícios envolvendo matrizes
|  |- PilhaEStruct/          # estudos de pilhas, structs e ponteiros
|  `- ProgramacaoDinamica/   # estudos de programação dinâmica
|- Problems/
|  |- atcoder/               # resolução de problemas do AtCoder
|  |- BeeCrowd/              # resolução de problemas do beecrowd
|  `- NepsAcademy/           # resolução de problemas do Neps Academy
|- Competições/
|  |- MaratonaPaulista2025/  # soluções da Maratona Paulista de Programação
|  |- MaratonaRegional2024/  # soluções da Maratona Regional
|  `- OBI/                   # soluções da Olimpíada Brasileira de Informática
|- Main/                     # códigos principais e testes locais
|- Martech/                  # exercícios e implementações específicas
`- Noic/                     # estudos e soluções relacionados ao NOIC
```

### Organização por pastas

- `Estudos`: códigos de apoio para aprendizado de fundamentos e técnicas como arrays, matrizes, loops, funções, recursividade, bitmask, pilhas, structs e programação dinâmica.
- `Problems`: soluções de problemas resolvidos em plataformas online como beecrowd, Neps Academy e AtCoder.
- `Competições`: resoluções organizadas por competição, ano ou edição, com foco em treino para maratonas e olimpíadas.
- `CeCPP`, `Main`, `Martech` e `Noic`: pastas de prática, testes locais, exercícios específicos e códigos avulsos de estudo.

---

## Tecnologias utilizadas

| Item | Descrição |
|------|-----------|
| Linguagem | C++ |
| Compilador sugerido | g++ |
| Paradigma predominante | Programas independentes para estudo e resolução de problemas |
| Entrada e saída | Leitura pela entrada padrão e escrita pela saída padrão |

---

## Como executar

Como os arquivos são independentes, basta compilar e executar o arquivo desejado pelo terminal.

Exemplo com um estudo:

```bash
g++ "Estudos/ProgramacaoDinamica/Fibonacci.cpp" -o fibonacci
./fibonacci
```

Exemplo com uma solução de problema:

```bash
g++ "Problems/BeeCrowd/Bee2413.cpp" -o bee2413
./bee2413
```

No Windows PowerShell, a execução pode ser feita assim:

```powershell
g++ "Problems\NepsAcademy\e1.Cpp" -o e1.exe
.\e1.exe
```

Em geral, os programas de problemas leem dados da entrada padrão, seguindo o formato exigido pela plataforma ou competição correspondente.

---

## Objetivos de aprendizagem

Este repositório apoia a prática de:

- lógica de programação;
- sintaxe e recursos fundamentais de C++;
- implementação de algoritmos clássicos;
- estudo de estruturas de dados;
- uso de arrays, strings, matrizes, structs, ponteiros, pilhas e recursão;
- análise de complexidade e eficiência;
- resolução de problemas sob restrição de tempo;
- organização de estudos para maratonas e olimpíadas de programação.

---

## Observações

- Alguns nomes de pastas e arquivos refletem a organização original dos estudos.
- Existem arquivos voltados tanto para experimentação quanto para submissão direta em juízes online.
- Parte dos códigos pode conter testes locais, rascunhos ou soluções em evolução.
- A estrutura do repositório pode mudar conforme novos tópicos, plataformas e competições forem adicionados.

---

## Autor

- Rodrigo Neiland
