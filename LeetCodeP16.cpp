#include <iostream>
using namespace std;
class ListQueue {
  struct Node {
    int data;
    Node *next;
    Node(int value) {
      data = value;
      next = nullptr;
    }
  };
  Node *first;
  Node *last;
  int size;
  ListQueue() {
    first = nullptr;
    size = 0;
    last = nullptr;
  }
  bool IsEmpty() { return first == nullptr; }
  void enqueue(int value) {
    if (IsEmpty()) {
      first = last = new Node(value);
      size++;
    } else {
      Node *temp = new Node(value);
      last->next = temp;
      last = temp;
      size++;
    }
  }
  int dequeue() {
    if (IsEmpty()) {
      return -1;
    } else if (size == 1) {
      int data = first->data;
      delete first, last;
    } else {
      Node *temp = first;
      int data = temp->data;
      first = first->next;
      delete temp;
      return data;
    }
  }
  
};

int main() { return 0; }