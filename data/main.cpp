#include <iostream>
#include <string>
#include "karakter.h"
#include "pertempuran.h"
using namespace std;


int main (){
	
	string namaPlayer;
	int ras, kelas;
	int hpPlayer = 0;
	int apPlayer = 0;
	
	
	akunplayer(namaPlayer, hpPlayer, apPlayer, ras, kelas);
	
	cout << "*******AKUN BERHASIL DIBUAT******"<< endl;
	cout << "Nama : "<< namaPlayer << endl;
	cout << "HP   : "<< hpPlayer << endl;
	cout << "AP   : "<< apPlayer<< endl;
	cout << "*********************************"<< endl;
	cout << endl;
	int a;
	
	bool selesai = false;
	do{
	menu();
	cout << "Masukan pilihan : " ;
	cin >> a;
	switch (a){
		case 1 :
			monster(hpPlayer, apPlayer, namaPlayer);
			break;
		case 2 :
			battle(hpPlayer, apPlayer, namaPlayer);
			break;
		case 3 :
			cout << "********************"<< endl;
			cout << "Nama : "<< namaPlayer << endl;
			cout << "HP   : "<< hpPlayer << endl;
			cout << "AP   : "<< apPlayer << endl;
			cout << "********************"<< endl;
			break;
		case 0 :
			cout << endl;
			cout << "tekan enter sekali lagi."<< endl;
			selesai = true;
		default :
			cout << "Input tidak valid";
			break;
		}
	}while (!selesai);
}