#include "stdafx.h"
#include<stdio.h>
#include <string.h>
//NHAP XUAT DOC GIA
void NhapMaDocGia(char MaDocGia[30][30], int i)
{
	printf("\nNhap ma doc gia: ");
	gets_s(MaDocGia[i], 30);
}
void XuatMaDocGia(char MaDocGia[30][30], int i)
{
	printf("\nMa doc gia: ");
	puts(MaDocGia[i]);
}
//		NHAP XUAT HO TEN
void NhapHoTen(char HoTen[100][30], int i)
{
	printf("\nNhap vao ho ten doc gia: ");
	gets_s(HoTen[i], 30);
}
void XuatHoTen(char HoTen[100][30], int i)
{
	printf("\nHo ten: ");
	puts(HoTen[i]);
}
//		NHAP XUAT GIOI TINH
int NhapGioiTinh(int GioiTinh[100], int i)
{
	printf("\nNhap vao Gioi Tinh: ");
	printf("\nChon so 1:	NAM\nChon so 2:	NU");
	printf("\nMoi chon: ");
	scanf_s("%d", &GioiTinh[i]);
	getchar();
	return GioiTinh[i];
	
}
void XuatGioiTinh(int GioiTinh[100], int i)
{
	printf("\nGioi tinh: ");
	if (GioiTinh[i] == 1) printf("NAM\n");
	if (GioiTinh[i] == 2) printf("NU\n");
}
//	NHAP XUAT NTNS
void NhapNTNS(char NTNS[30][30], int i)
{
	printf("\nNhap NTNS: ");
	gets_s(NTNS[i], 30);
}
void XuatNTNS(char NTNS[30][30], int i)
{
	printf("\nNgay sinh: ");
	puts(NTNS[i]);
}
//	NHAP XUAT EMAIL
void NhapEmail(char email[30][30], int i)
{
	printf("\nNhap vao email: ");
	gets_s(email[i], 30);
}
void XuatEmail(char email[30][30], int i)
{
	printf("\nEMAIL: ");
	puts(email[i]);
}
//	NHAP XUAT DIA CHI
void NhapDiaChi(char DiaChi[100][30], int i)
{
	printf("\nNhap vao dia chi: ");
	gets_s(DiaChi[i], 30);
}
void XuatDiaChi(char DiaChi[100][30], int i)
{
	printf("\nDia chi: ");
	puts(DiaChi[i]);
}
//	NHAP XUAT CMND
void NhapCMND(char CMND[30][10], int i)
{
	printf("\nNhap vao CMND: ");
	gets_s(CMND[i], 10);
}
void XuatCMND(char CMND[30][10], int i)
{
	printf("\nCMND: ");
	puts(CMND[i]);
}
//	NHAP XUAT NGAY LAP THE
void NhapNgayLapThe(char NgayLapThe[30][30], int i)
{
	printf("\nNhap ngay lap the: ");
	gets_s(NgayLapThe[i], 30);
}
void XuatNgayLapThe(char NgayLapThe[30][30], int i)
{
	printf("\nNgay lap the: ");
	puts(NgayLapThe[i]);
}
//	NHAP XUAT NGAY THE HET HAN
void NhapNgayTheHetHan(char NgayHetHanThe[30][30], int i)
{
	printf("\nNhap ngay the het han: ");
	gets_s(NgayHetHanThe[i], 30);
}
void XuatNgayTheHetHan(char NgayHetHanThe[30][30], int i)
{
	printf("\nNgay the het han: ");
	puts(NgayHetHanThe[i]);
}
//KHOI TAO DANH SACH DOC GIA BAN DAU
void TaoDanhSachDocGia(char MaDocGia[30][30], char HoTen[100][30], int GioiTinh[100], char NTNS[30][30], char email[30][30], char DiaChi[100][30],
	char CMND[30][10], char NgayLapThe[30][30], char NgayHetHanThe[30][30])
{
	//	Doc gia 1
	strcpy_s(MaDocGia[0], "1001\0");
	strcpy_s(HoTen[0], "Nguyen Cong Phuong\0");
	GioiTinh[0] = 1;
	strcpy_s(NTNS[0], "10/1/1999\0");
	strcpy_s(email[0], "ncphuong@gmail.com\0");
	strcpy_s(DiaChi[0], "Nghe An\0");
	strcpy_s(CMND[0], "341977678\0");
	strcpy_s(NgayLapThe[0], "20/10/2017\0");
	strcpy_s(NgayHetHanThe[0], "20/10/2019\0");
	//	Doc gia 2
	strcpy_s(MaDocGia[1], "1002\0");
	strcpy_s(HoTen[1], "Luu Xuan Truong\0");
	GioiTinh[1] = 1;
	strcpy_s(NTNS[1], "12/12/1999\0");
	strcpy_s(email[1], "lxtruong@gmail.com\0");
	strcpy_s(DiaChi[1], "TP HCM\0");
	strcpy_s(CMND[1], "234678234\0");
	strcpy_s(NgayLapThe[1], "12/9/2017\0");
	strcpy_s(NgayHetHanThe[1], "12/9/2019\0");
	//	Doc gia 3
	strcpy_s(MaDocGia[2], "1003\0");
	strcpy_s(HoTen[2], "Pham Huong\0");
	GioiTinh[2] = 2;
	strcpy_s(NTNS[2], "10/1/1999\0");
	strcpy_s(email[2], "phuong@gmail.com\0");
	strcpy_s(DiaChi[2], "Dong Thap\0");
	strcpy_s(CMND[2], "324776466\0");
	strcpy_s(NgayLapThe[2], "23/10/2017\0");
	strcpy_s(NgayHetHanThe[2], "23/10/2019\0");
}

