#pragma once
#include "NhanSu.h"

class TroGiang : public NhanSu
{
private:
	int SoMon;

public:
	TroGiang();
	~TroGiang() = default;
	TroGiang(const TroGiang&) {}

	string LayTenDoiTuong();
	TroGiang* Clone();

	float GetLuong();
	void Input();
	void Output();
};