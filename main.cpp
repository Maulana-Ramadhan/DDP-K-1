#include <iostream>

#include <string>

#include <stdlib.h> 

using namespace std;

long saldo = 2000000;
int mobileLegendDiamond= 0;
int PUBGUC= 0;
int genshinImpactGenesisCrystals= 0;
long IdMobileLegend = 12345678;
long IdPUBG = 12345678;
long IdGenshinImpact = 12345678;

void garisHorizontal() {
	cout << endl << "--------------------------------------" << endl;
}


/* function-function top-up --------------------------------------------*/
bool validasiSaldo(int a) {
	if (saldo - a >= 0) return true;
	else return false;
}

int topUpPilihGame() { 
	int game;
  cin >> game;	
  if (!(game == 1 || game == 2 || game == 3)) {
    cout << "pilihan tidak tersedia, coba pilih ulang: ";
    return topUpPilihGame();
  }
  return game;
}
int topUpId(int game) {
  int Id;
  cin >> Id;
  switch(game) {
    case 1: if (Id != IdMobileLegend) {
      cout << "id tidak ditemukan, coba ulangi: " << endl;
      return topUpId(game);
    } break;
    case 2: if (Id != IdPUBG) {
      cout << "id tidak ditemukan, coba ulangi: " << endl;
      return topUpId(game);
    } break;
    case 3: if (Id != IdGenshinImpact) {
      cout << "id tidak ditemukan, coba ulangi: " << endl;
      return topUpId(game);
    } break;
  }
  return Id;
}
int topUpDapatHarga(int game, int Id) {
  int harga;
  cin >> harga;
  if (!(harga == 1 || harga == 2 || harga == 3)) {
    cout << "pilihan tidak tersedia, coba pilih ulang: ";
    return topUpDapatHarga(game, Id);
  }
  return harga;
}
int topUpHarga(int game, int Id, int DapatHarga) {
  int Dapat;
  switch(game) {
    case 1: switch(DapatHarga) {
      case 1: Dapat = 44; break;
      case 2: Dapat = 4830; break;
      case 3: Dapat = 875; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
    case 2: switch(DapatHarga) {
      case 1: Dapat = 60; break;
      case 2: Dapat = 1800; break;
      case 3: Dapat = 8100; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
    case 3: switch(DapatHarga) {
      case 1: Dapat = 60; break;
      case 2: Dapat = 1090; break;
      case 3: Dapat = 8080; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
  }
  return Dapat;
}
int topUpDapat(int game, int Id, int DapatHarga) {
  int Harga;
  switch(game) {
    case 1: switch(DapatHarga) {
      case 1: Harga = 11000; break;
      case 2: Harga = 218000; break;
      case 3: Harga = 1140000; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
    case 2: switch(DapatHarga) {
      case 1: Harga = 15000; break;
      case 2: Harga = 375000; break;
      case 3: Harga = 1500000; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
    case 3: switch(DapatHarga) {
      case 1: Harga = 14000; break;
      case 2: Harga = 230000; break;
      case 3: Harga = 1470000; break;
      default: cout << "pilihan tidak tersedia, coba pilih ulang: ";
      return topUpHarga(game,Id,DapatHarga);
    } break;
  }
  return Harga;
}
void topUpTransaksi(int game, int Dapat, int Harga) {
  if(validasiSaldo(Harga)) {
    if (game == 1) mobileLegendDiamond += Dapat, saldo -= Harga; 
    else if (game == 2) PUBGUC += Dapat, saldo -= Harga;
    else if (game == 3) genshinImpactGenesisCrystals += Dapat, saldo -= Harga;
    cout << "------------------------" << endl;
    cout << "<<TRANSAKSI BERHASIL!!>>" << endl;
    cout << "------------------------" << endl;
    cout << "\t" << saldo << endl;
  } else {
    cout << "------------------------" << endl;
    cout << "<<SALDO TIDAK MENCUKUI!!>>" << endl;
    cout << "------------------------" << endl;
  }
}
void topUp() {
  system("clear");
  cout << "Pilih game: " << endl;
  cout << "1. Mobile Legends" << endl;
  cout << "2. PUBG" << endl;
  cout << "3. Genshin Impact" << endl;
  cout << "Pilihlah sesuai yang tersedia: ";
  int game = topUpPilihGame();
  garisHorizontal();
  cout << "masukkan Id game anda: "; 
  int Id = topUpId(game);
  garisHorizontal();
  switch(game) {
	  case 1: 
  	  cout << "PILIH MENU: " << endl;
  	  cout << "1. 44 DIAMOND = Rp. 11.000" << endl;
  	  cout << "2. 875 DIAMOND = Rp. 218.000" << endl;
      cout << "3. 4830 DIAMOND = Rp. 1.140.000" << endl;
      break;
    case 2: 
      cout << "PILIH MENU: " << endl;
      cout << "1. 60 UC = Rp. 15.000" << endl;
      cout << "2. 1.800 UC = Rp. Rp.375.000" << endl;
      cout << "3. 8.100 UC = Rp. 1.500.000" << endl;
      break;
    case 3:
      cout << "PILIH MENU: " << endl;
      cout << "1. 60 Genesis Crystals = Rp. 14.000" << endl;
      cout << "2. 1090 Genesis Crystals = Rp. 230.000" << endl;
      cout << "3. 8080 Genesis Crystals = Rp. 1.470.000" << endl;
      break;
    default: cout << "pilihan tidak tersedia";
	}
	cout << "Pilihlah sesuai yang tersedia: ";
  int DapatHarga = topUpDapatHarga(game, Id);
  int Dapat = topUpHarga(game, Id, DapatHarga);
  int Harga = topUpDapat(game, Id, DapatHarga);
  garisHorizontal();
  system("clear");
  topUpTransaksi(game, Dapat, Harga);
}
/*---------------------------------------------------------------------*/

void game() {
  cout << "";
}

void eWallet() {
  cout << "";
}


void menuAwal() {
	int pilih;
  cout << "PILIH MENU" << endl;
  cout << "1. top-up" << endl;
  cout << "2. game" << endl;
  cout << "3. e-wallet" << endl;
  cout << "Pilihlah sesuai yang tersedia: ";
	cin >> pilih;
  switch(pilih) {
  	case 1: system("clear"); topUp(); break;
  	case 2: system("clear"); game(); break;
  	case 3: system("clear"); eWallet(); break;
  	default: cout << "pilihan tidak tersedia";
	}
	menuAwal();
}

int main() {
  menuAwal();
  
  return 0;
}

