#include <iostream>
using namespace std;

class Mobil{
    public:
        string nama_mobil;
        string tipe_mobil;
    
    private:
        int harga_mobil;

    public:
        void input_data(){
            cout << "Masukkan nama mobil: ";
            cin >> nama_mobil;
            cout << "Masukkan tipe mobil: ";
            cin >> tipe_mobil;
            cout << "Masukkan harga mobil: ";
            cin >> harga_mobil;
        }
        void output_data(){
            cout << "harga mobil: " << harga_mobil << endl;
        }
};

int main(){
    Mobil rfiamar;
    rfiamar.input_data();
    cout << "Nama mobil: " << rfiamar.nama_mobil << endl;
    cout << "Tipe mobil: " << rfiamar.tipe_mobil << endl;
    rfiamar.output_data();
    
}