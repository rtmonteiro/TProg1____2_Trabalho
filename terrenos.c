//
// Created by Pichau on 12/11/2019.
//

#include "terrenos.h"

struct terreno{
    unsigned int tipoTerreno;
    double precoMetroQuadradoTerreno;
    char* formato;
    union formatos{
        tTriangulo triangulo;
        tRetangulo retangulo;
        tTrapezio trapezio;
    };
};

struct triangulo{
    float base;
    float altura;
};

struct retangulo{
    float lado1;
    float lado2;
};

struct trapezio{
    float baseMaior;
    float baseMenor;
    float altura;
};