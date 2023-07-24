#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int a,b,c;float d,x1,x2;
	cout<<"Nhap 3 he so a,b,c:";cin>>a>>b>>c;
	if (a==0){
		if(b==0){
			if(c==0){
				cout<<"phuong trinh vo so nghiem.";
			}
			else{
				cout<<"phuong trinh vo nghiem";
			}
		}
		else{
			cout<<"phuong trinh co nghiem:"<<-c/b;
		}
	}
	else {
		d=b*b-4*a*c;
		if(d<0){
			cout<<"phuong trinh vo nghiem";
		}
		else if(d==0){
			cout<<"phuong trinh co nghiem kep x="<<-b/(2*a);
		}
		else{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			cout<<"phuong trinh co 2 nghiem phan biet x1="<<x1<<"x2="<<x2;
		}
	}
}
