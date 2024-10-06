#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Top up Game
long saldo = 2000000;
int mobileLegendDiamond = 0;
int PUBGUC = 0;
int genshinImpactGenesisCrystals = 0;
long IdMobileLegend = 12345678;
long IdPUBG = 12345678;
long IdGenshinImpact = 12345678;
long usernameSaldo = 87654321;
int pinSaldo = 1234;

//Token Listrik
int ListrikRumah = 0;
long NomorListrikRumah = 12345678;

void garisHorizontal() {
    cout << "--------------------------------------------" << endl;
}

/* function-function top-up --------------------------------------------*/
bool validasiSaldo(int a) {
    if (saldo - a >= 0) return true;
    else return false;
}

int topUpPilihGame() {
    int game;
    cin >> game;
    if (game == 0) return 0;
    if (!(game == 1 || game == 2 || game == 3)) {
        cout << "Pilihan tidak tersedia, coba pilih ulang: ";
        return topUpPilihGame();
    }
    return game;
}
int topUpId(int game) {
    long Id;
    cin >> Id;
    if (Id == 0) return 0;
    switch(game) {
        case 1: 
            if (Id != IdMobileLegend) {
                cout << "ID tidak ditemukan, coba ulangi: ";
                return topUpId(game);
            }
            break;
        case 2: 
            if (Id != IdPUBG) {
                cout << "ID tidak ditemukan, coba ulangi: ";
                return topUpId(game);
            }
            break;
        case 3: 
            if (Id != IdGenshinImpact) {
                cout << "ID tidak ditemukan, coba ulangi: ";
                return topUpId(game);
            }
            break;
    }
    return Id;
}
int topUpDapatHarga(int game) {
    int harga;
    cin >> harga;
    if (harga == 0) return 0;
    if (!(harga >= 1 && harga <= 3)) {
        cout << "Pilihan tidak tersedia, coba pilih ulang: ";
        return topUpDapatHarga(game);
    }
    return harga;
}
int topUpHarga(int game, int DapatHarga) {
    int Dapat;
    switch(game) {
        case 1: 
            switch(DapatHarga) {
                case 1: Dapat = 44; break;
                case 2: Dapat = 875; break;
                case 3: Dapat = 4830; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, DapatHarga);
            }
            break;
        case 2: 
            switch(DapatHarga) {
                case 1: Dapat = 60; break;
                case 2: Dapat = 1800; break;
                case 3: Dapat = 8100; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, DapatHarga);
            }
            break;
        case 3: 
            switch(DapatHarga) {
                case 1: Dapat = 60; break;
                case 2: Dapat = 1090; break;
                case 3: Dapat = 8080; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, DapatHarga);
            }
            break;
    }
    return Dapat;
}
int topUpDapat(int game, int DapatHarga) {
    int Harga;
    switch(game) {
        case 1: 
            switch(DapatHarga) {
                case 1: Harga = 11000; break;
                case 2: Harga = 218000; break;
                case 3: Harga = 1140000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, DapatHarga);
            }
            break;
        case 2: 
            switch(DapatHarga) {
                case 1: Harga = 15000; break;
                case 2: Harga = 375000; break;
                case 3: Harga = 1500000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, DapatHarga);
            }
            break;
        case 3: 
            switch(DapatHarga) {
                case 1: Harga = 14000; break;
                case 2: Harga = 230000; break;
                case 3: Harga = 1470000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, DapatHarga);
            }
            break;
    }
    return Harga;
}
void topUpTransaksi(int game, int Dapat, int Harga) {
    if(validasiSaldo(Harga)) {
        if (game == 1) mobileLegendDiamond += Dapat, saldo -= Harga;
        else if (game == 2) PUBGUC += Dapat, saldo -= Harga;
        else if (game == 3) genshinImpactGenesisCrystals += Dapat, saldo -= Harga;
        cout << "------------------------" << endl;
        cout << "<<TRANSAKSI BERHASIL!>>" << endl;
        cout << "------------------------" << endl;
    } else {
        cout << "------------------------" << endl;
        cout << "<<SALDO TIDAK MENCUKUPI!>>" << endl;
        cout << "------------------------" << endl;
    }
}

int topUpConfirm() {
    long nomorHp;
    int passwordHp;
    cout << "Username saldo\t: "; cin >> nomorHp;
    cout << "Pin saldo\t: "; cin >> passwordHp;
    if (nomorHp == 0 || passwordHp == 0) return 0;
    if (!(nomorHp == usernameSaldo && passwordHp == pinSaldo)) {
        cout << "Username atau pin tidak ditemukan, silakan coba lagi" << endl;
        return topUpConfirm();
    }
    return 1;
}

