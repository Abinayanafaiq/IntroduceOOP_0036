#include <iostream>
using namespace std;

class persegi_panjang{
    private:
        int panjang;
        int lebar;
        int luas;
    public:
        void input_data(){
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
        }
        void hitung_luas(){
            luas = panjang * lebar;
        }
        void output_data(){
            cout << "Luas persegi panjang: " << luas << endl;
        }
};
int main(){
    persegi_panjang pp;
    pp.input_data();
    pp.hitung_luas()
    pp.output_data();
}