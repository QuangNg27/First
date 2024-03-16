#pragma once
#include "array.h"

//Ham doc file dung de nap du lieu co trong file text
//Ham ghi file dung de viet lai noi dung thay doi

void DocFile_DocGia(FILE* f, DocGia a[], int& index, int& size);

void GhiFile_DocGia(FILE* f, DocGia a[], int& size);

void DocFile_Sach(FILE* f, Sach a[], int& index, int& size);

void GhiFile_Sach(FILE* f, Sach a[], int& size);

void DocFile_Phieu(FILE* f, Phieu a[], int& index, int& size);

void GhiFile_Phieu(FILE* f, Phieu a[], int& size);