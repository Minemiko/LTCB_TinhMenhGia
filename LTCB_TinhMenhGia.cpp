#include <iostream>
using namespace std;

int main() {
	int sotien;
	cout << "Nhap so tien can rut: "; cin >> sotien;
	int clt[8] = { 500, 200, 100, 50, 20, 10, 5, 1 };
	int stt[8] = { 0 };
	for (int i = 0; i < 8; i++) {
		if (sotien >= clt[i]) {
			stt[i] = sotien / clt[i];
			sotien -= stt[i] * clt[i];
		}
	}
	cout << "Tong so to tien cua moi loai:";
	for (int i = 0; i < 8; i++) {
		if (stt[i] != 0) {
			cout << "\n" << clt[i] << ":\t" << stt[i];
		}
	}
	int tong = 0;
	for (int i = 0; i < 8; i++) {
		tong += stt[i];
	}
	cout << "\nTong so to nhan duoc: " << tong;
	return 0;
}