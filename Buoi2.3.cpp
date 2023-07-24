#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Nhap ba so a,b,c:";cin>>a>>b>>c;
	if (a+b>c&&a+c>b&&b+c>a){
		if(a==b||a==c||b==c){
			cout<<"Day la tam giac can";
		}
		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
			cout<<"Day la tam giac vuong";
		}
		else if(a==b&&a==c&&b==c){
			cout<<"Day la tam giac deu";
		}
		else if((a==b||a==c||b==c)&&(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)){
			cout<<"Day la tam giac vuong can";
		}
		else{
			cout<<"Day la tam giac";
		}
	}
	else{
		cout<<"day khong phai tam giac";
	}
}
