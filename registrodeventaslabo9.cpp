#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream destino("numeros.txt");
    if (!destino.is_open())
    {
        cout << "Error al crear numeros.txt" << endl;
        return 1;
    }

    int valor;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Numero " << i << " de 5: ";
        cin >> valor;
        destino << valor << "\n";
    }
    destino.close();

    ifstream fuente("numeros.txt");
    if (!fuente.is_open())
    {
        cout << "Error al leer numeros.txt" << endl;
        return 1;
    }

    int acumulado = 0;
    while (fuente >> valor)
        acumulado += valor;
    fuente.close();

    cout << "\nLa suma de los numeros es: " << acumulado << endl;
    return 0;
}