#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string textoDia;
    cout << "Cuenta algo de tu dia: ";
    getline(cin, textoDia);

    ofstream salidaDiario("diario.txt", ios::app);
    if (!salidaDiario.is_open())
    {
        cout << "Error al abrir diario.txt para escribir" << endl;
        return 1;
    }
    salidaDiario << textoDia << "\n";
    salidaDiario.close();

    ifstream entradaDiario("diario.txt");
    if (!entradaDiario.is_open())
    {
        cout << "Error al abrir diario.txt para leer" << endl;
        return 1;
    }

    string registro;
    cout << "\n=== MI DIARIO ===" << endl;
    while (getline(entradaDiario, registro))
        cout << "> " << registro << endl;
    entradaDiario.close();

    return 0;
}

