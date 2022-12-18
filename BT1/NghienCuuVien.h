#pragma once
#include <vector>
#include "NhanSu.h"

class NghienCuuVien : public NhanSu
{
public:
	NghienCuuVien();
	~NghienCuuVien() = default;

	string LayTenDoiTuong();
	NghienCuuVien* Clone();

	float GetLuong();
	void Input();
	void Output();

private:
	int CountList(char);
	bool Check(string);
	vector<string> CurrentList_ID;
	int SoNamNghienCuu;
};