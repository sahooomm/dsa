
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout <<"Node with data "<<this->data<<" is deleted"<<endl;
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

void deleteNode(Node* &head, Node* &tail, int pos){
    //empty list
    if(head == NULL){
        cout<<"List is empty , cannot delete"<< endl;
    }
    //single element
    if(head == tail){
        Node* temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }
    //Delete from first position.
    if(pos == 1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    //Delete from last position
    else if(pos == countNodes(head)){
        
        Node* prev = head;
        Node* temp = tail;

        while(prev->next!=tail){
            prev = prev->next;
        }
        prev->next = NULL;
        tail = prev;
        delete temp;

    }
    //Delete from any position between first and last.
    else if(pos>1 && pos<countNodes(head)){
        Node* prev = NULL;
        Node* curr = head;

        while(pos!=1){
            prev = curr;
            curr = curr->next;
            pos--;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    else{
        cout<<"Invalid position"<<endl;
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
    insertAtPosition(head, tail, 44, 1);
    insertAtPosition(head, tail, 150, 5);





    printList(head);
    cout<<"\nThe number of elements is:"<<countNodes(head)<<endl;


    deleteNode(head, tail, 1);
    deleteNode(head, tail, 5);
    deleteNode(head, tail, 10);

    printList(head);
    cout<<"\nThe number of elements is:"<<countNodes(head)<<endl;



    
    return 0;
}