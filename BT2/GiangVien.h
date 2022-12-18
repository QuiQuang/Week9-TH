#pragma once
#include <vector>
#include "NhanSu.h"
class GiangVien : public NhanSu
{
private:
	string HocHam, HocVi;
	int NamDay;
	vector<string> Mon;
public:
	GiangVien();
	GiangVien(const GiangVien& GV) {}
	~GiangVien() = default;

	string LayTenDoiTuong();
	GiangVien* Clone();

	float GetLuong();
	void Input();
	void Output();
};