#include<iostream>
using namespace std;
int arr[8]={23,45,67,12,34,87,59,29};
int find(int data){
  for(int i=0;i<8;i++){
    if(data==arr[i]){
        return i;
    }
}
return -1;
}
int main(){
    int index,data;
    cout<<"Enter the number to search:";
    cin>>data;
    index=find(data);
    if(index==-1){
        cout<<data<<" not found."<<endl;
    }else{
        cout<<data<<" found at index "<<index<<endl;
    }
    return 0;

}