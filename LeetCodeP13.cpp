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

  int main() {
    LinkedList l1;
    l1.create(2);
    l1.create(4);
    l1.create(6);
    l1.create(8);
    l1.create(9);
    l1.create(1);

    return 0;
  }