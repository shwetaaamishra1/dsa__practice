#include<iostream>
using namespace std;

int main(){
	int num=13,rem,ans=0,mul;
	while(num>0){
		rem=num%2;
		cout<<rem;
		num=num/2;
		ans=rem*mul+ans;
		mul=mul*10;
	}

}