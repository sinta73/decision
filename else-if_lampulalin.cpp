
#include <iostream>
using namespace std;

int main(){
    string lampuLalin;
    string merah, kuning, hijau;

    cout << "Masukkan warna lampu: ";
    cin >> lampuLalin;

    if (lampuLalin == merah){
        cout << "BERHENTI!";
    }
    else if(lampuLalin == kuning){
        cout << "BERSIAP!";
    }
    else if(lampuLalin == hijau){
            cout << "JALAN!";
        }
    else{
        cout << "WARNA TIDAK VALID!";
    }
return 0;
}
