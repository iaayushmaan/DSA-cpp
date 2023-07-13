#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node *reverseKNodes(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nextp;
    int cnt = 0;
    while (curr != NULL && cnt < k)
    {
        nextp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextp;
        cnt++;
    }
    if (nextp != NULL)
    {
        head->next = reverseKNodes(nextp, k);
    }

    return prev;
}

void display(node *&head)
{
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 4);
    insert(head, 5);
    // display(head);
    int k = 3;
    node *newhead = reverseKNodes(head, k);
    display(newhead);
}