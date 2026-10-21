
#include <iostream>
#include <string>
using namespace std;

class ListStack {
public:
  struct Node {
    char data;
    Node *next;

    Node(char value) {
      data = value;
      next = nullptr;
    }
  };

  Node *head;
  Node *curr;

  ListStack() { head = curr = nullptr; }

  bool IsEmpty() { return head == nullptr; }

  void push(char value) {
    if (IsEmpty()) {
      head = new Node(value);
    } else {
      Node *temp = new Node(value);
      temp->next = head;
      head = temp;
    }
  }

  char pop() {
    if (IsEmpty()) {
      return '\0';
    } else {
      Node *temp = head;
      char value = temp->data;
      head = head->next;
      delete temp;
      return value;
    }
  }

  char peek() {
    if (IsEmpty()) {
      return '\0';
    }
    return head->data;
  }
};

int main() {
  ListStack l1;
  string Parenthesis = "{}()[]";

  for (int i = 0; i < Parenthesis.length(); i++) {

    if (Parenthesis[i] == '{' || Parenthesis[i] == '(' ||
        Parenthesis[i] == '[') {

      l1.push(Parenthesis[i]);
    } else {
      if (l1.IsEmpty()) {
        cout << "Invalid";
        return 0;
      }

      char top = l1.pop();

      if (Parenthesis[i] == ')' && top != '(') {
        cout << "Invalid";
        return 0;
      }

      if (Parenthesis[i] == '}' && top != '{') {
        cout << "Invalid";
        return 0;
      }

      if (Parenthesis[i] == ']' && top != '[') {
        cout << "Invalid";
        return 0;
      }
    }
  }

  if (l1.IsEmpty()) {
    cout << "Valid";
  } else {
    cout << "Invalid";
  }

  return 0;
}
