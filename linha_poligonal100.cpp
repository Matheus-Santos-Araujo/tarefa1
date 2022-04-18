#include <iostream>
#include "sort.h"

// Estrutura de pontos
struct point_t
{
    int x;
    int y;
};

int main(){
   // Geração de pontos
   const int size = 100;
   point_t points[size];

for (int i = 0; i < size - 1; i++) {
       points[i].x = rand()%1000; 
       points[i].y = rand()%1000;
    }

    // Conversão para ordenação
   int data [size];

   for (int i = 0; i < size - 1; i++) {
      data[i] = points[i].x;
    }

   int n = sizeof(data) / sizeof(data[0]);

    // MergeSort 1000
    start1 = std::clock();
	mergeSort(data, 0, n - 1);
	std::cout << "Tempo do MergeSort 1000: " << (std::clock() - start1) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    
    // Conversão de volta para pontos
    cout << "Linha poligonal em sequencia de vertices x: \n";
     for (int i = 0; i < size - 1; i++) {
      cout << data[i] << "\n";
     }
    
    cin.get();
    return 0;
}
// Driver para testar os algoritmos ------------------------------------------------------