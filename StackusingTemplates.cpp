#include <iostream>


using namespace std;

template<typename T>

class Stack
{
    T *arr;                               //can take any type of elements for eg. here is char
    int nextIndex;
    int capacity;

public:
    Stack(){
    capacity  =4;                    //defaultConstructor
    arr = new T[capacity];
    nextIndex = 0;
    }

    Stack(int cap)               //ParameterConstructor
    {
        capacity = cap;
        arr = new T[capacity];
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

    void push(T data)
    {
        if(nextIndex == capacity)
        {
            T *newarr = new T[2*capacity];
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
    T top()
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
    Stack <char> s;

    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout << s.top()<<endl;                //uses ASCII value
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout<<s.isEmpty()<<endl;
    cout<<s.totalSize()<<endl;

return 0;



}
