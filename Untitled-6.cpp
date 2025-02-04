
//sistem keanggotaan gym
#include <iostream>
using namespace std;

int main(){
    int jumlahLatihan;
    string keanggotaan, silver, gold, platinum;

    cout << "Kategori Anggota: ";
    cin >> keanggotaan;
    cout << "Latihan yang sudah berjalan: ";
    cin >> jumlahLatihan;

    if (keanggotaan == "silver"){
        cout << "----------" << endl;
        cout << "Silver" << endl;
        cout << "Anda perlu latihan sebanyak " << 10 - jumlahLatihan << "X lagi bulan ini!" << endl;
    }else{
        if (keanggotaan == "gold"){
            cout << "----------" << endl;
            cout << "Gold" << endl;;
            cout << "Anda perlu latihan sebanyak " << 20 - jumlahLatihan << "X lagi bulan ini!" << endl; 
    }else{
        if (keanggotaan == "platinum"){
        cout << "----------" << endl;
        cout << "Platinum" << endl;
        cout << "Silahkan latihan sesuka hati anda!" << endl;
    }else{
        cout << "tidak valid";
    }    
    
    } 
    }

    return 0;
}
    