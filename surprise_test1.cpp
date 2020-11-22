#include <iostream>
#include <stdlib.h>
#include <string.h>

#define max 20

using namespace std;

class Stack{
    
    public:

    int arr[max];
    int top;
    
    Stack(){
        top = -1;
    }


    bool isEmpty(){
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }    

    bool isFull(){
        if (top == max - 1)
        
            return true;
        
        else
        
            return false;
           
    }    

    void push(int item){
        if (top == max - 1)
        {
            cout << "stack is full";
        }
        
        else
        {
            top++;
            arr[top] = item;
        }
        
        
    }

    int peek(){
        if (!isEmpty())
    
            return arr[top];
    
        else
    
            cout << "Stack is Empty" << endl;
               
    }

    void display(){
        if (!isEmpty())
        {
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << endl;
            }
        }

        else
        {
            cout << "The Stack is Empty" << endl;
        }
        
    }
        
    int pop(){
        if (!isEmpty())
        {
            char x = arr[top];
            top--;
            return x;
        }
        else
        
            cout << "Stack is Empty" << endl;
        
    }       
};

int main(){
    Stack s1,s2,s3;
    int n1;

    cout << "Enter the number of elements in 1st stack" << endl;
    cin >> n1;

    cout << "Enter the elements for stack 1" << endl;

    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        s1.push(x);
    }

    cout << "Elements of first stack" << endl;
    s1.display();

    while (!s1.isEmpty())
    {
        int a;
        a = s1.pop();
        s3.push(a);
    }

    //cout << "Elements of temp stack" << endl;
    //s3.display();

    while (!s3.isEmpty())
    {
        int a = s3.pop();
        s2.push(a);
    }
    
    cout << "The final elements are\n";
    s2.display();
    
    return 0;
}

