#include <iostream>

using namespace std;

// Рекурсивна функція для знаходження n-го члена арифметичної прогресії
int find_nth_member(int a1, int d, int n, int& depth) {
    depth++;

    if (n == 1) {
        return a1;
    }

    // Рекурсивний виклик
    return find_nth_member(a1, d, n - 1, depth) + d;
}

// Рекурсивна функція для знаходження суми перших n членів прогресії
int sum_of_members(int a1, int d, int n, int& depth) {
    depth++;

    if (n == 1) {
        return a1;
    }

    // Рекурсивний виклик
    return sum_of_members(a1, d, n - 1, depth) + find_nth_member(a1, d, n, depth);
}

int main() {
    int a1, d, n;

    // Введення першого члена та різниці прогресії
    cout << "Pershiy chlen (a1): ";
    cin >> a1;
    cout << "Riznutsia (d): ";
    cin >> d;
    cout << "Nomer chlena progresii (n): ";
    cin >> n;

    int depth_nth = 0;
    int depth_sum = 0;

    // Виклик рекурсивних функцій для знаходження n-го члена і суми
    int nth_member = find_nth_member(a1, d, n, depth_nth);
    int sum = sum_of_members(a1, d, n, depth_sum);

    // Виведення результатів
    cout << "n-ui chlen progresii: " << nth_member << endl;
    cout << "Suma pershix n chleniv: " << sum << endl;
    cout << "Glubuna rekyrsii dlya n chlena: " << depth_nth << endl;
    cout << "Glubuna rekyrsii dlya sumi progresii: " << depth_sum << endl;

    return 0;
}
