#include<iostream>
using namespace std;

int main(){
	int ans=0,x,num,rem;
	cout<<"Enter the number";
	cin>>x;
	num=x;
	while(num){
		rem=num%10;
		num/=10;
		ans=ans*10+rem;
	}
	if(ans==x){
		cout<<"It is A pallindrome";
	}
	else{
		cout<<"not a pallindrome";
	}
}