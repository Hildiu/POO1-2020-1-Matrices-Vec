#include "Ufunciones.h"

int main()
{size_t f,c;

 cout <<"Filas    : "; cin>>f;
 cout <<"Columnas : "; cin>>c;
 tmatriz m = crearMatriz(f,c);
 srand(time(nullptr));
 llenarMatriz(m);
 imprimirMatriz(m);
 cout<<"\n\nSe Multiplica la matriz por un escalar\n\n";
 tmatriz m2 = multiplicaPorEscalar(m,5);
 imprimirMatriz(m2);
 cout << "\nMatriz transpuesta\n";
 tmatriz mt=generar_transpuesta(m2);
 imprimirMatriz(mt);
 return 0;
}