#include<iostream>
using namespace std;
#define max 25
class stack{
    public:
        int arr[max];
        int top;
        stack(){
            top=-1;
        }
    bool isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isfull(){
        if(top==max-1)
            return true;
        else
            return false;
    }
    void push(int a){
        if(isfull())
            cout<<"the stack is full\n";
        else 
            top++;
            arr[top]=a;
    }
    void display(){
        if(isempty())
        cout<<"the stack is empty\n";
        else 
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
    }
        };
    int main(void){
        stack s1,s2;
        int itm,n;
        int arr[30];
        cout<<"enter the size of the array\n";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                s1.push(arr[i]);
            }
            else{
                s2.push(arr[i]);
            }
        }
        cout << "The even stack is"<<" ";
        s1.display();
        cout<<endl;
        cout << "The odd stack is"<<" ";
        s2.display();
        return 0;

    }
