#include <iostream>
#include <cmath> // ��� ������� pow
#include <vector> // ��� ������������ �������

int main() {
    int n = 12; // ʳ������ �������� ��� ����������
    int a0 = 1, a1 = 2;

    // ������ ��� ��������� ������� �����������
    std::vector<int> sequence(n);
    sequence[0] = a0;
    sequence[1] = a1;

    // ���������� �������� ����������� �� ����������� ��������
    for (int i = 2; i < n; i++) {
        sequence[i] = pow((3 * sequence[i - 1] - 2), 2);
    }

    // ��������� ����������
    std::cout << "����� " << n << " ������� �����������:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "a[" << i << "] = " << sequence[i] << std::endl;
    }

    return 0;
}
