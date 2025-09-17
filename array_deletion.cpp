#include<stdio.h>
void array_deletion(int arr[],int size,int index){
if(index<0 || index > size-1){
printf("Invalid index\n");
return;
}
for(int i=index;i<size-1;i++){
arr[i]=arr[i+1];}
size--;
}
void display_array(int arr[],int size){
for(int i=0;i<size;i++)
printf("%d ",arr[i]);
}
int main(){
int arr[10]={1, 2, 3, 4, 5};
int size = 5; 
int index = 2;
array_deletion(arr, size, index);
display_array(arr, size-1); 
return 0;
}