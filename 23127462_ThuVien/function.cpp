#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include "menu.h"
#include "function.h"

using namespace std;

void XoaMH()
{
	system("cls");
}

void Back()
{
	cout << "\n\nNhan Enter de quay tro lai!";
	cin.get();
	XoaMH();
}

bool KTGT_MangLuaChon(char lua_chon[])
{
	if (strcmp(lua_chon, "1a") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "1b") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "1c") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "1d") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "1e") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "1f") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2a") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2b") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2c") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2d") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2e") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "2f") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5a") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5b") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5c") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5d") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5e") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "5f") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "3") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "4") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "0") == 0)
	{
		return true;
	}
	else if (strcmp(lua_chon, "6") == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int int_LuaChon(char lua_chon[])
{
	// Cac chu so dung truoc se giu nguyen gia tri
	// a = 1, b = 2, c = 3, d = 4, e = 5, f = 6
	if (strcmp(lua_chon, "1a") == 0)
	{
		return 11;
	}
	else if (strcmp(lua_chon, "1b") == 0)
	{
		return 12;
	}
	else if (strcmp(lua_chon, "1c") == 0)
	{
		return 13;
	}
	else if (strcmp(lua_chon, "1d") == 0)
	{
		return 14;
	}
	else if (strcmp(lua_chon, "1e") == 0)
	{
		return 15;
	}
	else if (strcmp(lua_chon, "1f") == 0)
	{
		return 16;
	}
	else if (strcmp(lua_chon, "2a") == 0)
	{
		return 21;
	}
	else if (strcmp(lua_chon, "2b") == 0)
	{
		return 22;
	}
	else if (strcmp(lua_chon, "2c") == 0)
	{
		return 23;
	}
	else if (strcmp(lua_chon, "2d") == 0)
	{
		return 24;
	}
	else if (strcmp(lua_chon, "2e") == 0)
	{
		return 25;
	}
	else if (strcmp(lua_chon, "2f") == 0)
	{
		return 26;
	}
	else if (strcmp(lua_chon, "5a") == 0)
	{
		return 51;
	}
	else if (strcmp(lua_chon, "5b") == 0)
	{
		return 52;
	}
	else if (strcmp(lua_chon, "5c") == 0)
	{
		return 53;
	}
	else if (strcmp(lua_chon, "5d") == 0)
	{
		return 54;
	}
	else if (strcmp(lua_chon, "5e") == 0)
	{
		return 55;
	}
	else if (strcmp(lua_chon, "5f") == 0)
	{
		return 56;
	}
	else if (strcmp(lua_chon, "3") == 0)
	{
		return 3;
	}
	else if (strcmp(lua_chon, "4") == 0)
	{
		return 4;
	}
	else if (strcmp(lua_chon, "0") == 0)
	{
		return 0;
	}
	else if (strcmp(lua_chon, "6") == 0)
	{
		return 6;
	}
}

bool KT_strToanSo(char so[])
{
	for (int i = 0; so[i] != '\0'; i++)
	{
		//kiem tra ky tu co phai so
		if (!isdigit(so[i]))
			return false; // Neu gia tri ko hop le tra ve false
	}
	return true;
}

bool KT_strToanChu(char chu[])
{
	for (int i = 0; i < strlen(chu); i++)
	{
		//kiem tra ky tu co phai la chu
		if (!isalpha(chu[i]) && chu[i] != ' ')
		{
			return false; // Neu gia tri ko hop le tra ve false
		}
	}
	return true;
}

bool KiemTraNamNhuan(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		return true;
	}
	else
		return false;
}

int SoNgayTrongThang(int thang, int nam)
{
	int SoNgay{};
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: SoNgay = 31; break;
	case 4: case 6: case 9: case 11: SoNgay = 30; break;
	case 2:
		if (KiemTraNamNhuan(nam) == true)
		{
			SoNgay = 29;
		}
		else
		{
			SoNgay = 28;
		}
		break;
	}
	return SoNgay;
}

