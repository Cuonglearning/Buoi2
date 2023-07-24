#include<iostream>
using namespace std;
int main(){
	float a,b,c,t;
	cout<<"Nhap vao ba so thuc a,b,c:";cin>>a>>b>>c;
	if (a>c){
		t=a;
		a=c;
		c=t;
	}
	else if (a>b){
		t=a;
		a=b;
		b=t;
	}
	else if (b>c){
		t=b;
		b=c;
		c=t;
	}
	cout<<"Ba so duoc sap xep:"<<a<<","<<b<<","<<c;
}
