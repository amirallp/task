#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int soal;
    cin >> soal;

    cout << endl;
    while (soal) {
        if (soal == 1) {
            cout << "Hello World!" << endl;
            break;
        } else if (soal == 2) {
            string nama;
            int usia;
            cout << "Masukan nama anda: ";
            getline(cin, nama);
            cout << "Masukan usia anda: ";
            cin >> usia;

            cout << "Hai " << nama << " anda berusia " << usia << endl;
            break;
        } else if (soal == 3) {
            char hy;
            do {
                double angka_1, angka_2, hasil;
                char op;

                cout << "Masukan bilangan: ";
                cin >> angka_1;
                cout << "Masukan operator: ";
                cin >> op;
                cout << "Masukan bilangan: ";
                cin >> angka_2;

                switch (op) {
                    case '+':
                        hasil = angka_1 + angka_2;
                        break;
                    case '-':
                        hasil = angka_1 - angka_2;
                        break;
                    case '*':
                        hasil = angka_1 * angka_2;
                        break;
                    case '/':
                        hasil = angka_1 / angka_2;
                        break;
                    default:
                        cout << "Operator tidak ditemukann!!" << endl;
                }
                cout << "Hasil dari " << angka_1 << " " << op << " " << angka_2 << " = " << hasil << endl;

                cout << "Lagi? ";
                cin >> hy;
                if (hy == 'n') {
                    break;
                }
            } while (hy == 'y');
            break;
        } else if (soal == 4) {
            int n;
            bool isPrime = true;

            cout << "Masukan bilangan bulat positif: ";
            cin >> n;

            if (n <= 1) {
                isPrime = false;
            } else {
                for (int i = 2; i * i <= n; ++i) {
                    if (n % i == 0) {
                        isPrime = true;
                        break;
                    }
                }
            }
            if (isPrime) {
                cout << n << " Prima" << endl;
            } else {
                cout << n << " Bukan prima" << endl;
            }
            break;
        } else if (soal == 5) {
            int n;
            cout << "Masukan jumlah deret fibonacci: ";
            cin >> n;

            // inisialisasi 2angka pertama
            int a = 0;
            int b = 1;

            cout << "Deret fibonacci: ";

            if (n >= 1) {
                cout << a << " ";
            } else if (n >= 2) {
                cout << b << " ";
            }
            for (int i = 2; i < n; i++) {
                int next = a + b;
                cout << next << " ";
                a = b;
                b = next;
            }
            cout << endl;
        } else if (soal == 6) {
            int temp, ctemp;
            char choice;

            cout << "Pilih jenis konversi suhu C/F =>";
            cin >> temp;

            if (choice == 'c' || choice == 'C') {
                cout << "Masukan suhu °C => ";
                cin >> temp;
                ctemp = (temp * 9 / 5) + 32;
                cout << "°C convert to °F => " << ctemp << endl;
            } else if (choice == 'F' || choice == 'f') {
                cout << "Masukan suhu °F => ";
                cin >> temp;
                ctemp = (temp - 32) * 9 / 5;
                cout << "°F convert to °C => " << ctemp << endl;
            } else {
                cout << "Silahkan pilih C/F\n";
            }
            break;
        } else if (soal == 7) {
            double luas, keliling;
            const double phi = 3.14159;
            int r;

            cout << "Masukan jari2: ";
            cin >> r;

            luas = phi * (r * r);
            keliling = 2 * phi * r;

            cout << "Luas = " << luas << endl;
            cout << "Keliling = " << keliling << endl;
            break;
        } else if (soal == 8) {
            string input_kata;

            // Meminta pengguna untuk memasukkan kata atau kalimat
            cout << "Masukkan kata atau kalimat: ";
            getline(cin, input_kata);

            // Menghitung panjang string
            int panjang = input_kata.length();

            // Mendapatkan huruf pertama
            char huruf_pertama;
            if (panjang > 0) {
                huruf_pertama = input_kata[0];
            } else {
                huruf_pertama = 'T';
            }

            // Mencetak panjang dan huruf pertama
            cout << "Panjang string: " << panjang << endl;
            cout << "Huruf pertama: " << huruf_pertama << endl;
        } else if (soal == 9) {
            vector<string> shoppingList;

            while (true) {
                cout << "Daftar belanja:" << endl;
                for (int i = 0; i < shoppingList.size(); i++) {
                    cout << i + 1 << ". " << shoppingList[i] << endl;
                }

                cout << "\nPilihan:" << endl;
                cout << "1. Tambahkan item" << endl;
                cout << "2. Hapus item" << endl;
                cout << "3. Keluar" << endl;

                int choice;
                cin >> choice;

                if (choice == 1) {
                    string item;
                    cout << "Masukkan nama item yang ingin ditambahkan: ";
                    cin >> item;
                    shoppingList.push_back(item);
                    cout << "'" << item << "' telah ditambahkan ke daftar belanja.\n";
                } else if (choice == 2) {
                    if (shoppingList.empty()) {
                        cout << "Daftar belanja kosong. Tidak ada item yang dapat dihapus.\n";
                    } else {
                        int itemNumber;
                        cout << "Masukan nomor item yang ingin dihapus: ";
                        cin >> itemNumber;
                        if (itemNumber >= 1 && itemNumber <= shoppingList.size()) {
                            cout << "'" << shoppingList[itemNumber - 1] << "' telah dihapus dari daftar belanja.\n";
                            shoppingList.erase(shoppingList.begin() + itemNumber - 1);
                        } else {
                            cout << "Nomor item tidak valid.\n";
                        }
                    }
                }else if(choice == 3){
                    cout << "Terima kasih! Daftar Belanja: " << endl;
                    for (int i = 0; i < shoppingList.size(); i++) {
                        cout << i + 1 << ". " << shoppingList[i] << endl;
                    }
                break;
                }else{
                    cout << "Pilihan anda tidak valid, Silahkan pilih 1,2 atau 3 \n";
                }
            }
            break;
        }
        }
    return 0;
}