#include <iostream>

#include <string>

using namespace std;

long saldo = 1500000;
int mobileLegendDiamond= 0;
int IdMobileLegend = 12345678;
int IdPUBG = 12345678;

bool validasiSaldo(int a) {
	if (saldo - a >= 0) return true;
	else return false;
}


void garisHorizontal() {
	cout << endl << "--------------------------------------" << endl;
}

int topUpPilihGame() {
	int pilih;
	
	cout << "Pilih game: ";
  cout << "1. Mobile Legends" << endl;
  cout << "2. Free Fire" << endl;
  cout << "3. Genshin Impact" << endl;
  
  cout << "Pilihlah sesuai yang tersedia: ";
  cin >> pilih;
  
  switch(pilih) {
  	case 1: return 1;
  	case 2: return 2;
  	case 3: return 3;
  	
  	default: cout << "pilihan tidak tersedia";
		topUpPilihGame();
	}
}

int topUpIsiMobileLegend() {
	long Id;
	int harga;
  cout << "Id: " << endl;
	cin >> Id;
	
	cout << "PILIH MENU: " << endl;
  cout << "1. 256 DIAMOND = Rp. 70.000" << endl;
  cout << "2. 840 DIAMOND = Rp. 200.000" << endl;
  cout << "3. 5398 DIAMOND = Rp. 1.300.000" << endl;
  
  cout << "Pilihlah sesuai yang tersedia: ";
  cin >> harga;
  
  switch(harga) {
  	case 1: if(Id == IdMobileLegend) mobileLegendDiamond += 256; saldo -= 70000; break;
  	case 2: if(Id == IdMobileLegend) mobileLegendDiamond += 840; saldo -= 200000; break;
  	case 3: if(Id == IdMobileLegend) mobileLegendDiamond += 5398; saldo -= 1300000; break;
  	
  	default: cout << "pilihan tidak tersedia";
		topUpIsiMobileLegend();
	}
}
 
int topUpIsiPUBG() {
	long Id;
	int harga;
  cout << "Id: " << endl;
	cin >> Id;
	
	cout << "PILIH MENU: " << endl;
  cout << "1. 300 UC = Rp. 65.000" << endl;
  cout << "2. 1.500 UC = Rp. Rp.320.000" << endl;
  cout << "3. 66.000 UC = Rp. 14.200.000" << endl;
  
  cout << "Pilihlah sesuai yang tersedia: ";
  cin >> harga;
  
	switch(harga) {
  	case 1: if(Id == IdPUBG) PUBGUC += 300; saldo -= 65000; break;
  	case 2: if(Id == IdPUBG) PUBGUC += 1500; saldo -= 320000; break;
  	case 3: if(Id == IdPUBG) PUBGUC += 66000; saldo -= 14200000; break;
  	
  	default: cout << "pilihan tidak tersedia";
		topUpIsiMobileLegend();
	}
}
 
void topUp() {
	int game = topUpPilihGame();
	switch(game) {
		case 1: topUpIsiMobileLegend();
		case 1: topUpIsiFreeFire();
		case 1: topUpIsiGenshinImpact();
	}

}

void game() {
  cout << "";
}

void eWallet() {
  cout << "";
}


void menuAwal() {
	garisHorizontal();
	int pilih;
	
  cout << "PILIH MENU" << endl;
  cout << "1. top-up" << endl;
  cout << "2. game" << endl;
  cout << "3. e-wallet" << endl;
  
  cout << "Pilihlah sesuai yang tersedia: ";
	cin >> pilih;
  
  switch(pilih) {
  	case 1: topUp(); break;
  	case 2: game(); break;
  	case 3: eWallet(); break;
  	
  	default: cout << "pilihan tidak tersedia";
		menuAwal();
	}
  
}

int main() {
  menuAwal();
  
  return 0;
}

