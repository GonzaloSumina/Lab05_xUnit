#include <gtest/gtest.h>
#include "BubbleSort.h"

TEST(BubbleSortTest, ArregloUnElemento) {

    // Arrange
    std::vector<int> datos = {1};
    std::vector<int> esperado = {1};

    // Act
    bubbleSort(datos);

    // Assert / Verify
    EXPECT_EQ(datos, esperado);
}

TEST(BubbleSortTest, ArregloYaOrdenado) {

    // Arrange
    std::vector<int> datos = {1, 2};
    std::vector<int> esperado = {1, 2};

    // Act
    bubbleSort(datos);

    // Assert / Verify
    EXPECT_EQ(datos, esperado);
}

TEST(BubbleSortTest, NoNecesitaIntercambio) {

    // Arrange
    std::vector<int> datos = {1, 2, 3};
    std::vector<int> esperado = {1, 2, 3};

    // Act
    bubbleSort(datos);

    // Assert / Verify
    EXPECT_EQ(datos, esperado);
}

TEST(BubbleSortTest, NecesitaIntercambio) {

    // Arrange
    std::vector<int> datos = {3, 2, 1};
    std::vector<int> esperado = {1, 2, 3};

    // Act
    bubbleSort(datos);

    // Assert / Verify
    EXPECT_EQ(datos, esperado);
}