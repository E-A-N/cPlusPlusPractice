#include <iostream>
#include <string.h>

struct Node {
    int data;
    string name;
    Node* next; //reference next node via pointer
};

int main() {

    Node *head=new Node();
    head->name = "Hi";
    head->next = new Node();

    std::cout << head->name << std::endl;

    return 0;
}
