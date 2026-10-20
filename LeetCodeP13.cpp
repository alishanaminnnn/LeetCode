#include <iostream>
using namespace std;

class LinkedList {
public:
  struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int value) {
      data = value;
      prev = next = nullptr;
    }
  };
  int lenght = 0;
  Node *head = nullptr;
  Node *curr = nullptr;

public:
  bool IsEmpty() { return lenght == 0; }
  void create(int value) {
    if (IsEmpty()) {
      head = new Node(value);
      lenght++;
    } else {
      Node *temp = new Node(value);
      head->prev = temp;
      temp->next = head;
      head = temp;
      lenght++;
    }
  }
  void tail() {
    curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
  }
  void InsertEnd(int value) {
    curr = head;
    while (curr->next != nullptr) {
      curr = curr->next;
    }
    if (IsEmpty()) {
      head = new Node(value);
      lenght++;
    } else {
      Node *temp = new Node(value);
      curr->next = temp;
      temp->prev = curr;
      lenght++;
    }
  }
  void remove(int index) {
    if (index < 0 || index >= lenght) {
      return;
    }

    if (lenght == 1) {
      delete head;
      head = nullptr;
    } else if (index == 0) {
      Node *temp = head;
      head = head->next;
      delete temp;
      head->prev = nullptr;
    } else if (index == lenght - 1) {
      tail();
      Node *temp = curr;
      curr = curr->prev;
      delete temp;
      curr->next = nullptr;
    } else {
      curr = head;
      for (int i = 0; i < index; i++) {
        curr = curr->next;
      }

      Node *temp = curr;
      curr->prev->next = curr->next;
      curr->next->prev = curr->prev;
      delete temp;
    }
    lenght--;
  }
  int getElement(int position) {
    if (IsEmpty() || position > lenght) {
      cout << "Invalid Case..";
      return -1;
    } else {
      curr = head;
      for (int i = 0; i < position; i++) {
        curr = curr->next;
      }
      return curr->data;
    }
  }
  Node *getHead() { return head; }
  int getLenght() { return lenght; }
};
void elementsPostion(LinkedList *l1, LinkedList *l2) {
  LinkedList::Node *curr1 = l1->getHead();
  LinkedList::Node *head2 = l2->getHead();

  while (curr1 != nullptr) {
    LinkedList::Node *curr2 = head2;

    for (int i = 1; i < curr1->data; i++) {
      if (curr2 == nullptr) {
        break;
      }
      curr2 = curr2->next;
    }

    if (curr2 != nullptr) {
      cout << curr2->data << " ";
    } else {
      cout << "Invalid position: " << curr1->data << " ";
    }

    curr1 = curr1->next;
  }
}
int main() {
  LinkedList l1;
  l1.create(2);
  l1.create(4);
  l1.create(6);
  l1.create(8);
  l1.create(9);
  l1.create(1);
  LinkedList l2;
  l2.create(10);
  l2.create(23);
  l2.create(54);
  l2.create(32);
  l2.create(76);
  l2.create(90);
  l2.create(87);
  l2.create(91);
  l2.create(55);
  l2.create(56);
  elementsPostion(&l1, &l2);

  return 0;
}