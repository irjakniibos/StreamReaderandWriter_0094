#include <iostream>
using namespace std;

int main()
{
    try{
        cout << "Selamat Belajar Di Prodi TI UMY" << endl;
        //throw 0.5; //melemparkan sebuah interger maa
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a){
        //blok ini akan dieksekusi
        cout << "Pengeculian akan dieksekusi" << endl;
    }
    catch(...){
        //jika selain integer maka block ini akan dieksekusi
        cout << "Default Pengecualian diexsekusi" << endl;
    }
    return 0;
}