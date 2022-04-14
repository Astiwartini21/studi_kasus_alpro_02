using namespace std;

class Tabungan{
  private:
    int a;
	public:
		int tabungan;
		void cetak();
		int akumulasi(int a, int pendapatan);
};
int Tabungan::akumulasi(int a, int pendapatan){
	int n;
	int x;
	int hasil;
	if(a>0, a<=12){ 
		cout <<"\t\t\t\t";
		cin>> n;
		cout << "\t\t\t\t\t\t\t";
		cin >>x;
		hasil = pendapatan-x+n;
		cout << "| " << a << "\t   |" << "\t\t" << "  |\t" << "\t  |\t" << hasil << "\t\t\t|" << endl;
		cout << "                                          \n";
		return akumulasi(a+1, pendapatan-x+n);
	}
}