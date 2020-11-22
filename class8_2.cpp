#include<iostream>
using namespace std;
#define max 4
class stack{
    int arr[max];
    int top;
   public:
    stack(){
        top=-1;
    }
bool isempty(){
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
void push(int a){
    if(isFull())
        cout<<"the stack is full\n";
    else
    {
        top++;
        arr[top]=a;
    }
}
    void display(){
        for(int i=top;i>=0;i--)
            cout<<arr[i]<<" ";
    }
};
int main(void){
    int n,item;
    stack s1;
    cout<<"enter the size\n";
    cin>>n;
      for (int i = 0; i < n; i++)
    {
        cin >> item;
        s1.push(item);
    }
    s1.display();
    return 0;

}