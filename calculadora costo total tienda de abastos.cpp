#include <iostream >
using namespace std;
int main(){
    int cantidad
    double precio, suma = 0;
    cout << "Ingrese la cantidad de productos que desea comprar: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese el precio: " << (i + 1) << ": ";
        cin >> precio;
        suma += precio;
    }   
    double impuesto = suma * 1.08;
    if (impuesto >100){
        impuesto * 0.90;
    }
    cout << "sus produtos tiene un valor total de: " << impuesto << endl;
    return 0;   
}