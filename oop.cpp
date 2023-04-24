#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


/*
    Bài tập OOP: xây dựng lớp phân số
*/
class PhanSo {
    private: 
        int tuSo,mauSo;
    public:
        PhanSo(){
            this->tuSo = 0;
            this->mauSo = 1;
        }
        ~PhanSo(){
           this->tuSo = 0;
            this->mauSo = 1;
        }
        
        // method set , get phan so
        void set();
        void get();
        // method cong trừ nhân chia
        PhanSo Cong(PhanSo , PhanSo);
        PhanSo Tru (PhanSo, PhanSo);
        PhanSo Nhan (PhanSo, PhanSo);
        PhanSo Chia (PhanSo, PhanSo);
       void RutGon (PhanSo);
};
void PhanSo::set()
{
    cout << "Nhap tu so: ";
    cin >> this->tuSo ;
    do{
        cout << "Nhap mau so: ";
        cin >> this->mauSo ;
            if(this->mauSo ==0)
            {
                cout << "Moi ban nhap mau so: ";
            }
    }while (this->mauSo==0);
}
void PhanSo::get()
{
    cout << this->tuSo << "/" << this->mauSo;
}
PhanSo PhanSo::Cong(PhanSo x, PhanSo y)
{
    PhanSo z;
    z.tuSo = ( x.tuSo * y.mauSo) + (y.tuSo * x.mauSo);
    z.mauSo = x.mauSo * y.mauSo; 
    return z;
}
PhanSo PhanSo::Tru(PhanSo x, PhanSo y)
{
    PhanSo z;
    z.tuSo = ( x.tuSo * y.mauSo) - (y.tuSo * x.mauSo);
    z.mauSo = x.mauSo * y.mauSo; 
    return z;
}
PhanSo PhanSo::Nhan(PhanSo x, PhanSo y)
{
    PhanSo z;
    z.tuSo = x.tuSo *y.tuSo ;
    z.mauSo = x.mauSo * y.mauSo; 
    return z;
}
PhanSo PhanSo::Chia(PhanSo x, PhanSo y)
{
    PhanSo z;
    z.tuSo = x.tuSo * y.mauSo ;
    z.mauSo = x.mauSo * y.tuSo; 
    return z;
}
void PhanSo::RutGon(PhanSo ps)
{
    int a,b;
    //Hàm tìm UCLN thông thường
    a = abs(this->tuSo);
    b = abs(this->mauSo);
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
   this->tuSo = tuSo/a;
   this->mauSo = mauSo/a;
}
int main (){
    PhanSo ps1, ps2, ps3;
    int luuChon; 
    ps1.set();
    cout << "Phan so thu nhat: ";
    ps1.get();
    cout<< "\n";
    ps2.set();
    cout << "Phan so thu hai: ";
    ps2.get();
    cout<< "\n";
    
    cout << "1.Cong\n"<< "2.Tru\n"<< "3.Nhan\n"<< "4.Chia\n"<<"5.Rut Gon 2 phan so da nhap!\n";
    cout << "Moi ban chon phep tinh: ";
    cin>> luuChon;
    switch (luuChon)
    {
    case 1:
        ps3 = ps3.Cong(ps1,ps2);
        ps3.RutGon(ps3);
        ps3.get();
        break;
    case 2:
        ps3 = ps3.Tru(ps1,ps2);
        ps3.RutGon(ps3);
        ps3.get();
        break;
    case 3:
        ps3 = ps3.Nhan(ps1,ps2);
        ps3.RutGon(ps3);
        ps3.get();
        break;
    case 4:
        ps3 = ps3.Chia(ps1,ps2);
        ps3.RutGon(ps3);
        ps3.get();
        break;
    case 5:
        ps1.RutGon(ps1);
        ps2.RutGon(ps2);
        ps1.get();
        cout << endl;
        ps2.get();
        break;
    default:
    cout<<"Nhap sai roi !";
        break;
    };
    return 0;
}