#include<iostream>
#include<string>
using namespace std;

struct PertalitePertamax{
	string nama;
	string jenisBensin;
	double liter;
	double totalHarga;
};

void hitungHarga(PertalitePertamax &pembelian){
	if(pembelian.jenisBensin=="pertalite"){
		pembelian.totalHarga=pembelian.liter*7000;
	} else if (pembelian.jenisBensin=="pertamax"){
		pembelian.totalHarga=pembelian.liter*9000;
	} else{
		cout<<"Jenis bensin tidak valid! "<<endl;
		pembelian.totalHarga=0;
	}
}

void tampilkanStruk(const PertalitePertamax &pembelian){
	cout<<"\n==== Struk Pembelian ===="<<endl;
	cout<<"Nama Pelanggan : "<<pembelian.nama<<endl;
	cout<<"Jenis Bensin   : "<<pembelian.jenisBensin<<endl;
	cout<<"Total Liter    : "<<pembelian.liter<<" liter "<<endl;
	cout<<"Total Harga    : "<<pembelian.totalHarga<<endl;
}

int main (){
	PertalitePertamax pembelian;
	
	cout<<"Masukkan nama pelanggan : ";
	getline(cin, pembelian.nama);
	
	cout<<"Masukkan jumlah liter : ";
	cin>>pembelian.liter;
	
	cout<<"Masukkan jenis bensin (pertalite atau pertamax) : ";
	cin>>pembelian.jenisBensin;
	
	hitungHarga(pembelian);
	
	tampilkanStruk(pembelian);
	
	return 0;
}
