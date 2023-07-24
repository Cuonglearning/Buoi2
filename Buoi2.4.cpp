#include<iostream>
using namespace std;
int main(){
	int km,tien;
	cout<<"Nhap so km: ";cin>>km;
	if (km==1){
		tien==15000;
	}
	else if(km>1&&km<=5){
		tien=(15000+13500*(km-1));
	}
	else if(km>5&&km<120){
		tien=(11000*(km-5))+((13500*4)+15000);
	}
	else if(km>=120){
		tien=(11000*(km-5))+((13500*4)+15000)*0.1;
	}
	cout<<"So tien:"<<tien;
}
