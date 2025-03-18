#include<iostream>
#include<string>
using namespace std;

struct Kedaiayam{
	string nama;
	int pilihan;
	int jumlahAyam;
	int totalHarga;
	int hargaAwal;
};

void hitungHarga(Kedaiayam &pembelian){
	if(pembelian.pilihan==1){
		pembelian.hargaAwal=pembelian.jumlahAyam*17000;
	} else if (pembelian.pilihan==2){
		pembelian.hargaAwal=pembelian.jumlahAyam*21000;
	} else{
		cout<<"Jenis menu tidak valid! "<<endl;
		pembelian.totalHarga=0;
	}
	
	if(pembelian.hargaAwal>45000){
		pembelian.totalHarga=pembelian.hargaAwal-(pembelian.hargaAwal*0.10); // Diskon 10% kalau udah mencapai 45.000
	} else {
		pembelian.totalHarga = pembelian.hargaAwal;
	}
}

void tampilkanStruk(const Kedaiayam &pembelian){
	cout<<"\n==== Struk Pembelian ===="<<endl;
	cout<<"Nama Pelanggan        : "<<pembelian.nama<<endl;
	cout<<"Menu Pilihan          : ";
	if(pembelian.pilihan==1){
		cout<<"Ayam Goreng"<<endl;
	} else if(pembelian.pilihan==2){
		cout<<"Ayam Bakar"<<endl;
	}
	cout<<"Jumlah                : "<<pembelian.jumlahAyam<<" ayam "<<endl;
	
	if(pembelian.hargaAwal>45000){
		cout<<"Harga sebelum diskon  : Rp."<<pembelian.hargaAwal<<endl;
		cout<<"Harga setelah diskon  : Rp."<<pembelian.hargaAwal*0.10<<endl;
	}
	cout<<"Total Harga           : Rp."<<pembelian.totalHarga<<endl;
}

int main (){
	Kedaiayam pembelian;
	
	cout<<"Masukkan nama pelanggan : ";
	getline(cin, pembelian.nama);
	
	cout<<"Pilihan Menu :\n1.Ayam Goreng Rp17.000\n2.Ayam Bakar Rp.21.000\n";
	cout<<"Masukkan Pilihan menu (1 atau 2) : ";
	cin>>pembelian.pilihan;
	
	cout<<"Masukkan jumlah ayam yang ingin dibeli : ";
	cin>>pembelian.jumlahAyam;
	
	hitungHarga(pembelian);
	
	tampilkanStruk(pembelian);
	
	return 0;
}
