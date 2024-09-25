#include <iostream>
using namespace std;

int main (){
    int n, x, y, z;

    cout << "BUAT SEGITIGA BINTANG YOK!!";
    cout << "\nMau seberapa tinggi : ";
    cin >> n;

    for (x = 1; x <= n; x++){
    for (y = x; y <= n; y++){
        cout << " ";
    }
    for (y = 1; y <= 2*x-1; y++){
        cout << "*";
    }
    cout <<endl;
    }
    return 0;;
}
