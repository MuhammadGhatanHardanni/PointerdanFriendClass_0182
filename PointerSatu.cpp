#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void ShowNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main (){
    mahasiswa mhs; // object mhs
    mhs.nim = 5;
    mhs.ShowNim(); // member access Operator

    mahasiswa &refmhs = mhs; // pointer reference refmhs
    refmhs.nim = 2; // member access operator
    mhs.ShowNim();

    mahasiswa *pmhs = &mhs; // pointer derefences pmhs
    pmhs->nim = 3; // arrow operator
    pmhs->ShowNim();
    return 0;
}