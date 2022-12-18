#include "NhanSu.h"
#include "ChuyenVien.h"
#include "NghienCuuVien.h"
#include "TroGiang.h"
#include "GiangVien.h"
#include "ThucTapSinh.h"
#include "PhongQuanLy.h"

vector<NhanSu*> NhanSu::DoiTuongMau;

int main() {
	PhongQuanLy HCMUS;
	string TenNS;
	string ID;
	NhanSu* NS;
	int choice;

	NhanSu::ThemDoiTuongMau(new GiangVien);
	NhanSu::ThemDoiTuongMau(new TroGiang);
	NhanSu::ThemDoiTuongMau(new NghienCuuVien);
	NhanSu::ThemDoiTuongMau(new ChuyenVien);
	NhanSu::ThemDoiTuongMau(new ThucTapSinh);

	while(1) {
		cout << "---------------------------\n";
		cout << "1 - Add\n";
		cout << "2 - Delete\n";
		cout << "3 - Output\n";
		cout << "4 - Out\n";
		cout << "- Chon : ";
		cin >> choice;
		cout << "---------------------------\n";
		if (choice == 4) break;
		switch (choice) {
		case 1:
			cout << "1 - GiangVien\n";
			cout << "2 - TroGiang\n";
			cout << "3 - NghienCuuVien\n";
			cout << "4 - ChuyenVien\n";
			cout << "5 - ThucTapSinh\n";
			cout << "- Nhap ten NhanSu muon them : ";
			rewind(stdin);
			getline(cin, TenNS);
			HCMUS.Add(TenNS);
			break;

		case 2:
			cout << "Nhap ID muon xoa : ";
			rewind(stdin);
			getline(cin, ID);
			if (HCMUS.Delete(ID) == true)
				cout << "====> Da xoa.\n";
			else cout << "====> Khong ton tai de xoa.\n";
			break;

		case 3:
			HCMUS.Output();
			break;
		}
	}
	cout << "Bye\n";
	HCMUS.Xoa();
	return 0;
}