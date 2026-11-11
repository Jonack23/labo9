#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string ruta;
    cout << "Archivo para contar lineas: ";
    getline(cin, ruta);

    ifstream origen(ruta);
    if (!origen.is_open())
    {
        cout << "Error: no se encontro el archivo '" << ruta << "'" << endl;
        return 1;
    }

    int totalLineas = 0;
    string texto;
    while (getline(origen, texto))
        totalLineas++;
    origen.close();

    cout << "Total de lineas: " << totalLineas << endl;
    return 0;
}