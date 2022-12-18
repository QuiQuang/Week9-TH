#pragma once
#include "NhanSu.h"

class PhongQuanLy
{
private:
	vector<NhanSu*> DanhSach;

public:
	PhongQuanLy();
	~PhongQuanLy() = default;

	void Add(string);
	bool Delete(string);
	void Output();

	void Xoa();
};