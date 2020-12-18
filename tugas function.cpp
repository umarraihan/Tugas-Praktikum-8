#include<iostream>
using namespace std ;
const float phi = 3.14 ;
float tinggi ;
float jarijari ;
float luas() ;
float keliling() ;
float volume() ;
int main() {
	int pil ;
	char ulang ;
	do {
		cout<<"Hitung Lingkaran ========== "<<endl ;
		cout<<"1. Luas Lingkaran "<<endl ;
		cout<<"2. Keliling Lingkaran "<<endl ;
		cout<<"3. Volume Tabung "<<endl ;
		cout<<"Pilih :  " ;
		cin>>pil ;
		switch (pil)
		{
			case 1:
				cout<<"Jari - Jari    : " ;
				cin>>jarijari ;
				cout<<"Luas Lingkaran Adalah  "<<luas()<<endl ;
			break;
			
			case 2:
				cout<<"Jari - Jari    : " ;
				cin>>jarijari ;
				cout<<"Keliling Lingkaran Adalah  "<<keliling()<<endl ;
			break ;
			
			case 3 :
				cout<<"Jari - Jari    : " ;
				cin>>jarijari ;
				cout<<"Tinggi         : " ;
				cin>>tinggi ;
				cout<<"Volume Tabung Adalah  "<<volume()<<endl;
			break;
			
			default:
				cout<<"Tolong Input Pilihan Anda!"<<endl;
		}
		cout<<"Ulangi Program ? (y/n) " ;
		cin>>ulang;
		cout<<endl;
	}
	while(ulang == 'y') ;
}
float luas(){
	float luas = phi*jarijari*jarijari ;	
	return luas;
}
float keliling(){
	float keliling = 2*phi*jarijari ;
	return keliling;
}
float volume(){
	float volume = phi*jarijari*jarijari*tinggi ;
	return volume;
}
