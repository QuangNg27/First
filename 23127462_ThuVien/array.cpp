#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include "function.h"
#include "menu.h"
#include "array.h"

using namespace std;

// Quan ly doc gia------------------------------------

void DanhSachDocGia(int& size, DocGia a[])
{
	cout << "DANH SACH DOC GIA\n";
	cout << setfill('=') << setw(155) << '=' << endl;

	cout << setfill(' ') << setw(6) << left << "Ma";
	cout << setw(28) << "Ho va ten";
	cout << setw(14) << "CCCD";
	cout << setw(12) << "Ngay sinh";
	cout << setw(11) << "Gioi tinh";
	cout << setw(28) << "Email";
	cout << setw(28) << "Dia chi";
	cout << setw(16) << "Ngay lap the";
	cout << setw(14) << "Ngay het han" << endl;
	cout << setfill('=') << setw(155) << '=' << endl;

	for (int i = 0; i < size; i++)
	{
		cout << setfill(' ') << setw(6) << left << a[i].maDG;
		cout << setw(28) << a[i].ten;
		cout << setw(14) << a[i].cccd;
		cout << setw(12) << a[i].ngaysinh;
		cout << setw(11) << a[i].gioitinh;
		cout << setw(28) << a[i].email;
		cout << setw(28) << a[i].diachi;
		cout << setw(16) << a[i].ngaylapthe;
		cout << setw(14) << a[i].ngayhethan << endl;
	}
}

void themDG(int& size, int& thutu, DocGia a[])
{
	cout << "THEM DOC GIA \n";
	cout << "========================================\n\n";
	size++;

	//Lay ngau nhien mot ma gom 4 chu so
	randomMa(a[thutu].maDG);

	//Nhap ho ten
	NhapTenDG(a[thutu].ten); cout << "\n";

	//Nhap CCCD
	Nhap_So_Str(a[thutu].cccd, 12, 12, "Nhap so CCCD (12 so): "); cout << "\n";

	//Nhap ngay sinh
	NhapNgaySinh(a[thutu].ngaysinh); cout << "\n";

	//Nhap  gioi tinh
	NhapGioiTinh(a[thutu].gioitinh); cout << "\n";

	//Nhap email
	NhapEmail(a[thutu].email); cout << "\n";

	//Nhap dia chi
	Nhap_Str(a[thutu].diachi, 26); cout << "\n";

	//Nhap ngay thanh lap the
	NhapNgay(a[thutu].ngaylapthe); cout << "\n";

	//Thiet lap ngay het han
	NgayHetHan(a[thutu].ngaylapthe, a[thutu].ngayhethan);

	cout << "\nThong tin da duoc them!\n";

	thutu++;
}

void chinhSuaDG(int& size, DocGia a[])
{
	cout << "CHINH SUA DOC GIA\n";
	cout << "===================================\n\n";
	char MaDG[5];
	Nhap_Ma(MaDG); //Nhap ma doc gia de chinh sua
	if (KT_MaDGDaXuatHien(MaDG, a, size) == false) {
		cout << "Khong tim thay ma doc gia!\n";
		cout << "Vui long xem danh sach doc gia de lay ma so.\n";
		return;
	}
	int index[1];
	index[0] = TimViTriCuaMaDG(MaDG, a, size);
	XoaMH();
	cout << "CHINH SUA DOC GIA\n";
	DanhSachDocGiaCon(size, index[0], 1, a); //In ra phan danh sach chi co doc gia minh chon
	cout << '\n';
	cout << "1. Chinh sua ten\n";
	cout << "2. Chinh sua CCCD\n";
	cout << "3. Chinh sua ngay sinh\n";
	cout << "4. Chinh sua gioi tinh\n";
	cout << "5. Chinh sua email\n";
	cout << "6. Chinh sua dia chi\n";
	cout << "-------------------------\n";
	int luaChon = nhap_so(1, 6, "Nhap lua chon "); //Nhap lua chon bang so
	switch (luaChon)
	{
	case 1:
		NhapTenDG(a[index[0]].ten);
		break;
	case 2:
		Nhap_So_Str(a[index[0]].cccd, 12, 12, "Nhap so CCCD (12 so): ");
		break;
	case 3:
		NhapNgaySinh(a[index[0]].ngaysinh);
		break;
	case 4:
		NhapGioiTinh(a[index[0]].gioitinh);
		break;
	case 5:
		NhapEmail(a[index[0]].email);
		break;
	case 6:
		Nhap_Str(a[index[0]].diachi, 26);
		break;
	default:
		break;
	}
	cout << "\nThong tin da duoc luu!\n";
}

