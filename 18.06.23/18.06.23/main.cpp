#include <iostream>
#include <string>
using namespace std;

/*���������� ��������� ����.
� ��� ������ ���� ������.
��������, ���, �������, ����, ���

��� ���� ������ �������� ����� ����:
��������, �����, ������(�������)

�������� - ����������� �����.
�������, ����, ��� - ��� ���������

��� - ����������� �����.
������, ���, ���� - ��� ���

���� ���������:
���
���
������ ���������:
������� ��� (������ ����������� �����)
������� ���������� �� ����� (������ ����������� �����)

���� �����:
����
���.�����
���.������
��������

������ �������� ����������� �� ����.
��������:

class Archer : public PlayerType {
public:
	void attackWithBow() {

	}
}*/


class Person {
protected:
	string gender;
	string name;
public:
	Person(const string& newname, const string& newgender) : name(newname), gender(newgender) {}
	virtual void changeName(const string& newName) = 0;
	virtual void printInfo() const = 0;
};

class Human : public Person {
public:
	Human(const string& newname, const string& newgender) : Person(newname, newgender) {}
	void changeName(const string& newName) override {
		name = newName;
	}

	void printInfo() const override {
		cout << "������������ ��������: " << endl;
		cout << "���: " << name << endl;
		cout << "���: " << gender << endl;
	}
};

class Elf : public Person {
public:
	Elf(const string& newname, const string& newgender) : Person(newname, newgender) {}
	void changeName(const string& newName) override {
		name = newName;
	}

	void printInfo() const override {
		cout << "���� ��������: " << endl;
		cout << "���: " << name << endl;
		cout << "���: " << gender << endl;
	}

};

class Orc : public Person {
public:
	Orc(const string& newname, const string& newgender) : Person(newname, newgender) {}
	void changeName(const string& newName) override {
		name = newName;
	}

	void printInfo() const override {
		cout << "��� ��������: " << endl;
		cout << "���: " << name << endl;
		cout << "���: " << gender << endl;
	}
};

class PlayerType {
protected:
	string power;
	string physicalProtection;
	string physicalAttack;
	string dexterity;
public:
	virtual void attack() = 0;
};

class Archer : public PlayerType {
public:
	void attack() override {
		cout << "��� ����� Archer!" << endl;
	}
};

class Mag : public PlayerType {
	void attack() override {
		cout << "��� ����� Mag!" << endl;
	}
};

class Tank : public PlayerType {
	void attack() override {
		cout << "��� ����� � Tank!" << endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	Person* human = new Human("Efi", "Male\n");
	Person* elf = new Elf("Baxa", "Male\n");
	Person* orc = new Orc("Isa", "Male\n");
	PlayerType* archer = new Archer();
	PlayerType* mag = new Mag();
	PlayerType* tank = new Tank();

	human->printInfo();
	archer->attack();
	elf->printInfo();
	mag->attack();
	orc->printInfo();
	tank->attack();

	delete human;
	delete elf;
	delete orc;
	delete archer;
	delete mag;
	delete tank;
}