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
