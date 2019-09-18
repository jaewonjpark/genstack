#include "GenStack.h"
#include <iostream>

using namespace std;

GenStack::GenStack() //default constructor
{
  //intialization of default values
  myArray = new char[128];
  size = 128;
  top = -1;
}

GenStack::GenStack(int maxSize)
{
  myArray = new char[maxSize];
  size = maxSize;
  top = -1;
}

GenStack::~GenStack()
{
  //lets build some character

}

void GenStack::push(char d)
{
  //need to check error/boundary check
  //this is your job
  myArray[++top] = d;
}

char GenStack::pop() //pop returns and remove element
{
  //error checking, make sure its not isEmpty

  return myArray[top--];
}

char GenStack::peek() //peek returns
{
  //check if empty
  return myArray[top];
}
