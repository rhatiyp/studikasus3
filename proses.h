
using namespace std;

class proses{
	public:
		void getData(){
		ambil_data.open("file.txt");
		bool ayamgeprek = true;
		bool ayamgoreng = true;
		bool udanggoreng = true;
		bool cumigoreng = true;
		bool ayambakar = true;
		while(!ambil_data.eof()){
			if (ayamgeprek){
				ambil_data>>banyak_ayamgeprek;
				ayamgeprek = false;
			}
			else if (ayamgoreng){
				ambil_data>>banyak_ayamgoreng;
				ayamgoreng = false;
			}
			else if (ayamgeprek){
				ambil_data>>banyak_ayamgeprek;
				ayamgeprek = false;
			}
			else if (udanggoreng){
				ambil_data>>banyak_udanggoreng;
				udanggoreng = false;
			}
			else if (cumigoreng){
				ambil_data>>banyak_cumigoreng;
				cumigoreng = false;
			}
			else if (ayambakar){
				ambil_data>>banyak_ayambakar;
				ayambakar = false;
			}
			else {
				ambil_data>>jarak;
			}
		}
		ambil_data.close();
	}
	void toFile(){
		int total = (hrgayamgeprek + banyak_ayamgeprek) + (hrgayamgoreng + banyak_ayamgoreng) + (hrgudanggoreng + banyak_udanggoreng) + (hrgcumigoreng + banyak_cumigoreng) + (hrgayambakar + banyak_ayambakar);
		float jumlah = float(total);
		float diskon;
		int diskonongkir;
		
		if (total > 150000){
			diskon = jumlah * 35/100;
			diskonongkir = 8000;
		}
		else if (total > 50000){
			diskon = jumlah * 15/100;
			diskonongkir = 5000;
		}
		else {
			diskonongkir = 3000;
		}
		int ongkir;
		if (jarak <= 3){
			ongkir = 15000;
		}
		else {
			ongkir = 25000;
		}
		float bayar;
		bayar =  (jumlah - diskon) + (ongkir - diskonongkir);
		
		tulis_data.open("File.txt");
		tulis_data<<banyak_ayamgeprek<<endl;
		tulis_data<<banyak_ayamgoreng<<endl;
		tulis_data<<banyak_udanggoreng<<endl;
		tulis_data<<banyak_cumigoreng<<endl;
		tulis_data<<banyak_ayambakar<<endl;
		tulis_data<<jarak<<endl;
		tulis_data<<total<<endl;
		tulis_data<<diskon<<endl;
		tulis_data<<ongkir<<endl;
		tulis_data<<diskonongkir<<endl;
		tulis_data<<bayar;
		tulis_data.close();
	}
	
	private:
	ifstream ambil_data;
	ofstream tulis_data;
	int banyak_ayamgeprek;
	int banyak_ayamgoreng;
	int banyak_udanggoreng;
	int banyak_cumigoreng;
	int banyak_ayambakar;
	int jarak;
	int hrgayamgeprek = 21000;
	int hrgayamgoreng = 17000;
	int hrgudanggoreng = 19000;
	int hrgcumigoreng = 20000;
	int hrgayambakar = 25000;
};
