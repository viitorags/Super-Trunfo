# Super-Trunfo

Um jogo simples de cartas que compara características de diferentes cidades brasileiras.

## Como Compilar e Executar

1. Certifique-se de ter um compilador C instalado (como gcc)
2. Abra o terminal na pasta do projeto
3. Compile o programa:
   ```bash
   make super_trunfo.c
   ```
4. Execute o programa:
   ```bash
   ./super_trunfo
   ```

## Como Jogar

1. O programa irá pedir informações para duas cartas de cidades
2. Para cada carta, você precisará informar:
   - Estado: Uma letra de 'A' a 'H'
   - Código: A letra do estado seguida de um número de 01 a 04
   - Nome da cidade
   - População
   - Área da cidade (em km²)
   - PIB (em bilhões de reais)
   - Quantidade de pontos turísticos

3. Após inserir os dados das duas cartas, o programa exibirá as informações de ambas para comparação.

## Exemplo de Entrada

```
Carta 1:
Estado: A
Código: A01
Cidade: São Paulo
População: 12325000
Área: 1521.11
PIB: 699.28
Pontos Turísticos: 50
```