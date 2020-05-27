//
// Created by Maria Hilda Bermejo on 10/22/19.
//
#include "Ufunciones.h"

tmatriz crearMatriz(size_t f,size_t c)
{//-----------------------------------
  tmatriz m(f,vector<tnumero>(c));
  return m;
}

void  llenarMatriz(tmatriz &m)
{//--------------------------
  for(auto &ifilas:m )
    for(auto &icol:ifilas)
      icol = rand()%20+20;
}

void imprimirMatriz(const tmatriz &m)
{//----------------------------------
  for(auto const &ifila:m) {
    for (auto const &icol:ifila)
      cout << setw(5) << icol;
    cout << "\n";
  }
}

tmatriz multiplicaPorEscalar(const tmatriz &m, tnumero num)
{//-------------------------------------------------------
  tmatriz mresul = crearMatriz(m.size(), m[0].size());

  for(size_t cfila=0; cfila<m.size(); cfila++)
    for(size_t ccol=0; ccol< m[0].size(); ccol++)
      mresul[cfila][ccol] = m[cfila][ccol]*num;
  return mresul;
}


tmatriz generar_transpuesta(tmatriz& m) {
  //tmatriz trans(m[0].size(), vector<tnumero>(m.size()));
  tmatriz trans;
  trans = crearMatriz(m[0].size(), m.size());
  for(size_t i = 0; i < m.size(); ++i)
    for (size_t j = 0; j < m[i].size(); ++j)
      trans[j][i] = m[i][j];
  return trans;
}