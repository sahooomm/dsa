//A single linked list with only printing and counting functions.
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        cout<<"Node created"<<endl;
        this->next = NULL;
    }
    Node(int data){
        cout<<"Node created with data"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

//PRINTING THE LIST
void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

//Counting No of Nodes
int countNodes(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count;
}


int main(){

    Node*a;
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    printList(head);
    cout<<"\nThe number of elements is:"<<countNodes(head)<<endl;

    return 0;
}