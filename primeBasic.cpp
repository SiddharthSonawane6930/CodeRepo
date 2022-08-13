#include<iostream>
using namespace std;
int main(){

    int n,i=2;
    cin>>n;
    while (i<n)
    {
        if (i%2==0)
        {
            cout<<"Not a Prime Number";
            break;
        }
        
    }
    if (i==n)
    {
        cout<<"Prime Number";
    }
    
    
    return 0;
}