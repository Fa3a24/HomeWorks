#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

class RegisterPerson {
public:
    RegisterPerson(const string& username, const string& password, const string& email, const string& phone) {
        this->username = username;
        this->password = password;
        this->email = email;
        this->phone = phone;
        regex username_regex("^[a-zA-Z0-9_]{4,16}$");
        regex password_regex("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d).{6,}$");
        regex email_regex("^[a-zA-Z0-9_]+@[a-zA-Z0-9]+\\.[a-zA-Z0-9]+$");
        regex phone_regex("^\\+994[0-9]{9}$");
        if (!regex_match(username, username_regex)) {
            throw invalid_argument("���������������� ��� ������������.");
        }
        if (!regex_match(password, password_regex)) {
            throw invalid_argument("���������������� ������.");
        }
        if (!regex_match(email, email_regex)) {
            throw invalid_argument("���������������� ����������� �����.");
        }
        if (!regex_match(phone, phone_regex)) {
            throw invalid_argument("���������������� ���������� �����.");
        }
    }

    string getUsername() const {
        return username;
    }

    string getPassword() const {
        return password;
    }

private:
    string username;
    string password;
    string email;
    string phone;
};

class LoginPerson {
public:
    LoginPerson(const string& username, const string& password) {
        this->username = username;
        this->password = password;
    }

    bool isValidLogin(const vector<RegisterPerson>& users) const {
        for (const RegisterPerson& user : users) {

        }
        return false;
    }

private:
    string username;
    string password;
};

int main() {
    setlocale(LC_ALL, "RU");
    vector<RegisterPerson> registeredUsers; // ����� ����� ��������� ������������������ ������������

    int choice;
    while (true)
    {
        cout << "===========================================" << endl;
        cout << "1. ����������� ������������" << endl;
        cout << "2. ���� ������������" << endl;
        cout << "3. ����� �� ���������" << endl;
        cout << "===========================================" << endl;
        cout << "��� �����: " << endl;
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            try
            {
                cout << "===========================================" << endl;
                cout << "�����������" << endl;
                cout << "===========================================" << endl;
                string username, password, email, phone;
                cout << "������� ��� ������������: " << endl;
                cin >> username;
                cout << "������� ������: " << endl;
                cin >> password;
                cout << "������� ����������� �����: " << endl;
                cin >> email;
                cout << "������� ���������� �����: " << endl;
                cin >> phone;
                system("cls");
                RegisterPerson p1(username, password, email, phone);
                registeredUsers.push_back(p1);
                system("cls");
                cout << "����������� ������ �������! " << endl;
                system("pause");
                system("cls");
            }
            catch (const invalid_argument& a)
            {
                cout << "������: " << endl << a.what() << endl;
                system("pause");
            }
            break;
        case 2:
            cout << "===========================================" << endl;
            cout << "����" << endl;
            cout << "===========================================" << endl;
            {
                string username, password;
                cout << "������� ��� ������������: " << endl;
                cin >> username;
                cout << "������� ������: " << endl;
                cin >> password;
                LoginPerson login(username, password);

                if (login.isValidLogin(registeredUsers)) {
                    cout << "���� �������� �������!" << endl;
                }
                else {
                    system("cls");
                    cout << "������������ ��� ������������ ��� ������." << endl;
                    system("pause");
                    system("cls");
                }
            }
            break;
        case 3:
            return 0;
        default:
            cout << "������������ �����. ����������, ���������." << endl;
            break;
        }
    }

    return 0;
}