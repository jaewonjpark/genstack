#include <iostream>

using namespace std;

class GenStack
{
  public:
    GenStack(); //constructor
    GenStack(int maxSize); //overloaded constructor
    ~GenStack(); //destructor


    void push(char d);
    char pop();
    char peek(); //AKA top()

    bool isFull();
    bool isEmpty();

    int size;
    int top;

    char *myArray; //declaring myArray
};
