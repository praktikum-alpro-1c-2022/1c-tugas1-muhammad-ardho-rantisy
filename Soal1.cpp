#include <iostream>

using namespace std;

// npm ardho = 2210631170082

int main(){

	// Tugas Biodata diri

	long npmuser;
	long npm = 2210631170082;

	cout << "Masukan NPM anda: \n";
	cin >> npmuser;

	if(npmuser != npm){
		cout << "\nPENYUSUP!\n\n";
	}

	else{
		cout << "\nApakah anda Muhammad Ardho Rantisy? (ya/bukan): ";
		
		char jawaban;
		cin >> jawaban;

		switch(jawaban)
		{
			case 'y':
			case 'Y':
			cout << "\nSelamat Datang Ardho!\n\n";
			cout << "Ini adalah biodata anda: \n\n" << "Nama: Muhammad Ardho Rantisy\n" << "Kelas: 1C Informatika\n" << "NPM: 2210631170082\n" << "Umur: 17 Tahun\n" << "Hobi: Berenang, main game, dan membaca sejarah\n" << "Cita-cita: Memimpin Indonesia kearah yang lebih baik\n\n";
			break;

			case 'b':
			case 'B':
			cout << "\nPENYUSUP!!!\n\nAksi anda ini sudah dilaporkan ke pihak yang berwajib! \n\nharap matikan komputer anda!\n\n";
			break;

			default:
			cout << "MASUKAN JAWABAN YANG BENAR! (ya/bukan)";
			break;
		}
		
	}

}