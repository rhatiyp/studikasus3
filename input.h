
using namespace std;

class input{
	public:
	void cetak (){
		cout<<"==========Rumah Makan=========="<<endl;
		cout<<""<<endl;
		cout<<"-----Menu--------------Harga-----"<<endl;
		cout<<"1. Ayam Geprek		Rp. 21000"<<endl;
		cout<<"2. Ayam Goreng		Rp. 17000"<<endl;
		cout<<"3. Udang Goreng		Rp. 19000"<<endl;
		cout<<"4. Cumi Goreng		Rp. 20000"<<endl;
		cout<<"5. Ayam Bakar		Rp. 25000"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<""<<endl;
		cout<<"Pesan Ayam Geprek		:"; cin >> banyak_ayamgeprek;
		cout<<"Pesan Ayam Goreng		:"; cin >> banyak_ayamgoreng;
		cout<<"Pesan Udang Goreng		:"; cin >> banyak_udanggoreng;
		cout<<"Pesan Cumi Goreg		:"; cin >> banyak_cumigoreng;
		cout<<"Pesan Ayam Bakar		:"; cin >> banyak_ayambakar;
		cout<<"Jarang Kiriman (Dalam KM)	:"; cin >> jarak;
	}
	void tofile(){
		tulis_data.open("File.txt");
		tulis_data<<banyak_ayamgeprek<<endl;
		tulis_data<<banyak_ayamgoreng<<endl;
		tulis_data<<banyak_udanggoreng<<endl;
		tulis_data<<banyak_cumigoreng<<endl;
		tulis_data<<banyak_ayambakar<<endl;
		tulis_data<<jarak;
		tulis_data.close();
	}
	private:
		ofstream tulis_data;
		int banyak_ayamgeprek, banyak_ayamgoreng, banyak_udanggoreng, banyak_cumigoreng, banyak_ayambakar, jarak;
};
