#include <vector>
#include "tampilan.h"
using namespace std;

void monster(int &hpPlayer, int &apPlayer, string namaPlayer){
	bool selesai = false;
	int m;
	do {
		
		listlmonster();
		cout << "Serang monster ke-";
		cin >> m;
		switch (m){
			case 1:
				if (hpPlayer >= 150 && apPlayer > 8){
					hpPlayer += 100;
					apPlayer += 8;
					cout << endl;
					cout << "ANDA MENDAPATKAN BONUS HP & AP"<< endl;
				}else {
					cout << "Atribut tidak memenuhi syarat."<< endl;
					cout << "!!! < harap farming kembali > !!!" << endl;
				}
			
				cout << "********************"<< endl;
				cout << "Nama : "<< namaPlayer << endl;
				cout << "HP   : "<< hpPlayer << endl;
				cout << "AP   : "<< apPlayer << endl;
				cout << "********************"<< endl;
				break;
			case 2:
				if (hpPlayer > 400 && apPlayer > 20){
					hpPlayer += 150;
					apPlayer += 12;
					cout << endl;
					cout << "ANDA MENDAPATKAN BONUS HP & AP"<< endl;
				}else {
					cout << "Atribut tidak memenuhi syarat."<< endl;
					cout << "!!! < harap farming kembali > !!!"<< endl;
				}
				
				cout << "********************"<< endl;
				cout << "Nama : "<< namaPlayer << endl;
				cout << "HP   : "<< hpPlayer << endl;
				cout << "AP   : "<< apPlayer << endl;
				cout << "********************"<< endl;
				break;
			case 3:
				if (hpPlayer > 700 && apPlayer > 50){
					hpPlayer += 200;
					apPlayer += 15;
					cout << endl;
					cout << "ANDA MENDAPATKAN BONUS HP & AP"<< endl;
				}else {
					cout << "Atribut tidak memenuhi syarat."<< endl;
					cout << "!!! < harap farming kembali > !!!"<< endl;
				}
			
				cout << "********************"<< endl;
				cout << "Nama : "<< namaPlayer << endl;
				cout << "HP   : "<< hpPlayer << endl;
				cout << "AP   : "<< apPlayer << endl;
				cout << "********************"<< endl;
				break;
			case 4:
				if (hpPlayer > 1500 && apPlayer > 100){
					hpPlayer += 300;
					apPlayer += 25;
					cout << endl;
					cout << "ANDA MENDAPATKAN BONUS HP & AP"<< endl;
				}else {
					cout << "Atribut tidak memenuhi syarat."<< endl;
					cout << "!!! < harap farming kembali > !!!" << endl;
				}
			
				cout << "********************"<< endl;
				cout << "Nama : "<< namaPlayer << endl;
				cout << "HP   : "<< hpPlayer << endl;
				cout << "AP   : "<< apPlayer << endl;
				cout << "********************"<< endl;
				break;
			case 5:
				if (hpPlayer > 3500 && apPlayer > 200){
					hpPlayer += 500;
					apPlayer += 40;
					cout << endl;
					cout << "ANDA MENDAPATKAN BONUS HP & AP"<< endl;
				}else {
					cout << "Atribut tidak memenuhi syarat."<< endl;
					cout << "!!! < harap farming kembali > !!!" << endl;
				}
			
				cout << "********************"<< endl;
				cout << "Nama : "<< namaPlayer << endl;
				cout << "HP   : "<< hpPlayer << endl;
				cout << "AP   : "<< apPlayer << endl;
				cout << "********************"<< endl;
				break;
			case 0:
				selesai = true;
				break;
			default :
				cout << "Input tidak valid."<< endl;
				break;
		}
	}while (selesai == false);
}

void serang(int p, int apPlayer, int hpPlayer, string namamusuh, string namaPlayer) {
    int i = 1;
    vector<int> hpiblis = {100, 300, 500};
    vector<int> apiblis = {12, 10, 15};

    int hp = hpPlayer;
    int hpmusuh = hpiblis.at(p);
    int apmusuh = apiblis.at(p);  // Corrected variable name

    while (hp > 0 && hpmusuh > 0) {
        cout << "[][][][][][][][][][][][][][]" << endl;
        cout << endl;
        cout << "round ke-" << i << endl;
        cout << "player menyerang : " << endl;
        hpmusuh -= apPlayer;
        hpmusuh = (hpmusuh > 0 ? hpmusuh : 0);

        cout << "********************" << endl;
        cout << "Nama : " << namamusuh << endl;
        cout << "HP   : " << hpmusuh << endl;
        cout << "AP   : " << apmusuh << endl;
        cout << "********************" << endl;

        cout << "-------------" << endl;
        cout << "musuh menyerang : " << endl;
        hp -= apmusuh;  // Corrected variable name
        hp = (hp > 0 ? hp : 0);

        cout << "********************" << endl;
        cout << "Nama : " << namaPlayer << endl;
        cout << "HP   : " << hp << endl;
        cout << "AP   : " << apPlayer << endl;
        cout << "********************" << endl;
        i++;

        cout << endl;
        cout << endl;
    }

    if (hp > 0) {
        cout << ":)|:)|:)|:)|:)|:)" << endl;
        cout << "--- ANDA MENANG ---" << endl;
        cout << endl;
    } else {
        cout << "--- NICE TRY BRO ---" << endl;
        cout << "     KAMU KALAH     " << endl;
    }
}


void battle (int hpPlayer, int apPlayer, string namaPlayer){
	bool selesai = false;
	string namamusuh;
	int l,p;
	do{
		listlmusuh();
		cout << "Serang musuh ke-";
		cin >> l;
		switch(l){
			case 1:
				p = 0;
				namamusuh = "Aboleth";
				serang(p,apPlayer, hpPlayer, namamusuh, namaPlayer);
				break;
			case 2:
				p = 1;
				namamusuh = "Death Slaad";
				serang(p,apPlayer, hpPlayer, namamusuh, namaPlayer);
				break;
			case 3:
				p = 2;
				namamusuh = "Red Dragon Wyrmling";
				serang(p,apPlayer, hpPlayer, namamusuh, namaPlayer);
				break;
			case 0:
				selesai = true;
				break;
			default:
				cout << "Input tidak valid.";
				break;
		}	
	}while (selesai == false);
}