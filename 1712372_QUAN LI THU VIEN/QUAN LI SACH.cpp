#include "stdafx.h"
#include<stdio.h>
#include <string.h>
//	KHOI TAO DANH SACH CUA SACH
void TaoDanhSachSach(char ISBN[30][30], char TenSach[100][30], char TacGiaSach[30][30], char NXB[30][30], char NamXB[30][30], int TheLoai[100],
	int GiaSach[30], int SoQuyenSach[100])
{
	//	SACH 1
	strcpy_s(ISBN[0], "LT2015\0");
	strcpy_s(TenSach[0], "Nhap Mon Lap Trinh\0");
	strcpy_s(TacGiaSach[0], "Tran Dan Thu\0");
	strcpy_s(NamXB[0], "2015\0");
	strcpy_s(NXB[0], "DH KHTN TPHCM\0");
	TheLoai[0] = 1;
	GiaSach[0] = 50000;
	SoQuyenSach[0] = 15;
	//	SACH 2
	strcpy_s(ISBN[1], "TRR2007\0");
	strcpy_s(TenSach[1], "Toan Roi Rac\0");
	strcpy_s(TacGiaSach[1], "Nguyen Huu Anh\0");
	strcpy_s(NamXB[1], "2007\0");
	strcpy_s(NXB[1], "LAO DONG - XA HOI\0");
	TheLoai[1] = 2;
	GiaSach[1] = 20000;
	SoQuyenSach[1] = 10;
	//	SACH 3
	strcpy_s(ISBN[2], "KTLT2004\0");
	strcpy_s(TenSach[2], "BT Ky Thuat Lap Trinh\0");
	strcpy_s(TacGiaSach[2], "Nguyen Tan Tran Minh Khang\0");
	strcpy_s(NamXB[2], "2004\0");
	strcpy_s(NXB[2], "DH KHTN TPHCM\0");
	TheLoai[2] = 1;
	GiaSach[2] = 15000;
	SoQuyenSach[2] = 25;

}

//	 NHAP XUAT ISBN
void NhapISBN(char ISBN[30][30], int i)
{
	printf("\nNhap ISBN: ");
	gets_s(ISBN[i], 30);
}
void XuatISBN(char ISBN[30][30], int i)
{
	printf("\nISBN: ");
	puts(ISBN[i]);
}
//		NHAP XUAT TEN SACH
void NhapTenSach(char TenSach[100][30], int i)
{
	printf("\nNhap vao ten sach: ");
	gets_s(TenSach[i], 30);
}
void XuatTenSach(char TenSach[100][30], int i)
{
	printf("\nTen Sach: ");
	puts(TenSach[i]);
}
//		NHAP XUAT TAC GIA SACH
void NhapTacGiaSach(char TacGiaSach[30][30], int i)
{
	printf("\nNhap vao Tac gia sach: ");
	gets_s(TacGiaSach[i], 30);
}
void XuatTacGiaSach(char TacGiaSach[30][30], int i)
{
	printf("\nTac gia sach: ");
	puts(TacGiaSach[i]);
}
//	NHAP XUAT NXB
void NhapNXB(char NXB[30][30], int i)
{
	printf("\nNhap NXB: ");
	gets_s(NXB[i], 30);
}
void XuatNXB(char NXB[30][30], int i)
{
	printf("\nNXB: ");
	puts(NXB[i]);
}
//	NHAP XUAT Nam XB
void NhapNamXB(char NamXB[30][30], int i)
{
	printf("\nNhap Nam XB: ");
	gets_s(NamXB[i], 30);
}
void XuatNamXB(char NamXB[30][30], int i)
{
	printf("\nNam XB: ");
	puts(NamXB[i]);
}
//	NHAP XUAT THE LOAI
int NhapTheLoai(int TheLoai[100], int i)
{
	printf("\nChon the loai SACH: ");
	printf("\n+Chon so 1:   CNTT        +Chon so 5:    TRUYEN-THO");
	printf("\n+Chon so 2:   TOAN-TIN    +Chon so 6:	   SACH THAM KHAO");
	printf("\n+Chon so 3:   VAT LY      +Chon so 7:	   NGOAI NGU");
	printf("\n+Chon so 4:   HOA HOC     +Chon so 8:    THE LOAI KHAC");
	printf("\nMoi chon: ");
	scanf_s("%d", &TheLoai[i]);
	getchar();
	return TheLoai[i];

}
void XuatTheLoai(int TheLoai[100], int i)
{
	printf("\nThe loai: ");
	if (TheLoai[i] == 1) printf("CNTT\n");
	if (TheLoai[i] == 2) printf("TOAN-TIN\n");
	if (TheLoai[i] == 3) printf("VAT LY\n");
	if (TheLoai[i] == 4) printf("HOA HOC\n");
	if (TheLoai[i] == 5) printf("TRUYEN-THO\n");
	if (TheLoai[i] == 6) printf("SACH THAM KHAO\n");
	if (TheLoai[i] == 7) printf("NGOAI NGU\n");
	if (TheLoai[i] == 8) printf("THE LOAI KHAC\n");
}
//	NHAP XUAT GIA SACH
void NhapGiaSach(int GiaSach[30], int i)
{
	printf("\nNhap gia sach: ");
	scanf_s("%d", &GiaSach[i]);
	getchar();
}
void XuatGiaSach(int GiaSach[100], int i)
{
	printf("\nGia Sach: %d VND\n", GiaSach[i]);
}
//	NHAP XUAT SO QUYEN SACH
void NhapSoQuyenSach(int SoQuyenSach[100], int i)
{
	printf("\nNhap so quyen sach: ");
	scanf_s("%d", &SoQuyenSach[i]);
	getchar();
}
void XuatSoQuyenSach(int SoQuyenSach[100], int i)
{
	printf("\nSo Quyen Sach: %d\n", SoQuyenSach[i]);
}