#include <iostream>
#include <stdio.h>
#include "array.h"
#include "function.h"

using namespace std;

void DocFile_DocGia(FILE *f, DocGia a[], int& index, int& size)
{
	while (!feof(f))
	{
		fscanf_s(f, "%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n]\n", a[index].maDG, 50, a[index].ten, 50, a[index].cccd, 50, a[index].ngaysinh, 13, a[index].gioitinh, 10, a[index].email, 27, a[index].diachi, 27, a[index].ngaylapthe, 13, a[index].ngayhethan, 13);
		index++;
		size++;
	}
}

void GhiFile_DocGia(FILE* f, DocGia a[], int& size)
{
	for (int i = 0; i < size; i++)
	fprintf_s(f, "%s-%s-%s-%s-%s-%s-%s-%s-%s\n", a[i].maDG, a[i].ten, a[i].cccd, a[i].ngaysinh, a[i].gioitinh, a[i].email, a[i].diachi, a[i].ngaylapthe, a[i].ngayhethan);
}

void DocFile_Sach(FILE* f, Sach a[], int& index, int& size)
{
	while (!feof(f))
	{
		fscanf_s(f, "%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n%[^\n]\n", a[index].ISBN, 50, a[index].tenSach, 50, a[index].tacgia, 26, a[index].nhaXB, 20, a[index].namXB, 10, a[index].theloai, 30, a[index].giasach, 10, a[index].soquyen, 10);
		index++;
		size++;
	}
}

void GhiFile_Sach(FILE* f, Sach a[], int& size)
{
	for (int i = 0; i < size; i++)
	fprintf_s(f, "%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", a[i].ISBN, a[i].tenSach, a[i].tacgia, a[i].nhaXB, a[i].namXB, a[i].theloai, a[i].giasach, a[i].soquyen);
}

void DocFile_Phieu(FILE* f, Phieu a[], int& index, int& size)
{
	while (!feof(f))
	{
		fscanf_s(f, "%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n-]-%[^\n]\n", a[index].MaPhieu, 50, a[index].MaDG_MuonSach, 50, a[index].ngaymuon, 13, a[index].ngaytradukien, 13, a[index].ngaytrathucte, 13, a[index].DS_SachMuon, 50, a[index].sachhumat, 50, a[index].tienphat, 15);
		laySL_SachMuon_FILE(a, index);

		index++;
		size++;
	}
}

void GhiFile_Phieu(FILE* f, Phieu a[], int& size)
{
	for (int i = 0; i < size; i++)
		fprintf_s(f, "%s-%s-%s-%s-%s-%s-%s-%s\n", a[i].MaPhieu, a[i].MaDG_MuonSach, a[i].ngaymuon, a[i].ngaytradukien, a[i].ngaytrathucte, a[i].DS_SachMuon, a[i].sachhumat, a[i].tienphat);
}