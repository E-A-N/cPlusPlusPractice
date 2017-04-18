#include <iostream>

struct Node {
    int data;
    Node* next; //reference next node via pointer
};

int main(){

    Node head = Node();
    Node second = Node();
    head.next = &second;

    char name[] = 'Herro';
    char str = "5";
    std::cout >> str >> std::endl;
    return 0;
}
