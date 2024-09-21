#include <string>
#include "tampilan.h"

using namespace std;
void K_ras(int ras, int &hpPlayer, int &apPlayer){
	bool selesai = false;
	do{
		switch (ras){
			case 1 :
				hpPlayer += 100;
				apPlayer += 9;
				selesai = true;
				break;
			case 2 :
				hpPlayer += 150;
				apPlayer += 7;
				selesai = true;
				break;
			case 3 :
				hpPlayer += 200;
				apPlayer += 5;
				selesai = true;
				break;
			default :
				cout << "Input tidak valid.";
				break;
		}
	}while (!selesai);

}
void K_kelas(int kelas, int &hpPlayer, int &apPlayer){
	bool selesai = false;
	do{
		switch (kelas){
			case 1 :
				hpPlayer += 100;
				apPlayer += 3;
				selesai = true;
				break;
			case 2 :
				hpPlayer += 50;
				apPlayer += 5;
				selesai = true;
				break;
			case 3 :
				hpPlayer += 80;
				apPlayer += 4;
				selesai = true;
				break;
			default :
				cout << "Input tidak valid.";
				break;
		}
	}while(!selesai);

}
void akunplayer(string &namaPlayer,int &hpPlayer, int &apPlayer, int ras, int kelas){
	cout << "--WELCOME--"<< endl;
	cout << "Buat akun" << endl;
	cout << "--------------"<< endl;
	cout << "Nama \t: ";
	getline(cin,namaPlayer);
	
	listlras();
	listlkelas();
	
	cout << "Pilih Ras \t(1-3): ";
	cin >> ras;
	K_ras(ras,hpPlayer, apPlayer);
	cout << "Pilih Kelas \t(1-3): ";
	cin >>kelas;
	K_kelas(kelas, hpPlayer, apPlayer);
	
	cin.ignore();
}
