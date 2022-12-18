#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class NhanSu
{
private:
	static vector<NhanSu*> DoiTuongMau;

protected:
	string Name;
	int Day, Month, Year;
	string ID;
	float Luong;

public:
	NhanSu();
	virtual ~NhanSu() {}

	virtual NhanSu* Clone() = 0;
	virtual string LayTenDoiTuong() = 0;

	static void ThemDoiTuongMau(NhanSu* NS);
	static NhanSu* TaoDoiTuongTheoTen(string TenNS);
	static void XoaDoiTuongMau();

	virtual float GetLuong() = 0;
	virtual void Input();
	virtual void Output();

	string GetID() { return ID; }

private:
	bool Check(int, int, int);
};