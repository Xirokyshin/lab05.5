#include <iostream>

using namespace std;

// ���������� ������� ��� ����������� n-�� ����� ����������� �������
int find_nth_member(int a1, int d, int n, int& depth) {
    depth++;

    if (n == 1) {
        return a1;
    }

    // ����������� ������
    return find_nth_member(a1, d, n - 1, depth) + d;
}

// ���������� ������� ��� ����������� ���� ������ n ����� �������
int sum_of_members(int a1, int d, int n, int& depth) {
    depth++;

    if (n == 1) {
        return a1;
    }

    // ����������� ������
    return sum_of_members(a1, d, n - 1, depth) + find_nth_member(a1, d, n, depth);
}

int main() {
    int a1, d, n;

    // �������� ������� ����� �� ������ �������
    cout << "Pershiy chlen (a1): ";
    cin >> a1;
    cout << "Riznutsia (d): ";
    cin >> d;
    cout << "Nomer chlena progresii (n): ";
    cin >> n;

    int depth_nth = 0;
    int depth_sum = 0;

    // ������ ����������� ������� ��� ����������� n-�� ����� � ����
    int nth_member = find_nth_member(a1, d, n, depth_nth);
    int sum = sum_of_members(a1, d, n, depth_sum);

    // ��������� ����������
    cout << "n-ui chlen progresii: " << nth_member << endl;
    cout << "Suma pershix n chleniv: " << sum << endl;
    cout << "Glubuna rekyrsii dlya n chlena: " << depth_nth << endl;
    cout << "Glubuna rekyrsii dlya sumi progresii: " << depth_sum << endl;

    return 0;
}
