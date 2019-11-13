# #2 Trabalho - Tópicos de Programação 1

## Entradas
Todas as entradas possuem como características comuns um identificador único e o nome do proprietário

### Terrenos

- Identificação do seu tipo predominante de solo
*(arenoso, argiloso, rochoso)*
- Preço do metro quadrado do terreno
- Formato *(triangular, retangular e trapezoidal)*
    - **Triangulo:** base e altura
    - **Retângulo:** tamanho dos lados
    - **Trapezio:** base maior, base menor e altura

### Residências

- Número de quartos
- Número de vagas de garagem
- Preço do metro quadrado de área construída
    - Casas
        - Número de pavimentos
        - Área construída por pavimento **(m<sup>2</sup>)**
        - Área livre **(m<sup>2</sup>)**
        - Preço do metro quadrado de área livre
    - Apartamentos
        - Número do andar que está localizado
        - Área construída
        - Possui área de lazer
        - Número total de andares do prédio

---
        
## Fórmula dos preços do metro quadrado
Para cada tipo de imóvel, existe uma fórmula para calcular o seu preço

### Terrenos:

```c
preco = precoMetroQuadradoTerreno * area * fator
```

_Fatores:_
- fatorArenoso = 0.9
- fatorArgiloso = 1.3 
- fatorRochoso = 1.1

### Residências:

- **Casas:**

```c
preco = (precoMetroQuadradoAreaConstruida * areaPavimento * numeroPavimentos) + (precoMetroQuadradoAreaLivre * areaLivre)
```

- **Apartamentos:**

```c
preco = precoMetroQuadradoAreaConstruida * areaConstruida * (0.9 + (andarApto/totalAndaresPredio)) * fatorLazer
```
_Fatores Lazer:_
- fatorLazerTrue = 1.15
- fatorLazerFalse = 1.0

---

