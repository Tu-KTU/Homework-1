#include <iostream>
using namespace std;

int main()
{
	int weight, //can nang
		sizeb, //kich thuoc co tay (do tai diem co kich thuoc to nhat)
		sizec, //kich thuoc eo (do ngay tai ron)
		sized, //kich thuoc hong (do tai diem co kich thuoc to nhat)
		sizee, //kich thuoc canh tay (do tai diem co kich thuoc to nhat)
		choose; //bien de chon chuong trinh
	float A1, A2, A3, A4, A5, B, fat, pfat;
	cout << "Nhap 1 de tinh luong mo cho nu, nhap 2 de tinh luong mo cho nam: ";
	cin >> choose;
	if (choose == 1)
	{
		cout << "Nhap cac thong tin sau: \n";
		cout << "Nhap can nang: ";
		cin >> weight;
		A1 = ((float)weight * 0.732) + 8.987;
		cout << "Nhap kich thuoc co tay (do tai diem co kich thuoc to nhat): ";
		cin >> sizeb;
		A2 = (float)sizeb / 3.140;
		cout << "Nhap kich thuoc eo (do ngay tai ron): ";
		cin >> sizec;
		A3 = (float)sizec * 0.157;
		cout << "Nhap kich thuoc hong (do tai diem co kich thuoc to nhat): ";
		cin >> sized;
		A4 = sized * 0.249;
		cout << "Nhap kich thuoc canh tay (do tai diem co kich thuoc to nhat): ";
		cin >> sizee;
		A5 = sizee * 0.434;
		B = A1 + A2 - A3 - A4 + A5;
		fat = weight - B;
		pfat = (fat * 100) / weight;
		cout << "Luong mo la: " << fat << "kg \n";
		cout << "Phan tram luong mo la: " << pfat << "%";
	}
	else if (choose == 2 )
	{
		cout << "Nhap can nang" << endl;
		cin >> weight;
		A1 = ((float)weight * 1.082) + 9.442;
		cout << "Nhap kich thuoc co tay (do tai diem co kich thuoc to nhat)" << endl;
		cin >> sizeb;
		A2 = (float)sizeb * 4.15;
		B = A1 - A2;
		fat = weight - B;
		pfat = (fat * 100) / weight;
		cout << "Luong mo la: " << fat << "kg \n";
		cout << "Phan tram luong mo la: " << pfat << "%";
	}
	else
	{
		cout << "Ban nhap khong hop le, vui long nhap lai";
	}
	return 0;
}