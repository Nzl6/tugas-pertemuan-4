#include <iostream>
using namespace std;

int main(){
    int n, f_n, f_n1, f_n2;

    cout << " PROGRAM PENGHITUNGAN DERET FIBONACCI"<< endl;
    cout << " masukan nilai ke n : ";
    cin >> n;

    f_n1 = 0;
    f_n2 = 1;
    f_n = f_n1 + f_n2;

    cout << f_n << " " ;
    for(int i=1 ; i < n ; i++){
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        cout << f_n << " " ;
    }

    cout << "\t";
    return 0;

}
