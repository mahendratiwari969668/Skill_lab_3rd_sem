#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

   struct Node {
    int data;
    Node* next;
   };

   // Insert at head
   void insertAtHead(Node* &head, int value){
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
   }


   // insert at tail
   void insertAtTail(Node*& head, int value){
    Node* newNode = new Node();
    
   newNode->data = value;
   newNode->next = nullptr;

   if(head == nullptr){
    head = newNode;
    return;
   }

   Node* temp = head;

   while(temp->next != nullptr) {
    temp = temp->next;
   }
   temp->next = newNode;



};

// display 
void display(Node*& head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


// Delete a node by value

void deleteNode(Node*& head, int value){
    if(head == nullptr){
        cout<<"List is empty! "<<endl;
        return;
    }

    //If first node contains the value
    if(head->data == value){
        Node* temp = head;
        head = head->next;

        delete temp;
        return;
    }

    Node* temp = head;

    while(temp->next != nullptr and   temp->next->data != value){
       temp = temp->next;
    }

    if(temp->next ==nullptr){
        cout<<"Value not found "<<endl;
        return;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}


// count nodes
int countNodes(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;

}

int main(){
    Node*head = nullptr;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);

    cout<<"Original Linked list : ";

    display(head);
    
    insertAtHead(head,5);
    cout<<"After insert at head: ";
    display(head);


   insertAtTail(head,40);
    cout<<"After insert at tail: ";
    display(head);

     deleteNode(head,20);
    cout<<"After deletion: ";
    display(head);

    cout<<"Nodes = "<<countNodes(head);


    

}