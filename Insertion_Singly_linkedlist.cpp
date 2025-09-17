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
            return;
        }
    }
    void insertAtIndex(int index,int element){
        if(index<0){
           cout<<"Invalid index\n";
            return;
        }
        if(index==0){
            Node* new_node=new Node(element);
        if(head==NULL){
         head=end=new_node;
         return;
        }
        else{
          new_node->next=head;
          head=new_node;
          return;
        }
        }
        Node* temp=head;
        for(int i=0;i<index-1;i++){
            if(temp==NULL){
                cout<<"Invalid index\n";
                return;
            }
         temp=temp->next;
        }
        if(temp==NULL){
                cout<<"Invalid index\n";
                return;
            }
        Node* new_node= new Node (element);
        new_node->next=temp->next;
        temp->next=new_node;
        return;

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
    sll.insertAtIndex(0,15);
    sll.insertAtIndex(2,17);
    sll.insertAtIndex(6,19);
    sll.Display();
    sll.insertAtIndex(8,23);
    return 0;
}