bool KiemTraChinhXac(int ngay, int thang, int nam)
{
	// Ngay thang nam khong thoa kieu kien se tra ra false
	if (ngay < 1 || ngay > SoNgayTrongThang(thang, nam))
	{
		return false;
	}
	if (thang < 1 || thang > 12)
	{
		return false;
	}
	if (nam < 0)
	{
		return false;
	}
	return true;
}

bool KT_DinhDangDay(const char *day)
{
	if (strlen(day) != 10) {
		return false; // Neu ko dung do dai tra ve false
	}

	// Kiem tra dinh dang dd/mm/yyyy
	int ngay, thang, nam;
	if (sscanf_s(day, "%d/%d/%d", &ngay, &thang, &nam) != 3) {
		return false; // Neu ko dung dinh dang tra ve false
	}

	//Kiem do chinh xac cua ngay thang nam
	if (KiemTraChinhXac(ngay, thang, nam) == false) {
		return false; // Neu gia tri ko hop le tra ve false
	}

	//Kiem tra cac vi tri dd mm yyyy co phai so hay khong
	for (int i = 0; i < strlen(day); i++)
	{
		if (i == 2 || i == 5) { continue; }
		else if (isdigit(day[i]) == 0)
			return false; // Neu gia tri ko hop le tra ve false
	}

	return true; // Neu tat ca dung tra ve true
}

bool KT_Email(const char* email)
{
	int i, atCount = 0, dotCount = 0;

	// Kiem tra do dai email
	if (strlen(email) == 0) {
		return false;
	}

	// Kiem tra ky tu '@'
	for (i = 0; email[i] != '\0'; i++) {
		if (email[i] == '@') {
			atCount++;
		}
	}

	if (atCount != 1) {
		return false; // Phai co dung 1 ky tu '@'
	}

	// kiem tra ky tu '.'
	for (i = 0; email[i] != '\0'; i++) {
		if (email[i] == '.') {
			dotCount++;
		}
	}

	if (dotCount < 1) {
		return false; // Phai co it nhat 1 dau '.'
	}

	// kiem tra ky tu '@' khong ton tai o dau hoac cuoi
	if (email[0] == '@' || email[strlen(email) - 1] == '@') {
		return false;
	}

	// kiem tra ky tu '.' khong ton tai o dau hoac cuoi
	if (email[0] == '.' || email[strlen(email) - 1] == '.') {
		return false;
	}

	// Kiem tra ky tu '@' khong nam gan ky tu '.'
	for (i = 0; email[i] != '\0'; i++) {
		if (email[i] == '@' && email[i + 1] == '.') {
			return false;
		}
	}
	return true;
}

bool SoSanhChuoi(const char str1[], const char str2[]) 
{
	//Kiem tra giong nhau tra ra true, khong giong tra ra false
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return 0;
		}
		i++;
	}
	return 1;
}

bool KT_MaDGDaXuatHien(char Ma[], DocGia a[], int& size)
{
	//Duyet qua cac phan tu cua mang can tim de xem da xuat hien chua. Neu so sanh chuoi giong nhau thi tra ra true, con khong thi tra ra false
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, a[i].maDG) == 1)
		{
			return true;
		}
	}
	return false;
}

bool KT_CCCDDaXuatHien(char Ma[], DocGia a[], int& size)
{
	//Duyet qua cac phan tu cua mang can tim de xem da xuat hien chua. Neu so sanh chuoi giong nhau thi tra ra true, con khong thi tra ra false
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, a[i].cccd) == 1)
		{
			return true;
		}
	}
	return false;
}

bool KT_ISBNDaXuatHien(char Ma[], Sach b[], int& size)
{
	//Duyet qua cac phan tu cua mang can tim de xem da xuat hien chua. Neu so sanh chuoi giong nhau thi tra ra true, con khong thi tra ra false
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, b[i].ISBN) == 1)
		{
			return true;
		}
	}
	return false;
}

