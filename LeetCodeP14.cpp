// Array Based Stack
#include <iostream>
using namespace std;

class ArrayStack {
public:
  int *arr;
  int size;
  int capacity;

public:
  bool IsFull() { return size == 10; }
  bool isEmpty() { return size == 0; }
  ArrayStack() {
    capacity = 10;
    arr = new int[capacity];
    size = 0;
  }
  void push(int value) {
    if (IsFull()) {
      cout << "The Stack is Overflowed";
      return;
    }
    *(arr + size) = value;
    size++;
  }
  int pop() {
    if (isEmpty()) {
      return -1;
    }
    size--;
    return *(arr + size);
  }

  ~ArrayStack() { delete[] arr; }
  int peek() { return *(arr + size - 1); }
};
void reverseArray(ArrayStack &A1) {
  int count = A1.size;
  int *rArr = new int[count];

  for (int i = 0; i < count; i++) {
    *(rArr + i) = A1.pop();
  }

  cout << "Reversed Array: ";

  for (int i = 0; i < count; i++) {
    cout << *(rArr + i) << " ";
  }

  delete[] rArr;
}

int main() {
  ArrayStack A1;
  A1.push(2);
  A1.push(3);
  A1.push(4);
  A1.push(6);
  A1.push(7);
  reverseArray(A1);

  return 0;
}
