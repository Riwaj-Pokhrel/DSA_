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
   
     void push(int element){
        Node* new_node=new Node(element);
        if(head==NULL){
         head=end=new_node;
         return;
        }
        else{
            new_node->next=head;
            head=new_node;
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
     void pop(){
        Node* temp=head;
        if (temp==NULL){
            cout<<"The stack is empty."<<endl;
            return;
        }
        cout<<temp->data<<" has beed popped out"<<endl;
        head=head->next;
        delete temp;
    }
};

int main(){
    linkedList sll;
    sll.push(1);
    sll.push(2);
    sll.push(3);
    sll.push(4);
    sll.Display();
    sll.pop();
    sll.Display();
    sll.pop();
    sll.pop();
    sll.pop();
    sll.pop();
     
    return 0;
}