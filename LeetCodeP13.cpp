#include <iostream>
using namespace std;

class LinkedList {
private:
  struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int value) {
      data = value;
      prev = next = nullptr;
    }
  };
  int lenght=0;
  Node *head=nullptr;

public:

  bool IsEmpty() { return lenght == 0; }
  void create(int value) {
    if (IsEmpty()) {
      head = new Node(value);
      lenght++;
    }
    else{
        Node* temp=new Node (value);
        head->prev=temp;
        temp->next=head;
        head=temp;
        lenght++;
    }
  }
};

int main() { 
    LinkedList l1;
    l1.create(2);


    return 0; }