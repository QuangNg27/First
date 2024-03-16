#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <time.h>
#include "function.h"
#include "array.h"

using namespace std;

void Menu(int& LuaChon) 
{
	char lua_chon[10];
	cout << "=========** QUAN LI THU VIEN **=========\n\n";
	cout << "1. Quan li doc gia\n";
	cout << "  a. Xem danh sach doc gia trong thu vien\n";
	cout << "  b. Them doc gia\n";
	cout << "  c. Chinh sua thong tin mot doc gia\n";
	cout << "  d. Xoa thong tin mot doc gia\n";
	cout << "  e. Tim kiem doc gia theo CCCD\n";
	cout << "  f. Tim kiem doc gia theo ho ten\n";
	cout << "2. Quan li sach\n";
	cout << "  a. Xem danh sach cac sach trong thu vien\n";
	cout << "  b. Them sach\n";
	cout << "  c. Chinh sua thong tin mot quyen sach\n";
	cout << "  d. Xoa thong tin sach\n";
	cout << "  e. Tim kiem sach theo ISBN\n";
	cout << "  f. Tim kiem sach theo ten sach\n";
	cout << "3. Lap phieu muon sach\n";
	cout << "4. Lap phieu tra sach\n";
	cout << "5. Cac thong ke co ban\n";
	cout << "  a. Thong ke so luong sach trong thu vien\n";
	cout << "  b. Thong ke so luong sach theo the loai\n";
	cout << "  c. Thong ke so luong doc gia\n";
	cout << "  d. Thong ke so luong doc gia theo gioi tinh\n";
	cout << "  e. Thong ke so sach dang duoc muon\n";
	cout << "  f. Thong ke danh sach doc gia bi tre han\n";
	cout << "6. Danh sach phieu muon/tra sach\n";
	cout << "0. Thoat chuong trinh\n";
	cout << "\n========================================\n";
	cout << "Chon 1 chuc nang (VD: 1a, 2b, 3): ";

	do 
	{
		gets_s(lua_chon);
		if (KTGT_MangLuaChon(lua_chon) == false)
		{
			cout << "\nVui long nhap lua chon hop le (nhu 1a, 2b, 3): ";
			continue;
		}
		break;
	} while (KTGT_MangLuaChon(lua_chon) == false);
	LuaChon = int_LuaChon(lua_chon);
}

void randomMa(char MaChinh[])
{
	int Ma;
	char MaPhu[5];
	srand((int)time(0));
	Ma = rand() % 9000 + 1000;
	sprintf_s(MaPhu, "%d", Ma);

	strcpy_s(MaChinh, 50, MaPhu);
}

