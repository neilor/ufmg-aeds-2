// Copyright 2011 Universidade Federal de Minas Gerais (UFMG)
//
// Lista de exercícios sobre funções em C++.
//
// QUESTÃO 1:
// Implemente em funcoes.cc as funções descritas em funcoes.h.
//
// QUESTÃO 2:
// Escreva um programa que (i) apresenta um menu com as funções que você
// programaou na questão anterior e após o usuário escolher uma das funções
// (ii) lê o valor dos parâmetros e (iii) exibe o resultado da função.

#include <iostream>
using namespace std;

#include "funcoes/src/funcoes.h"

int main() {
  int selected_option;

  // Credits
  cout << "Developed by Neilor Caldeira at UFMG" << endl << endl;

  do {
    cout << "========== Lista 01 - Funções ==========" << endl;
    cout << "[ 1] - Média" << endl;
    cout << "[ 2] - Média Ponderada" << endl;
    cout << "[ 3] - Perímetro" << endl;
    cout << "[ 4] - Área de Círculo" << endl;
    cout << "[ 5] - Área de Triângulo" << endl;
    cout << "[ 6] - Área de Caixa" << endl;
    cout << "[ 7] - Volume de Caixa" << endl;
    cout << "[ 8] - Área de Cilindro" << endl;
    cout << "[ 9] - Volume de Cilindro" << endl;
    cout << "[10] - Hipotenusa" << endl;
    cout << "[ 0] - Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> selected_option;
    cout << endl;

    float p1, p2, p3;

    switch(selected_option){
      case 0:
        cout << "Sair" << endl << endl;
        break;
      case 1:
        cout << "float media(float a, float b, float c)" << endl;

        // Get params
        cout << " a = ";
        cin >> p1;
        cout << endl;
        cout << " b = ";
        cin >> p2;
        cout << endl;
        cout << " c = ";
        cin >> p3;
        cout << endl;

        cout "=> " << media(p1, p2, p3) << endl << endl;

        break;

      case 2:
        cout << "float media_ponderada(float a, float b, float c)" << endl;

        // Get params
        cout << " a(peso 3) = ";
        cin >> p1;
        cout << endl;
        cout << " b(peso 4) = ";
        cin >> p2;
        cout << endl;
        cout << " c(peso 5) = ";
        cin >> p3;
        cout << endl;

        cout "=> " << media_ponderada(p1, p2, p3) << endl << endl;

        break;

      case 3:
        cout << "float perimetro(float raio)" << endl;

        // Get params
        cout << " raio = ";
        cin >> p1;
        cout << endl;

        cout "=> " << perimetro(p1) << endl << endl;

        break;

      case 4:
        cout << "float area_circulo(float raio)" << endl;

        // Get params
        cout << " raio = ";
        cin >> p1;
        cout << endl;

        cout "=> " << area_circulo(p1) << endl << endl;

        break;

      case 5:
        cout << "float area_triangulo(float base, float altura)" << endl;

        // Get params
        cout << " base = ";
        cin >> p1;
        cout << endl;
        cout << " altura = ";
        cin >> p2;
        cout << endl;

        cout "=> " << area_triangulo(p1, p2) << endl << endl;

        break;

      case 6:
        cout << "float area_caixa(float a, float b, float c)" << endl;

        // Get params
        cout << " a = ";
        cin >> p1;
        cout << endl;
        cout << " b = ";
        cin >> p2;
        cout << endl;
        cout << " c = ";
        cin >> p3;
        cout << endl;

        cout "=> " << area_caixa(p1, p2, p3) << endl << endl;

        break;

      case 7:
        cout << "float volume_caixa(float a, float b, float c)" << endl;

        // Get params
        cout << " a = ";
        cin >> p1;
        cout << endl;
        cout << " b = ";
        cin >> p2;
        cout << endl;
        cout << " c = ";
        cin >> p3;
        cout << endl;

        cout "=> " << volume_caixa(p1, p2, p3) << endl << endl;

        break;

      case 8:
        cout << "float area_cilindro(float raio, float altura)" << endl;

        // Get params
        cout << " raio = ";
        cin >> p1;
        cout << endl;
        cout << " altura = ";
        cin >> p2;
        cout << endl;

        cout "=> " << area_cilindro(p1, p2) << endl << endl;

        break;

      case 9:
        cout << "float volume_cilindro(float raio, float altura)" << endl;

        // Get params
        cout << " raio = ";
        cin >> p1;
        cout << endl;
        cout << " altura = ";
        cin >> p2;
        cout << endl;

        cout "=> " << volume_cilindro(p1, p2) << endl << endl;

        break;

      case 10:
        cout << "float hipotenusa(float lado_b, float lado_c)" << endl;

        // Get params
        cout << " lado_b = ";
        cin >> p1;
        cout << endl;
        cout << " lado_c = ";
        cin >> p2;
        cout << endl;

        cout "=> " << hipotenusa(p1, p2) << endl << endl;

        break;

      default:
        cout << "Opção inválida" << endl << endl;
        break;
    }

  } while(selected_option != 0)

  return 0;
}


