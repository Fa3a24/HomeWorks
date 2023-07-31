#include <iostream>
#include <cstdint>
using namespace std;



#if 0
/*
������� 1
�������� ����� Student, ������� ����� ��������� ���������� � ��������.
� ������� ��������� ������������, ���������� �����
Aspirant (�������� � �������, ������� ��������� � ������
������������ ������) ����������� �� Student.*/
class Student {
private:
	string name;
	string surname;
	uint16_t age;
public:
	Student(const string& name, const string& surname, const uint16_t& age) : name(name), surname(surname), age(age) {}

	void Print() const {
		cout << "��� ��������: " << this->name << endl;
		cout << "������� ��������: " << this->surname << endl;
		cout << "������� ��������: " << this->age << endl;
	}
};

class Aspirant : public Student {
private:
	string researchtopic;
public:
	Aspirant(const string& name, const string& surname, const uint16_t& age, const string& researchtopic) : Student(name, surname, age), researchtopic(researchtopic) {}

	void Print() const {
		Student::Print();
		cout << "���� ������������: " << researchtopic << endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	Student student1("Famil", "Qaraxanov", 16);
	student1.Print();
	cout << "====================================" << "\n";
	Aspirant student2("EfFamili", "Qaraxanov", 16, "Step IT Academy");
	student2.Print();
}
#endif // 1;

#if 0
//==================================================================================================================================================================================
/*
������� 2
�������� ����� Passport (�������), ������� ����� ���������
���������� ���������� � ���������� ������������.
� ������� ��������� ������������, ���������� �����*/

class Passport {
private:
	string country;
	string name;
	string surname;
	string patronymic;
	string dateofbirth;
	string placeofbirth;
	string floor;
	uint16_t age;
public:
	Passport(const string& country, const string& name, const string& surname, const string& patronymic, const string& dateofbirth, const string& placeofbirth, const string& floor, const uint16_t& age)
		: country(country), name(name), surname(surname), patronymic(patronymic), dateofbirth(dateofbirth), placeofbirth(placeofbirth), floor(floor), age(age) {}

	void Print() const {
		cout << "������: " << country << endl;
		cout << "��� ����������: " << name << endl;
		cout << "������� ����������: " << surname << endl;
		cout << "�������� ����������: " << patronymic << endl;
		cout << "���� �������� ����������: " << dateofbirth << endl;
		cout << "����� �������� ����������: " << placeofbirth << endl;
		cout << "���: " << floor << endl;
		cout << "������� ����������: " << age << endl;
	}
};


class ForeignPassport : public Passport {
private:
	uint16_t visaData;
	uint16_t passportNumber;
public:
	ForeignPassport(const string& country, const string& name, const string& surname, const string& patronymic, const string& dateofbirth, const string& placeofbirth, const string& floor, const uint16_t& age, const uint16_t& visaData, const uint16_t& passportNumber)
		:Passport(country, name, surname, patronymic, dateofbirth, placeofbirth, floor, age), visaData(visaData), passportNumber(passportNumber) {}
	void Print() const {
		Passport::Print();
		cout << "������ � �����: " << visaData << endl;
		cout << "����� ������������ ��������: " << passportNumber << endl;
	}

};

int main() {
	setlocale(LC_ALL, "ru");
	Passport passport1("�����������", "������", "���������", "�������", "09.06.2007", "����", "�������", 16);
	passport1.Print();
	cout << "==================================" << "\n";
	ForeignPassport passport2("�����������", "������", "���������", "�������", "25.01.2007", "����", "�������", 16, 4444654, 416973);
	passport2.Print();

}
#endif // 1