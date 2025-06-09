#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nome;
    int prioridade;
};

void selectionSort(Paciente lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[j].prioridade < lista[menor].prioridade) {
                menor = j;
            }
        }
        if (menor != i) {
            swap(lista[i], lista[menor]);
        }
    }
}

int main() {
    Paciente pacientes[] = {
        {"Ana", 5}, {"Pedro", 2}, {"Carla", 4}, {"Lucas", 1}, {"Mariana", 3},
        {"Fernanda", 5}, {"Rafael", 2}, {"Beatriz", 4}, {"Guilherme", 1}, {"Sofia", 3}
    };
    int tamanho = sizeof(pacientes) / sizeof(pacientes[0]);

    selectionSort(pacientes, tamanho);

    cout << "Ordenado por prioridade (Selection Sort):\n";
    for (int i = 0; i < tamanho; i++) {
        cout << pacientes[i].nome << " - Prioridade: " << pacientes[i].prioridade << endl;
    }

    return 0;
}
