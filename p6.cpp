#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	cout<<"Enter the value of n : ";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=n;col>=n-row+1;col--){
			cout<<col<<" ";
		}
		cout<<endl;

	}
}
		