bool KT_MaPhieuDaXuatHien(char Ma[], Phieu c[], int& size)
{
	//Duyet qua cac phan tu cua mang can tim de xem da xuat hien chua. Neu so sanh chuoi giong nhau thi tra ra true, con khong thi tra ra false
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, c[i].MaPhieu) == 1)
		{
			return true;
		}
	}
	return false;
}

bool KT_TheLoaiDaXuatHien(char str[], char DanhSach[][30], int& size)
{
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(str, DanhSach[i]) == 1)
		{
			return true;
		}
	}
	return false; //Neu khong co thi tra ra false
}

bool KT_TenDaXuatHien(char ten[], DocGia a[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(ten, a[i].ten) == 1)
		{
			return true;
		}
	}
	return false;
}

bool KT_TenSachDaXuatHien(char ten[], Sach b[], int& size)
{
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(ten, b[i].tenSach) == 1)
		{
			return true;
		}
	}
	return false;
}

int TimViTriCuaMaDG(char Ma[], DocGia a[], int& size)
{
	//Duyet qua cac phan tu cua mang chua gia tri. Neu co phan tu giong thi tra ra vi tri cua gia tri do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, a[i].maDG) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaCCCD(char Ma[], DocGia a[], int& size)
{
	//Duyet qua cac phan tu cua mang chua gia tri. Neu co phan tu giong thi tra ra vi tri cua gia tri do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, a[i].cccd) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaISBN(char Ma[], Sach b[], int& size)
{
	//Duyet qua cac phan tu cua mang chua gia tri. Neu co phan tu giong thi tra ra vi tri cua gia tri do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, b[i].ISBN) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaMaPhieu(char Ma[], Phieu c[], int& size)
{
	//Duyet qua cac phan tu cua mang chua gia tri. Neu co phan tu giong thi tra ra vi tri cua gia tri do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, c[i].MaPhieu) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaTheLoai(char Ma[], char DanhSachMa[][30], int& size)
{
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, DanhSachMa[i]) == 1)
		{
			return i; //Tra ra vi tri trong danh sach
		}
	}
}

int TimViTriCuaChuoi(char Ma[], char DanhSach[][50], int& size)
{
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(Ma, DanhSach[i]) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaTen(char ten[], char DanhSach[][50], int& size)
{
	//Duyet qua cac phan tu cua mang chua ten. Neu co phan tu giong thi tra ra vi tri cua phan tu do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(ten, DanhSach[i]) == 1)
		{
			return i;
		}
	}
}

int TimViTriCuaTenSach(char ten[], Sach b[], int& size)
{
	//Duyet qua cac phan tu cua mang chua ten. Neu co phan tu giong thi tra ra vi tri cua phan tu do
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(ten, b[i].tenSach) == 1)
		{
			return i;
		}
	}
}

void TimTatCaViTriCuaTen(char ten[], DocGia a[], int& size, int& sizeTimKiem, int temp[])
{
	//Duyet qua cac phan tu cua mang chua ten. Cac phan tu giong voi ten can tim se luu vi tri cua cac phan tu do vao mot mang 1 chieu
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (SoSanhChuoi(ten, a[i].ten) == 1)
		{
			temp[k] = i;
			k++;
		}
	}
	sizeTimKiem = k;
}

void NgayHetHan(char ngaylapthe[], char ngayhethan[])
{
	char date[13];
	strcpy_s(date, 13, ngaylapthe); //Sao chep input chuoi vao mot chuoi phu
	int ngay, thang, nam;
	TachNgayThangNam(date, ngay, thang, nam); //Tach ngay thang nam ra tu dinh dang dd/mm/yyyy
	CongNam(nam); // Nam cong them 4 <=> 48 thang
	GhepNgayThangNam(date, ngay, thang, nam); //Ghep ngay thang nam ve dinh dang dd/mm/yyyy
	strcpy_s(ngayhethan, 13, date); //Tra chuoi phu sau khi xu ly ve mang cua ngay het han theo thu tu phieu
}

