#include<iostream>
using namespace std;
int main(){
	int m,y;
	cout<<"Nhap thang va nam:";cin>>m>>y;
	if((y<1975)||(m<1&&m>12)){
		cout<<"Thang hoac nam khong hop le!";
	}
	else{
		if(m==2){
			if(y%4==0&&y%100!=0){
				cout<<"Thang 2 nam "<<y<<" co 29 ngay.";
			}
			else{
				cout<<"Thang 2 nam "<<y<<" co 28 ngay.";
			}
		}
		else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
			cout<<"Thang "<<m<<" nam "<<y<<" co 31 ngay.";
		}
		else{
			cout<<"Thang "<<m<<" nam "<<y<<" co 30 ngay.";
		}
	}
}
