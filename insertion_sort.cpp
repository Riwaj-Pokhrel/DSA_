#include<iostream>
using namespace std;
void insertionSort(int array[]){
    for(int i=1;i<9;i++){
        int index=i;
        int element=array[i];
     for(int j=i-1;j>=0;j--){
        if(array[j]>element){
            array[j+1]=array[j];
            index=j;
        }
    }
    array[index]=element;
    }
}
int main(){
int arr[9] = {12,5,19,26,88,45,98,1,33};
   cout << "Array before Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
   insertionSort(arr);
   cout << "Array after Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
}