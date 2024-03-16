#pragma once
#include "array.h"

//Ham dung de xoa man hinh
void XoaMH();

//Ham dung de quay tro lai trang chinh
void Back();

// Ham kiem tra xem lua chon nhap vao co dung yeu cau khong
bool KTGT_MangLuaChon(char luc_chon[]);

//Chuyen ky tu nhap lua chon o menu thanh gia tri de dung switch case o ham main 
int int_LuaChon(char lua_chon[]);

//Ham dung de kiem tra nhung chuoi ky tu so co toan ky tu so hay khong
bool KT_strToanSo(char so[]);

//Ham dung de kiem tra nhung chuoi ky tu so co toan ky tu so hay khong
bool KT_strToanChu(char chu[]);

//Ham kiem tra email co hop le khong
bool KT_Email(const char* email);

//Ham dung de so sanh 2 chuoi co giong nhau hay khong
bool SoSanhChuoi(const char str1[], const char str2[]);

//Ham dung de kiem tra ma doc gia da xuat hien trong mang chua
bool KT_MaDGDaXuatHien(char Ma[], DocGia a[], int& size);

bool KT_CCCDDaXuatHien(char Ma[], DocGia a[], int& size);

int TimViTriCuaCCCD(char Ma[], DocGia a[], int& size);

//Ham dung de kiem tra chuoi ky tu da xuat hien trong mang can tim chua
bool KT_TenDaXuatHien(char ten[], DocGia a[], int& size);

//Ham tim kiem vi tri cua input ten
int TimViTriCuaTen(char ten[], char DanhSach[][50], int& size);

//Ham tim kiem tat ca vi tri cua input ten
void TimTatCaViTriCuaTen(char ten[], DocGia a[], int& size, int& sizeTimKiem, int temp[]);

//Ham dung de kiem tra xem input nam co phai la nam nhuan khong
bool KiemTraNamNhuan(int n);

//Ham dung de xac dinh so ngay trong thang 
int SoNgayTrongThang(int thang, int nam);

//Ham dung kiem tra ngay thang nam co hop le khong 
bool KiemTraChinhXac(int ngay, int thang, int nam);

//Kiem tra do chinh xac dinh dang ngay
bool KT_DinhDangDay(const char *day);

//Tim vi tri cua gia tri trong mang can tim
int TimViTriCuaMaDG(char Ma[], DocGia a[], int& size);

//Ham dung de tinh ngay het han the cua doc gia
void NgayHetHan(char ngaylapthe[], char ngayhethan[]);

//Tach ngay thang nam ra tu dinh dang dd/mm/yyyy
void TachNgayThangNam(char datestr[], int& day, int& month, int& year);

//Ghep ngay thang nam ve dinh dang dd/mm/yyyy
void GhepNgayThangNam(char datestr[], int& day, int& month, int& year);

// Ham cong them nam
void CongNam(int& nam);

//Ham xac dinh ngay tra sach du kien
void NgayTraDuKien(char ngaymuon[], char ngaytradk[]);

//Ham cong them ngay vao ngay muon de co ngay tra du kien
void CongNgay(int& Ngay, int& Thang, int& Nam);

//Ham kiem tra the loai sach can duyet da xuat hien trong mang chua cac the loai sach chua
bool KT_TheLoaiDaXuatHien(char str[], char DanhSach[][30], int& size);

//Ham tim kiem vi tri cua the loai sach can tim trong danh sach cac the loai
int TimViTriCuaTheLoai(char Ma[], char DanhSachMa[][30], int& size);

//Ham tinh so ngay tu dau nam den ngay input
int tinhSoNgayTuDauNam(int d, int m, int y);

//Ham tinh khoang cach ngay tu mot moc co dinh den nam input
int TinhSoNgay(int d, int m, int y);

//Ham tinh so ngay tre giua ngay tra sach du kien va ngay tra thuc te
int tinhSoNgayTre(char ngaytradukien[], char ngaytrathucte[]);

//Ham kiem tra ma ISBN cua sach da xuat hien chua
bool KT_ISBNDaXuatHien(char Ma[], Sach b[], int& size);

//Ham tim vi tri cua ma ISBN
int TimViTriCuaISBN(char Ma[], Sach b[], int& size);

bool KT_TenSachDaXuatHien(char ten[], Sach b[], int& size);

int TimViTriCuaTenSach(char ten[], Sach b[], int& size);

bool KT_MaPhieuDaXuatHien(char Ma[], Phieu c[], int& size);

int TimViTriCuaMaPhieu(char Ma[], Phieu c[], int& size);

//Ham lay so luong sach muon tu file du lieu cua sach
void laySL_SachMuon_FILE(Phieu a[], int& index);
