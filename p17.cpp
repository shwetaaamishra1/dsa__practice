#include<iostream>
using namespace std;


int main(){
	int row,col,n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=row-1;col++){
			cout<<" "<<" ";
		}
		for(col=n;col>=2*row-1;col--){
			cout<<"*"<<" ";
		}
		
	cout<<endl;
	}

		
}