void NhapTenDG(char tendg[])
{
	char ten[50];
	do {
		cout << "Nhap ho ten doc gia (Khong qua 26 ky tu): ";
		gets_s(ten);
		//Kiem tra tinh hop le cua ten: <26 ky tu va chi co chu cai
		if (strlen(ten) > 26 || strlen(ten) < 0 || KT_strToanChu(ten) == false) {
			cout << "Ten khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(ten) > 26 || strlen(ten) < 0 || KT_strToanChu(ten) == false);
	strcpy_s(tendg, 50, ten);
}

void Nhap_So_Str(char str[], int max_length, int min_length, const char *thongbao)
{
	char so[20];
	do{
		cout << thongbao;
		gets_s(so);
		//Kiem tra chuoi co dung so luong so hay khong
		if (strlen(so) > max_length || strlen(so) < min_length || KT_strToanSo(so) == false) {
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(so) > max_length || strlen(so) < min_length || KT_strToanSo(so) == false);
	strcpy_s(str, 20, so);
}

void NhapNgaySinh(char ngaysinh[])
{
	char ngaySinh[13];
	do {
		cout << "Nhap ngay thang nam sinh (dd/mm/yyyy): ";
		gets_s(ngaySinh);

		ngaySinh[strcspn(ngaySinh, "\n")] = '\0';
		//Kiem tra dinh dang ngay sinh
		if (KT_DinhDangDay(ngaySinh) == false) {
			cout << "Ngay sinh khong hop le!\n";
			continue;
		}
		break;
	} while (KT_DinhDangDay(ngaySinh) == false);
	strcpy_s(ngaysinh, 13, ngaySinh);
}

void NhapGioiTinh(char gioitinh[])
{
	char gioiTinh[10];
	do
	{
		cout << "Nhap gioi tinh doc gia (\"Nam\" hoac \"Nu\"): ";
		gets_s(gioiTinh);
		//Kiem tra co nhap dung khong
		if (strcmp(gioiTinh, "Nam") != 0 && strcmp(gioiTinh, "Nu") != 0)
		{
			cout << "Gioi tinh khong hop le!\n";
			continue;
		}
		break;
	} while (strcmp(gioiTinh, "Nam") != 0 && strcmp(gioiTinh, "Nu") != 0);
	strcpy_s(gioitinh, 10, gioiTinh);
}

 void NhapEmail(char Email[])
{
	char email[27];
	do {
		cout << "Nhap dia chi email doc gia (khong qua 26 ky tu): ";
		gets_s(email);
		//Kiem tra email co dung khong (phai co @)
		if (strlen(email) > 26 || KT_Email(email) == false) {
			cout << "Email khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(email) > 26 || KT_Email(email) == false);
	strcpy_s(Email, 27, email);
}

void Nhap_Str(char diachi[], int max_length)
{
	char DiaChi[27];
	do {
		cout << "Nhap dia chi hien tai cua doc gia (khong qua 26 ky tu): ";
		gets_s(DiaChi);
		if (strlen(DiaChi) > max_length) {
			cout << "Qua dai!\n";
			continue;
		}
		break;
	} while (strlen(DiaChi) > max_length);
	strcpy_s(diachi, 27, DiaChi);
}

void NhapNgay(char Ngay[])
{
	char ngay[13];
	do {
		cout << "Nhap ngay hien tai (dd/mm/yyyy): ";
		fgets(ngay, sizeof(ngay), stdin);

		ngay[strcspn(ngay, "\n")] = '\0';
		//Kiem tra dinh dang ngay sinh
		if (KT_DinhDangDay(ngay) == false) {
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (KT_DinhDangDay(ngay) == false);
	strcpy_s(Ngay, 13, ngay);
}

void Nhap_Ma(char ma_DG[])
{
	char Madg[10];
	do {
		cout << "Nhap ma doc gia (4 so): ";
		gets_s(Madg);
		if (strlen(Madg) != 4 || KT_strToanSo(Madg) == false) {
			cout << "Ma khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(Madg) != 4 || KT_strToanSo(Madg) == false);

	strcpy_s(ma_DG, 5, Madg);
}

void Nhap_MaSach(char maSach[])
{
	char MaSach[50];
	do {
		cout << "Nhap ma ISBN (13 so): ";
		gets_s(MaSach);
		if (strlen(MaSach) != 13 || KT_strToanSo(MaSach) == false) {
			cout << "Ma khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(MaSach) != 13 || KT_strToanSo(MaSach) == false);

	strcpy_s(maSach, 50, MaSach);
}

int nhap_so(int min, int max, const char *thongBao)
{
	int so;
	do {
		cout << thongBao;
		cout << " (" << min << '-' << max << "): ";
		cin >> so;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(10000, '\n'); //Loai bo khoi bo dem dau vao 10000 ky tu toi da hoac den khi gap ky tu xuong dong
			continue;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Loai bo cac ky tu trong bo dem dau vao den khi gap ky tu xuong dong hoac dat so luong ky tu toi da
		if (so < min || so > max) continue;
		break;
	} while (true);
	return so;
}

void XoaDongDG(DocGia a[], int& size, int vitri)
{
	//Gan vi tri bi xoa bang vi tri ke tiep roi tiep dien den khi het danh sach, cuoi cung tru di mot dong cua danh sach 
	for (int i = vitri; i < size - 1; i++)
	{
		strcpy_s(a[i].maDG, a[i + 1].maDG);
		strcpy_s(a[i].ten, a[i + 1].ten);
		strcpy_s(a[i].cccd, a[i + 1].cccd);
		strcpy_s(a[i].ngaysinh, a[i + 1].ngaysinh);
		strcpy_s(a[i].gioitinh, a[i + 1].gioitinh);
		strcpy_s(a[i].email, a[i + 1].email);
		strcpy_s(a[i].diachi, a[i + 1].diachi);
		strcpy_s(a[i].ngaylapthe, a[i + 1].ngaylapthe);
		strcpy_s(a[i].ngayhethan, a[i + 1].ngayhethan);
	}

	size--;
}

void XoaDongSach(Sach b[], int& size, int vitri)
{
	for (int i = vitri; i < size - 1; i++)
	{
		strcpy_s(b[i].ISBN, b[i + 1].ISBN);
		strcpy_s(b[i].tenSach, b[i + 1].tenSach);
		strcpy_s(b[i].tacgia, b[i + 1].tacgia);
		strcpy_s(b[i].nhaXB, b[i + 1].nhaXB);
		strcpy_s(b[i].namXB, b[i + 1].namXB);
		strcpy_s(b[i].theloai, b[i + 1].theloai);
		strcpy_s(b[i].giasach, b[i + 1].giasach);
		strcpy_s(b[i].soquyen, b[i + 1].soquyen);
	}
	size--;
}

void NhapTenSach(char tensach[])
{
	char ten[50];
	do {
		cout << "Nhap ten sach (Khong qua 45 ky tu): ";
		gets_s(ten);
		//Kiem tra tinh hop le cua ten: <45 ky tu
		if (strlen(ten) > 45 || strlen(ten) <= 0) {
			cout << "Ten khong hop le!\n";
			continue;
		}
		break;
	} while (true);
	strcpy_s(tensach, 50, ten);
}

void NhapTenTacGia(char tacgia[])
{
	char tentacgia[26];
	do {
		cout << "Nhap ten tac gia (Khong qua 26 ky tu): ";
		gets_s(tentacgia);
		//Kiem tra tinh hop le cua ten: <26 ky tu va chi co chu cai
		if (strlen(tentacgia) > 26 || strlen(tentacgia) <= 0 || KT_strToanChu(tentacgia) == false) {
			cout << "Ten khong hop le!\n";
			continue;
		}
		break;
	} while (true);
	strcpy_s(tacgia, 26, tentacgia);
}

void NhapNhaXB(char nhaXB[])
{
	char tennhaXB[25];
	do {
		cout << "Nhap ten nha xuat ban (Khong qua 18 ky tu): ";
		gets_s(tennhaXB);
		//Kiem tra tinh hop le cua ten: <18 ky tu va khong duoc co so
		if (strlen(tennhaXB) > 18 || strlen(tennhaXB) <= 0 || KT_strToanChu(tennhaXB) == false) {
			cout << "Ten khong hop le!\n";
			continue;
		}
		break;
	} while (true);
	strcpy_s(nhaXB, 25, tennhaXB);
}

void NhapNamXB(char namXB[], int max_length, int min_length)
{
	char nam[10];
	do {
		cout << "Nhap nam xuat ban (4 so): ";
		gets_s(nam);
		//Kiem tra nam co dung 4 so hay khong va co chu hay khong
		if (strlen(nam) > max_length || strlen(nam) < min_length || KT_strToanSo(nam) == false) {
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(nam) > max_length || strlen(nam) < min_length || KT_strToanSo(nam) == false);
	strcpy_s(namXB, 10, nam);
}

void NhaptheloaiSach(char theloai[])
{
	char theloaiSach[30];
	do {
		cout << "Nhap the loai cua sach (Khong qua 24 ky tu): ";
		gets_s(theloaiSach);
		//Kiem tra tinh hop le cua ten: <24 ky tu va khong duoc co so
		if (strlen(theloaiSach) > 24 || strlen(theloaiSach) <= 0 || KT_strToanChu(theloaiSach) == false) {
			cout << "Ten khong hop le!\n";
			continue;
		}
		break;
	} while (true);
	strcpy_s(theloai, 30, theloaiSach);
}

void NhapGia(char giasach[])
{
	char gia[10];
	do {
		cout << "Nhap gia cua sach (0 - 9999999): ";
		gets_s(gia);
		//Kiem tra gia co toan so hay khong
		if (strlen(gia) > 7 || strlen(gia) <= 0 || KT_strToanSo(gia) == false) {
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(gia) > 7 || strlen(gia) <= 0 || KT_strToanSo(gia) == false);
	strcpy_s(giasach, 10, gia);
}

void NhapSL(char soluong[])
{
	char sl[10];
	do {
		cout << "Nhap so luong sach (0 - 99999): ";
		gets_s(sl);
		//Kiem tra co toan so hay khong
		if (strlen(sl) > 5 || strlen(sl) <= 0 || KT_strToanSo(sl) == false) {
			cout << "Khong hop le!\n";
			continue;
		}
		break;
	} while (strlen(sl) > 5 || strlen(sl) <= 0 || KT_strToanSo(sl) == false);
	strcpy_s(soluong, 10, sl);
}

void layTheLoai(int& sizeSach, char theLoai[][30], int& soTheLoai, int soLuongSach[], Sach b[]) {
	for (int i = 0; i < sizeSach; i++) {
		if (!KT_TheLoaiDaXuatHien(b[i].theloai, theLoai, soTheLoai)) 
		{
			strcpy_s(theLoai[soTheLoai] , b[i].theloai);
			soLuongSach[soTheLoai] = atoi(b[i].soquyen);
			soTheLoai++;
		}
		else {
			int index = TimViTriCuaTheLoai(b[i].theloai, theLoai, soTheLoai);
			soLuongSach[index] += atoi(b[i].soquyen);
		}
	}
}

bool ktDaCoPhieuTra(Phieu c[], int& index) {
	if (strcmp(c[index].ngaytrathucte," ") != 0) return 1;
	else return 0;
}

void layDanhSachISBN_phieu(Phieu c[], char ISBNmuon[][50], int& indexPhieu, int& index)
{
	char str[50];
	strcpy_s(str, c[indexPhieu].DS_SachMuon);
	const char delimiters[] = " ";
	char* next_token;
	char* token = strtok_s(str, delimiters, &next_token);

	strcpy_s(c[indexPhieu].SLSachMuon, token);
	token = strtok_s(NULL, delimiters, &next_token);

	while (token != NULL) {
		strcpy_s(ISBNmuon[index], token);
		index++;
		token = strtok_s(NULL, delimiters, &next_token);
	}

}

bool ktTraSachTrung(char ISBN[], char danhSachMuon[][50], int& soLuong, bool sach_muon[]) {
	for (int i = 0; i < soLuong; i++) {
		if (SoSanhChuoi(ISBN, danhSachMuon[i]) && sach_muon[i] == 0) {
			sach_muon[i] = 1;
			return 0;
		}
	}
	return 1;
}