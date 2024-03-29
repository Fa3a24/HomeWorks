#include <iostream>
#include <vector>
using namespace std;
/*
 ���������� ������������ ��������� ������ Queue. �� �������� ��� ������� �������.
������ ���� ������ push, pop, peek

���������� ������������ ��������� ������ DeQueue. �� �������� ��� ������� �������, �� � ���� ������.
������ ���� ������ push, pop, peek


 */

template <typename T>
class Queue {
private:
    vector<T> elements;
public:
    void push(const T& queue) {
        elements.push_back(queue);
    }

    void pop() {
        if (!elements.empty()) {
            elements.erase(elements.begin());
        }
    }

    const T& peek() const {
        if (elements.empty()) {
            return elements.front();
        }
    }

    bool isEmpty() const {
        return elements.empty();
    }
};


int main() {
    Queue<int> queue;
    queue.push(11);
    queue.pop();
    queue.peek();


    while (!queue.isEmpty()) {
        cout << queue.peek() << " ";
        queue.pop();
    }
}