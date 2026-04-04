#include<iostream>
using namespace std;

int main(){
	int ans=0,num,mul=1,rem;
	cout<<"Enter the num";
	cin>>num;
	while(num){
		rem=num%2;
		rem=rem^1;
		num=num/2;
		ans=ans+rem*mul;
		mul=mul*2;
	}
cout<<ans;
}