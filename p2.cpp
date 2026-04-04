#include<iostream>
using namespace std;

int main(){
	int row,n;
	cout<<"Enter the value of n";
	cin>>n;
	for(row=0;row<n;row++){
		for(char col='a';col<='a'+row;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}