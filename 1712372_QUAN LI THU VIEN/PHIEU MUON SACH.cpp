#include"stdafx.h"
#include<stdio.h>
#include<string.h>
#include"Time Tra Sach.h"
//Nhap xuat Ma doc gia nguoi muon sach
void NhapMaDGMuon(char MaDGMuon[30][30], int i)
{
	printf("\nNhap ma doc gia muon sach: ");
	gets_s(MaDGMuon[i], 30);
}
void XuatMaDGMuon(char MaDGMuon[30][30], int i)
{
	printf("\n*Ma doc gia: ");
	puts(MaDGMuon[i]);
}
//Nhap xuat ngay muon tra sach
void NhapNgayMuonSach(int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i)
{
	printf("\nNgay muon: ");
	scanf_s("%d", &NgayMuon[i]);
	printf("\nThang: ");
	scanf_s("%d", &ThangMuon[i]);
	printf("\nNam: ");
	scanf_s("%d", &NamMuon[i]);
}
void XuatNgayMuonSach(int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i)
{
	printf("\n*Ngay muon sach: %d/%d/%d", NgayMuon[i], ThangMuon[i], NamMuon[i]);
}
