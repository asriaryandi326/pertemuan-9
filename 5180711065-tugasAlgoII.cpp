#include <iostream>

using namespace::std;

int dulusA,dulusB;



void garis(){

cout<<"======================================================================";

}



double modul(){



 cout<<"Masukan Nilai = ";cin>>dulusA;

 cout<<"Masukan Nilai Pembagi = ";cin>>dulusB;

}

double hitung(){

double hasil;

    if(dulusA==0)

      return 0;

    else if(dulusA>=0){

        hasil=dulusA%dulusB;

        }

    else if (dulusB<=0){

        hasil=dulusA%dulusB;

    }

cout<<"sisa = "<<hasil;

}

main(){

int a,b;


 cout<<"=====================PROGRAM MENGHITUNG MODULUS=======================";
 cout<<endl;

 modul();

 hitung();
 cout<<endl;

 garis();
 cout<<endl;

 modul();

 hitung();
 cout<<endl;

 garis();

}