void TachNgayThangNam(char datestr[], int& day, int& month, int& year)
{
	int result = sscanf_s(datestr, "%d/%d/%d", &day, &month, &year);
}

void CongNam(int& nam)
{
	nam = nam + 4;
}

void GhepNgayThangNam(char datestr[], int& day, int& month, int& year)
{
	sprintf_s(datestr, 13, "%02d/%02d/%04d", day, month, year);
}

void NgayTraDuKien(char ngaymuon[], char ngaytradk[])
{
	char date[13];
	strcpy_s(date, ngaymuon); //Sao chep chuoi ngay muon vao chuoi phu
	int ngay, thang, nam;
	TachNgayThangNam(date, ngay, thang, nam); //Tach ngay thang nam ra tu dinh dang dd/mm/yyyy
	CongNgay(ngay, thang, nam); //Tinh ngay tra du kien = ngay muon + 7 ngay
	GhepNgayThangNam(date, ngay, thang, nam); //Ghep ngay thang nam ve dinh dang dd/mm/yyyy

	strcpy_s(ngaytradk, 13, date); //Tra chuoi phu sau khi xu ly ve mang cua ngay tra du kien
}

void CongNgay(int& Ngay, int& Thang, int& Nam)
{
	int NgayTrongThang = SoNgayTrongThang(Thang, Nam);
	Ngay = Ngay + 7;
	if (Ngay > NgayTrongThang)
	{
		Ngay = Ngay - NgayTrongThang;
		Thang++;
	}
	if (Thang > 12)
	{
		Thang = 1;
		Nam++;
	}
}

int tinhSoNgayTuDauNam(int d, int m, int y)
{
	int soNgay = d;
	for (int i = 1; i < m; i++)
	{
		soNgay += SoNgayTrongThang(i, y); //Lay ngay input cong voi so ngay trong thang lien tuc den thang ke truoc thang input thi ket thuc
	}
	return soNgay;
}

int TinhSoNgay(int d, int m, int y)
{
	int kc = 0;
	for (int i = 1; i < y; i++) {
		if (KiemTraNamNhuan(i) == true)
		{
			kc += 366;
		}
		else
		{
			kc += 365;
		}
	}
	kc += tinhSoNgayTuDauNam(d, m, y);
	return kc;
}

int tinhSoNgayTre(char ngaytradukien[], char ngaytrathucte[])
{
	int songaytre;
	char date1[13], date2[13];
	int day1, day2, month1, month2, year1, year2;

	strcpy_s(date1, ngaytradukien); //Sao chep ngay tra du kien vao chuoi phu 1
	strcpy_s(date2, ngaytrathucte); //Sao chep ngay tra thuc te vao chuoi phu 2

	TachNgayThangNam(date1, day1, month1, year1); //Tach ngay thang nam chuoi phu 1 khoi dinh dang dd/mm/yyyy
	TachNgayThangNam(date2, day2, month2, year2); //Tach ngay thang nam chuoi phu 2 khoi dinh dang dd/mm/yyyy

	int kc1 = TinhSoNgay(day1, month1, year1); //Tinh khoang cach tu moc 1 den ngay cua chuoi phu 1
	int kc2 = TinhSoNgay(day2, month2, year2); //Tinh khoang cach tu moc 1 den ngay cua chuoi phu 2
	songaytre = kc2 - kc1; 

	return songaytre;
}

void laySL_SachMuon_FILE(Phieu a[], int& index)
{
	char str[50];
	strcpy_s(str, a[index].DS_SachMuon);
	const char delimiters[] = " ";
	char* next_token;
	char* token = strtok_s(str, delimiters, &next_token);
	strcpy_s(a[index].SLSachMuon, token);
}