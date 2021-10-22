#include <iostream>
using namespace std;

int main()
{
	int i, j, matkul, sks, jumSmt, smt, nilai_mk;
	char nilai, ulang;
	float ipk, ip, sks_tot, nilai_tot;
	string namaMk;
	
	menu:
	cout << "============================================" << endl;
	cout << "===== Program Menghitung IPK Mahasiswa =====" << endl;
	cout << "============================================" << endl;
	cout << endl;
	
	cout << "Masukkan Jumlah Semester Anda : "; cin >> jumSmt;
	cout << endl;
	
	for (i=1; i<=jumSmt; i++){
		cout << "Masukkan Jumlah Mata Kuliah Semester " << i << " Anda : "; cin >> matkul;
		for (j=1; j<=matkul; j++){
			cout << "Nama Mata Kuliah Ke-" << j << ": "; cin >> namaMk;
			cout << "Masukkan Jumlah SKS Mata Kuliah Ke-" << j << " Anda : "; cin >> sks;
			cout << "Masukkan Nilai Mata Kuliah Ke-" << j << " Anda (A/B/C/D/E) : "; cin >> nilai;
		
			
			if (nilai == 'A'){
				nilai_mk = 4*sks;
			}
			else if (nilai == 'B') {
            	nilai_mk = 3*sks;
          	}
          	else if (nilai == 'C') {
            	nilai_mk = 2*sks;
          	}
          	else if (nilai == 'D') {
            	nilai_mk = 1*sks;
          	}
          	else if (nilai == 'E') {
            	nilai_mk = 0*sks;
          	}
          	else {
            	cout << "Input Salah!\n";
          	}
          	nilai_tot = nilai_tot + nilai_mk;
          	sks_tot = sks_tot + sks;         
		}
			ip = nilai_tot/sks_tot;
			cout << "Total IP Anda adalah : " << ip << endl;
				
	}
	if (jumSmt == 1){
		ipk = ip;
		cout << "Total IPK Anda = " << ipk;
	}
	else if (jumSmt >= 1 && jumSmt <= 14){
		ip = ip+smt;
		ipk = ip/sks_tot;
		cout << "Total IPK Anda = " << ipk;
	}
	cout << endl;
	
	cout << "Apakah Anda Ingin Menghitung IPK lagi [y/t]? "; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (ulang == 't' || ulang == 'T'){
		cout << "Terima Kasih" << endl;
	}
}
