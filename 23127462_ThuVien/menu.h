#pragma once
#include "array.h"

//Ham in ra danh sach menu de lua chon
void Menu(int& LuaChon);

//Ham lay ngau nhien ma so 
void randomMa(char MaChinh[]);

//Ham dung de nhap ten doc gia 
void NhapTenDG(char tendg[]);

//Ham dung de nhap ten sach 
void NhapTenSach(char tensach[]);

//Ham dung de nhap ten tac gia cua sach
void NhapTenTacGia(char tacgia[]);

//Ham dung de nhap chuoi cac ky tu so
void Nhap_So_Str(char str[], int max_length, int min_length, const char *thongbao);

//Ham dung de nhap sinh cua doc gia
void NhapNgaySinh(char ngaysinh[]);

//Ham dung de nhap gioi tinh cua doc gia
void NhapGioiTinh(char gioitinh[]);

//Ham dung de nhap email cua doc gia
void NhapEmail(char Email[]);

//Ham dung de nhap dia chi cua doc gia
void Nhap_Str(char diachi[], int max_length);

//Ham dung nhap ngay theo thu tu trong trong danh sach
void NhapNgay(char Ngay[]);

//Ham dung de nhap ma doc gia de tim kiem
void Nhap_Ma(char ma_DG[]);

//Ham dung de nhap so theo yeu cau
int nhap_so(int min, int max, const char *thongBao);

//Ham dung de xoa dong trong danh sach doc gia
void XoaDongDG(DocGia a[], int& size, int vitri);

//Ham nhap ten nha xuat ban cua sach
void NhapNhaXB(char nhaXB[]);

//Ham nhap nam xuat ban cua sach
void NhapNamXB(char namXB[], int max_length, int min_length);

//Ham nhap the loai cua sach
void NhaptheloaiSach(char theloai[]);

//Ham nhap gia cua sach
void NhapGia(char giasach[]);

//Ham nhap so luong cua sach
void NhapSL(char soluong[]);

//Ham nhap ma ISBN cua sach de tim kiem
void Nhap_MaSach(char maSach[]);

//Ham xoa dong trong danh sach sach
void XoaDongSach(Sach b[], int& size, int vitri);

//Ham dung de lay the loai tu danh sach sach de thong ke
void layTheLoai(int& sizeSach, char theLoai[][30], int& soTheLoai, int soLuongSach[], Sach b[]);

//Ham dung de kiem tra da co phieu tra chua
bool ktDaCoPhieuTra(Phieu c[], int& index);

//Ham tach so luong va cac ma ISBN cua sach ra khoi mot chuoi
void layDanhSachISBN_phieu(Phieu c[], char ISBNmuon[][50], int& indexPhieu, int& index);

//Ham kiem tra xem co nhap du sach khi tra hay khong
bool ktTraSachTrung(char ISBN[], char danhSachMuon[][50], int& soLuong, bool sach_muon[]);