#include <iostream>
using namespace std;
/*
�������� �������.

���������� ����� ���������.
������� ���������� ��� ��������� ������ ���� ���������� �����������.
�� �������� ��� ������������.
���������� ������ ��������(������������) � ����� ��� ������. */

struct Proc {
	string proc;
	int freq;
};

struct Brend {
	string brend;
};

struct Memory {
	int memory{};
};

struct HDD {
	string HardDisk;
	int size{};
};

struct SSD {
	string SSD;
	int size{};
};

struct PowerUnit {
	string powerunitt;
};

class Comp {
public:

	Comp(string NewBrend, int NewMemory, string NewProc, int NewFreq, string NewHardDisk, int sizeHardDisk, string NewPowerUnit, string NewSSDDisk, int sizeSSD) {
		brendd.brend = NewBrend;
		memoryy.memory = NewMemory;
		procc.proc = NewProc;
		procc.freq = NewFreq;
		hdd.HardDisk = NewHardDisk;
		hdd.size = sizeHardDisk;
		powerr.powerunitt = NewPowerUnit;
		ssdDisk.SSD = NewSSDDisk;
		ssdDisk.size = sizeSSD;
	}

	void Print() {
		cout << "�����: " << brendd.brend << endl;
		cout << "���������: " << procc.proc << endl;
		cout << "������� ����������: " << procc.freq << endl;
		cout << "����������� ������: " << memoryy.memory << " ��" << endl;
		cout << "Ƹ����� ����: " << hdd.HardDisk << " " << hdd.size << " ��" << endl;
		cout << "���� �������: " << powerr.powerunitt << endl;
		cout << "SSD: " << ssdDisk.SSD << " " << ssdDisk.size << " ��" << endl;

	}

private:
	Brend brendd;
	Memory memoryy;
	Proc procc;
	HDD hdd;
	PowerUnit powerr;
	SSD ssdDisk;
};




int main() {
	setlocale(LC_ALL, "ru");
	Comp comp("ThinkCentre", 16, "Intel Core i9-9900K", 3200, "Seagate 9GB 3.5 2MB 80Pin SCSI 10000RPM For ST39103LC", 500, "be quiet! Dark Power Pro 13", "Samsung SATA MZ-77E1T0BW", 1);
	comp.Print();
}