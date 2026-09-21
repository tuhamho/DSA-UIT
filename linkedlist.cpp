#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr){};
};
int main() {
    Node* ghedau = new Node(1);
    Node* ghehai = new Node(2);
    Node* gheba = new Node(3);
    Node* ghebon = new Node(4);

    ghedau->next = ghehai;
    ghehai->next = gheba;
    gheba -> next = ghebon;

    Node* current = ghedau;
    while(current!= nullptr){
        cout<< current->data << "->";
        current = current -> next ;
    }
    cout <<"NULL";
    return 0;
}