#include <stdio.h>
#include"stdafx.h"
//HAM KIEM TRA NAM NHUAN
int KiemTraNamNhuan(int NamMuon[100], int i)
{
	if ((NamMuon[i] % 4 == 0 && NamMuon[i] % 100 != 0) || NamMuon[i] % 400 == 0) return 1;
	else return 0;
}
// HAM TINH SO NGAY TRONG NAM
int SoNgayTrongNam(int NamMuon[100], int i)
{
	if (KiemTraNamNhuan(NamMuon, i) == 1) return 366;
	else return 365;
}
//HAM TINH SO NGAY TRONG THANG
int SoNgayTrongThang(int ThangMuon[100], int NamMuon[100], int i)
{
	switch (ThangMuon[i])
	{
	case 2:
		if (KiemTraNamNhuan(NamMuon, i) == 1) return 29;
		else return 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	default:
		return 31;
		break;
	}
}
// TINH NGAY TRA SACH
void TinhNgayTra(int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int SoNgayMuon[100], int NgayTra[100], int ThangTra[100], int NamTra[100], int i)
{
	int SoNgayCuaThang = SoNgayTrongThang(ThangMuon, NamMuon, i);
	NgayTra[i] = NgayMuon[i] + SoNgayMuon[i];
	ThangTra[i] = ThangMuon[i];
	NamTra[i] = NamMuon[i];
	if (NgayTra[i] > SoNgayCuaThang)
	{
		NgayTra[i] = NgayTra[i] - SoNgayCuaThang;
		ThangTra[i] = ThangMuon[i] + 1;
		if (ThangTra[i] > 12)
		{
			ThangTra[i] = 1;
			NamTra[i] = NamMuon[i] + 1;
		}
	}
}
//XUAT NGAY TRA SACH
void XuatNgayTra(int NgayTra[100], int ThangTra[100], int NamTra[100], int i)
{
	printf("\n\n*Ngay tra sach du kien: %d/%d/%d\n", NgayTra[i], ThangTra[i], NamTra[i]);
}