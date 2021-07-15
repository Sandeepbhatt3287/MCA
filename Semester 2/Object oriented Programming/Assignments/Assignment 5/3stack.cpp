#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

template<class T>
class STACK{
    T* arr;
    int tos, length;
public:
STACK(int n)
{
    length = n;
    arr = new T[length];
    tos = -1;
}

void push(T item)
{
  arr[++tos] = item;
  cout << arr[tos] << " is Pushed into stack.";
}

void pop()
{
  cout << arr[tos--] << " is poped from stack.";
}

T top()
{
    return (arr[tos]);
}
bool isfull()
{
    if(tos == length - 1)
      return true;
    else
      return false;
}
bool isempty()
{
    if(tos == -1)
     return true;
    else
     return false;
}
int size()
{
    return tos + 1;
}
};
int main()
{
    int n, choice;

    do{
       cout << endl << endl << "Enter Max Size of stack : ";
       cin >> n;
      
       if(n < 1) cout <<"Invalid input...! Try Again.";
      }while(n < 1); 

    STACK <int> s(n);
    int intItem;

    //STACK <char> s(n);     In case you have to create stack of  type char
    //char charItem;
    

  while(1)
  {
    cout << endl << endl << "  1 -> Push Element";
    cout << endl << "  2 -> Pop Element";
    cout << endl << "  3 -> See Top Element";
    cout << endl << "  4 -> Get Size";
    cout << endl << "  5 -> Isempty";
    cout << endl << "  6 -> Isfull";
    cout << endl << "  0 -> Exit";

    cout << endl << "  Enter your choice : \t";
    cin >> choice;

    switch(choice)
    {
      case 1: if(s.isfull())
                cout << endl << "Stack Overflow...!";
              else
              {
                cout << endl << "Enter element : ";
                cin >> intItem;
                s.push(intItem);
              }
              break;

      case 2: if(s.isempty())
               cout << endl << "Stack Underflow...!";
              else
              {
               s.pop();
              }
              break;

      case 3: if(s.isempty())
               cout << endl << "Stack Underflow...!";
              else
              {
               cout << s.top() << " is Top Element.";
              }
              break;

      case 4: cout << endl << "Size of stack is : " << s.size();
              break;

      case 5: if(s.isempty())
               cout << endl << "Yes, Stack is Empty!";
              else
               cout << endl << "No, Stack is Not Empty!";
              break;

      case 6: if(s.isfull())
               cout << endl << "Yes, Stack is Full!";
              else
               cout << endl << "No, Stack is Not Full!";
              break;

      case 0: exit(EXIT_SUCCESS);
              break;
      default: cout << endl << "Invalid input...! Try Again.";
    }
  }
  return 0;
}
