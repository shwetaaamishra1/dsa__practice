
//sum of the digits


#include<iostream>
using namespace std;

int main(){
	int num,ans=0,rem;
	cout<<"enter the num";
	cin>>num;
	while(num>9){
		rem=num%10;
		num/=10;
		ans=ans+rem;
	
	}
cout<<ans+num;
}