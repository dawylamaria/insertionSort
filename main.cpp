#include <iostream>

using namespace std;

void insertionSort(string vetor[], int n) {
    for (int i = 1; i < n; i++) {
        string aux = vetor[i];
        int j = i - 1;

        while (j >= 0 && vetor[j] > aux) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }
}

int main() {
    string nomes[] = {"Maria", "Bruna", "Alberto", "Joao"};
    int n = 4;

    insertionSort(nomes, n);

    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < n; i++) {
        cout << nomes[i] << " ";
    }
    cout << endl;
	system("pause");
    return 0;
}
