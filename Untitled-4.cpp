
#include <iostream>
using namespace std;

int main(){
    int usia;

    cout << "Masukkan Usia (Tahun): ";
    cin >> asia;

    if (usia <= 5){
        cout << "Balita";
    }
    else if (usia <= 12){
        cout << "Anak-anak";
    }
    else if (usia <= 17){
        cout << "Remaja";
    }
    else if (usia <= 59){
        cout << "Dewasa";
    }
    else {
        cout << "Lansia";
    }
    return 0;
}