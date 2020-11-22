#include<iostream>
using namespace std;
int main(void){
    int c1,r1,c2,r2,matrixA[10][10],matrixB[10][10],i,j,flag=1;
    cout<<"enter the order of the matrix A"<<endl;
    cin>>r1>>c1;
    cout<<"enter the order of the matrix B"<<endl;
    cin>>r2>>c2;
    if(r1!=r2 || c1!=c2)
        cout<<"the matrix are not equal"<<endl;
    else
        {
    cout<<"enter the elements of the matrix A:"<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>matrixA[i][j];
        }
    }
    cout<<"enter the elements of the matrix B:"<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>matrixB[i][j];
        }
    }
    cout<<"the matrix A is: "<<endl;
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cout<<matrixA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the matrix B is: "<<endl;
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cout<<matrixB[i][j]<<" ";
        }
          cout<<endl;
    }
        }
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            if(matrixA[i][j]!=matrixB[i][j])
            flag=0;
            break;
    }
        } 
    if(flag==1)
        cout<<"the two matrixs are equal:"<<endl;
    else
        cout<<"the matrix are not equal: "<<endl;
    
    return 0;
}