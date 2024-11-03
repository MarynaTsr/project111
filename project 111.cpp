#include <iostream>
#include <cmath> // Для функції pow
#include <vector> // Для використання векторів

int main() {
    int n = 12; // Кількість елементів для обчислення
    int a0 = 1, a1 = 2;

    // Вектор для зберігання значень послідовності
    std::vector<int> sequence(n);
    sequence[0] = a0;
    sequence[1] = a1;

    // Обчислення елементів послідовності за рекурентною формулою
    for (int i = 2; i < n; i++) {
        sequence[i] = pow((3 * sequence[i - 1] - 2), 2);
    }

    // Виведення результатів
    std::cout << "Перші " << n << " значень послідовності:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "a[" << i << "] = " << sequence[i] << std::endl;
    }

    return 0;
}
