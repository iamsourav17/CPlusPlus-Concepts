#include <iostream>


using namespace std;

class Stack
{
    int *arr;
    int nextIndex;
    int capacity;

public:
    Stack(){
    capacity  =4;                    //defaultConstructor
    arr = new int [capacity];
    nextIndex = 0;
    }

    Stack(int cap)               //ParameterConstructor
    {
        capacity = cap;
        arr = new int[capacity];
        nextIndex = 0;

    }

    int totalSize()                       //ToFindOutSizeofStack
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex ==0;
    }

    void push(int data)
    {
        if(nextIndex == capacity)
        {
            int *newarr = new int[2*capacity];
            for(int i =0;i<capacity;i++)
            {
                newarr[i]=arr[i];
            }
            delete []arr;
            arr = newarr;
            capacity = 2*capacity;
        }

        arr[nextIndex]=data;
        nextIndex++;


    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        nextIndex--;

    }
    int top()
    {
        if(isEmpty())
        {
            cout <<"Stack is Empty"<<endl;
            return 1;
        }
        return arr[nextIndex-1];
    }
};
int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout<<s.isEmpty()<<endl;
    cout<<s.totalSize()<<endl;

   /* Stack s2(10);
    for(int i = 1;i<=10;i++)
    {
        s2.push(i);
    }
    while(! s2.isEmpty())
    {
     cout<<s2.top()<<endl;
     s2.pop();
    }
    */

return 0;



}
