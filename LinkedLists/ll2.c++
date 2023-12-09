
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this->next = NULL;
    }
    Node(int data){
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

void insertAtHead(Node* &head, Node* &tail, int data){

    //empty list.
    if(head==NULL){
        cout<<"Node created"<<endl;
        Node* newnode = new Node(data);

        head = newnode;
        tail = newnode;
    }

    else{
        //Non-empty list
        cout<<"Node created"<<endl;
        Node* newnode = new Node(data);
        newnode->next = head;
        head = newnode;

    }
}
//InsertAtTail
void insertAtTail(Node* &head, Node* &tail, int data){
    //empty list.
    if(head == NULL){
        Node *newnode = new Node(data);
        head,tail = newnode;
    }
    else{
        Node* newnode = new Node(data);
        tail->next = newnode;
        tail = newnode;
      
    }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int pos){

    int length = countNodes(head);
    if(pos==1){
        insertAtHead(head, tail, data);

    }
    else if(pos == length+1){
        insertAtTail(head, tail, data);
    }
    else if(pos>1 && pos<=length){
        Node* newnode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;

        while(pos!=1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = newnode;
        newnode->next = curr;

    }
    else{
        cout<<"Invalid position"<< endl;
    }


}



int main(){

    Node* head = NULL;
    Node* tail = NULL;

    
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);


    insertAtPosition(head, tail, 100 , 1);
    insertAtPosition(head, tail, 200 , 3);
    insertAtPosition(head, tail, 300 , 10);

    printList(head);
    cout<<"\nThe number of elements is:"<<countNodes(head)<<endl;

    




    return 0;
}