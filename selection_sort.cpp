#include<iostream>
using namespace std;
void swap(int &a, int &b) {
  int  temp = a;
   a = b;
   b = temp;
}
void selectionSort(int array[]){
   int i, j, minIndex;
   for(i = 0; i<9; i++) {
      minIndex = i; 
      for(j = i+1; j<9; j++)
         if(array[j] < array[minIndex])
            minIndex = j;
      swap(array[i], array[minIndex]);
   }
}
int main(){
int arr[9] = {12,5,19,26,88,45,98,1,33};
   cout << "Array before Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
   selectionSort(arr);
   cout << "Array after Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
}