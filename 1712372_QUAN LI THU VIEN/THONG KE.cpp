#include<stdio.h>
#include"stdafx.h"
// THONG KE SO LUONG DG THEO GIOI TINH
void ThongKeTheoGioiTinh(int GioiTinh[100], int SoLuongDG)
{
	int DemDGNam, DemDGNu;
	DemDGNam = 0, DemDGNu = 0;
	for (int i = 0; i < SoLuongDG; i++)
	{
		if (GioiTinh[i] == 1) DemDGNam++;
		if (GioiTinh[i] == 2) DemDGNu++;
	}
	printf(">>>SO LUONG DOC GIA NAM: %d\n", DemDGNam);
	printf("\n>>>SO LUONG DOC GIA NU: %d\n\n", DemDGNu);
}
// THONG KE SACH THEO THE LOAI
void ThongKeSachTheoTheLoai(int TheLoai[100], int SoLuongSach)
{
	int DemTheLoai1, DemTheLoai2, DemTheLoai3, DemTheLoai4, DemTheLoai5, DemTheLoai6, DemTheLoai7, DemTheLoai8;
	DemTheLoai1 = 0, DemTheLoai2 = 0, DemTheLoai3 = 0, DemTheLoai4 = 0, DemTheLoai5 = 0, DemTheLoai6 = 0, DemTheLoai7 = 0, DemTheLoai8 = 0;
	for (int i = 0; i < SoLuongSach; i++)
	{
		if (TheLoai[i] == 1) DemTheLoai1++;
		if (TheLoai[i] == 2) DemTheLoai2++;
		if (TheLoai[i] == 3) DemTheLoai3++;
		if (TheLoai[i] == 4) DemTheLoai4++;
		if (TheLoai[i] == 5) DemTheLoai5++;
		if (TheLoai[i] == 6) DemTheLoai6++;
		if (TheLoai[i] == 7) DemTheLoai7++;
		if (TheLoai[i] == 8) DemTheLoai8++;
	}
	if (DemTheLoai1 != 0) printf("\n>>>SO LUONG SACH CNTT: %d", DemTheLoai1);
	if (DemTheLoai2 != 0) printf("\n>>>SO LUONG SACH TOAN-TIN: %d", DemTheLoai2);
	if (DemTheLoai3 != 0) printf("\n>>>SO LUONG SACH VAT LY: %d", DemTheLoai3);
	if (DemTheLoai4 != 0) printf("\n>>>SO LUONG SACH HOA HOC: %d", DemTheLoai4);
	if (DemTheLoai5 != 0) printf("\n>>>SO LUONG SACH TRUYEN-THO: %d", DemTheLoai5);
	if (DemTheLoai6 != 0) printf("\n>>>SO LUONG SACH SACH THAM KHAO: %d", DemTheLoai6);
	if (DemTheLoai7 != 0) printf("\n>>>SO LUONG SACH NGOAI NGU: %d", DemTheLoai7);
	if (DemTheLoai8 != 0) printf("\n>>>SO LUONG SACH THE LOAI KHAC: %d", DemTheLoai8);
}