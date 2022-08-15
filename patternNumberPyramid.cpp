#include<iostream>
using namespace std;
int main(){

    int n,row=1,no;
    cin>>n;
    
    for (row = 1; row <= n; row++)
    {
        for(int i =1;i<=n-row;i++){
            cout<<"  ";
        }
        no=1;
        for(int i=1;i<=(2*row-1);i++){
            cout<<no++<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}