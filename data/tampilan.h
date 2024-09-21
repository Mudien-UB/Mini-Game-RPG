#ifndef tampilan_h
#define tampilan_h

using namespace std;

void listlras() {
	cout << "=== RAS ===" << endl;
	cout << "NAMA \t\t HP \t AP"<< endl;
	cout << "1. ELF \t\t100\t9"<< endl;
	cout << "2. HUMAN \t150\t7"<< endl;
	cout << "3. ORC \t\t200\t5"<< endl;
}
void listlkelas() {
	cout << "=== KELAS ==="<< endl;
	cout << "NAMA \t\t HP \t AP"<< endl;
	cout << "1. FIGHTER\t100\t3 "<< endl;
	cout << "2. WIZARD\t50\t5 "<< endl;
	cout << "3. RANGER\t80\t4 "<< endl;
}

void listlmonster() {
	cout << endl;
	cout << "=== MONSTER ==="<< endl;
	cout << "Nama monster\t HP|AP required"<< endl;
	cout << "1. Gehenna \t150|8" << endl;
	cout << "2. Pandemonium\t400|20"<< endl;
	cout << "3. Atra-hasis\t700|50"<< endl;
	cout << "4. Inazuma  \t1500|100"<< endl;
	cout << "5. Eridu city\t3500|200"<< endl;
	cout << "0. Kembali..."<< endl;
}
void listlmusuh() {
	cout << endl;
	cout << "=== Pasukan Iblis ==="<< endl;
	cout << "Nama Ketua Pasukan \t HP|AP"<< endl;
	cout << "1. Aboleth \t\t100|12"<< endl;
	cout << "2. Death Slaad\t\t300|10"<< endl;
	cout << "3. Red Dragon Wyrmling\t500|15"<< endl;
	cout << "0. Kembali..."<< endl;
}
void menu() {
	cout << endl;
	cout << "======== MENU ========"<< endl;
	cout << "1. FARMING DI DUNGEON" << endl;
	cout << "2. MENYERANG PASUKAN IBLIS" << endl;
	cout << "3. ID CARD"<< endl;
	cout << "0. KEMBALI KE DESA"<< endl;
}

#endif