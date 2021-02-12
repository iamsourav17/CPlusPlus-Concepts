#include<iostream>
#include<list>
using namespace std;

template<typename T>

class Node
{
    public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next =NULL;
    }
};
template<typename T>
class Stack{
public:

Node<T> *head;
int size;
    Stack()
    {
        head = NULL;
        size =0;

    }
    int getSize()
    {
        return size;

    }
    bool isEmpty()
    {
        if(head == NULL)
        {
            cout<<"Stack is Empty" <<endl;
            return true;
        }
        else
            cout <<"Stack is not Empty" <<endl;
            return false;


    }
    void push(T data)
    {
            Node<T> *n = new Node<T>(data);
            n->next = head;
            head = n;
            size++;


    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;

    }
    T top()
    {
        if(head ==NULL)
        {
            cout <<"Stack is Empty" <<endl;
            return 0;
        }

        return head->data;

    }
};
int main()
{

    Stack<char> s;
     s.push(111);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(99);

    cout << s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout <<s.top()<<endl;
    s.pop();
    cout<<s.isEmpty()<<endl;
    cout<<s.getSize()<<endl;




}
