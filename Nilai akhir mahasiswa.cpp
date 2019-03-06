#include <iostream>

using namespace std;

struct mahasiswa
{
  float tugas;
  float kuis;
  float uts;
  float uas;
};
mahasiswa mhs;

int main()
{
	float nilai;
	cout << "Program Menghitung nilai akhir mahasiswa\n";
	cout <<"Masukkan nilai:\n";
	cout <<"\nTugas: "; cin >> mhs.tugas;
	cout <<"Kuis: ";cin >> mhs.kuis;
	cout <<"UTS: "; cin >> mhs.uts;
	cout <<"UAS: "; cin >> mhs.uas;
	cout << endl;
	
	nilai =(mhs.tugas * 0.1) + (mhs.kuis * 0.2) + (mhs.uts * 0.3) + (mhs.uas * 0.4);
	
	if (nilai>85 && nilai <= 100){
		cout<< "Nilai mahasiswa: " << nilai << endl;
		cout << "Dengan indeks: A";
		
	}
	if (nilai<=85 && nilai > 70){
		cout<< "Nilai mahasiswa: " << nilai << endl;
		cout << "Dengan indeks: B";
	}
	if (nilai <= 70 && nilai > 55){
		cout<< "Nilai mahasiswa: " << nilai << endl;
		cout << "Dengan indeks: C";
	}
	if (nilai<= 55 && nilai > 40){
		cout<< "Nilai mahasiswa: " << nilai << endl;
		cout << "Dengan indeks: D";
	}
	if (nilai>0 && nilai <= 40){
		cout<< "Nilai mahasiswa: " << nilai << endl;
		cout << "Dengan indeks: E";
	}
	return 0;
}