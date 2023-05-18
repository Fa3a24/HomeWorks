#include <iostream>
using namespace std;
struct Computer
{
	bool corps = false;
	bool cpu = false;
	bool motherboard = false;
	bool ram = false;
	bool storage = false;
	bool psu = false;

	void add_corps()
	{
		if (corps == true) 
		    cout << "corps already present" << endl;
		else 
			corps = true;
	}

	void add_cpu()
	{
		if (!corps)
			cout << "add corps" << endl;
		else if (cpu == true) 
			cout << "CPU already present" << endl;
		else 
			cpu = true;
	}

	void add_motherboard()
	{
		if (!cpu) 
			cout << "add CPU" << endl;
		else if (motherboard == true) 
			cout << "Motherboard already present" << endl;
		else 
			motherboard = true;
	}

	void add_ram() {
		if (!motherboard) 
			cout << "add motherboard" << endl;
		else if (ram == true) 
			cout << "RAM already present" << endl;
		else 
			ram = true;
	}

	void add_cpu() {
		if (!motherboard) 
			cout << "add motherboard";
		else if (cpu == true)
			cout << "CPU already present" << endl;
		else 
			cpu = true;
	}

	void add_storage() {
		if (!motherboard) 
			cout << "add motherboard" << endl;
		else if (storage == true) 
			cout << "Storage already present" << endl;
		else
			storage = true;
	}

	void add_psu() {
		if (!motherboard || !cpu) 
			cout << "add motherboard and CPU";
		else if (psu == true) 
			cout << "PSU already present" << endl;
		else 
			psu = true;
	}

	void print() {
		cout << "Corps: " << corps << endl;
		cout << "CPU: " << cpu << endl;
		cout << "Motherboard: " << motherboard << endl;
		cout << "RAM: " << ram << endl;
		cout << "GPU: " << cpu << endl;
		cout << "Storage: " << storage << endl;
		cout << "PSU: " << psu << endl;
	}

};
int main()
{
	Computer pc;
	int choise = 1;
	while (choise != 0)
	{
		cout
			<< "Assemble your personal computer" << endl
			<< "1.Add Corps" << endl
			<< "2.Add CPU" << endl
			<< "3.Add Motherboard" << endl
			<< "4.Add RAM" << endl
			<< "5.Add GPU" << endl
			<< "6.Add Storage" << endl
			<< "7.Add PSU" << endl
			<< "Enter '0' to close program" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:
			pc.add_corps();
			pc.print();
			break;
		case 2:
			pc.add_cpu();
			pc.print();
			break;
		case 3:
			pc.add_motherboard();
			pc.print();
			break;
		case 4:
			pc.add_ram();
			pc.print();
			break;
		case 5:
			pc.add_cpu();
			pc.print();
			break;
		case 6:
			pc.add_storage();
			pc.print();
			break;
		case 7:
			pc.add_psu();
			pc.print();
			break;
		}
		if (pc.cpu == true && pc.gpu == true && pc.psu == true)
		{
			cout << "Congratulations, you have built a computer!"<<endl;
			break;
		}
	}
}
