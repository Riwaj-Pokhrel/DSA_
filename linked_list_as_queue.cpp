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
   
    void enqueue(int element){
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
        cout<<endl;
    } 
    void dequeue(){
        Node* temp=head;
        if (temp==NULL){
            cout<<"The queue is empty."<<endl;
            return;
        }
        cout<<temp->data<<" has beed dequeued."<<endl;
        head=head->next;
        delete temp;
    }
};
    

int main(){
    linkedList sll;
    sll.enqueue(1);
    sll.enqueue(2);
    sll.enqueue(3);
    sll.enqueue(4);
    sll.Display();
    sll.dequeue();

    return 0;
}