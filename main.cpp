#include "GenStack.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  GenStack myStack(10);

  myStack.push('J');
  myStack.push('A');
  myStack.push('E');

  cout << "popping: " << myStack.pop() << endl;
  cout << "peek-a-boo: " << myStack.peek() << endl;

  myStack.push('F');
  cout << "peek-a-boo: " << myStack.peek() << endl;

  while(!myStack.isEmpty())
  {
    cout << "popping: " << myStack.pop() << endl;
  }

  cout << "Is stack empty?" << myStack.isEmpty() << endl;
  return 0;

}
