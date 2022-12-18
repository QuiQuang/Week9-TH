#pragma once
#include <vector>
#include "NhanSu.h"

class ChuyenVien : public NhanSu
{
private:
	vector<string> DoneList_ID;
	int SoNamLamViec;

public:
	ChuyenVien();
	ChuyenVien(const ChuyenVien&) {}
	~ChuyenVien() = default;

	string LayTenDoiTuong();
	ChuyenVien* Clone();

	void Input();
	void Output();
	float GetLuong();

private:
	bool Check(string);
	int CountList(char);
};