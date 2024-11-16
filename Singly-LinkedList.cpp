#include <iostream>
using namespace std;

class Node
{
public:
    int Value;
    Node *Next;

    // سازنده برای مقداردهی اولیه
    Node(int val = 0) : Value(val), Next(nullptr) {}
};

void printList(Node *n)
{
    while (n != nullptr)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main()
{
    Node *head = new Node(1); // مقداردهی اولیه: Value = 1, Next = NULL
    Node *second = new Node(2);
    Node *third = new Node(3);

    head->Next = second;  // head به second اشاره می‌کند
    second->Next = third; // second به third اشاره می‌کند

    // third->Next به صورت پیش‌فرض nullptr است
    printList(head);

    return 0;
}
