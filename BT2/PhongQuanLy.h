#pragma once
#include "NhanSu.h"

class PhongQuanLy
{
private:
	static PhongQuanLy* Now;
	vector<NhanSu*> DanhSach;
	PhongQuanLy();

public:
	static PhongQuanLy* GetNow() {
		if (Now == NULL) Now = new PhongQuanLy();
		return Now;
	}
	static PhongQuanLy* DeleteNow() {
		if (Now) {
			delete Now;
			Now = NULL;
		}
		return Now;
	}

	~PhongQuanLy() {
		DanhSach.clear();
		DanhSach.resize(0);
	}

	void Add(string);
	bool Delete(string);
	void Output();

	void Xoa();
};