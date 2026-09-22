#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val) : data(val) , next(nullptr) {};

};
void insertAtTail(Node*& head, int val){
    Node* newNode = new Node(val);
    if ( head == nullptr ){
        head = newNode;
        return;
    }
     
    Node* current = head;
    while ( current->next!=nullptr){
        current =  current->next;
    }
    current->next = newNode;
};


int main() {
    Node* head = nullptr;
    for( int i=1;i<=10; i++){
        insertAtTail(head,i);
    }
    Node* current = head;
    while ( current != nullptr) {
        cout<< current->data << "->" ;
        current = current-> next;
    }
    cout << "NULL";
    return 0;
}