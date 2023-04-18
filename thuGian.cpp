#include <iostream>
#include <string>
struct Idol
{
    std::string ho_ten;
    int vong_mot;
    float chieu_cao;
    float can_nang;
};
std::string chi_so_BMI(Idol idol)
{
    float bmi = idol.can_nang / (idol.chieu_cao * idol.chieu_cao);
    std::string ket_qua;
    if (bmi < 18.5)
    {
        ket_qua = "thieu can";
    }
    else if (bmi > 25)
    {
        ket_qua = " beo phi";
        if (bmi > 40)
        {
            ket_qua += " Do III";
        }
        else if (bmi < 30)
        {
            ket_qua += " Do I";
        }
        else
        {
            ket_qua += " Do II";
        }
    }
    else
    {
        ket_qua = "can doi";
    }
    return ket_qua;
}

void dong_thoi_gian(Idol idol, int nam_troi_qua)
{
    for (int i = 0; i < nam_troi_qua; i++)
    {
        idol.can_nang += +2;
    }
    std::string ket_qua = chi_so_BMI(idol);
    std::cout << "Ban " << idol.ho_ten << " sau " << nam_troi_qua << ket_qua;
}
int main()
{
    Idol idol;
    idol.ho_ten = "Nguyen Thanh Nha";
    idol.chieu_cao = 1.75;
    idol.can_nang = 85;
    std::string nghe_nghiep = "an bam";
    // chi_so_BMI(idol);
    dong_thoi_gian(idol, 5);
    return 0;
}
