#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	menu:
	int i, n, total, harga = 0, hrg;
	float diskon;
	char ulang;
	string nama;
	
	cout << "=================================================" << endl;
	cout << "====== Program Perhitungan Total Penjualan ======" << endl;
	cout << "=================================================" << endl;
	
	cout << "Masukkan Jumlah Jenis Barang : "; cin >> n;
	cout << endl;
	for(i=1; i<=n; i++){
		cout << "Harga Barang Ke-" << i << ": "; cin >> hrg;
		harga = harga+hrg;
	}
		if(harga > 500){
			diskon = harga - (harga*10/100);			
		}
		else if(harga >= 200 && harga <= 500){
			diskon = harga - (harga*5/100);
		}
		else {
			diskon = harga;
		}
		
	cout << endl;
		
	cout << "Total Harga Asli Sebesar Rp" << harga << endl;
	cout << "Total Harga Setelah Diskon Sebesar Rp" << diskon << endl;

	
	cout << "Apakah Anda Ingin Mengulang Perhitungan [y/t]? "; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (ulang == 't' || ulang == 'T'){
		cout << "Terima Kasih" << endl;
	}
}
