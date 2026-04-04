#include<iostream>
using namespace std;


int main(){
	int num,ans=0,rem;
	cout<<"enter the number";
	cin>>num;
	}
	if(ans>(INT_MAX-rem)/10){
		return 0;
	}
	while(num){
		rem=num%10;
		num/=10;
		ans=ans*10+rem;
	}
	
	cout<<ans;
}