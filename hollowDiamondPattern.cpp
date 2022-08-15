#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    n=n*2;
	
	int i,j;
	int inst=(n-1)/2;
	int insp=1;
	
	for(i=1;i<=n;i++){
		if(i==1 || i==n){
			for(j=1;j<n;j++){
				cout<<"*"<<"";
			}
			cout<<endl;
		}
		
		if(i>1 && i<=(n+1)/2){
		for(j=inst;j>0;j--){
			cout<<"*"<<"";
		}
		for(j=1;j<=insp;j++){
			cout<<" "<<"";
		}
		for(j=inst;j>0;j--){
			cout<<"*"<<"";
		}
		
		insp=insp+2;
		inst--;
		cout<<endl;
		}
		
		
		
		if(i>(n/2+1) && i<n){
			if(i==(n/2+2)){
			inst=inst+2;
			insp=insp-4;
			}
		for(j=inst;j>0;j--){
			cout<<"*"<<"";
		}
		for(j=1;j<=insp;j++){
			cout<<" "<<"";
		}
		for(j=inst;j>0;j--){
			cout<<"*"<<"";
		}
		inst++;
		insp-=2;			
		cout<<endl;	
		}
		
	}

}