#include <iostream>

using namespace std;

int main()
{
   int pilihan,tahun;

   cout<<"program menghitung tahun\n"<<endl;

   program:
    cout<<"1.menentukan tahun kabisat"<<endl;
    cout<<"\masukkan kodenya;",
    cin>>pilihan !=1)
        {
            cout<<"\ntolong masukkan angka 1"<<endl;
            goto program;
        }

    cout<<"\n ini tahun kabisat jika :\n"<<endl;
    cout<<"-tahun kabisat jika dibagi 4"<<endl;
    cout<<"-bukan tahun yang habis jika dibagi 100"<<endl;
    cout<<"-tahun tidak habis dibagi 400"<<endl;
    cout<<"-kecuali habis dibagi 100 & habis dibagi 400"<<endl;

    cout<<"\nmasukkan tahun :';
    cin>> tahun;

    switch(pilihan)
    {
        case1:
        if (tahun%400--0){
            cout<<"\ntahun "<<tahun<<"adalah tahun kabisat";
            break;
        }
        else
            if(tahun%400>0 && tahun%100==0){
            cout>>"\ntahun "<<tahun<<"bukan tahun kabisat";
            break;
            }
        else
        if(tahun%400>0 && tahun100>0 && tahun%4==0){
        cout<<"\ntahun "<<tahun<<"adalah tahun kabisat";
        break;
        }

        else
        if(tahun%4>0 && tahun%100>0 && tahun%400>0){
            cout<<"\ntahun "<<tahun<<"bukan tahun kabisat";
        break;
        }
        defaut:
            cout<<:\nEror";
    }

    return 0;
}
