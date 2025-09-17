#include<iostream>
using namespace std;
void swap(int &a, int &b) {
  int  temp = a;
   a = b;
   b = temp;
}
 int partition(int array[],int start,int end){
    int index=start-1,pivot=array[end];
    for(int j=start;j<end;j++){
        if(array[j]<=pivot){
            index++;
            swap(array[j],array[index]);
        }
    }
    index++;
    swap(array[end],array[index]);
    return index;
 }
void quickSort(int array[],int start,int end){
    if(start<end){
        int pivot=partition(array,start,end);
        quickSort(array,start,pivot-1);
        quickSort(array,pivot+1,end);
    }
}
int main(){
int arr[9] = {12,5,19,26,88,45,98,1,33};
   cout << "Array before Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
   quickSort(arr,0,8);
   cout << "Array after Sorting: ";
   for(int i = 0; i<9; i++)
      cout << arr[i] << " ";
   cout << endl;
}