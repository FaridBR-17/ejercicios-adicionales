#include <iostream>
using namespace std;

int main() {
    float distancias[10];
    float total = 0;
    float promedio;
    float max = 0;
    int c_maximadistancia = 0;
    cout << "Ingrese las distancias de 10 conductores (en km):" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Conductor " << (i + 1) << ": ";
        cin >> distancias[i];
        
        total += distancias[i];
        if (distancias[i] > max) {
            max = distancias[i];
            c_maximadistancia = i + 1;
        }
    }
    promedio = total / 10;
    cout << "RESULTADOS: " << endl;
    cout << "Distancia total: " << total << " km" << endl;
    cout << "Distancia promedio: " << promedio << " km" << endl;
    cout << "Conductor con mayor distancia: Conductor " << c_maximadistancia 
         << " con " << max << " km" << endl;
    
    return 0;
}