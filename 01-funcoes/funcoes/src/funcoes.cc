// Copyright 2010 Universidade Federal de Minas Gerais (UFMG)

#include <math.h>
#define _USE_MATH_DEFINES

#include "funcoes/src/funcoes.h"

float media(float a, float b, float c) {
  return (a + b + c) / 3;
}

float media_ponderada(float a, float b, float c) {
  return ((a * 3) + (b * 4) + (c * 5)) / 12;
}

float perimetro(float r) {
  return 2 * M_PI * r;
}

float area_circulo(float r) {
  return M_PI * pow(r, 2);
}

float area_triangulo(float b, float c) {
  return (b * c)/2;
}

float area_caixa(float a, float b, float c) {
  return (2 * a * b) + ( 2 * a * c) + (2 * b * c);
}

float volume_caixa(float a, float b, float c) {
  return a * b * c;
}

float area_cilindro(float r, float h) {
  return (2 * area_circulo(r)) + (2 * M_PI * r * h);
}

float volume_cilindro(float r, float h) {
  return area_circulo(r) * h;
}

float hipotenusa(float b, float c) {
  return sqrt(pow(b, 2), pow(c, 2));
}
