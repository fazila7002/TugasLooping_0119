#include <iostream>
using namespace std;

int angka;

void tampilkanHasil(int tipe) {
    if (tipe == 1) {
        if (cekPrima(angka)) cout << "Hasil: Bilangan Prima" << endl;
        else cout << "Hasil: Bukan Prima" << endl;
    } else if (tipe == 2) {
        if (cekFibonacci(angka)) cout << "Hasil: Bilangan Fibonacci" << endl;
        else cout << "Hasil: Bukan Fibonacci" << endl;
    }
}

int pilihan;

bool cekPrima(int n) {
  
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool cekFibonacci(int n) {
   if (n < 0) return false;
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int next = a + b;
    while (next <= n) {
        if (next == n) return true;
        a = b; b = next; next = a + b;
    }
    return false;
}


void tampilkanMenu() { 
    cout << "\n========== MENU UTAMA ==========" << endl;
cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;  
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: "; 
}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}


int main() {
    pilihan = -1;
    while (pilihan != 0) {
    tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            
            case 1:
                inputAngka();
                tampilkanHasil(1);
                break;
            case 2:
                inputAngka();
                tampilkanHasil(2);
                break;

            case 0:
                cout << "Keluar program..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                break;

        }
    }
    return 0;

}
