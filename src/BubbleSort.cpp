#include "BubbleSort.h"

void bubbleSort(std::vector<int>& vet) {

    for (int i = vet.size(); i >= 2; i--) {

        for (int j = 0; j <= i - 2; j++) {

            if (vet[j] > vet[j + 1]) {

                int aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}