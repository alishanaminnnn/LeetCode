#include <iostream>
using namespace std;
class ListQueue {
public:
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

public:
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
void ticketsTime(ListQueue q1, int k) {
  int counter = 1;
  while (q1.IsEmpty()) {
    if (q1.enqueue(q1.dequeue) != 0) {
        
      q1.enqueue(q1.dequeue() - 1);
    } else {
      q1.dequeue;
    }
  }
}

int main() {
  ListQueue q1;
  q1.enqueue(2);
  q1.enqueue(3);
  q1.enqueue(2);
  int k = 1;
  ticketsTime(q1, k);

  return 0;
}