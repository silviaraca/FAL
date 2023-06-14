// Nombre del alumno .....
// Usuario del Juez ......


#include <iostream>
#include <iomanip>
#include <fstream>


// función que resuelve el problema


// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
void resuelveCaso() {
    int n;
    int max = 0;
    int veces = 0;
    std::cin >> n;

    while (n != 0)
    {
        if (n > max)
        {
            max = n;
            veces = 1;
        }
        else if (n == max) veces++;
        std::cin >> n;
    }

    std::cout << max << " " << veces << std::endl;
}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
//#ifndef DOMJUDGE
//    std::ifstream in("datos.txt");
//    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
//#endif 


    int numCasos;
    std::cin >> numCasos;
    for (int i = 0; i < numCasos; ++i)
        resuelveCaso();


    // Para restablecer entrada. Comentar para acepta el reto
//#ifndef DOMJUDGE
//    std::cin.rdbuf(cinbuf);
//    system("PAUSE");
//#endif

    return 0;
}