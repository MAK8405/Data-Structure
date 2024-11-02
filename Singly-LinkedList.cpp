// LinkedList with 3 elements
#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main()
{
    Node *head = new Node(); // create pointer and alocate space for first node without value
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;     // -> this symbol means trying access to the class in case of using pointer
    head->Next = second; // head element point to the second element
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    printList(head);

    return 0;
}
