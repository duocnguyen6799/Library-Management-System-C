#include"stdafx.h"
#include<stdio.h>
#include "Header.h"
#include <string.h>
#include"Time Tra Sach.h"
#include<Windows.h>
#define N 100
void MENU()
{
	bool flag = true, flagcon = true;
	int n;
	//Khai bao bien cho Doc Gia
	char MaDocGia[N][N], HoTen[N][N]; //MA DOC GIA, HO TEN
	int GioiTinh[N];					   //GIOI TINH
	char NTNS[N][N];					   //NGAY THANG NAM SINH
	char email[N][N], DiaChi[N][N];	//EMAI, DIA CHI
	char CMND[N][N], NgayLapThe[30][30], NgayHetHanThe[30][30];
	int SoLuongDG=3, SoLuongDGThem=0;
	//Khai bao bien cho Sach
	char ISBN[30][30], TenSach[100][30];
	char TacGiaSach[30][30], NXB[30][30];
	char NamXB[30][30];
	int TheLoai[100];
	int GiaSach[30], SoQuyenSach[100];
	int SoLuongSach = 3, SoLuongSachThem = 0;
	//Khai bao cho phieu muon, tra sach
	char MaDGMuon[30][30];
	int NgayMuon[100], ThangMuon[100], NamMuon[100];
	int SoNgayMuon[100];
	int NgayTra[100], ThangTra[100], NamTra[100];
	int SoISBN[100];
	char ISBNMuon[30][30];
	int TongNguoiMuon = 0,SoISBNbandau=0;
	int NgayTraTT[100], ThangTraTT[100], NamTraTT[100];
	int SoNguoiTraTreHen = 0;
	fflush(stdin);
	//Khoi tao danh sach DOC GIA ban dau la 3 doc gia
	TaoDanhSachDocGia(MaDocGia, HoTen, GioiTinh, NTNS, email, DiaChi, CMND, NgayLapThe, NgayHetHanThe);
	//Khoi tao danh sach cua SACH ban dau la 3 loai sach
	TaoDanhSachSach(ISBN,TenSach,TacGiaSach,NXB,NamXB,TheLoai,GiaSach,SoQuyenSach);	
	printf("Truong: DH KHOA HOC TU NHIEN TPHCM\n\n");
	printf("SV: NGUYEN PHUC DUOC\n\n");
	printf("MSSV: 1712372\n");
	do
	{
	printf("\n* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("*          CHUONG TRINH QUAN LI THU VIEN          *\n");
	printf("*   1. QUAN LI DOC GIA                            *\n");
	printf("*   2. QUAN LI SACH                               *\n");
	printf("*   3. LAP PHIEU MUON SACH                        *\n");
	printf("*   4. LAP PHIEU TRA SACH                         *\n");
	printf("*   5. CAC THONG KE CO BAN                        *\n");
	printf("*   0. THOAT                                      *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("Chon chuc nang: ");
	scanf_s("%d", &n);
		switch (n)
		{	
		case 1:
			//	QUAN LI DOC GIA
			system("cls");
			do{
				printf("\n\n|----------------QUAN LI DOC GIA----------------|\n");
				printf("|   1. XEM DANH SACH DOC GIA                    |\n");
				printf("|   2. THEM DOC GIA                             |\n");
				printf("|   3. CHINH SUA THONG TIN MOT DOC GIA          |\n");
				printf("|   4. XOA THONG TIN MOT DOC GIA                |\n");
				printf("|   5. TIM KIEM DOC GIA THEO CMND               |\n");
				printf("|   6. TIM KIEM DOC GIA THEO HO TEN             |\n");
				printf("|   0. TRO VE                                   |\n");
				printf("|_______________________________________________|\n");
				printf("Moi ban chon: ");
				scanf_s("%d", &n);
				switch (n)
				{
				case 1:
				//		THONG TIN DOC GIA
					system("cls");
					for (int i = 0; i < SoLuongDG; i++)
					{
						printf("\t\t\tTHONG TIN DOC GIA %d", i + 1);
						XuatMaDocGia(MaDocGia, i);
						XuatHoTen(HoTen, i);
						XuatGioiTinh(GioiTinh, i);
						XuatNTNS(NTNS, i);
						XuatEmail(email, i);
						XuatDiaChi(DiaChi, i);
						XuatCMND(CMND, i);
						XuatNgayLapThe(NgayLapThe, i);
						XuatNgayTheHetHan(NgayHetHanThe, i);
					}
					break;
				case 2:
				//		THEM DOC GIA
					system("cls");
					printf("Nhap vao so luong DG them: ");
					scanf_s("%d", &SoLuongDGThem);
					getchar();
					for (int i=SoLuongDG; i < SoLuongDG + SoLuongDGThem; i++)
					{
						NhapMaDocGia(MaDocGia, i);
						NhapHoTen(HoTen, i);
						NhapGioiTinh(GioiTinh, i);
						NhapNTNS(NTNS, i);
						NhapEmail(email, i);
						NhapDiaChi(DiaChi, i);
						NhapCMND(CMND, i);
						NhapNgayLapThe(NgayLapThe, i);
						NhapNgayTheHetHan(NgayHetHanThe, i);
					}
					SoLuongDG += SoLuongDGThem;
					break;
				case 3:
				//	CHINH SUA THONG TIN DOC GIA
					int SttDGCanChinhSua;
					printf("\nNhap STT DG can chinh sua: ");
					scanf_s("%d", &SttDGCanChinhSua);
					getchar();
					if( SttDGCanChinhSua > 0 && SttDGCanChinhSua <= SoLuongDG)
					{
						printf("\nNHAP LAI THONG TIN DG %d", SttDGCanChinhSua);
						NhapMaDocGia(MaDocGia, SttDGCanChinhSua-1);
						NhapHoTen(HoTen, SttDGCanChinhSua-1);
						NhapGioiTinh(GioiTinh, SttDGCanChinhSua - 1);
						NhapNTNS(NTNS, SttDGCanChinhSua - 1);
						NhapEmail(email, SttDGCanChinhSua - 1);
						NhapDiaChi(DiaChi, SttDGCanChinhSua - 1);
						NhapCMND(CMND, SttDGCanChinhSua - 1);
						NhapNgayLapThe(NgayLapThe, SttDGCanChinhSua - 1);
						NhapNgayTheHetHan(NgayHetHanThe, SttDGCanChinhSua - 1);

					}
					else printf("\nDoc gia khong ton tai! Vui long thuc hien lai!");
					break;
				case 4:
				//	XOA THONG TIN DOC GIA
					int SttDGCanXoa;// STT CUA DOC GIA CAN XOA
					printf("\nNhap STT DG can xoa: ");
					scanf_s("%d", &SttDGCanXoa);
					getchar();
					if (SttDGCanXoa > 0 && SttDGCanXoa <= SoLuongDG)
					{
						int temp;
						printf(">>>Ban co thuc su muon xoa DG nay khong ?\n");
						printf("	CHON 1 DE XOA.\n	CHON 2 DE HUY BO.\n");
						printf("Moi chon: ");
						scanf_s("%d", &temp);
						getchar();
						switch (temp)
						{
						case 1:
							for (int i = SttDGCanXoa; i < SoLuongDG; i++)
							{
								strcpy_s(MaDocGia[i - 1], MaDocGia[i]);
								strcpy_s(HoTen[i - 1], HoTen[i]);
								GioiTinh[i - 1] = GioiTinh[i];
								strcpy_s(NTNS[i - 1], NTNS[i]);
								strcpy_s(DiaChi[i - 1], DiaChi[i]);
								strcpy_s(email[i - 1], email[i]);
								strcpy_s(CMND[i - 1], CMND[i]);
								strcpy_s(NgayLapThe[i - 1], NgayLapThe[i]);
								strcpy_s(NgayHetHanThe[i - 1], NgayHetHanThe[i]);
							}
							printf("\nXoa DG thanh cong!");
							SoLuongDG = SoLuongDG - 1;
							break;
						case 2:
							break;
						default:
							printf("\n>>>Ban chon sai!\n");
							break;
						}
						
					}
					else printf("\nDoc gia khong ton tai! Vui long thuc hien lai!");
					break;
				case 5:
				//	TIM KIEM THEO CMND
					system("cls");
					char Key_CMND[30];// TU KHOA DE TIM KIEM CMND
					printf("\nNhap CMND de tim kiem: ");
					getchar();
					gets_s(Key_CMND);
					int kt;
					kt = 0;
					for (int i = 0; i < SoLuongDG; i++)
					{
						if (strstr(CMND[i], Key_CMND) != NULL)
						{
							printf("\t\t\tTHONG TIN DOC GIA %d", i + 1);
							XuatMaDocGia(MaDocGia, i);
							XuatHoTen(HoTen, i);
							XuatGioiTinh(GioiTinh, i);
							XuatNTNS(NTNS, i);
							XuatEmail(email, i);
							XuatDiaChi(DiaChi, i);
							XuatCMND(CMND, i);
							XuatNgayLapThe(NgayLapThe, i);
							XuatNgayTheHetHan(NgayHetHanThe, i);
							printf("\n");
							kt = kt + 1;
						}
					}
					if (kt == 0) printf("\nKhong tim thay Doc Gia!");
					break;
				case 6:
				//	TIM KIEM DOC GIA THEO HO TEN
					system("cls");
					char Key_HoTen[100];
					int temp;
					temp = 0;
					printf("\nNhap Ho Ten de tim kiem: ");
					getchar();
					gets_s(Key_HoTen);
					
					for (int i = 0; i < SoLuongDG; i++)
					{
						
						if (strstr(HoTen[i], Key_HoTen) != NULL)
						{
							printf("\t\t\tTHONG TIN DOC GIA %d", i + 1);
							XuatMaDocGia(MaDocGia, i);
							XuatHoTen(HoTen, i);
							XuatGioiTinh(GioiTinh, i);
							XuatNTNS(NTNS, i);
							XuatEmail(email, i);
							XuatDiaChi(DiaChi, i);
							XuatCMND(CMND, i);
							XuatNgayLapThe(NgayLapThe, i);
							XuatNgayTheHetHan(NgayHetHanThe, i);
							printf("\n");
							temp = temp + 1;
						}
						//if (temp == 0 && i==SoLuongDG-1) printf("\nKhong tim thay Doc Gia!");
					}
					if (temp == 0) printf("\nKhong tim thay Doc Gia!");
					break;
				case 0:
					flagcon = false;
					system("cls");
					break;
				default:
					printf(">>BAN CHON SAI!\n MOI BAN CHON LAI\n\n");
					break;
				}
			} while (flagcon);
			break;

		

		case 2:
			//	QUAN LI SACH
			system("cls");
			do {
				printf("\n\n|--------------------QUAN LI SACH--------------------|\n");
				printf("|    1.XEM DANH SACH CAC SACH TRONG THU VIEN         |\n");
				printf("|    2.THEM SACH                                     |\n");
				printf("|    3.CHINH SUA THONG TIN MOT QUYEN SACH            |\n");
				printf("|    4.XOA THONG TIN SACH                            |\n");
				printf("|    5.TIM KIEM SACH THEO ISBN                       |\n");
				printf("|    6.TIM KIEM SACH THEO TEN SACH                   |\n");
				printf("|    0.TRO VE                                        |\n");
				printf("|____________________________________________________|\n");
				printf("Moi ban chon: ");
				scanf_s("%d", &n);
				getchar();
				switch (n)
				{
				case 1:
					//			XUAT DANH SACH SACH
					system("cls");
					for (int i = 0; i < SoLuongSach; i++)
					{
						printf("*****************THONG TIN SACH %d*****************", i + 1);
						XuatISBN(ISBN, i);
						XuatTenSach(TenSach, i);
						XuatTacGiaSach(TacGiaSach, i);
						XuatNXB(NXB, i);
						XuatNamXB(NamXB, i);
						XuatTheLoai(TheLoai, i);
						XuatGiaSach(GiaSach, i);
						XuatSoQuyenSach(SoQuyenSach, i);
					}

					break;
				case 2:
					//			THEM THONG TIN SACH
					system("cls");
					printf("\nNhap vao so luong Sach can them: ");
					scanf_s("%d", &SoLuongSachThem);
					getchar();
					for (int i = SoLuongSach; i < SoLuongSach + SoLuongSachThem; i++)
					{
						NhapISBN(ISBN, i);
						NhapTenSach(TenSach, i);
						NhapTacGiaSach(TacGiaSach, i);
						NhapNXB(NXB, i);
						NhapNamXB(NamXB, i);
						NhapTheLoai(TheLoai, i);
						NhapGiaSach(GiaSach, i);
						NhapSoQuyenSach(SoQuyenSach, i);
					}
					SoLuongSach+= SoLuongSachThem;
					break;
				case 3:
					//	CHINH SUA THONG TIN 1 QUYEN SACH
					int SttSachCanChinhSua;
					printf("\nNhap STT Sach can chinh sua: ");
					scanf_s("%d", &SttSachCanChinhSua);
					getchar();
					if (SttSachCanChinhSua > 0 && SttSachCanChinhSua <= SoLuongSach)
					{
						printf("\nNHAP LAI THONG TIN SACH %d", SttSachCanChinhSua);//Can xuat thong tin sach cai da
						NhapISBN(ISBN, SttSachCanChinhSua - 1);
						NhapTenSach(TenSach, SttSachCanChinhSua - 1);
						NhapTacGiaSach(TacGiaSach, SttSachCanChinhSua - 1);
						NhapNXB(NXB, SttSachCanChinhSua - 1);
						NhapNamXB(NamXB, SttSachCanChinhSua - 1);
						NhapTheLoai(TheLoai, SttSachCanChinhSua - 1);
						NhapGiaSach(GiaSach, SttSachCanChinhSua - 1);
						NhapSoQuyenSach(SoQuyenSach, SttSachCanChinhSua - 1);
					}
					else printf("\nSach khong ton tai! Vui long thuc hien lai!");
					break;
				case 4:
					//			XoaThongTinSach
					int SttSachCanXoa;
					int temp;
					printf("\nNhap STT Sach can xoa: ");
					scanf_s("%d", &SttSachCanXoa);
					getchar();
					if (SttSachCanXoa > 0 && SttSachCanXoa <= SoLuongSach)
					{
						printf("<>Ban co thuc su muon xoa khong?\n");
						printf("	1.CO.\n	2.KHONG.\n");
						printf("Moi ban chon: ");
						scanf_s("%d", &temp);
						if (temp == 2) break;
						for (int i = SttSachCanXoa; i < SoLuongSach; i++)
						{
							strcpy_s(ISBN[i - 1], ISBN[i]);
							strcpy_s(TenSach[i - 1], TenSach[i]);
							strcpy_s(TacGiaSach[i - 1], TacGiaSach[i]);
							strcpy_s(NXB[i - 1], NXB[i]);
							strcpy_s(NamXB[i - 1], NamXB[i]);
							TheLoai[i - 1]= TheLoai[i];
							GiaSach[i - 1]= GiaSach[i];
							SoQuyenSach[i - 1] = SoQuyenSach[i];
						}
						printf("\nXoa Sach thanh cong!");
						SoLuongSach = SoLuongSach - 1;
					}
					else printf("\nSach khong ton tai! Vui long thuc hien lai!");
					break;
				case 5:
					//		TIM KIEM SACH THEO ISBN
					system("cls");
					char Key_ISBN[30];
					printf("\nNhap ISBN de tim kiem: ");
					getchar();
					gets_s(Key_ISBN);
					int kt;
					kt = 0;
					for (int i = 0; i < SoLuongSach; i++)
					{
						if (strstr(ISBN[i], Key_ISBN) != NULL)
						{
							printf("\n\t\t\tTHONG TIN SACH %d", i + 1);
							XuatISBN(ISBN, i);
							XuatTenSach(TenSach, i);
							XuatTacGiaSach(TacGiaSach, i);
							XuatNXB(NXB, i);
							XuatNamXB(NamXB, i);
							XuatTheLoai(TheLoai, i);
							XuatGiaSach(GiaSach, i);
							XuatSoQuyenSach(SoQuyenSach, i);
							printf("\n");
							kt++;
						}
					}
					if (kt == 0 ) printf("\nKhong tim thay Sach!");
					break;
				case 6:
					//		TIEM KIEM SACH THEO TEN SACH
					system("cls");
					char Key_TenSach[100];
					printf("\nNhap ten sach de tim kiem: ");
					getchar();
					gets_s(Key_TenSach);
					int ktSach;
					ktSach = 0;
					for (int i = 0; i < SoLuongSach; i++)
					{
						if (strstr(TenSach[i], Key_TenSach) != NULL)
						{
							printf("\t\t\tTHONG TIN SACH %d", i + 1);
							XuatISBN(ISBN, i);
							XuatTenSach(TenSach, i);
							XuatTacGiaSach(TacGiaSach, i);
							XuatNXB(NXB, i);
							XuatNamXB(NamXB, i);
							XuatTheLoai(TheLoai, i);
							XuatGiaSach(GiaSach, i);
							XuatSoQuyenSach(SoQuyenSach, i);
							printf("\n");
							ktSach++;
						}
					}
					if (ktSach == 0) printf("\nKhong tim thay Sach!");
					break;
				case 0:
					flagcon = false;
					system("cls");
					break;
				}
			} while (flagcon);
			break;
			
		case 3:
			//	LAP PHIEU MUON SACH
			system("cls");
			int n,SoNguoiMuon;//*int n, SoISBN[100],SoNguoiMuon;
			SoNguoiMuon = 0;
			do{
				printf("\n\n|---------------LAP PHIEU MUON SACH---------------|\n");
				printf("|   1.Them phieu muon sach                        |\n");
				printf("|   2.Danh sach phieu muon                        |\n");
				printf("|   0.Tro ve                                      |\n");
				printf("|_________________________________________________|\n");
				printf("Moi ban chon chuc nang: ");
				scanf_s("%d", &n);
				getchar();
				switch (n)
				{
				case 1:
					printf("\n______LAP PHIEU MUON SACH______\n");
					printf("Nhap vao so nguoi muon: ");
					scanf_s("%d", &SoNguoiMuon);
					getchar();
					for (int i = TongNguoiMuon; i<TongNguoiMuon + SoNguoiMuon; i++)
					{
						printf("\n__________NHAP THONG TIN PHIEU MUON SACH %d____________\n", i + 1);
						NhapMaDGMuon(MaDGMuon, i);
						NhapNgayMuonSach(NgayMuon, ThangMuon, NamMuon, i);
						do {
							printf("Nhap vao so ngay muon: ");
							scanf_s("%d", &SoNgayMuon[i]);
							if (SoNgayMuon[i] > 7 || SoNgayMuon[i] <= 0)
							{
								printf("***So ngay muon khong hop le!\n ***So ngay muon toi da la 7 ngay.");
								printf("\n***Moi ban nhap lai! \n");
							}
						} while (SoNgayMuon[i] > 7 || SoNgayMuon[i] <= 0);
						getchar();
						TinhNgayTra(NgayMuon, ThangMuon, NamMuon, SoNgayMuon, NgayTra, ThangTra, NamTra, i);
						printf("Nhap vao so luong ISBN: ");
						scanf_s("%d", &SoISBN[i]);
						getchar();
						for (int j = SoISBNbandau; j < SoISBN[i] + SoISBNbandau; j++)
						{
							printf(">Nhap ISBN: ");
							gets_s(ISBNMuon[j], 30);
						}
						SoISBNbandau += SoISBN[i];
					}
					TongNguoiMuon += SoNguoiMuon;
					break;
				case 2:
					printf("____________Danh sach phieu muon sach____________\n");
					if (SoNguoiMuon == 0) printf("<<Rong>>");
					for (int j = 0; j < TongNguoiMuon; j++)
					{
						printf("\n***PHIEU MUON SACH %d***\n", j + 1);
						XuatMaDGMuon(MaDGMuon, j);
						XuatNgayMuonSach(NgayMuon, ThangMuon, NamMuon, j);
						XuatNgayTra(NgayTra, ThangTra, NamTra, j);
						printf("\n*Danh sach ISBN muon: \n");
						for (int k = 0; k < SoISBN[j]; k++)
						{
							printf("+");
							if (j == 0) puts(ISBNMuon[k]);
							else puts(ISBNMuon[k+SoISBN[j-1]]);
						}
					}
					break;
				case 0:
					flagcon = false;
					system("cls");
					break;
				}
			} while (flagcon);
			break;
		
		case 4:
	//	LAP PHIEU TRA SACH
			system("cls");
			int stt,HienTrangSach;
		//	XUAT DANH SACH DOC GIA MUON SACH
			if (TongNguoiMuon == 0) printf(">>>>>>>>>>>Danh sach Doc gia muon RONG!");
			else
			{
				printf("---------------Danh sach phieu muon sach---------------\n");
				if (SoNguoiMuon == 0) printf("<<Rong>>");
				for (int j = 0; j < TongNguoiMuon; j++)
				{
					printf("\n***PHIEU MUON SACH %d***\n", j + 1);
					XuatMaDGMuon(MaDGMuon, j);
					XuatNgayMuonSach(NgayMuon, ThangMuon, NamMuon, j);
					XuatNgayTra(NgayTra, ThangTra, NamTra, j);
					printf("\n*Danh sach ISBN muon: \n");
					for (int k = 0; k < SoISBN[j]; k++)
					{
						if (j == 0) puts(ISBNMuon[k]);
						else puts(ISBNMuon[k + SoISBN[j - 1]]);
					}
				}
		// TIM DOC GIA MUON
				printf("Nhap vao STT nguoi muon can tra: ");
				scanf_s("%d", &stt);
				stt = stt - 1;
				NhapNgayTraTT(NgayTraTT,ThangTraTT,NamTraTT,stt);
				int SoNgayMuonTT;
				SoNgayMuonTT = TinhSoLuongNgayMuonThucTe(NgayTraTT, ThangTraTT, NamTraTT, NgayMuon, ThangMuon, NamMuon, stt);
				printf("\nHien trang cua sach muon: \n>Chon 1 neu sach CON.\n>Chon 2 neu sach MAT.\n>Chon 3 neu gom 2 truong hop tren.");
				printf("\nMoi chon: ");
				scanf_s("%d", &HienTrangSach);
				if (HienTrangSach == 1)
				{
					if (SoNgayMuonTT > 7)
					{
						int SoSachTreHen;
						SoNguoiTraTreHen++;
						printf("Nhap vao so sach tre hen: ");
						scanf_s("%d", &SoSachTreHen);
						printf("So ngay tre hen: %d ngay!\n", SoNgayMuonTT - 7);
						printf("Tien phat: %d VND\n", 5000 * (SoNgayMuonTT - 7)*SoSachTreHen);
					}
					else printf("\nTra sach thanh cong!\n");
				}
				if (HienTrangSach == 2)
				{
					int SoSachMat, GiaSachMat[10], TienPhat=0;
					printf("\nNhap vao so sach bi mat: ");
					scanf_s("%d", &SoSachMat);
					for (int i = 0; i < SoSachMat; i++)
					{
						printf("\nGia sach %d: ", i + 1);
						scanf_s("%d", &GiaSach[i]);
					}
					for (int i = 0; i < SoSachMat; i++)
					{
						TienPhat = TienPhat + 2 * GiaSach[i];
					}
					printf("Tien phat: %d VND", TienPhat);
				}
				if (HienTrangSach == 3)
				{
					int TienPhatTreHen = 0,TienPhatMatSach=0;
					int SoSachMat, GiaSachMat[10];
					if (SoNgayMuonTT > 7)
					{
						int SoSachTreHen;
						printf("\nNhap vao so sach tre hen: ");
						scanf_s("%d", &SoSachTreHen);
						printf("\nSo ngay tre hen: %d ngay!\n", SoNgayMuonTT - 7);
						TienPhatTreHen=5000 * (SoNgayMuonTT - 7)*SoSachTreHen;
					}
					printf("\nNhap vao so sach bi mat: ");
					scanf_s("%d", &SoSachMat);
					for (int i = 0; i < SoSachMat; i++)
					{
						printf("\nGia sach %d: ", i + 1);
						scanf_s("%d", &GiaSach[i]);
					}
					for (int i = 0; i < SoSachMat; i++)
					{
						TienPhatMatSach = TienPhatMatSach + 2 * GiaSach[i];
					}
					printf("\n>>>TONG TIEN PHAT: %d", TienPhatMatSach + TienPhatTreHen);
				}
				//Xoa nguoi muon da tra ra khoi danh sach muon
				XoaNguoiMuon(MaDGMuon, NgayMuon, ThangMuon, NamMuon,ISBNMuon, NgayTra, ThangTra, NamTra, stt,TongNguoiMuon);
			}
			break;
			//	CAC THONG KE CO BAN
		case 5:
			system("cls");
			do {
				printf("\n\n|-------------------CAC THONG KE CO BAN----------------------|\n");
				printf("|   1.THONG KE SO LUONG SACH TRONG THU VIEN                  |\n");
				printf("|   2.THONG KE SO LUONG SACH THEO THE LOAI                   |\n");
				printf("|   3.THONG KE SO LUONG DOC GIA                              |\n");
				printf("|   4.THONG KE SO LUONG DOC GIA THEO GIOI TINH               |\n");
				printf("|   5.THONG KE SO SACH DANG DUOC MUON                        |\n");
				printf("|   6.THONG KE DANH SACH DOC GIA BI TRE HAN                  |\n");
				printf("|   0.TRO VE                                                 |\n");
				printf("|____________________________________________________________|\n");
				printf("Moi ban chon: "); 
				scanf_s("%d", &n);
				getchar();
				switch (n)
				{
				case 1:
					//THONG KE SO LUONG SACH TRONG THU VIEN
					system("cls");
					int s;
					s = 0;
					for (int i = 0; i < SoLuongSach; i++)
					{
						s = s + SoQuyenSach[i];
					}
					printf(">>SO LUONG SACH TRONG THU VIEN: %d\n\n",s); //Truyen vao tinh tong so sach cua tung loai
					break;
				case 2:
					//THONG KE SO LUONG SACH THEO THE LOAI
					system("cls");
					ThongKeSachTheoTheLoai(TheLoai, SoLuongSach);
					break;
				case 3:
					//THONG KE SO LUONG DOC GIA
					system("cls");
					printf("\n>>SO LUONG DOC GIA: %d\n\n", SoLuongDG); //Truyen vao soluongdocgia
					break;
				case 4:
					//THONG KE SO LUONG DOC GIA THEO GIOI TINH
					system("cls");
					ThongKeTheoGioiTinh(GioiTinh, SoLuongDG);
					break;
				case 5:
					//THONG KE SO SACH DANG DUOC MUON
					system("cls");
					printf("\n>>SO LUONG SACH DANG DUOC MUON: %d\n\n",SoISBNbandau);
					break;
				case 6:
					//THONG KE DANH SACH DOC GIA BI TRE HEN
					system("cls");
					printf("\n>>SO LUONG DOC GIA BI TRE HEN: %d\n\n", SoNguoiTraTreHen);
					break;
				case 0:
					flagcon = false;
					system("cls");
					break;
				default:
					system("cls");
					printf(">>BAN CHON SAI!\n MOI BAN CHON LAI\n\n");
					break;
				}
			} while (flagcon);
			break;
		case 0:
			flag = false;
			break;
		}
	} while (flag);
	system("cls");
	printf("\n\n***************KET THUC CHUONG TRINH***************\n\n\n");
}