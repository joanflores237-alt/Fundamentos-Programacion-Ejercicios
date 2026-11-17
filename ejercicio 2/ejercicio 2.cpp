#include <iostream> // Para usar cout y cin
using namespace std; // Para no escribir std:: a cada rato

int main() { // Empieza el programa
    int N; // Guarda el numero que escriba el usuario
    int contador = 1; // Crea contador y lo inicia en 1
    int suma = 0; // Crea suma y la inicia en 0, aquí se va a ir acumulando

    cout << "Introduce un numero entero positivo N: "; // Pide el numero N
    cin >> N; // Lee lo que escribió el usuario y lo guarda en N

    // Si el usuario pone 0 o negativo, se lo vuelve a pedir
    while (N <= 0) { // Mientras N sea menor o igual a 0, repite esto:
        cout << "Numero no valido. Introduce un numero mayor que 0: "; // Le avisa que no es valido
        cin >> N; // Vuelve a leer un nuevo numero
    } // Cuando ya ponga un numero mayor a 0, sale de aquí

    while (contador <= N) { // Mientras contador sea menor o igual a N, repite esto:
        suma = suma + contador; // Suma el contador a la variable suma y la guarda
        contador = contador + 1; // Aumenta el contador de 1 en 1
    } // Cuando contador pase de N, sale del ciclo

    cout << "La suma de 1 hasta " << N << " es: " << suma << endl; // Muestra el resultado final

    return 0; // Termina el programa sin errores
} // Fin del programa