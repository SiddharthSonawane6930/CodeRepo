#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n,no,i=1;
    int largest = INT_MIN;
    cin>>n;
    while (i<=n)
    {
        cin>>no;
        if (largest < no)
        {
            largest =no;
        }
        i++;
    }
    cout<<largest;
    return 0;
    
}