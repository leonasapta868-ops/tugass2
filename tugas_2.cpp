#include <iostream>
using namespace std;

int main() {
int nilai;

cout << "=== PROGRAM PENENTUAN NILAI ===" << endl;
cout << "Masukkan nilai kamu (0-100): ";
cin >> nilai;

if (nilai < 0 || nilai > 100) {
    cout << "Nilai tidak valid!" << endl;
}
else if (nilai > 90) {
    cout << "Nilai kamu: A" << endl;
}
else if (nilai > 80) {
    cout << "Nilai kamu: B" << endl;
}
else if (nilai > 70) {
    cout << "Nilai kamu: C" << endl;
}
else {
    cout << "Nilai kamu: D" << endl;
}

return 0;

}
