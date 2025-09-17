#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int element){
     data=element;
     next=NULL;
    }
};

class linkedList{
    public:
    Node*head;
    Node*end;
     
    linkedList(){
        head=end=NULL;
    }
   
    void addNode(int element){
        Node* new_node=new Node(element);
        if(head==NULL){
         head=end=new_node;
         return;
        }
        else{
            end->next=new_node;
            end=new_node;
        }
    }

    void Display(){
        Node* traverse=head;
        while(traverse!=NULL){
            cout<<traverse->data<<" ";
            traverse=traverse->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    linkedList sll;
    sll.addNode(1);
    sll.addNode(2);
    sll.addNode(3);
    sll.addNode(4);
    sll.Display();

    return 0;
}