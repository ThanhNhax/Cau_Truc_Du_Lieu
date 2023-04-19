#include <stdio.h>
struct maytinh
{
	char tenmay[30];
	char noisx[30];
	int baohanh;
};
typedef struct maytinh mt;
void nhap1(mt &x);
void nhap1(mt &x)
{
	printf("\nNhap vao ten may: ");
	fflush(stdin);
	gets(x.tenmay);
	printf("\nNhap vao noi san xuat: ");
	fflush(stdin);
	gets(x.noisx);
	printf("\nNhap vao thoi gian bai hanh(thang): ");
	scanf("%d", &x.baohanh);
}

//=====================================
void xuat1(mt x);
void xuat1(mt x)
{
	printf("%-10s%-10s%-10d", x.tenmay, x.noisx, x.baohanh);
}
//=============================================

int main(int argc, char *argv[])
{
	mt x;
	nhap1(x);
	xuat1(x);
	return 0;
}