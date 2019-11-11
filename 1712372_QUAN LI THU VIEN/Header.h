void MENU();
//QUAN LI DOC GIA
void NhapMaDocGia(char MaDocGia[30][30], int i);
void XuatMaDocGia(char MaDocGia[30][30], int i);
void NhapHoTen(char HoTen[100][30], int i);
void XuatHoTen(char HoTen[100][30], int i);
int NhapGioiTinh(int GioiTinh[100], int i);
void XuatGioiTinh(int GioiTinh[100], int i);
void NhapNTNS(char NTNS[30][30], int i);
void XuatNTNS(char NTNS[30][30], int i);
void NhapEmail(char email[30][30], int i);
void XuatEmail(char email[30][30], int i);
void NhapDiaChi(char DiaChi[100][30], int i);
void XuatDiaChi(char DiaChi[100][30], int i);
void NhapCMND(char CMND[30][10], int i);
void XuatCMND(char CMND[30][10], int i);
void NhapNgayLapThe(char NgayLapThe[30][30], int i);
void XuatNgayLapThe(char NgayLapThe[30][30], int i);
void NhapNgayTheHetHan(char NgayHetHanThe[30][30], int i);
void XuatNgayTheHetHan(char NgayHetHanThe[30][30], int i);
void TaoDanhSachDocGia(char MaDocGia[30][30], char HoTen[100][30], int GioiTinh[100], char NTNS[30][30], char email[30][30], char DiaChi[100][30],
	char CMND[30][10], char NgayLapThe[30][30], char NgayHetHanThe[30][30]);
void TaoDanhSachSach(char ISBN[30][30], char TenSach[100][30], char TacGiaSach[30][30], char NXB[30][30], char NamXB[30][30], int TheLoai[100],
	int GiaSach[30], int SoQuyenSach[100]);
//QUAN LI SACH
void NhapISBN(char ISBN[30][30], int i);
void XuatISBN(char ISBN[30][30], int i);
void NhapTenSach(char TenSach[100][30], int i);
void XuatTenSach(char TenSach[100][30], int i);
void NhapTacGiaSach(char TacGiaSach[30][30], int i);
void XuatTacGiaSach(char TacGiaSach[30][30], int i);
void NhapNXB(char NXB[30][30], int i);
void XuatNXB(char NXB[30][30], int i);
void NhapNamXB(char NamXB[30][30], int i);
void XuatNamXB(char NamXB[30][30], int i);
int NhapTheLoai(int TheLoai[100], int i);
void XuatTheLoai(int TheLoai[100], int i);
void NhapGiaSach(int GiaSach[30], int i);
void XuatGiaSach(int GiaSach[100], int i);
void NhapSoQuyenSach(int SoQuyenSach[100], int i);
void XuatSoQuyenSach(int SoQuyenSach[100], int i);
//LAP PHIEU MUON SACH
void NhapMaDGMuon(char MaDGMuon[30][30], int i);
void XuatMaDGMuon(char MaDGMuon[30][30], int i);
void NhapNgayMuonSach(int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i);
void XuatNgayMuonSach(int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i);
//LAP PHIEU TRA SACH
void NhapNgayTraTT(int NgayTraTT[100], int ThangTraTT[100], int NamTraTT[100], int i);
int TinhSoLuongNgayMuonThucTe(int NgayTraTT[100], int ThangTraTT[100], int NamTraTT[100], int NgayMuon[100], int ThangMuon[100], int NamMuon[100], int i);
void XoaNguoiMuon(char MaDGMuon[30][30], int NgayMuon[100], int ThangMuon[100], int NamMuon[100],
	char ISBNMuon[30][30], int NgayTra[100], int ThangTra[100], int NamTra[100], int stt, int &TongNguoiMuon);
//THONG KE
void ThongKeTheoGioiTinh(int GioiTinh[100], int SoLuongDG);
void ThongKeSachTheoTheLoai(int TheLoai[100], int SoLuongSach);

