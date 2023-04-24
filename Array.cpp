#include <iostream>
using namespace std;
int main(){
    // khởi tạo mảng số nguyên có 3 phần tử
    int LA[]= {1,3,5};
    int i,n=3;
    cout << "Mảng trước khi dán giá trị!"<< endl;
    for( i = 0; i < 3; i++){
        cout << "LA[" << i <<"]" << LA[i] << endl;
    }
    for (i = 1 ; i <n;i++){
        LA[i] = LA[i+1];
        cout << LA[i]<< endl;
        n--;
    }
    cout << "The array elements after deletion :"<<endl;
    for(i = 0; i<n; i++) {
        cout << "LA[" << i << "] = " << LA[i] <<endl;
    }
    
    return 0 ;
}