//
// Created by Maria Hilda Bermejo on 10/22/19.
//

#ifndef MAT_UFUNCIONES_H
#define MAT_UFUNCIONES_H

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
using tnumero=int;
using tmatriz = vector<vector<tnumero>>;

tmatriz crearMatriz(size_t f,size_t c);
void  llenarMatriz(tmatriz &m);
void imprimirMatriz(const tmatriz &m);
tmatriz multiplicaPorEscalar(const tmatriz &m, tnumero num);
tmatriz generar_transpuesta(tmatriz& m);
#endif //MAT_UFUNCIONES_H
