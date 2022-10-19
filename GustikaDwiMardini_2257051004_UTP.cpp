#include<iostream>
using namespace std;

int persentase(int masuk,int keluar){
    return 100*(keluar*1.0/masuk);
}

int main(){
    char cmd;
    int uang;
    int totalMasuk=0,saldo=0,totalKeluar=0;
    cout<<"MESIN PENGHITUNG DANA \n";
    cout<<"CARA PENGGUNAAN : \n";
    cout<<"\t 1.INPUT + spasi Jumlah Uang : untuk menambah Pemasukan\n";
    cout<<"\t 2.INPUT - spasi Jumlah Uang : untuk menambah Pengeluaran\n";
    cout<<"\t 3.INPUT * : untuk mengakhiri program\n";
    while(cin>>cmd){
        if(cmd=='*')break;
        if(cmd=='+'){
            cin>>uang;
            totalMasuk=totalMasuk+uang;
            saldo=saldo+uang;
        }else if(cmd=='-'){
            cin>>uang;
            if(saldo-uang<0){
                cout<<"!SALDO TIDAK CUKUP - PERINTAH DI BATALKAN!\n";
                continue;
            }
            saldo=saldo-uang;
            totalKeluar=totalKeluar+uang;
            
        }else{
            cout<<"PERINTAH SALAH\n";
        }
    }
    cout<<"Pemasukan                          : "<<totalMasuk<<endl;
    cout<<"Pengeluaran                        : "<<totalKeluar<<endl;
    cout<<"Persentase Pemasukan & Pengeluaran : "<<persentase(totalMasuk,totalKeluar)<<"%";
    
    return 0;
}
