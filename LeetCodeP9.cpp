#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkList
{
public:
    int lenght;
    Node *head;
    Node *curr;

    LinkList()
    {
        lenght = 0;
        head = nullptr;
        curr = nullptr;
    }

    void createList(int value)
    {
        if (head == nullptr)
        {
            head = new Node(value);
        }
        else
        {
            Node *temp;
            temp = new Node(value);
            temp->next = head;
            head = temp;
        }

        lenght++;
    }

    void display()
    {
        start();
        cout << "Linked List: ";

        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }

        cout << endl;
    }

    void start()
    {
        curr = head;
    }

    void tail()
    {
        start();

        for (int i = 0; i < lenght - 1; i++)
        {
            curr = curr->next;
        }
    }

    void insertion(int value, int position)
    {
        if (position < 1 || position > lenght + 1)
        {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 1)
        {
            Node *temp;
            temp = new Node(value);
            temp->next = head;
            head = temp;
            lenght++;
        }

        else if (position == lenght + 1)
        {
            Node *temp;
            temp = new Node(value);
            tail();
            curr->next = temp;
            lenght++;
        }

        else
        {
            start();

            Node *temp;
            temp = new Node(value);

            for (int i = 0; i < position - 2; i++)
            {
                curr = curr->next;
            }

            temp->next = curr->next;
            curr->next = temp;
            lenght++;
        }
    }

    Node *headReturn()
    {
        return head;
    }
};
Node *sorted(Node *head1, Node *head2)
{
    Node *curr;
    curr = head1;
    while (curr->next != nullptr)
    {
        curr = curr->next;
    }
    curr->next = head2;
    curr = head1;
    int lenght = 0;
    while (curr->next != nullptr)
    {
        lenght++;
        curr = curr->next;
    }
    for (int i = 0; i < lenght - 1; i++)
    {
        curr = head1;
        for (int i = 0; i < lenght - 1; i++)
        {
            if (curr->data > curr->next->data)
            {
                int temp;
                temp = curr->data;
                curr->data = curr->next->data;
                curr->next->data = temp;
            }
            curr = curr->next;
        }
    }
    curr = head1;
    return curr;
}

int main()
{
    LinkList l1;
    LinkList l2;

    l1.createList(3);
    l1.createList(12);
    l1.createList(8);
    l1.createList(4);
    l1.createList(34);
    l1.display();
    l2.createList(2);
    l2.createList(4);
    l2.createList(6);
    l2.createList(8);
    l2.createList(10);
    l2.display();

    l1.headReturn();

    return 0;
}
