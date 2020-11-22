#include<iostream>
#include <stdlib.h>
#define max 4
using namespace std;

class stack{
    private:
        int arr[max];
        int top;
    public:
    stack(){
        top=-1;
    }
    void push(int a){
        if(top==max-1)
            cout<<"the stack is full"<<endl;
        else {
            top++;
            arr[top]=a;
        }
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull(){
        if(top==max-1)
            return true;
        else
            return false;
    }
    int pop(){
        int x=arr[top];
        if(top==-1)
            cout<<"the stack is empty"<<endl;
        else 
            top--;
            return x;
    }
    int peek(){
        if(isEmpty())
            cout<<"the stack is empty"<<endl;
        else
            cout<<"the top most value is "<<arr[top]<<endl;
    }
    void display(){
        cout << "Display Function Called - " << endl;
        for(int i = top; i >= 0; i--)
            cout<<arr[i]<<endl;
    }
};
int main(void){
    stack s1;
    int option;
       do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. display()" << endl;
    cout << "4. peek()" << endl;
    cout << "5. exit "<<endl;
        cin>>option;
    
    
        switch(option){

             
            case 1:
                if(s1.isFull())
                    cout<<"the stack is full\n";
                else{
                    int value;
                    cout<<"enter the value that you want to push\n";
                    cin>>value;
                    s1.push(value);
                }
            break;
            case 2:
                if(s1.isEmpty())
                    cout<<"the stack is empty\n";
                else
                    s1.pop();
            break;
            case 3:
                s1.display();
            break;
            case 4:
            s1.peek();
            break;
            case 5:
                exit(1);
            default:
                cout<"enter a right choice\n";


        }
    }while(option != 0);
    return 0;

}
