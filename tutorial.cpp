#include <iostream>
// thư viện cho stirng 
#include <string>
// thư viên thao tác với file 
#include <fstream>
using namespace std;

void swapNums(int x, int y) {
  int z = x;
  x = y;
  y = z;
}
// hàm đệ qui
int sumDeQui(int k) {
  if (k > 0) {
    return k + sumDeQui(k - 1);
  } else {
    return 0;
  }
}
int sum (int k) {
    int result=0;
    while (k>0){
        result +=k;
        k--;
    }
    return result;
}

// Khởi tạo Constructor Parameters
class Car{
  public:
    string brand;
    string modal;
    int yead;
    Car(string b, string m, int y);
    // {
    //   brand = b;
    //   modal = m;
    //   yead = y;
    // }
};

Car::Car(string b, string m, int y){
  brand = m;
  modal = b;
  yead = y;
}

class Employee{
  protected: 
    int salary;
  public:
    void setSalary(int s) {
      salary = s;
    }
};

class Programmer: public Employee {
  public: 
    int bonus;
    
    int getSalary() {
      return salary;
    }

};
int main()
{
    //  \n: như xuống dòng mới == "<<std::endl"
    //  \t: tab ra 1 khoảng cánh đều nhau Tạo table ngang 
    std::cout << "Hello world!\n"  ;
    std::cout << "I`m super"<< std::endl;

    // // biến : variables
    // // int (số nguyên), double(số thập phân có dấu phẩy), char(chứ 1 ký tự 'A'), string(chuỗi ký tự "thanh Nhã"), bool (chứa true or false) 

    // // int myNum = 15;
    // int myNum;
    // myNum = 16;
    // myNum = 24;
    // int myAge = 24;
    // cout << myNum << " " << myAge<<endl;


    // Input : cin 
    // int x;
    // cout << "Nhap vao mot so nguyen : ";
    // cin >> x;
    // cout << "So ban da nhap la: "<< x;

    // Tạo ra phép cộng cơ bản 
    // int soA,soB;
    // cout <<"Nhap so A : ";
    // cin >> soA;
    //  cout <<"Nhap so B : ";
    // cin >> soB;
    // int sum = soA +soB;
    // cout << "\nSum = " << sum <<endl;
    // int myNum1 = 10;
    // string myString= "20";
    // bool myBool = false;
    // cout << myBool;
    // char a = 65,b=66,c=67;
    // cout << a << " "<< b << " "<< c << endl;
    // string firstName = "Nguyen";
    // string lastName = "Nha";
    // cout << firstName.length() << endl;
    // cout << firstName.size() << endl;
    // firstName[3]= '3';
    // cout << firstName[3] << endl;
    // cout << firstName << endl;
    // string demo ;
    // cout<< demo << endl;
    // // getline là 1 dòng string còn cin: thì chỉ lấy đến 1 khoảng trắng or tab 
    // getline(cin , demo);
    // cout << demo << endl;

    // whitle loop 
    // int i =0 ; 
    // while (i<5)
    // {
    //     cout<< i << endl;
    //     i++;
    // }  

    // do while 
    // cout << "This is do while\n";
    // do{
    //     cout << i << endl;
    //     i++;
    // }
    // while( i < 5);
    // 
    
    // array 
    //  int  myArrNum[5]= {5,7,9,5,7};
    //  for(int i : myArrNum){
    //     cout << i<< endl;
    //  }

    // // struct: cấu trúc dữ liệu 
    // struct Car { // khai báo kiểu dữ liệu Car
    // int year;
    // string brand;
    // string model;
    // };
    // Car myCar;// Tạo biến myCar có kiểu dữ liệu là Car từ struct
    // myCar.brand = "BMW";
    // myCar.model = "I8";
    // myCar.year = 2007;
    // cout << myCar.model << " "<< myCar.brand << " "<< myCar.year << endl;

    //pointer: con trỏ
    // string food = "Pizza";
    // string* ptr = &food;
    // *ptr = "Rice";
    // // Reference: Output the memory address of food with the pointer (0x5fce9ff6a0)
    // cout << ptr << "\n";

    // // Dereference: Output the value of food with the pointer (Pizza)
    // cout << *ptr << "\n";
    // cout << food << "\n";

    // hàm 
    // int firstNum = 10;
    // int secondNum = 20;

    // cout << "Before swap: " << "\n";
    // cout << firstNum << secondNum << "\n";

    // // Call the function, which will change the values of firstNum and secondNum
    // swapNums(firstNum, secondNum);

    // cout << "After swap: " << "\n";
    // cout << firstNum << secondNum << "\n";    


    // int result = sumDeQui(10);
    // cout << result << endl;

    //Gọi hàm khởi tạo đối tượng  Car
    Car carObj1("BMW", "I8", 2009);
    cout << carObj1.brand<< " "<< carObj1.modal << " " << carObj1.yead << endl;

  //
  Programmer programmer;
  programmer.setSalary(5000);
  programmer.bonus =1500;
  cout << "Salary: " << programmer.getSalary()<< endl;
  cout << "Bonus: " << programmer.bonus << endl; 
    

    // file 
    // #include <fstream>
    // Tạo ra 1 file mới .txt
    ofstream myFile("myFile.txt");

    // // viết vào file 
    myFile << "Thanh Nhã đẹp trai quá vậy! \n";
    myFile << "Thanh Nhã đẹp trai quá vậy! \n";
    myFile << "Thanh Nhã đẹp trai quá vậy! \n";

    // // Đóng file 
    myFile.close();
    // // khai báo 1 biến để lưu giá trị cho từng dòng mà file đã đọc được
    string text;
    // // Đọc file từ .txt đã tạo
    ifstream myReadFile("myFile.txt");

    // // Dọc qua từng dòng của file text để lấy ra data

    while (getline(myReadFile, text)) {
      cout << text<< endl;
    }
    // // đóng file đọc 
    myReadFile.close();

    // try catch : exceptions
    try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
    }
    catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
   
    }
    return 0;
}