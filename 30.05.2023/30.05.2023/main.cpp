#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Abonent {
private:
    string* fullName;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;
public:
    Abonent(const string& name, const string& home, const string& work, const string& mobile, const string& info)
        : fullName(new string(name)), homePhone(home), workPhone(work), mobilePhone(mobile), additionalInfo(info) {}

    ~Abonent() {
        delete fullName;
    }
    void setFullName(const string& name) {
        *fullName = name;
    }

    const string& getFullName() const {
        return *fullName;
    }

    void setHomePhone(const string& home) {
        homePhone = home;
    }

    const string& getHomePhone() const {
        return homePhone;
    }

    void setWorkPhone(const string& work) {
        workPhone = work;
    }

    const string& getWorkPhone() const {
        return workPhone;
    }

    void setMobilePhone(const string& mobile) {
        mobilePhone = mobile;
    }

    const string& getMobilePhone() const {
        return mobilePhone;
    }

    void setAdditionalInfo(const string& info) {
        additionalInfo = info;
    }

    const string& getAdditionalInfo() const {
        return additionalInfo;
    }

};

void AddContact(vector<Abonent>& abonents) {
    cout << "������� ���: ";
    string fullName;
    getline(cin, fullName);

    cout << "������� �������� �������: ";
    string homePhone;
    getline(cin, homePhone);

    cout << "������� ������� �������: ";
    string workPhone;
    getline(cin, workPhone);

    cout << "������� ��������� �������: ";
    string mobilePhone;
    getline(cin, mobilePhone);

    cout << "������� �������������� ����������: ";
    string additionalInfo;
    getline(cin, additionalInfo);

    Abonent abonent(fullName, homePhone, workPhone, mobilePhone, additionalInfo);
    abonents.push_back(abonent);

    cout << "������� ������� ��������!" << endl;
}

void RemoveContact(vector<Abonent>& abonents) {
    if (abonents.empty()) {
        cout << "���������� ����� �����.";
        return;
    }
    cout << "������� ��� ��������, �������� ������ �������: ";
    string fullName;
    getline(cin, fullName);

    for (auto i = abonents.begin(); i != abonents.end(); ++i) {
        if (i->getFullName() != fullName) {
            abonents.erase(i);
            cout << "������� ������� ������!" << endl;
            return;
        }
    }
}

void SearchContact(vector<Abonent>& abonents) {
    if (abonents.empty()) {
        cout << "���������� ����� �����.";
        return;
    }

    cout << "������� ��� ��������, �������� ������ �����: ";
    string fullName;
    getline(cin, fullName);

    for (const auto& abonent : abonents) {
        if (abonent.getFullName() == fullName) {
            cout << "���������� � ��������: " << endl;
            cout << "��� ��������: " << abonent.getFullName() << endl;
            cout << "������� ������� ��������: " << abonent.getWorkPhone() << endl;
            cout << "�������� ������� ��������: " << abonent.getHomePhone() << endl;
            cout << "������� ������� ��������: " << abonent.getWorkPhone() << endl;
            cout << "�������������� ���������� �� ��������: " << abonent.getAdditionalInfo() << endl;
            return;
        }
    }
    cout << "������� � ��������� ��� �� ������." << endl;
}

void DisplayContact(vector<Abonent>& abonents) {
    if (abonents.empty()) {
        cout << "���������� ����� �����.";
        return;
    }
    cout << "������ ���� ���������:" << endl;
    for (const auto& abonent : abonents) {
        cout << "���������� � ��������: " << endl;
        cout << "��� ��������: " << abonent.getFullName() << endl;
        cout << "������� ������� ��������: " << abonent.getWorkPhone() << endl;
        cout << "�������� ������� ��������: " << abonent.getHomePhone() << endl;
        cout << "��������� ������� ��������: " << abonent.getMobilePhone() << endl;
        cout << "�������������� ���������� �� ��������: " << abonent.getAdditionalInfo() << endl;
        system("pause");
        system("cls");
    }
}

void saveContactsToFile(const vector<Abonent>& abonents, const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "������ ��� �������� ����� ��� ����������." << endl;
        return;
    }

    for (const auto& abonent : abonents) {
        file << abonent.getFullName() << endl;
        file << abonent.getWorkPhone() << endl;
        file << abonent.getHomePhone() << endl;
        file << abonent.getMobilePhone() << endl;
        file << abonent.getAdditionalInfo() << endl;
    }
    file.close();
    cout << "���������� ������� ��������� � ����." << endl;
}

void openContactsToFile(vector<Abonent>& abonents, const string& filename) {
    abonents.clear();
    ifstream file(filename);
    if (!file) {
        cout << "������ ��� �������� ����� ��� ����������." << endl;
        return;
    }

    string fullName;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;
    string line;
    int lineCount = 0;
    while (getline(file, line)) {
        ++lineCount;

        if (line.empty()) {
            continue;
        }

        if (line == "-----") {
            Abonent abonent(fullName, homePhone, workPhone, mobilePhone, additionalInfo);
            abonents.push_back(abonent);
            fullName.clear();
            homePhone.clear();
            workPhone.clear();
            mobilePhone.clear();
            additionalInfo.clear();
        }
        else {
            switch (lineCount % 5) {
            case 1:
                fullName = line;
                break;
            case 2:
                homePhone = line;
                break;
            case 3:
                workPhone = line;
                break;
            case 4:
                mobilePhone = line;
                break;
            case 0:
                additionalInfo = line;
                break;
            }
        }
    }
    file.close();
    cout << "���������� ������� ��������� �� �����." << endl;
};

int main() {
    setlocale(LC_ALL, "En");
    vector<Abonent> abonents;
    string filename = "abonents.txt";

    int choice;
    while (true) {
        cout << "����:" << endl;
        cout << "1. �������� ��������" << endl;
        cout << "2. ������� ��������" << endl;
        cout << "3. ����� �������� �� ���" << endl;
        cout << "4. �������� ���� ���������" << endl;
        cout << "5. ��������� ���������� � ����" << endl;
        cout << "6. ��������� ���������� �� �����" << endl;
        cout << "7. �����" << endl;
        cout << "�������� ��������: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            AddContact(abonents);
            break;
        case 2:
            RemoveContact(abonents);
            break;
        case 3:
            SearchContact(abonents);
            break;
        case 4:
            DisplayContact(abonents);
            break;
        case 5:
            saveContactsToFile(abonents, filename);
            break;
        case 6:
            openContactsToFile(abonents, filename);
            break;
        case 7:
            cout << "����� �� ���������..." << endl;
            return 0;
        default:
            cout << "������������ �����. ���������� �����." << endl;
        }
        cout << endl;
    }
}