#include<iostream>
using namespace std;

int main(){
	int n,row,col;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=n-row;col>=1;col--){
			cout<<" "<<" ";
		}
		
		for(col=1;col<=row;col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
}