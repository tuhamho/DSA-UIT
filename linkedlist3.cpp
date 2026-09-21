#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val) : data(val) , next (nullptr){};
};
void insertAtTail(Node* head, int val){
    Node* head1 = new Node(val);
    if ( head== nullptr){
        head = head1;
        return;
    }
    Node* current = head ;
    while ( current->next != nullptr){
        current = current->next;
    }
    current ->next = head1;
};
bool check(Node*& head, int target){
    Node* current = head;
    while(current != nullptr){
        if(current->data == target){
            return true;
        }
        current = current ->next;
    }
    return false;
};
int main() {
    Node* head = nullptr;
    for (int i = 1; i<10; i++){
        insertAtTail(head, i);
    }  
    if(check(head,11)){
        cout << "True";
    }
    else 
    cout <<"False";
    return 0;
}