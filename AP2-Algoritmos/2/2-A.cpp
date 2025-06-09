#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nome;
    int prioridade;
};

void bubbleSort(Paciente lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j].prioridade > lista[j + 1].prioridade) {
                swap(lista[j], lista[j + 1]);
            }
        }
    }
}

int main() {
    Paciente pacientes[] = {
        {"Ana", 5}, {"Pedro", 2}, {"Carla", 4}, {"Lucas", 1}, {"Mariana", 3},
        {"Fernanda", 5}, {"Rafael", 2}, {"Beatriz", 4}, {"Guilherme", 1}, {"Sofia", 3}
    };
    int tamanho = sizeof(pacientes) / sizeof(pacientes[0]);

    bubbleSort(pacientes, tamanho);

    cout << "Ordenado por prioridade (Bubble Sort):\n";
    for (int i = 0; i < tamanho; i++) {
        cout << pacientes[i].nome << " - Prioridade: " << pacientes[i].prioridade << endl;
    }

    return 0;
}
