#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(row=n;row>=1;row--){
		for(col=1;col<=row;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}