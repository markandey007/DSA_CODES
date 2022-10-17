#include <iostream>
using namespace std;
class queue
{
  int size;
  int *arr;
  int front;
  int rear;

public:
  queue(int n)
  {
    arr = new int[n];
    front = 0;
    rear = 0;
    size = n;
  }
  
  void push(int n)
  {
    if (rear == size)
      cout << "full" << endl;
    else
    {
      arr[rear] = n;
      rear++;
    }
  }
  void pop()
  {
    if (rear == front)
      cout << "Empty" << endl;
    else
    {
      arr[front] = -1;
      front++;
      if (front == rear)
      {
        front = 0;
        rear = 0;
      }
    }
  }
  bool isempty()
  {
    if (front == true)
      return true;
    else
      return false;
  }
  int gsize()
  {

    return rear - front;
  }
  int gfront()
  {

    return arr[front];
  }
};
int main()
{
  queue a(5);
  a.push(1);
  a.push(2);
  a.push(3);
  a.push(4);
  a.push(5);
  cout << a.gsize();
  a.push(6);
  a.pop();
  cout << a.gfront();
  a.pop();
  a.pop();
  a.pop();
  a.pop();
  a.pop();
  queue *q = new queue(5);
  return 0;
}