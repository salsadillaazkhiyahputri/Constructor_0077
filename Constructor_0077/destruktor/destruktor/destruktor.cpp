#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(); //Constructor
	~angka(); //Destructor
	void cetakData();
	void isiData();
};

//Definisi member Functon
angka::angka(int i) { //constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::isiData() {
	for (int i = 1;i <= panjang; i++) {
		cout<<i<< " = "; cin>>arr[i];
	}
	cout << endl;
}

int main(){
	angka belajarcpp(3); //constructor Dipanggil
	angka* ptrBelajarcpp = new angka(5); //Constructor Dipanggil
	delete ptrBelajarcpp; //Destructor Dipanggil

	return 0;

}//Destructor Dipanggil