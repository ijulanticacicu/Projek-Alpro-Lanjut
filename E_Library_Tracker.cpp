#include <iostream>
#include <fstream>
using namespace std;

struct AtributBuku{
    int tahun_terbit;
    int jumlah_halaman;
    int rating; // 1-10
};

struct Buku{
    int id;
    string judul;
    string penulis;
    AtributBuku detail; // Struct di dalam struct
};

// Variabel Global
Buku arrayBuku[100];
int jumlah_buku = 0;

void initData();          
void saveAppendData();    
void saveOverwriteData(); 

int Hitung_Popularitas(int rating); // Menggantikan Hitung_Bonus
int binarySearch(Buku arr[], int kiri, int kanan, int id_cari);

// Fungsi Pointer dan Sorting (Quick Sort)
void swapData(Buku *a, Buku *b);
int partition(Buku arr[], int low, int high);
void quickSort(Buku arr[], int low, int high);

// Fungsi Menu 
void tambahData();
void lihatData();
void hapusData();
void cetakLaporan();

int main(){
    initData(); 
    
    int pilihan;
    do{
        cout << "\n=== E-LIBRARY TRACKER ===\n";
        cout << "[1] Tambah Data Buku\n";
        cout << "[2] Lihat Koleksi Buku\n";
        cout << "[3] Hapus Data Buku\n";
        cout << "[4] Cetak Laporan Buku Langka (Rating Rendah)\n";
        cout << "[0] Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();
      
        switch(pilihan){
            case 1: tambahData(); 
                break;
            case 2: lihatData(); 
                break;
            case 3: hapusData(); 
                break;
            case 4: cetakLaporan(); 
                break;
            case 0: cout << "Keluar dari program...\n"; 
                break;
            default: cout << "Pilihan tidak valid!\n";
        }
    }while(pilihan != 0);
    return 0;
}

void initData(){
    // TODO: Baca dari data_buku.txt dan masukkan ke arrayBuku
}

void saveAppendData(){
    // TODO: Tambahkan 1 data buku ke data_buku.txt (mode ios::app)
}

void saveOverwriteData(){
    // TODO: Tulis ulang file data_buku.txt setelah penghapusan
}

int Hitung_Popularitas(int rating){
    // TODO: Rekursif untuk menghitung skor popularitas
    return 0; 
}

int binarySearch(Buku arr[], int kiri, int kanan, int id_cari){
    // TODO: Cari indeks buku berdasarkan ID
    return -1;
}

void swapData(Buku *a, Buku *b){
    // TODO: Swap dengan pointer
}

int partition(Buku arr[], int low, int high){
    // TODO: Partisi untuk Quick Sort
    return 0;
}

void quickSort(Buku arr[], int low, int high){
    // TODO: Quick Sort berdasarkan ID
}

void tambahData(){
    // TODO: Input data, simpan di array, dan append ke file
}

void lihatData(){
    // TODO: Urutkan dengan Quick Sort, tampilkan dengan skor popularitas
}

void hapusData(){
    // TODO: Cari ID, hapus (shift left), dan overwrite file
}

void cetakLaporan(){
    // TODO: Cetak buku dengan kriteria tertentu ke file laporan.txt
