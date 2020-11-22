#include<iostream>
using namespace std;
int main(void){
    int arr[10][10],i,j,n;
    cout<<"enter the size of the matrix: "<<endl;
    cin>>n;
    cout<<"enter the elements of the matrix: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"the given matrix is: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<"    ";
        }
        cout<<endl;
    }
    cout<<"the lower triangle matrix is: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j)
                cout<<arr[i][j]<<"    ";
            else
                cout<<"0"<<"    ";
        }
    cout<<endl;
    }
    return 0;
}