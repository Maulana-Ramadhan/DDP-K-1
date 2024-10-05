#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

long saldo = 2000000;
int mobileLegendDiamond = 0;
int PUBGUC = 0;
int genshinImpactGenesisCrystals = 0;
long IdMobileLegend = 12345678;
long IdPUBG = 12345678;
long IdGenshinImpact = 12345678;
long usernameSaldo = 98765432;
int pinSaldo = 1234;

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
                cout << "ID tidak ditemukan, coba ulangi: " << endl;
                return topUpId(game);
            }
            break;
        case 2: 
            if (Id != IdPUBG) {
                cout << "ID tidak ditemukan, coba ulangi: " << endl;
                return topUpId(game);
            }
            break;
        case 3: 
            if (Id != IdGenshinImpact) {
                cout << "ID tidak ditemukan, coba ulangi: " << endl;
                return topUpId(game);
            }
            break;
    }
    return Id;
}

int topUpDapatHarga(int game, int Id) {
    int harga;
    cin >> harga;
    if (harga == 0) return 0;
    if (!(harga == 1 || harga == 2 || harga == 3)) {
        cout << "Pilihan tidak tersedia, coba pilih ulang: ";
        return topUpDapatHarga(game, Id);
    }
    return harga;
}

int topUpHarga(int game, int Id, int DapatHarga) {
    int Dapat;
    switch(game) {
        case 1: 
            switch(DapatHarga) {
                case 1: Dapat = 44; break;
                case 2: Dapat = 875; break;
                case 3: Dapat = 4830; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, Id, DapatHarga);
            }
            break;
        case 2: 
            switch(DapatHarga) {
                case 1: Dapat = 60; break;
                case 2: Dapat = 1800; break;
                case 3: Dapat = 8100; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, Id, DapatHarga);
            }
            break;
        case 3: 
            switch(DapatHarga) {
                case 1: Dapat = 60; break;
                case 2: Dapat = 1090; break;
                case 3: Dapat = 8080; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpHarga(game, Id, DapatHarga);
            }
            break;
    }
    return Dapat;
}

int topUpDapat(int game, int Id, int DapatHarga) {
    int Harga;
    switch(game) {
        case 1: 
            switch(DapatHarga) {
                case 1: Harga = 11000; break;
                case 2: Harga = 218000; break;
                case 3: Harga = 1140000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, Id, DapatHarga);
            }
            break;
        case 2: 
            switch(DapatHarga) {
                case 1: Harga = 15000; break;
                case 2: Harga = 375000; break;
                case 3: Harga = 1500000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, Id, DapatHarga);
            }
            break;
        case 3: 
            switch(DapatHarga) {
                case 1: Harga = 14000; break;
                case 2: Harga = 230000; break;
                case 3: Harga = 1470000; break;
                default: 
                    cout << "Pilihan tidak tersedia, coba pilih ulang: ";
                    return topUpDapat(game, Id, DapatHarga);
            }
            break;
    }
    return Harga;
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

void topUp() {
    int game = 0, Id = 0, DapatHarga = 0, Dapat = 0, Harga = 0, confirm = 0;
    system("cls");  // Untuk Windows, ganti dengan "clear" untuk Linux/Mac
    cout << "Pilih game: " << endl;
    cout << "1. Mobile Legends" << endl;
    cout << "2. PUBG" << endl;
    cout << "3. Genshin Impact" << endl;
    cout << "Pilihlah sesuai yang tersedia: ";
    game = topUpPilihGame();
    if (game != 0) {
        garisHorizontal();
        cout << "Masukkan Id game Anda: ";
        Id = topUpId(game);
    }
    if (Id != 0) {
        garisHorizontal();
        switch(game) {
            case 1: 
                cout << "PILIH MENU: " << endl;
                cout << "1. 44 DIAMOND\t= Rp. 11.000" << endl;
                cout << "2. 875 DIAMOND\t= Rp. 218.000" << endl;
                cout << "3. 4830 DIAMOND\t= Rp. 1.140.000" << endl;
                break;
            case 2: 
                cout << "PILIH MENU: " << endl;
                cout << "1. 60 UC\t= Rp. 15.000" << endl;
                cout << "2. 1.800 UC\t= Rp. 375.000" << endl;
                cout << "3. 8.100 UC\t= Rp. 1.500.000" << endl;
                break;
            case 3:
                cout << "PILIH MENU: " << endl;
                cout << "1. 60 Genesis Crystals\t= Rp. 14.000" << endl;
                cout << "2. 1090 Genesis Crystals\t= Rp. 230.000" << endl;
                cout << "3. 8080 Genesis Crystals\t= Rp. 1.470.000" << endl;
                break;
            default: 
                cout << "Pilihan tidak tersedia";
        }
        cout << "Pilihlah sesuai yang tersedia: ";
        DapatHarga = topUpDapatHarga(game, Id);
    }
    if (DapatHarga != 0) {
        Dapat = topUpHarga(game, Id, DapatHarga);
        Harga = topUpDapat(game, Id, DapatHarga);
        garisHorizontal();
        confirm = topUpConfirm();
    }
    system("cls");
    if (confirm != 0) topUpTransaksi(game, Dapat, Harga);
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
    cout << "1. Top-up" << endl;
    cout << "2. Game" << endl;
    cout << "3. E-wallet" << endl;
    cout << "Pilihlah sesuai yang tersedia: ";
    cin >> pilih;
    switch(pilih) {
        case 1: system("cls"); topUp(); break;
        case 2: system("cls"); game(); break;
        case 3: system("cls"); eWallet(); break;
        default: cout << "Pilihan tidak tersedia";
    }
    menuAwal();
}

int main() {
    menuAwal();
    return 0;
}
