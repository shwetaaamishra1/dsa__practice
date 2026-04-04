#include<iostream>
using namespace std;

int main(){
	int num,rem,ans;
	cout<<"Enter the number";
	cin>>num;
	if(num<1){
		return 1;
	}
rem=num;
	while(num>0){
		rem=rem%2;
		num/=2;
		if(rem==0){
			ans=ans+1;
		}
	}
	cout<<ans;

}