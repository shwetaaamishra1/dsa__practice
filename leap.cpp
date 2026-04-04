#include<iostream>
using namespace std;

int main(){
	int year;
	cout<<"enter the Year";
	cin>>year;
	if(year%400==0){
		cout<<"It Is the leap year";
	}
	else if(year%4==0 && year%100!=0){
		cout<<"It Is the leap year";
	}
	else{
		cout<<"not a leap year";
	}

}