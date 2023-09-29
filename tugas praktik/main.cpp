#include <iostream>
using namespace std;

int main() {
  double m1, m2, m3;
  cout << "Masukkan tiga angka: ";
  cin >> m1 >> m2 >> m3;
  if (m1 >= m2 && m2 >= m3)
  cout << "Bilangan terbesar: " << m1;
  else if (m2 >= m1 && m2 >= m3)
    cout << "Bilangan terbesar: " << m2;
  cout << "Bilangan terbesar: " << m3;

  return 0;
}