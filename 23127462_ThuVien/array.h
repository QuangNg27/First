#pragma once
struct DocGia {
	char maDG[50], ten[50], cccd[50], ngaysinh[13], gioitinh[10], email[27], diachi[27], ngaylapthe[13], ngayhethan[13];
};

struct Sach {
	char ISBN[50], tenSach[50], tacgia[26], nhaXB[20], namXB[10], theloai[30], giasach[10], soquyen[10];
};

struct Phieu {
	char MaPhieu[50], MaDG_MuonSach[50], ngaymuon[13], ngaytradukien[13], ngaytrathucte[13], DS_SachMuon[50], sachhumat[50], tienphat[15], SLSachMuon[2];
};

//Ham dung de in danh sach doc gia
void DanhSachDocGia(int& size, DocGia a[]);

//Ham dung de them doc gia
void themDG(int& size, int& thutu, DocGia a[]);

//Ham chinh sua doc gia
void chinhSuaDG(int& size, DocGia a[]);

//In ra danh sach co doc gia can tim kiem
void DanhSachDocGiaCon(int& size, int vitri, int size_vitri, DocGia a[]);

//In ra danh sach cac doc gia co ten can tim kiem
void DanhSachTimKiemTenDG(int& size, int vitri[], int size_vitri, DocGia a[]);

//Xoa mot doc gia khoi danh sach
void xoaDG(int& indexDG, int& size, DocGia a[]);

//Ham dung de tim kiem doc gia theo cmnd/cccd
void timDG_CCCD(int& size, DocGia a[]);

//Ham dung de tim kiem doc gia theo ten
void timDG_Ten(int& size, DocGia a[]);


//Ham in ra danh sach cac sach trong thu vien
void DS_Sach(int& size, Sach b[]);

//Ham dung de them sach vao thu vien
void themSach(int& size, int& thutu, Sach b[]);

//Ham dung de in ra danh sach co sach can tim kiem
void DS_SachCon(int& size, int vitri, int size_vitri, Sach b[]);

//Ham dung de chinh sua cac thong tin cua sach
void chinhSuaSach(int& size, Sach b[]);

//Ham dung de xoa mot quyen sach can xoa
void xoaSach(int& indexSach, int& size, Sach b[]);

//Ham dung de tim sach theo ma ISBN cua sach
void timSach_ISBN(int& size, Sach b[]);

//Ham dung de tim sach theo ten cua sach
void timSach_Ten(int& size, Sach b[]);


//Ham dung de lap phieu muon sach
void lapPhieuMuon(
	int& sizeDG, DocGia a[],
	int& sizeSach, Sach b[],
	char ISBN_Muon[][50], int& thutuPhieu, int& sizePhieu, int& IndexMuon, int& sizeMuon, Phieu c[]);

//Ham dung de nhap so luong va ma ISBN cua sach ma doc gia muon muon
void nhapDanhSachISBN(int& thutuPhieu, int& IndexMuon, int& sizeMuon, int& sizeSach, char ISBN_Muon[][50], Sach b[], Phieu c[]);

//Ham dung de in ra danh sach phieu muon/tra sach
void danhSachPhieu(int& thutuPhieu, int& sizePhieu, int& sizeDG, int& indexMuon, int& sizeSachMuon, Phieu c[]);

//Ham dung de in ra danh sach phieu chi co thong tin cua 1 phieu can tim  
void danhSachPhieu_con(int& sizePhieu, int indexPhieu, int sizeSachMuon, Phieu c[]);

//Ham dung de lap phieu tra sach
void lapPhieuTra(int& thutuPhieu, int& sizePhieu, int& sizeDG, int& sizeSach, int& indexHu, int& sizeHu, int& indexMuon, char ISBN_mat[][50], char soluongsachhu[][2], DocGia a[], Sach b[], Phieu c[]);

//Ham dung de nhap so luong va ma ISBN cua sach bi mat
void nhapDanhSachISBN_mat(int& sizePhieu, int& indexPhieu, int& indexMuon, int& indexHu, int& sizeHu, int& sizeSach, char ISBN_mat[][50], char slsachhu[][2], Phieu c[], Sach b[]);

//Ham dung de tinh tien phat tra sach tre va tien phat sach bi mat
int tinhTienPhat(int& sizeSach, int& indexHu, int& indexPhieu, int& sizePhieu, char soluongsachhu[][2], char ISBN_mat[][50], Sach b[], Phieu c[]);


//Thong ke so luong sach theo cac thong tin trong danh sach sach
void TK_SLSach(int& size, Sach b[]);

//Thong ke so luong sach theo mang the loai cua sach
void TK_SachTheoTheLoai(int& size, Sach b[]);

//Thong ke so luong doc gia theo thong tin trong danh sach doc gia
void TK_SLDocGia(int& size, DocGia a[]);

//Thong ke so luong doc gia theo gioi tinh
void TK_SLDocGiaTheoGioiTinh(int& size, DocGia a[]);

//Thong ke so luong cac sach dang duoc muon theo danh sach phieu muon/tra sach
void TK_SLSachDangMuon(int& sizePhieu, Phieu c[]);

//Thong ke so luong doc gia tre han theo danh sach phieu muon/tra sach
void tk_SLDocGiaTreHan(int& sizePhieu, Phieu c[]);