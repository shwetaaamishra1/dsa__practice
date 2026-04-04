#include<iostream>
using namespace std;

int main(){
	int row,n,col;
	cout<<"Enter the value of n";
	cin>>n;
	for(row=0;row<n;row++){
		for(col=-1;col<row;col++){
			char a='a'+row;
			cout<<a<<" ";
		}
		cout<<endl;
	}
}