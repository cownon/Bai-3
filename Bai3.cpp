#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Đọc số phần tử của dãy

    int sum = 0; // Khởi tạo biến tổng ban đầu

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; // Đọc số từng phần tử của dãy

        if (num % 2 == 0) {
            // Nếu số là chẵn, thêm vào tổng
            sum += num;
        }
    }

    cout << sum;// In ra tổng các số chẵn

    return 0;
}