void DanhSachDocGiaCon(int& size, int vitri, int size_vitri, DocGia a[])
{
	cout << setfill('=') << setw(155) << '=' << endl;

	cout << setfill(' ') << setw(6) << left << "Ma";
	cout << setw(28) << "Ho va ten";
	cout << setw(14) << "CCCD";
	cout << setw(12) << "Ngay sinh";
	cout << setw(11) << "Gioi tinh";
	cout << setw(28) << "Email";
	cout << setw(28) << "Dia chi";
	cout << setw(16) << "Ngay lap the";
	cout << setw(14) << "Ngay het han" << endl;
	cout << setfill('=') << setw(155) << '=' << endl;

	for (int j = 0; j < size_vitri; j++)
	{
		int i = vitri;
		cout << setfill(' ') << setw(6) << left << a[i].maDG;
		cout << setw(28) << a[i].ten;
		cout << setw(14) << a[i].cccd;
		cout << setw(12) << a[i].ngaysinh;
		cout << setw(11) << a[i].gioitinh;
		cout << setw(28) << a[i].email;
		cout << setw(28) << a[i].diachi;
		cout << setw(16) << a[i].ngaylapthe;
		cout << setw(14) << a[i].ngayhethan << endl;
	}
}

void DanhSachTimKiemTenDG(int& size, int vitri[], int size_vitri, DocGia a[])
{
	cout << setfill('=') << setw(155) << '=' << endl;

	cout << setfill(' ') << setw(6) << left << "Ma";
	cout << setw(28) << "Ho va ten";
	cout << setw(14) << "CCCD";
	cout << setw(12) << "Ngay sinh";
	cout << setw(11) << "Gioi tinh";
	cout << setw(28) << "Email";
	cout << setw(28) << "Dia chi";
	cout << setw(16) << "Ngay lap the";
	cout << setw(14) << "Ngay het han" << endl;
	cout << setfill('=') << setw(155) << '=' << endl;

	for (int j = 0; j < size_vitri; j++)
	{
		int i = vitri[j];
		cout << setfill(' ') << setw(6) << left << a[i].maDG;
		cout << setw(28) << a[i].ten;
		cout << setw(14) << a[i].cccd;
		cout << setw(12) << a[i].ngaysinh;
		cout << setw(11) << a[i].gioitinh;
		cout << setw(28) << a[i].email;
		cout << setw(28) << a[i].diachi;
		cout << setw(16) << a[i].ngaylapthe;
		cout << setw(14) << a[i].ngayhethan << endl;
	}
}

void xoaDG(int& indexDG, int& size, DocGia a[])
{
	cout << "XOA DOC GIA\n";
	cout << "================================\n";
	char MaDG[5];
	Nhap_Ma(MaDG);
	if (KT_MaDGDaXuatHien(MaDG, a, size) == false) {
		cout << "Khong tim thay ma doc gia!\n";
		cout << "Vui long xem danh sach doc gia de lay ma so.\n";
		return;
	}
	int index[1];
	index[0] = TimViTriCuaMaDG(MaDG, a, size);
	XoaMH();
	cout << "XOA DOC GIA\n";
	DanhSachDocGiaCon(size, index[0], 1, a);
	cout << "\nBan co chac muon xoa thong tin cua doc gia nay?\n";
	char quyet_dinh[4];
	do {
		cout << "Nhap Yes/No: ";
		cin.getline(quyet_dinh, 4);
		if (!cin.good() || SoSanhChuoi(quyet_dinh, "Yes") == 0 && SoSanhChuoi(quyet_dinh, "No") == 0)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		break;
	} while (!cin.good() || SoSanhChuoi(quyet_dinh, "Yes") == 0 && SoSanhChuoi(quyet_dinh, "No") == 0);
	if (SoSanhChuoi(quyet_dinh, "No") == 1) 
	{
		cout << "\nThong tin chua duoc xoa!\n";
		return;
	}
	XoaDongDG(a, size, index[0]);
	cout << "\nXoa thanh cong!\n";
	indexDG--;
}

