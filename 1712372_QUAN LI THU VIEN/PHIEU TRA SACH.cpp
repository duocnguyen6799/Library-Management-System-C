#include"stdafx.h"
#include<stdio.h>
#include<string.h>
#include"Time Tra Sach.h"
// NHAP NGAY TRA SACH THUC TE
void NhapNgayTraTT(int NgayTraTT[100], int ThangTraTT[100], int NamTraTT[100], int i)
{
	printf("\nNgay tra thu te: ");
	scanf_s("%d", &NgayTraTT[i]);
	printf("\nThang: ");
	scanf_s("%d", &ThangTraTT[i]);
	printf("\nNam: ");
	scanf_s("%d", &NamTraTT[i]);
}
// TINH SO LUONG NGAY MUON THEO THUC TE
int TinhSoLuongNgayMuonThucTe(int NgayTraTT[100], int ThangTraTT[100], int NamTraTT[100], int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i)
{
	int SoNgay[100];
	if(ThangTraTT[i]==ThangMuon[i])
	{
	SoNgay[i] = NgayTraTT[i] - NgayMuon[i];
	}
	else
	{
		SoNgay[i] = NgayTraTT[i] + (SoNgayTrongThang(ThangMuon,NamMuon, i) - NgayMuon[i]);
	}
	return SoNgay[i];
}
// HAM XOA NGUOI MUON SAU KHI TRA SACH
void XoaNguoiMuon(char MaDGMuon[30][30], int NgayMuon[100], int ThangMuon[100], int NamMuon[100],
	char ISBNMuon[30][30], int NgayTra[100], int ThangTra[100], int NamTra[100], int stt, int &TongNguoiMuon)
{
	strcpy_s(MaDGMuon[stt], MaDGMuon[stt + 1]);
	NgayMuon[stt] = NgayMuon[stt + 1];
	ThangMuon[stt] = ThangMuon[stt + 1];
	NamMuon[stt] = NamMuon[stt + 1];
	strcpy_s(ISBNMuon[stt], ISBNMuon[stt + 1]);
	NgayTra[stt] = NgayTra[stt + 1];
	ThangTra[stt] = ThangTra[stt + 1];
	NamTra[stt] = NamTra[stt + 1];
	TongNguoiMuon--;
}