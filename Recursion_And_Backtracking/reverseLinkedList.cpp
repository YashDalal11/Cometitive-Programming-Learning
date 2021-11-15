#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef vector<int> vi;
typedef long long ll;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *reverseLinkedList(Node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *prev = reverseLinkedList(head->next);
    prev->next = head;
    head->next = NULL;
    return head;
    // Write your code here
}
int main()
{
    Node *head = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    Node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout<<"\n";
    Node *rev = reverseLinkedList(head);
    Node *temp = node5;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}