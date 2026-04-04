#include<iostream>
using namespace std;

int main(){
	int num=13,ans=0,rem,mul=1;

	while(num>0){
		rem=num%8;
		num=num/8;
		ans=rem*mul+ans;
		mul=mul*8;
	}
cout<<ans;
}