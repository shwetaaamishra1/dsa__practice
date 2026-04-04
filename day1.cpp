#include<iostream>
using namespace std;

int main(){
	int i,row,col,n;
	cout<<"Enter the value of n";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			cout<<row<<" ";
		}
		cout<<endl;
	}
}
#include<iostream>
using namespace std;

int main(){
	int row,col,n;
	cout<<"Enter the value of n";
	cin>>n;
	for(row=1;row<=n;row++){
		for(col=row;col>=1;col--){
			cout<<ro<<" ";
		}
		cout<<endl;
	}
}