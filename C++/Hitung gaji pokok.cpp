#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
    char jabatan;
    int gaji_pokok, tunjangan_anak, tunjangan_istri, lembur;
    int total_gaji;

    //input variabel jabatan
    cout<<"(A. Direktur, B. Manager, C. Staf)";
    cout<<" Input Jabatan (A/B/C) : ";
    cin>>jabatan;
    //hitung gaji berdasarkan jabatan
    switch (jabatan){
        case 'A':
        gaji_pokok = 5250000;
        tunjangan_anak = 700000;
        tunjangan_istri = 850000;
        lembur = 75000;
        break;
        case 'B':
        gaji_pokok = 3500000;
        tunjangan_anak = 700000;
        tunjangan_istri = 850000;
        lembur = 75000;
        break;
        case 'C':
        gaji_pokok = 2200000;
        tunjangan_anak = 700000;
        tunjangan_istri = 850000;
        lembur = 75000;
        break;
        default:
        cout<<"Jabatan tidak dikenal\n";
        return 0;
        
    }

    //hitung total gaji
    total_gaji = gaji_pokok + tunjangan_anak + tunjangan_istri + lembur;

    //tampilkan hasil
    cout<<"------------------------------\n";
    cout<<"Jabatan   : "<<jabatan<<endl;
    cout<<"Gaji Pokok   : Rp"<<fixed<<setprecision(0)<<gaji_pokok<<endl;
    cout<<"Tunjangan Anak   : Rp"<<tunjangan_anak<<endl;
    cout<<"Tunjangan Istri   : Rp"<<tunjangan_istri<<endl;
    cout<<"Lembur/Jam   : Rp"<<lembur<<endl;
    cout<<"------------------------------\n";
    cout<<"Total Gaji   : Rp"<<total_gaji<<endl;

    return 0;
}
