// Nombre del alumno .....
// Usuario del Juez ......


#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>


//precondicion: 0 > ini > fin
// Para todo i : 0 < i < fin - ini
                
int resolver(int ini, int fin, std::vector<int> v) {
    int ini2, fin2, suma = 0;
    std::cin >> ini2 >> fin2;

    int total = fin2 - ini2 + 1;
    int start = ini2 - ini;

    for (int i = 0; i < total; i++)
    {
        suma += v[start];
        start++;
    }
    return suma;
}

// Resuelve un caso de prueba, leyendo de la entrada la
// configuración, y escribiendo la respuesta
bool resuelveCaso() {
    // leer los datos de la entrada
    int ini, fin;
    std::cin >> ini >> fin;
    if (ini == 0 && fin == 0)
        return false;

    int num = fin - ini + 1;
    std::vector<int> v(num);

    for (int i = 0; i < num; i++)
    {
        std::cin >> v[i];
    }

    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int sol = resolver(ini, fin, v);
        std::cout << sol << std::endl;
    }
   
    std::cout << "---" << std::endl;
    // escribir sol

    return true;

}

int main() {
    // Para la entrada por fichero.
    // Comentar para acepta el reto
#ifndef DOMJUDGE
    std::ifstream in("datos.txt");
    auto cinbuf = std::cin.rdbuf(in.rdbuf()); //save old buf and redirect std::cin to casos.txt
#endif 


    while (resuelveCaso())
        ;


    // Para restablecer entrada. Comentar para acepta el reto
#ifndef DOMJUDGE // para dejar todo como estaba al principio
    std::cin.rdbuf(cinbuf);
    system("PAUSE");
#endif

    return 0;
}
