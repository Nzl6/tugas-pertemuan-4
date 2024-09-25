#include <iostream>
using namespace std;

void cetakFaktor(int num, int i = 1) {
    if (i > num) return;
    if (num % i == 0) {
        cout << i << " ";
    }
    cetakFaktor(num, i + 1);
}

bool isPrima(int num, int i = 2) {
    if (num <= 1) return false;
    if (i * i > num) return true;
    if (num % i == 0) return false;
    return isPrima(num, i + 1);
}

int main() {
    int batas, jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Masukkan batas yang kamu mau : ";
    cin >> batas;

    cout << "\nBilangan Ganjil: "<< endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " (Faktor: ";
            cetakFaktor(i);
            cout << ")"<< endl;
            jumlahGanjil++;
        }
    }
    cout << "Jumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    cout << "\nBilangan Genap: "<< endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " (Faktor: ";
            cetakFaktor(i);
            cout << ") "<< endl;
            jumlahGenap++;
        }
    }
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl;

    cout << "\nBilangan Prima: "<< endl;
    for (int i = 1; i <= batas; i++) {
        if (isPrima(i)) {
            cout << i << " (Faktor: ";
            cetakFaktor(i);
            cout << ") "<< endl;
            jumlahPrima++;
        }
    }
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}

