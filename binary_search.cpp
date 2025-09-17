#include<iostream>
using namespace std;
int sortedArr[12]={3,5,6,7,8,24,26,30,45,67,89,100};
int binarySearch(int data){
    int start=0,end=11,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(sortedArr[mid]==data)
        return mid;
        if(sortedArr[mid]<data)
        start=mid+1;
        else end=mid-1;
    }
    return -1;
}
int main(){
    int index,data;
    cout<<"Enter the number to search:";
    cin>>data;
    index=binarySearch(data);
    if(index==-1){
        cout<<data<<" not found."<<endl;
    }else{
        cout<<data<<" found at index "<<index<<endl;
    }
    return 0;

}