void timDG_CCCD(int& size, DocGia a[])
{
	cout << "TIM DOC GIA THEO CCCD\n";
	cout << "=================================\n";
	char cccd[15];
	do
	{
		cout << "Nhap so CCCD cua doc gia (12 so): ";
		gets_s(cccd);
		if (strlen(cccd) > 12 || strlen(cccd) < 12 || KT_strToanSo(cccd) == false) 
		{
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(cccd) > 12 || strlen(cccd) < 12 || KT_strToanSo(cccd) == false);
	do
	{
		if (KT_CCCDDaXuatHien(cccd, a, size) == false)
		{
			cout << "Khong tim thay doc gia!\n";
			cout << "Vui long xem danh sach doc gia de lay ma so.\n";
			return;
		}
		break;
	} while (false);
	int index[30];
	index[0] = TimViTriCuaCCCD(cccd, a, size);
	XoaMH();
	cout << "TIM DOC GIA THEO CCCD\n\n";
	DanhSachDocGiaCon(size, index[0], 1, a);
}

void timDG_Ten(int& size, DocGia a[])
{
	cout << "TIM DOC GIA THEO TEN\n";
	cout << "=================================\n";
	char ten[50];
	do
	{
		cout << "Nhap ten cua doc gia (khong qua 26 ky tu): ";
		gets_s(ten);
		if (strlen(ten) > 26 || strlen(ten) <= 0 || KT_strToanChu(ten) == false)
		{
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(ten) > 26 || strlen(ten) <= 0 || KT_strToanChu(ten) == false);
	do
	{
		if (KT_TenDaXuatHien(ten, a, size) == false)
		{
			cout << "Khong tim thay doc gia!\n";
			cout << "Vui long xem danh sach doc gia de lay ten.\n";
			return;
		}
		break;
	} while (false);
	int temp[100];
	int sizeTimKiem;
	TimTatCaViTriCuaTen(ten, a, size, sizeTimKiem, temp);
	XoaMH();
	cout << "TIM DOC GIA THEO TEN\n\n";
	DanhSachTimKiemTenDG(size, temp, sizeTimKiem, a);
}

// Quan ly sach------------------------------------

void DS_Sach(int& size, Sach b[])
{
	cout << "DANH SACH SACH\n";
	cout << setfill('=') << setw(185) << '=' << endl;

	cout << setfill(' ') << setw(15) << left << "ISBN";
	cout << setw(58) << "Ten sach";
	cout << setw(30) << "Tac gia";
	cout << setw(20) << "Nha xuat ban";
	cout << setw(15) << "Nam xuat ban";
	cout << setw(25) << "The loai";
	cout << setw(12) << "Gia sach";
	cout << setw(12) << "So luong" << endl;

	cout << setfill('=') << setw(185) << '=' << endl;

	for (int i = 0; i < size; i++)
	{
		cout << setfill(' ') << setw(15) << left << b[i].ISBN;
		cout << setw(58) << b[i].tenSach;
		cout << setw(30) << b[i].tacgia;
		cout << setw(20) << b[i].nhaXB;
		cout << setw(15) << b[i].namXB;
		cout << setw(25) << b[i].theloai;
		cout << setw(12) << b[i].giasach;
		cout << setw(12) << b[i].soquyen << endl;
	}
}

void DS_SachCon(int& size, int vitri, int size_vitri, Sach b[])
{
	cout << setfill('=') << setw(185) << '=' << endl;

	cout << setfill(' ') << setw(15) << left << "ISBN";
	cout << setw(58) << "Ten sach";
	cout << setw(30) << "Tac gia";
	cout << setw(20) << "Nha xuat ban";
	cout << setw(15) << "Nam xuat ban";
	cout << setw(25) << "The loai";
	cout << setw(12) << "Gia sach";
	cout << setw(12) << "So luong" << endl;

	cout << setfill('=') << setw(185) << '=' << endl;

	for (int j = 0; j < size_vitri; j++)
	{
		int i = vitri;
		cout << setfill(' ') << setw(15) << left << b[i].ISBN;
		cout << setw(58) << b[i].tenSach;
		cout << setw(30) << b[i].tacgia;
		cout << setw(20) << b[i].nhaXB;
		cout << setw(15) << b[i].namXB;
		cout << setw(25) << b[i].theloai;
		cout << setw(12) << b[i].giasach;
		cout << setw(12) << b[i].soquyen << endl;
	}
}

void themSach(int& size, int& thutu, Sach b[])
{
	cout << "THEM SACH \n";
	cout << "========================================\n\n";
	size++;

	//Nhap ma ISBN cua sach
	Nhap_So_Str(b[thutu].ISBN, 13, 13, "Nhap ma ISBN (13 so): "); cout << "\n";

	//Nhap ten sach
	NhapTenSach(b[thutu].tenSach); cout << "\n";

	//Nhap tac gia
	NhapTenTacGia(b[thutu].tacgia); cout << "\n";

	//Nhap nha xuat ban
	NhapNhaXB(b[thutu].nhaXB); cout << "\n";

	//Nhap nam xuat ban
	NhapNamXB(b[thutu].namXB, 4, 4); cout << "\n";

	//Nhap the loai sach
	NhaptheloaiSach(b[thutu].theloai); cout << "\n";

	//Nhap gia sach
	NhapGia(b[thutu].giasach); cout << "\n";

	//Nhap so luong quyen sach
	NhapSL(b[thutu].soquyen); cout << "\n";

	cout << "Thong tin da duoc them!\n";

	thutu++;
}

void chinhSuaSach(int& size, Sach b[])
{
	cout << "CHINH SUA THONG TIN SACH\n";
	cout << "===================================\n\n";
	char maISBN[50];
	Nhap_MaSach(maISBN); //Nhap ma ISBN cua sach
	if (KT_ISBNDaXuatHien(maISBN, b, size) == false) {
		cout << "Khong tim thay ma ISBN!\n";
		cout << "Vui long xem danh sach doc gia de lay ma so.\n";
		return;
	}
	int index[1];
	index[0] = TimViTriCuaISBN(maISBN, b, size);
	XoaMH();
	cout << "CHINH SUA THONG TIN SACH\n";
	DS_SachCon(size, index[0], 1, b);
	cout << '\n';
	cout << "1. Chinh sua ISBN cua sach\n";
	cout << "2. Chinh sua ten sach\n";
	cout << "3. Chinh sua ten tac gia\n";
	cout << "4. Chinh sua nha xuat ban\n";
	cout << "5. Chinh sua nam xuat ban\n";
	cout << "6. Chinh sua the loai\n";
	cout << "7. Chinh sua gia sach\n";
	cout << "8. Chinh sua so luong sach\n";
	cout << "----------------------------\n";
	int luaChon = nhap_so(1, 8, "Nhap lua chon ");
	switch (luaChon)
	{
	case 1:
		Nhap_So_Str(b[index[0]].ISBN, 13, 13, "Nhap ma ISBN (13 so): ");
		break;
	case 2:
		NhapTenSach(b[index[0]].tenSach);
		break;
	case 3:
		NhapTenTacGia(b[index[0]].tacgia);
		break;
	case 4:
		NhapNhaXB(b[index[0]].nhaXB);
		break;
	case 5:
		NhapNamXB(b[index[0]].namXB, 4, 4);
		break;
	case 6:
		NhaptheloaiSach(b[index[0]].theloai);
		break;
	case 7:
		NhapGia(b[index[0]].giasach);
		break;
	case 8:
		NhapSL(b[index[0]].soquyen);
		break;
	default:
		break;
	}
	cout << "\nThong tin da duoc luu!\n";
}

void xoaSach(int& indexSach, int& size, Sach b[])
{
	cout << "XOA SACH\n";
	cout << "================================\n";
	char MaISBN[50];
	Nhap_MaSach(MaISBN); //Nhap ma ISBN cua sach
	if (KT_ISBNDaXuatHien(MaISBN, b, size) == false) {
		cout << "Khong tim thay ma ISBN!\n";
		cout << "Vui long xem danh sach doc gia de lay ma so.\n";
		return;
	}
	int index[1];
	index[0] = TimViTriCuaISBN(MaISBN, b, size);
	XoaMH();
	cout << "XOA SACH\n";
	DS_SachCon(size, index[0], 1, b);
	cout << "\nBan co chac muon xoa thong tin cua sach nay?\n";
	char quyet_dinh[4];
	do {
		cout << "Nhap Yes/No: ";
		cin.getline(quyet_dinh, 4);
		if (!cin.good() || (SoSanhChuoi(quyet_dinh, "Yes") == 0 && (SoSanhChuoi(quyet_dinh, "No") == 0)))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		break;
	} while (true);
	if (SoSanhChuoi(quyet_dinh, "No") == 1)
	{
		cout << "\nThong tin chua duoc xoa!\n";
		return;
	}
	XoaDongSach(b, size, index[0]);
	cout << "\nXoa thanh cong!\n";
	indexSach--;
}

void timSach_ISBN(int& size, Sach b[])
{
	cout << "TIM SACH THEO ISBN\n";
	cout << "=================================\n";
	char maISBN[50];
	do
	{
		cout << "Nhap ma ISBN cua sach (13 so): ";
		gets_s(maISBN);
		if (strlen(maISBN) > 13 || strlen(maISBN) < 13 || KT_strToanSo(maISBN) == false) 
		{
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(maISBN) > 13 || strlen(maISBN) < 13 || KT_strToanSo(maISBN) == false); //So sanh dieu kien neu khong hop le thi vong lap se tiep tuc
	do
	{
		if (KT_ISBNDaXuatHien(maISBN, b, size) == false)
		{
			cout << "Khong tim thay ma ISBN!\n";
			cout << "Vui long xem danh sach sach de lay ma so.\n";
			return;
		}
		break;
	} while (KT_ISBNDaXuatHien(maISBN, b, size) == false); //So sanh dieu kien neu khong hop le thi vong lap se tiep tuc
	int index[10];
	index[0] = TimViTriCuaISBN(maISBN, b, size);
	XoaMH();
	cout << "TIM SACH THEO ISBN\n\n";
	DS_SachCon(size, index[0], 1, b);
}

void timSach_Ten(int& size, Sach b[])
{
	cout << "TIM SACH THEO TEN\n";
	cout << "=================================\n";
	char ten[50];
	do
	{
		cout << "Nhap ten cua sach (khong qua 45 ky tu): ";
		gets_s(ten);
		if (strlen(ten) > 45 || strlen(ten) <= 0)
		{
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(ten) > 45 || strlen(ten) <= 0);  //So sanh dieu kien neu khong hop le thi vong lap se tiep tuc
	do
	{
		if (KT_TenSachDaXuatHien(ten, b, size) == false)
		{
			cout << "Khong tim thay sach!\n";
			cout << "Vui long xem danh sach sach de lay ten.\n";
			return;
		}
		break;
	} while (KT_TenSachDaXuatHien(ten, b, size) == false); //So sanh dieu kien neu khong hop le thi vong lap se tiep tuc
	int index[30];
	index[0] = TimViTriCuaTenSach(ten, b, size);
	XoaMH();
	cout << "TIM SACH THEO TEN\n\n";
	DS_SachCon(size, index[0], 1, b);
}

// Lap phieu muon/tra sach ----------------------------------------------

void lapPhieuMuon(int& sizeDG, DocGia a[], int& sizeSach, Sach b[],
	char ISBN_Muon[][50], int& thutuPhieu, int& sizePhieu, int& IndexMuon, int& sizeMuon, Phieu c[])
{	
	sizePhieu++;
	randomMa(c[thutuPhieu].MaPhieu);

	cout << "LAP PHIEU MUON\n\n";
	DanhSachDocGia(sizeDG, a);
	cout << "\n\n";
	char ma_DG[10];
	do {
		Nhap_Ma(ma_DG);
		if (KT_MaDGDaXuatHien(ma_DG, a, sizeDG) == false)
		{
			cout << "Khong tim thay ma doc gia!\n";
			char luachon[10];
			do {
				cout << "Nhap \"y\" de tiep tuc hoac \"n\" de thoat: ";
				gets_s(luachon);
				if (SoSanhChuoi(luachon, "y") == true)
				{
					break;
				}
				else if (SoSanhChuoi(luachon, "n") == true) return;
			} while (SoSanhChuoi(luachon, "y") == false || SoSanhChuoi(luachon, "n") == false);
		}
	} while (KT_MaDGDaXuatHien(ma_DG, a, sizeDG) == false);
	strcpy_s(c[thutuPhieu].MaDG_MuonSach, ma_DG);
	XoaMH();
	cout << "LAP PHIEU MUON\n\n";
	DS_Sach(sizeSach, b);
	cout << "\n\n";
	nhapDanhSachISBN(thutuPhieu, IndexMuon, sizeMuon, sizeSach, ISBN_Muon, b, c);
	cout << "\n";

	NhapNgay(c[thutuPhieu].ngaymuon); //Nhap ngay muon sach
	NgayTraDuKien(c[thutuPhieu].ngaymuon, c[thutuPhieu].ngaytradukien);
	strcpy_s(c[thutuPhieu].ngaytrathucte, " ");
	strcpy_s(c[thutuPhieu].sachhumat, " ");
	strcpy_s(c[thutuPhieu].tienphat, " ");

	cout << "\nPhieu muon da duoc tao thanh cong!\n";
	thutuPhieu++;
	IndexMuon = 0; sizeMuon = 0;
}

void lapPhieuTra(int& thutuPhieu, int& sizePhieu, int& sizeDG, int& sizeSach, int& indexHu, int& sizeHu, int& indexMuon, char ISBN_mat[][50], char soluongsachhu[][2], DocGia a[], Sach b[], Phieu c[])
{
	cout << "LAP PHIEU TRA\n\n";
	
	char maPhieu[10];
	do {
		cout << "Nhap ma phieu (4 so): ";
		gets_s(maPhieu);
		if (strlen(maPhieu) != 4 || KT_strToanSo(maPhieu) == false)
		{
			cout << "Khong hop le!\n";
		}
	} while (strlen(maPhieu) != 4 || KT_strToanSo(maPhieu) == false);
	if (KT_MaPhieuDaXuatHien(maPhieu, c, sizePhieu) == false) 
	{
		cout << "Khong tim thay ma phieu!\n";
		cout << "Vui long xem danh sach PHIEU MUON / TRA de lay ma phieu.\n";
		return;
	}
	int index[1];
	index[0] = TimViTriCuaMaPhieu(maPhieu, c, sizePhieu);
	if (ktDaCoPhieuTra(c, index[0])) {
		cout << "Phieu nay da duoc tra truoc do!\n";
		return;
	}
	XoaMH();
	cout << "LAP PHIEU TRA\n\n";
	cout << "\n";
	danhSachPhieu_con(sizePhieu, index[0], 1, c);
	cout << "\n\n";

	nhapDanhSachISBN_mat(sizePhieu, index[0], indexMuon, indexHu, sizeHu, sizeSach, ISBN_mat, soluongsachhu, c, b);
	cout << "\n";

	int tien = tinhTienPhat(sizeSach, indexHu, index[0], sizePhieu, soluongsachhu, ISBN_mat, b, c);
	sprintf_s(c[index[0]].tienphat, "%d", tien);

	cout << "Phieu tra da duoc tao thanh cong!\n";
	indexHu = 0; sizeHu = 0;
}

void nhapDanhSachISBN(int& thutuPhieu, int& IndexMuon, int& sizeMuon, int& sizeSach, char ISBN_Muon[][50], Sach b[], Phieu c[])
{
	int soLuong = nhap_so(1, 2, "Nhap so luong ISBN muon them");
	//Chuyen soLuong tu int thanh char va luu vao mang chua so luong sach muon theo thu tu phieu
	sprintf_s(c[thutuPhieu].SLSachMuon, "%d", soLuong);

	for (int i = 1; i <= soLuong; i++)
	{
		char ISBN_temp[50]; 
		int index;
		do {
			do
			{
				cout << "Nhap ma ISBN " << i << " (13 so): ";
				gets_s(ISBN_temp);
				if (strlen(ISBN_temp) != 13 || KT_strToanSo(ISBN_temp) == false) {
					cout << "Ma khong hop le!\n";
					continue;
				}
				if (KT_ISBNDaXuatHien(ISBN_temp, b, sizeSach) == false)
				{
					cout << "Khong tim thay ma ISBN!\n";
					continue;
				}
				break;
			} while (strlen(ISBN_temp) != 13 || KT_strToanSo(ISBN_temp) == false || KT_ISBNDaXuatHien(ISBN_temp, b, sizeSach) == false);

			index = TimViTriCuaISBN(ISBN_temp, b, sizeSach);
			if (SoSanhChuoi(b[index].soquyen, "0")) {
				cout << "Sach nay da het hang, vui long chon sach khac!\n";
				continue;
			}
			break;
		} while (SoSanhChuoi(b[index].soquyen, "0") == 1);

			if (SoSanhChuoi(b[index].soquyen, "0") == 0)
			{
				int sl = atoi(b[index].soquyen);
				sl--;
				sprintf_s(b[index].soquyen, "%d", sl);
			}

			strcpy_s(ISBN_Muon[IndexMuon], ISBN_temp);
			IndexMuon++;
			sizeMuon++; 
	}
	char chuoi_ISBN_muon[100];
	//Noi so luong sach muon va cac chuoi ISBN muon thanh 1 chuoi phu
	sprintf_s(chuoi_ISBN_muon, "%d", soLuong);
	for (int i = 0; i < sizeMuon; i++) {
		strcat_s(chuoi_ISBN_muon, " ");
		strcat_s(chuoi_ISBN_muon, ISBN_Muon[i]);
	}
	strcpy_s(c[thutuPhieu].DS_SachMuon, chuoi_ISBN_muon); //Sao chep chuoi phu vao danh sach ISBN muon theo thu tu phieu
}

void nhapDanhSachISBN_mat(int& sizePhieu, int& indexPhieu, int& indexMuon , int& indexHu, int& sizeHu, int& sizeSach, char ISBN_mat[][50], char slsachhu[][2], Phieu c[], Sach b[])
{
	char ISBNmuon[100][50];
	layDanhSachISBN_phieu(c, ISBNmuon, indexPhieu, indexMuon);
	int SL_SachMuon = atoi(c[indexPhieu].SLSachMuon);
	indexMuon = 0;

	//Tao mang bool de kiem tra tung sach da duoc nhap du chua
	//0: chua nhap	1: da nhap
	bool sach_muon[2] = { 0, 0 };

	cout << "So luong sach muon: " << SL_SachMuon << '\n';
	int soLuongSachHu = nhap_so(0, SL_SachMuon, "Nhap so luong ISBN bi mat");
	sprintf_s(slsachhu[indexPhieu], "%d", soLuongSachHu);
	
	for (int i = 1; i <= soLuongSachHu; i++) {
		char ISBN_temp[50];
		do {
			cout << "Nhap ma ISBN " << i << " (13 so): ";
			gets_s(ISBN_temp);
			if (KT_ISBNDaXuatHien(ISBN_temp, b, sizeSach) == false)
			{
				cout << "Khong tim thay ma ISBN!\n";
				continue;
			}
			if (ktTraSachTrung(ISBN_temp, ISBNmuon, SL_SachMuon, sach_muon)) {
				cout << "Ma sach nay da nhap du so luong!\n";
				continue;
			}
			break;
		} while (true);
		strcpy_s(ISBN_mat[indexHu], ISBN_temp);
		indexHu++;
		sizeHu++;
	}
	for (int i = 0; i < SL_SachMuon; i++) {
		if (sach_muon[i] == 0) {
			int index = TimViTriCuaISBN(ISBNmuon[i], b, sizeSach);
			int sl = atoi(b[index].soquyen);
			sl++;
			sprintf_s(b[index].soquyen, "%d", sl);
		}
	}

	char chuoi_ISBN_hu[100];
	sprintf_s(chuoi_ISBN_hu, "%d", soLuongSachHu); 
	for (int i = 0; i < sizeHu; i++) {
		strcat_s(chuoi_ISBN_hu, " ");
		strcat_s(chuoi_ISBN_hu, ISBN_mat[i]);
	}
	strcpy_s(c[indexPhieu].sachhumat, chuoi_ISBN_hu); //Gop cac ISBN bi hu thanh mot chuoi
}

int tinhTienPhat(int& sizeSach, int& indexHu, int& indexPhieu, int& sizePhieu, char soluongsachhu[][2], char ISBN_mat[][50], Sach b[], Phieu c[])
{
	int tienPhat = 0;
	NhapNgay(c[indexPhieu].ngaytrathucte);
	int ngayTre = tinhSoNgayTre(c[indexPhieu].ngaytradukien, c[indexPhieu].ngaytrathucte);

	if (ngayTre > 0) tienPhat += ngayTre * 5000;
	else ngayTre = 0;

	cout << "\nPhi nop tre " << ngayTre << " ngay: " << tienPhat << '\n';
	
	int soLuong = atoi(soluongsachhu[indexPhieu]);
	for (int i = 0; i < soLuong; i++) 
	{
		cout << "\nSach mang ma so " << ISBN_mat[i] << " bi mat!\n";
		int index = TimViTriCuaISBN(ISBN_mat[i], b, sizeSach);
		cout << "Ten sach: " << b[index].tenSach << "\n";
		cout << "Gia sach: " << b[index].giasach << "\n";
		cout << "Phat: ";
		int tienMat = atoi(b[index].giasach) * 2;
		cout << tienMat << "\n";
		tienPhat += tienMat;
	}
	cout << "\nTong tien phat: " << tienPhat << "\n";
	return tienPhat;
}

void danhSachPhieu(int& thutuPhieu, int& sizePhieu, int& sizeDG, int& indexMuon, int& sizeSachMuon, Phieu c[])
{
	cout << "DANH SACH PHIEU MUON / TRA SACH" << "\n\n";

	//In dong liet ke cac cot
	cout << setfill('=') << setw(167) << '=' << '\n';
	cout << setfill(' ') << setw(14) << left << "Ma phieu";
	cout << setw(14) << "Ma doc gia";
	cout << setw(14) << "Ngay muon";
	cout << setw(20) << "Ngay tra du kien";
	cout << setw(20) << "Ngay tra thuc te";
	cout << setw(35) << "Danh sach ISBN muon";
	cout << setw(35) << "So sach mat";
	cout << setw(16) << "Tong tien phat" << '\n';
	cout << setfill('=') << setw(167) << '=' << '\n';

	for (int i = 0; i < sizePhieu; i++)
	{
		cout << setfill(' ') << setw(14) << left << c[i].MaPhieu;
		cout << setw(14) << c[i].MaDG_MuonSach;
		cout << setw(14) << c[i].ngaymuon;
		cout << setw(20) << c[i].ngaytradukien;
		cout << setw(20) << c[i].ngaytrathucte;
		cout << setw(35) << c[i].DS_SachMuon;
		cout << setw(35) << c[i].sachhumat;
		cout << setw(16) << c[i].tienphat << endl;
	}
	
}

void danhSachPhieu_con(int& sizePhieu, int indexPhieu, int sizeSachMuon, Phieu c[])
{
	cout << "DANH SACH PHIEU MUON / TRA SACH" << "\n\n";

	//In dong liet ke cac cot
	cout << setfill('=') << setw(167) << '=' << '\n';
	cout << setfill(' ') << setw(14) << left << "Ma phieu";
	cout << setw(14) << "Ma doc gia";
	cout << setw(14) << "Ngay muon";
	cout << setw(20) << "Ngay tra du kien";
	cout << setw(20) << "Ngay tra thuc te";
	cout << setw(35) << "Danh sach ISBN muon";
	cout << setw(35) << "So sach mat";
	cout << setw(16) << "Tong tien phat" << '\n';
	cout << setfill('=') << setw(167) << '=' << '\n';

	for (int j = 0; j < sizeSachMuon; j++)
	{
		int i = indexPhieu;
		cout << setfill(' ') << setw(14) << left << c[i].MaPhieu;
		cout << setw(14) << c[i].MaDG_MuonSach;
		cout << setw(14) << c[i].ngaymuon;
		cout << setw(20) << c[i].ngaytradukien;
		cout << setw(20) << c[i].ngaytrathucte;
		cout << setw(35) << c[i].DS_SachMuon;
		cout << setw(35) << c[i].sachhumat;
		cout << setw(16) << c[i].tienphat << endl;
	}

}

// Thong ke ---------------------------------

void TK_SLSach(int& size, Sach b[])
{
	cout << "THONG KE SO LUONG SACH TRONG THU VIEN\n\n";
	int tongSach = 0;
	cout << setfill('=') << setw(185) << '=' << endl;
	cout << setfill(' ') << setw(15) << left << "ISBN";
	cout << setw(58) << "Ten sach";
	cout << setw(30) << "Tac gia";
	cout << setw(20) << "Nha xuat ban";
	cout << setw(15) << "Nam xuat ban";
	cout << setw(25) << "The loai";
	cout << setw(12) << "Gia sach";
	cout << setw(12) << "So luong" << endl;
	cout << setfill('=') << setw(185) << '=' << endl;

	for (int i = 0; i < size; i++)
	{
			cout << setfill(' ') << setw(15) << left << b[i].ISBN;
			cout << setw(58) << b[i].tenSach;
			cout << setw(30) << b[i].tacgia;
			cout << setw(20) << b[i].nhaXB;
			cout << setw(15) << b[i].namXB;
			cout << setw(25) << b[i].theloai;
			cout << setw(12) << b[i].giasach;
			cout << setw(12) << b[i].soquyen << endl;
		tongSach += atoi(b[i].soquyen);
	}
	cout << "\nTong cong: " << tongSach << " quyen\n";
}

void TK_SachTheoTheLoai(int& size, Sach b[])
{
	cout << "THONG KE SO LUONG SACH TRONG THU VIEN THEO THE LOAI\n\n";
	char theloai[100][30];
	int soLuongSach[30];
	int soTheLoai = 0;
	layTheLoai(size, theloai, soTheLoai, soLuongSach, b);
	cout << setfill('=') << setw(32) << '=' << '\n';
	cout << setfill(' ') << setw(20) << left << "The loai";
	cout << setw(12) << "So luong" << '\n';
	cout << setfill('=') << setw(32) << '=' << '\n';
	cout << setfill(' ');
	for (int i = 0; i < soTheLoai; i++) {
		cout << setw(20) << theloai[i];
		cout << setw(12) << soLuongSach[i] << '\n';
	}
}

void TK_SLDocGia(int& size, DocGia a[])
{
	cout << "THONG KE SO LUONG DOC GIA TRONG THU VIEN\n";
	cout << setfill('=') << setw(155) << '=' << endl;

	cout << setfill(' ') << setw(6) << left << "Ma";
	cout << setw(28) << "Ho va ten";
	cout << setw(14) << "CCCD";
	cout << setw(12) << "Ngay sinh";
	cout << setw(11) << "Gioi tinh";
	cout << setw(28) << "Email";
	cout << setw(28) << "Dia chi";
	cout << setw(16) << "Ngay lap the";
	cout << setw(14) << "Ngay het han" << endl;
	cout << setfill('=') << setw(155) << '=' << endl;

	for (int i = 0; i < size; i++)
	{
		cout << setfill(' ') << setw(6) << left << a[i].maDG;
		cout << setw(28) << a[i].ten;
		cout << setw(14) << a[i].cccd;
		cout << setw(12) << a[i].ngaysinh;
		cout << setw(11) << a[i].gioitinh;
		cout << setw(28) << a[i].email;
		cout << setw(28) << a[i].diachi;
		cout << setw(16) << a[i].ngaylapthe;
		cout << setw(14) << a[i].ngayhethan << endl;
	}
	cout << "\nTong cong: " << size << " doc gia\n";
}

void TK_SLDocGiaTheoGioiTinh(int& size, DocGia a[])
{
	cout << setfill('-') << setw(28) << left << "THONG KE SO LUONG DOC GIA THEO GIOI TINH" << "\n\n";
	int nam = 0;
	int nu = 0;
	for (int i = 0; i < size; i++) {
		if (SoSanhChuoi(a[i].gioitinh, "Nam")) nam++;
		else nu++;
	}
	cout << setfill(' ') << setw(14) << left << "Nam";
	cout << setw(28) << nam << endl;
	cout << setfill('-') << setw(28) << '-' << '\n';
	cout << setfill(' ') << setw(14) << left << "Nu";
	cout << setw(28) << nu << endl;

}

void TK_SLSachDangMuon(int& sizePhieu, Phieu c[])
{
	int sl = 0;
	cout << "THONG KE SO LUONG SACH DANG DUOC MUON " << "\n\n";
	cout << setfill('=') << setw(39) << '=' << "\n";
	cout << setfill(' ') << setw(10) << left << "Ma phieu";
	cout << setw(29) << "Danh sach ISBN muon" << "\n";
	cout << setfill('=') << setw(39) << '=' << "\n";
	cout << setfill(' ');
	for (int i = 0; i < sizePhieu; i++) {
		if (!ktDaCoPhieuTra(c, i)) {
			cout << setw(10) << c[i].MaPhieu;
			cout << setw(29) << c[i].DS_SachMuon << "\n";
			sl += atoi(c[i].SLSachMuon);
		}
	}
	cout << "\n\nTong sach dang duoc muon: " << sl << "\n";
}

void tk_SLDocGiaTreHan(int& sizePhieu, Phieu c[])
{
	char ngayhientai[13];
	NhapNgay(ngayhientai);
	XoaMH();
	cout << "THONG KE SO LUONG DOC GIA BI TRE HAN " << "\n\n";

	cout << setfill('=') << setw(70) << '=' << "\n";
	cout << setfill(' ') << setw(10) << left << "Ma phieu";
	cout << setw(10) << "Ma DG";
	cout << setw(18) << "Ngay muon";
	cout << setw(20) << "Ngay tra du kien";
	cout << setw(12) << "So ngay tre" << "\n";
	cout << setfill('=') << setw(70) << '=' << "\n";
	cout << setfill(' ');
	int dem = 0;
	for (int i = 0; i < sizePhieu; i++) 
	{
		if (ktDaCoPhieuTra(c, i))
		{
			continue;
		}
		int tre = tinhSoNgayTre(c[i].ngaytradukien, ngayhientai);
		if (tre > 0) {
			cout << setw(10) << c[i].MaPhieu;
			cout << setw(10) << c[i].MaDG_MuonSach;
			cout << setw(18) << c[i].ngaymuon;
			cout << setw(20) << c[i].ngaytradukien;
			cout << setw(12) << tre << "\n";
			dem++;
		}
	}
	cout << "\n\nSo luong doc gia tre han: " << dem << '\n';
}