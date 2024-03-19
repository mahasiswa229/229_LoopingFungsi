#include <iostream>
using namespace std;

string nama;
int nErspo,nMills,nHoka,nNike;
int  hErspo = 100,hMills = 200,hHoka = 450,hNike =350;

void input()
{
    cout << "jumlah Erspo =";
    cin >> nErspo;

    cout << "jumlah Mills =";
    cin >> nMills;

    cout << "jumlah Hoka =";
    cin >> nHoka;

    cout << "jumlah Nike =";
    cin >> nNike;

}

int totalharga()
{
    return (nErspo*hErspo)+(nMills*hMills)+(nHoka*hHoka)+(nNike*hNike);
}

void display()
{
    cout <<endl;
    cout << "===========" << endl ;
    cout << endl;
    cout << "jumlah erspo = " << nErspo << endl;
    cout << "jumlah mills = "  << hMills <<endl;
    cout << endl;
    cout << "total harga = Rp." <<totalharga() << endl;
}

int main()
{
    input();
    display();
}