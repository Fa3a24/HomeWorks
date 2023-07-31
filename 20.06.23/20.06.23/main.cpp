#include <iostream>
using namespace std;
/*
�������� �� � ���������� �� ���� �������� ��������� � ��������.

�� ���� ��� ���� ��������, ����� ������ ������� �� ������, � ����� ���.
*/

class Component {

};

// ���������
class AggComputer {
private:
    Component* processor;
    Component* memory;
    Component* hardDisk;

public:
    AggComputer(Component* processor, Component* memory, Component* hardDisk) {
        this->processor = processor;
        this->memory = memory;
        this->hardDisk = hardDisk;
    }
};

// ����������
class CompComputer {
private:
    class Monitor {

    };

    class Keyboard {

    };

    class Mouse {

    };

    Monitor monitor;
    Keyboard keyboard;
    Mouse mouse;
public:
    CompComputer() {

    }
};

int main() {
    Component* processor = new Component();
    Component* memory = new Component();
    Component* hardDisk = new Component;

    AggComputer aggcomputer(processor, memory, hardDisk);
    CompComputer compositionComputer;

    delete processor;
    delete memory;
    delete hardDisk;
}