int topUpPilihListrik() {
    int listrik;
    cin >> listrik;
    if (listrik == 0) return 0;
    if (listrik != 1) {
        cout << "Pilihan tidak tersedia, coba pilih ulang: ";
        return topUpPilihListrik();
    }
    return listrik;
}
int topUpNolistrik() {
    long No;
    cin >> No;
    if (No == 0) return 0;
    if (No != NomorListrikRumah) {
        cout << "Nomor listrik rumah anda tidak ditemukan, coba ulangi: " << endl;
        return topUpNolistrik();
    }
    return No;
}
int topUpDapatHargaListrik() {
    int hargaListrik;
    cin >> hargaListrik;
    if (hargaListrik == 0) return 0;
    if (!(hargaListrik >= 1 && hargaListrik <= 5)) {
        cout << "Pilihan tidak tersedia, coba pilih ulang: ";
        return topUpDapatHargaListrik();
    }
    return hargaListrik;
}
int topUpHargaListrik(int HargaListrik) {
    int Token;
    switch(HargaListrik) {
        case 1: Token = 100000; break;
        case 2: Token = 200000; break;
        case 3: Token = 300000; break;
        case 4: Token = 400000; break;
        case 5: Token = 500000; break;
        default:
            cout << "Pilihan tidak tersedia, coba pilih ulang: ";
            return topUpHargaListrik(HargaListrik);
    }
    return Token;
}
void topUpTransaksiListrik(int Token, int HargaListrik) {
    if(validasiSaldo(HargaListrik)) {
        ListrikRumah += Token, saldo -= HargaListrik;
        cout << "------------------------" << endl;
        cout << "<<TRANSAKSI BERHASIL!>>" << endl;
        cout << "------------------------" << endl;
    } else {
        cout << "------------------------" << endl;
        cout << "<<SALDO TIDAK MENCUKUPI!>>" << endl;
        cout << "------------------------" << endl;
    }
}


int topUpMainMenuGame() {
    system("cls");
    system("clear");
    cout << "=============TOP UP GAME=============" << endl;
    cout << "Game yang tersedia:\n";
    cout << "1. Mobile Legend\n";
    cout << "2. PUBG\n";
    cout << "3. Genshin Impact\n";
    cout << "0. Kembali\n";
    cout << "Pilih Game: "; 
    int game = topUpPilihGame();
    if (game == 0) return 0;
    garisHorizontal();
    cout << "ID Game: "; 
    int Id = topUpId(game);
    if (Id == 0) return 0;
    garisHorizontal();
    switch(game) {
        case 1: 
        cout << "1. 44 Diamond = Rp. 11.000" << endl;
        cout << "2. 875 Diamond = Rp. 218.000" << endl;
        cout << "3. 4830 Diamond = Rp. 1.140.000" << endl;
        cout << "0. kembali" << endl;
        break;
        case 2:
        cout << "1. 60 UC = Rp. 15.000" << endl;
        cout << "2. 1800 UC = Rp. 375.000" << endl;
        cout << "3. 8100 UC = Rp. 1.500.000" << endl;
        cout << "0. kembali" << endl;
        break;
        case 3:
        cout << "1. 60 Genesis Crystals = Rp. 14.000" << endl;
        cout << "2. 1090 Genesis Crystals = Rp. 230.000" << endl;
        cout << "3. 8080 Genesis Crystals = Rp. 1.470.000" << endl;
        cout << "0. kembali" << endl;
        break;
    }
    cout << "Pilih Nominal: "; 
    int Harga = topUpDapatHarga(game);
    if (Harga == 0) return 0;;
    garisHorizontal();
    if (topUpConfirm() == 0) return 0;
    system("clear");
    system("cls");
    int Dapat = topUpHarga(game, Harga);
    int HargaFix = topUpDapat(game, Harga);
    topUpTransaksi(game, Dapat, HargaFix);
    return 1;
}
int topUpMainMenuListrik() {
    system("cls");
    system("clear");
    cout << "=============TOP UP LISTRIK=============" << endl;
    garisHorizontal();
    cout << "1. Token Listrik Rumah\n";
    cout << "0. Kembali\n";
    garisHorizontal();
    cout << "Pilih Menu: "; 
    int listrik = topUpPilihListrik();
    if (listrik == 0) return 0;
    garisHorizontal();
    cout << "Nomor Listrik: "; int No = topUpNolistrik();
    if (No == 0) return 0;
    garisHorizontal();
    cout << "Nominal Pembelian:\n";
    cout << "1. Rp100000\n";
    cout << "2. Rp200000\n";
    cout << "3. Rp300000\n";
    cout << "4. Rp400000\n";
    cout << "5. Rp500000\n";
    garisHorizontal();
    cout << "Pilih Nominal: "; int HargaListrik = topUpDapatHargaListrik();
    if (HargaListrik == 0) return 0;
    garisHorizontal();
    if (topUpConfirm() == 0) return 0;
    system("clear");
    system("cls");
    int Token = topUpHargaListrik(HargaListrik);
    int HargaFixListrik = HargaListrik * 100000;
    topUpTransaksiListrik(Token, HargaFixListrik);
    return 1;
}

int topUpMainMenu(int a) {
    if (a != 1) {
      system("clear");
      system("cls");
    }
    int msg;
    int menuUtama;
    cout << "=============MENU UTAMA=============" << endl;
    cout << "1. Top Up Game\n";
    cout << "2. Token Listrik\n";
    cout << "3. info-info\n";
    cout << "0. keluar\n";
    cout << "Pilih menu: "; 
    cin >> menuUtama;
    if (menuUtama == 1) msg = topUpMainMenuGame();
    else if (menuUtama == 2)  msg = topUpMainMenuListrik();
    else if (menuUtama == 0) {
        cout << "Terima kasih telah menggunakan layanan kami." << endl;
        return 0;
    }
    return topUpMainMenu(msg);
}

int main() {
    topUpMainMenu(0);
    return 0;
}