//MENENTUKAN KUADRAN SUATU KOORDINAT
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    system("color b");
    double x, y;
    cout<<"========================================"<<endl;
    cout<<"PROGRAM KUADRAN KOORDINAT"<<endl;
    cout<<"========================================"<<endl;

    cout<<"Masukan Koordinat 'x' :";
    cin>>x;
    cout<<"-------------------------"<<endl;
    cout<<"Masukan Koordinat 'y' :";
    cin>>y;

    if(x>=0 && y>=0) {
        cout<<"Titik x ="<<x<<"dan Titik y ="<<y<<endl;
        cout<<"Berada di KUADRAN I"<<endl;

    }
    else {
        if(x<0&&y>=0) {
            cout<<"Titik x ="<<x<<"dan Titik y ="<<y<<endl;
            cout<<"Berada di KUADRAN II"<<endl;
        }
        else {
        if(x<0&&y<0) {
            cout<<"Titik x ="<<x<<"dan Titik y ="<<y<<endl;
            cout<<"Berada di KUADRAN III"<<endl;
        }
        else {
        if(x>=0&&y<0) {
            cout<<"Titik x ="<<x<<"dan Titik y ="<<y<<endl;
            cout<<"Berada di KUADRAN IV"<<endl;
        }
        else{
            cout<<"Anda Salah Memasukan Nilai"<<endl;
        }
 getch();
    }
        }
    }
}







