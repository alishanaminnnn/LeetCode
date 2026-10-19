#include <iostream>
using namespace std;

class LinkedList {
public:
  struct Node {
    int data;
    Node *next;
    Node(int value) {
      data = value;
      next = nullptr;
    }
  };
  int lenght;
  Node *head;
  Node *curr;

public:
  bool IsEmpty() { return lenght == 0; }
  LinkedList() {
    lenght = 0;
    head = curr = nullptr;
  }
  void createList(int value) {
    if (IsEmpty()) {
      head = new Node(value);
      curr = head;
    } else {
      Node *temp = new Node(value);
      temp->next = head;
      head = temp;
    }
    lenght++;
  }
  Node *getHead() { return head; }
  int getLenght() { return lenght; }
};

bool Palindrome(LinkedList *l1) {
  LinkedList::Node *head1 = l1->getHead();
  int lenght = l1->getLenght();
  if (lenght <= 1)
    return true;

  int *arr = new int[lenght];
  for (int i = 0; i < lenght; i++) {
    *(arr + i) = head1->data;
    head1 = head1->next;
  }

  for (int i = 0; i < lenght; i++) {
    if (*(arr + i) != *(arr + lenght - i - 1)) {
      delete[] arr;
      return false;
    }
  }

  delete[] arr;
  return true;
}
int main() {
  LinkedList l1;
  l1.createList(5);
  l1.createList(4);
  l1.createList(3);
  l1.createList(4);
  l1.createList(5);
  if (Palindrome(&l1) == 1) {
    cout << "This is palindrome";
  } else {
    cout << "This is not palindrome";
  }

  return 0;
}