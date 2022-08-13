#include<iostream>
using namespace std;
int main(){

    int n,no,i;
    cin>>n;
    for (no = 2; no <= n; no++)
    {
        // Check if the numvber is prime or not
        for ( i = 2; i < no; i++)
        {
            if(no%i==0){
                break;
                // used to take out of innermost Loop 
            }
        }
        if(no==i){
            cout<<no<<" ";
            // Printing the number because it is prime
        }
        
    }
    

    return 0;
}