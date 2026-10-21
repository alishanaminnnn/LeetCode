// Array Based Stack
#include <iostream>
using namespace std;

class ArrayStack {
private:
  int *arr;
  int size;
  int capacity;

public:
  bool IsFull() { return size == 9; }
  bool isEmpty() { return size == 0; }
  ArrayStack() {
    capacity = 10;
    arr = new int[capacity];
    size = 0;
  }
  void push(int value) {
    if (IsFull()) {
      cout << "The Stack is Overflowed";
    }
    *(arr + size) = value;
    size++;
  }
  int pop() {
    if (isEmpty()) {
      return -1;
    }
    size--;
    return *(arr + size - 1);
  }
  ~ArrayStack() { delete[] arr; }
  int peek() { return *(arr + size - 1); }
};

int main() {
  ArrayStack A1;
  A1.push(2);
  A1.push(3);
  A1.push(4);
  A1.push(6);
  A1.push(7);
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  cout<<A1.pop()<<" ";
  return 0;
}
