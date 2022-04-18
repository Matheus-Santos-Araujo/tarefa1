#include <iostream>
#include "sort.h"

// Driver para testar os algoritmos ------------------------------------------------------
int main(){
   const int size = 1000; // Aleatório tamanho 1000
   int data[size];
   for(int i=0;i<size;i++) data[i]=rand()%1000;
   
   // ARRAY ORDENADO DE TAMANHO 10 (descomentar desejado)
   //int data[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 

   int n = sizeof(data) / sizeof(data[0]);
   int copy[size];
   copy_array(data,copy,size);
  
	// Selection Sort
	copy_array(copy,data,size);
    start1 = std::clock();
	selectionSort(data, n);
	std::cout << "Tempo do Selection: " << (std::clock() - start1) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
	std::cout << "Array ordenado do Selection: \n";
	printdata(data, n);

    // QuickSort
	copy_array(copy,data,size);
    start2 = std::clock();
    quickSort(data, 0, n - 1);
	std::cout << "Tempo do QuickSort: " << (std::clock() - start2) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    cout << "Array ordenado do QuickSort: \n";
    printdata(data, n);

    // MergeSort
    start3 = std::clock();
	mergeSort(data, 0, n - 1);
	std::cout << "Tempo do MergeSort: " << (std::clock() - start3) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << std::endl;
    cout << "Array ordenado do MergeSort: \n";
    printdata(data, n);

    cin.get();
    return 0;
}
// Driver para testar os algoritmos ------------------------------------------------------