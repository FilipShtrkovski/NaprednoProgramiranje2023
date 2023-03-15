//Филип Штрковски ИНКИ874

#include <iostream>
using namespace std;
// Ова функција прави замена на два елементи
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
   
// ја подредува низата користејќи го последниот елемент за пивот
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // пивот е последниот елемент од низата
    int i = (low - 1);   // од овај елемент запоцнува проверката
   
    for (int j = low; j <= high- 1; j++) 
    { 
        //ако сегашниот елемент е помал од пивот, зголемете го понискиот елемент
        //замениги елементите i и j
        if (arr[j] <= pivot) 
        { 
            i++;    // се зголемуа понискиот елемент
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
   
// алгоритмот quicksort 
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        //подредуванје на низата 
        int pivot = partition(arr, low, high); 
   
        quickSort(arr, low, pivot - 1); 
        quickSort(arr, pivot + 1, high); 
    } 
} 
   // со ова функција се печати низа
void displayArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<arr[i]<<"\t"; 
      
} 
   // маин функцијата
int main() 
{ 
    int arr[] = {12,23,3,43,51,35,19,45}; //низата која се подредува
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout<<"Input array"<<endl;
    displayArray(arr,n); // се печати почетната низата пред да се подреди
    cout<<endl;
    quickSort(arr, 0, n-1); // сортиранје на елементите
    cout<<"Array sorted with quick sort"<<endl; 
    displayArray(arr,n); // се печати низата после подредуванје
    return 0; 
}
// Со овај алгоритам се наоѓа местополозбата на некој број(пивот)
// Најпрвин одбираме некој број кој ке ни представува пивот, најчесто е последниот број од низата.
// Потоа се итерира низ низата и се извршива замена на два елементи зависно од дали елементот кој се споредува е помал од пивот.