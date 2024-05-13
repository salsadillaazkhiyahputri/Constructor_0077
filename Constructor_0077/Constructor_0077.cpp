#include <iostream>
using namespace std;

class mahasiswa {
public:
	static int main;
	int id;
	string nama;

	void setID();

	void printAll();
	mahasiswa(string pnama) :nama(pnama)
	{
		setID();
	}
};

int mahasiswa::nim = 20;

void mahasiswa::setID()
{
	id =ni++; 
}
	
void mahasiswa::printAll()
{
	cout << "ID = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main()
{
	Mahasiswa mhs1("Lia Kurnia");
	Mahasiswa mhs2("Asroni");

}
