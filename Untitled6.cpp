#include <iostream>
#include <string>
using namespace std;

class kaca{
	public:
		void bahan(string plastik);
		string merk;
		double harga;
};
int main () {
	kaca plastik;
	
	plastik.merk ="kaca";
	plastik.harga = 10000;
	
	cout<<"merk yang dipakai "<< (plastik.merk)<<endl;
	cout<<"Harga modal nya "<< (plastik.harga)<<endl;
	
	plastik.bahan("terbuat dari plastik yang berkualitas dijamin tahan lama");
}
void kaca::bahan(string plastik){
	cout<<"lebih tahan lama dari pada kaca yang lainnya"<<plastik<<"harga ekonomis dijamin!"<<endl;
}
