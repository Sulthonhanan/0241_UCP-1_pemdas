// UCP 1.cpp : This file contains the 'main' function. 
//1. 3 Variable dengan tipe data yang berbeda adalah yang pertama interger bilangan bulat, yang kedua float bilangan pecahan, yang ketiga char yang berupa huruf
// int = 20, float = 1/2, char = "Ayah"
//2. tipe data yang tidak menyimpan nilai data  dan sebaliknya 
//3. menggunakan loop (for) untuk mengisi informasi untuk setiap siswa dalam array students. Kemudian, saya menggunakan loop for lagi 
//   untuk menampilkan informasi semua siswa yang telah dimasukkan.
//4. pernyataan if memeriksa apakah nilai umur lebih besar atau sama dengan 18 tahun. Jika ya, program akan mencetak “Anda sudah dewasa.” Jika tidak, program akan mencetak “Anda masih remaja.”
//5. membuat sebuah struktur Student yang memiliki tiga anggota: nama, umur, dan tingkat. 
//   Kemudian, saya mendeklarasikan dua variabel bertipe Student, student1 dan student2, dan mengisi nilainya. Terakhir, saya menampilkan informasi dari kedua siswa tersebut.
#include <iostream>
using namespace std;

int arr[3];  //kota yang akan dicari 
int n;       //jumlah indeks kualitas udara 
int i;       // batas indeks sehat

void input()
{
    while (true)
    {
        cout << "Masukan jumlah indeks polutan dalam sensor";
        cin >> n;
        if ((n > 1) && (n <= 100))
            break;
        else
            cout << "\nIndeks harus berjumlah minimal 1 dan maksimal 100. \n\n";

    }

    // Terima jumlah polutan dari sensor 
    cout << "\n---------------------\n";
    cout << "Masukan indeks kualitas udara \n";
    cout << "----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }

    struct Kota {
        string Tangerang;
        string Bekasi;
      
    };
}
int main()
{
    
};

