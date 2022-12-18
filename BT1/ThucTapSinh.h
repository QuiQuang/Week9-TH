#pragma once
#include <vector>
#include "NghienCuuVien.h"
#include "NhanSu.h"

class ThucTapSinh : public NhanSu
{
private:
	vector<string> CurrentList_ID;
	int SoThangThucTap;
public:
	ThucTapSinh() = default;
	~ThucTapSinh() = default;
	ThucTapSinh(const ThucTapSinh&) {}

	string LayTenDoiTuong();
	ThucTapSinh* Clone();

	float GetLuong();
	void Input();
	void Output();

private:
	int CountList(char);
	bool Check(string);
};