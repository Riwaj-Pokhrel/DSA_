#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node * prev;

    Node(int element){
     data=element;
     next=NULL;
     prev=NULL;
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
            new_node->prev=end;
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
    linkedList dll;
    dll.addNode(1);
    dll.addNode(2);
    dll.addNode(3);
    dll.addNode(4);
    dll.Display();

    return 0;
}