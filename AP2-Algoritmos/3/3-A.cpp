Resposta:

Para ordenar os 50 números aleatórios, foram utilizados dois algoritmos: Bubble Sort e QuickSort.

O Bubble Sort é um algoritmo simples, porém com desempenho mais lento, pois sua complexidade é O(n²).

O QuickSort é um algoritmo mais eficiente, com complexidade média O(n log n), sendo muito mais rápido, mesmo com apenas 50 elementos.

Na prática, o QuickSort ordena mais rápido que o Bubble Sort, devido à sua eficiência na divisão e conquista dos dados.



1. Gerar os números aleatórios:
cpp
Copiar
Editar
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> gerarVetorAleatorio(int tamanho, int min, int max) {
    vector<int> vetor;
    srand(time(0));  // Semente aleatória
    for (int i = 0; i < tamanho; i++) {
        vetor.push_back(rand() % (max - min + 1) + min);
    }
    return vetor;
}

2. Algoritmo simples — Bubble Sort
cpp
Copiar
Editar
void bubbleSort(vector<int>& vetor) {
    int n = vetor.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                swap(vetor[j], vetor[j + 1]);
            }
        }
    }
}


3. Algoritmo mais eficiente — QuickSort
cpp
Copiar
Editar
int particionar(vector<int>& vetor, int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (vetor[j] <= pivo) {
            i++;
            swap(vetor[i], vetor[j]);
        }
    }
    swap(vetor[i + 1], vetor[fim]);
    return i + 1;
}

void quickSort(vector<int>& vetor, int inicio, int fim) {
    if (inicio < fim) {
        int p = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, p - 1);
        quickSort(vetor, p + 1, fim);
    }
}