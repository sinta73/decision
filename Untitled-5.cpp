//
#include <iostream>
using namespace std;

int main(){
    int totalBelanja;
    int  diskon;

    cout << "Masukkan total belanja: ";
    cin >> totalBelanja;

    if (totalBelanja <=100000){
        diskon = 0;
    }
    else{
        if(totalBelanja >= 500000){
        diskon = 0.3 * totalBelanja;
    }
    else{
        if (totalBelanja >= 200000){
        diskon = 0.2 * totalBelanja;
    }
    else{
        if (totalBelanja >= 100000){
        diskon = 0.1 * totalBelanja;
    }
    else {
        cout << "tidak valid!";
    }
    }
    }
    }

    cout << "Total belanja: " << totalBelanja << endl;
    cout << "Total diskon: " << diskon << endl;
    cout << "Total pembayaran: " << totalBelanja - diskon << endl;

    return 0;
}