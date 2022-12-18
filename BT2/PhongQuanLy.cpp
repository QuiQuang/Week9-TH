#include "PhongQuanLy.h"

PhongQuanLy::PhongQuanLy() {
	DanhSach.clear();
	DanhSach.resize(0);
}

void PhongQuanLy::Add(string Name) {
	NhanSu* NS = NhanSu::TaoDoiTuongTheoTen(Name);
	if (NS != NULL) {
		cout << "---------------------------\n";
		NS->Input();
		DanhSach.push_back(NS);
	}
	cout << "====> So NhanSu : " << DanhSach.size() << endl;
}

bool PhongQuanLy::Delete(string ID) {
	for (int i = 0; i < DanhSach.size(); ++i)
		if (DanhSach[i]->GetID() == ID) {
			delete DanhSach[i];
			DanhSach.erase(DanhSach.begin() + i);
			cout << "\n====> So NhanSu : " << DanhSach.size() << endl;
			return true;
		}
	cout << "\n====> So NhanSu : " << DanhSach.size() << endl;
	return false;
}

void PhongQuanLy::Xoa() {
	for (int i = 0; i < DanhSach.size(); ++i)
		delete DanhSach[i];
}

void PhongQuanLy::Output() {
	for (int i = 0; i < DanhSach.size(); ++i) {
		DanhSach[i]->Output();
	}
}