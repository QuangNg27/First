#include <iostream>
#include <string.h>
#include <stdio.h>
#include "menu.h";
#include "function.h"
#include "array.h"
#include "file.h"

using namespace std;

int main()
{
	//Hom nay minh test github
	
	int sizeDG = 0, index = 0;
	int lua_chon;
	DocGia a[100];
	Sach b[100];
	Phieu c[100];

	int sizeSach = 0, indexSach = 0;
	int sizePhieu = 0, indexPhieu = 0;

	int indexMuon = 0, sizeSachMuon = 0;
	char ISBN_muon[100][50];

	int indexHu = 0, sizeHu = 0;
	char SLsachhu[100][2], ISBN_mat[100][50];

	FILE* f;
	fopen_s(&f, "data\\DocGia.txt", "rt");
	DocFile_DocGia(f, a, index, sizeDG);
	fclose(f);

	FILE* f1;
	fopen_s(&f1, "data\\Sach.txt", "rt");
	DocFile_Sach(f1, b, indexSach, sizeSach);
	fclose(f1);

	FILE* f2;
	fopen_s(&f2, "data\\Phieu.txt", "rt");
	DocFile_Phieu(f2, c, indexPhieu, sizePhieu);
	fclose(f2);

	do {
		Menu(lua_chon);

		switch (lua_chon)
		{
		case 11:
			XoaMH();
			DanhSachDocGia(sizeDG, a);
			Back();
			break;
		case 12:
			XoaMH();
			themDG(sizeDG, index, a);
			fopen_s(&f, "data\\DocGia.txt", "wt");
			GhiFile_DocGia(f, a, sizeDG);
			fclose(f);
			Back();
			break;
		case 13:
			XoaMH();
			chinhSuaDG(sizeDG, a);
			fopen_s(&f, "data\\DocGia.txt", "wt");
			GhiFile_DocGia(f, a, sizeDG);
			fclose(f);
			Back();
			break;
		case 14:
			XoaMH();
			xoaDG(index, sizeDG, a);
			fopen_s(&f, "data\\DocGia.txt", "wt");
			GhiFile_DocGia(f, a, sizeDG);
			fclose(f);
			Back();
			break;
		case 15:
			XoaMH();
			timDG_CCCD(sizeDG, a);
			Back();
			break;
		case 16:
			XoaMH();
			timDG_Ten(sizeDG, a);
			Back();
			break;
		case 21:
			XoaMH();
			DS_Sach(sizeSach, b);
			Back();
			break;
		case 22:
			XoaMH();
			themSach(sizeSach, indexSach, b);
			fopen_s(&f1, "data\\Sach.txt", "wt");
			GhiFile_Sach(f1, b, sizeSach);
			fclose(f1);
			Back();
			break;
		case 23:
			XoaMH();
			chinhSuaSach(sizeSach, b);
			fopen_s(&f1, "data\\Sach.txt", "wt");
			GhiFile_Sach(f1, b, sizeSach);
			fclose(f1);
			Back();
			break;
		case 24:
			XoaMH();
			xoaSach(indexSach, sizeSach, b);
			fopen_s(&f1, "data\\Sach.txt", "wt");
			GhiFile_Sach(f1, b, sizeSach);
			fclose(f1);
			Back();
			break;
		case 25:
			XoaMH();
			timSach_ISBN(sizeSach, b);
			Back();
			break;
		case 26:
			XoaMH();
			timSach_Ten(sizeSach, b);
			Back();
			break;
		case 3:
			XoaMH();
			lapPhieuMuon(sizeDG, a, sizeSach, b, ISBN_muon, indexPhieu, sizePhieu, indexMuon, sizeSachMuon, c);
			fopen_s(&f2, "data\\Phieu.txt", "wt");
			GhiFile_Phieu(f2, c, sizePhieu);
			fclose(f2);

			fopen_s(&f1, "data\\Sach.txt", "wt");
			GhiFile_Sach(f1, b, sizeSach);
			fclose(f1);
			Back();
			break;
		case 4:
			XoaMH();
			lapPhieuTra(indexPhieu, sizePhieu, sizeDG, sizeSach, indexHu, sizeHu, indexMuon, ISBN_mat, SLsachhu, a, b, c);
			fopen_s(&f2, "data\\Phieu.txt", "wt");
			GhiFile_Phieu(f2, c, sizePhieu);
			fclose(f2);

			fopen_s(&f1, "data\\Sach.txt", "wt");
			GhiFile_Sach(f1, b, sizeSach);
			fclose(f1);
			Back();
			break;
		case 51:
			XoaMH();
			TK_SLSach(sizeSach, b);
			Back();
			break;
		case 52:
			XoaMH();
			TK_SachTheoTheLoai(sizeSach, b);
			Back();
			break;
		case 53:
			XoaMH();
			TK_SLDocGia(sizeDG, a);
			Back();
			break;
		case 54:
			XoaMH();
			TK_SLDocGiaTheoGioiTinh(sizeDG, a);
			Back();
			break;
		case 55:
			XoaMH();
			TK_SLSachDangMuon(sizePhieu, c);
			Back();
			break;
		case 56:
			XoaMH();
			tk_SLDocGiaTreHan(sizePhieu, c);
			Back();
			break;
		case 6:
			XoaMH();
			danhSachPhieu(indexPhieu, sizePhieu, sizeDG , indexMuon, sizeSachMuon, c);
			Back();
			break;
		}

	}while (lua_chon != 0);


	return 0;
}
