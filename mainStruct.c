// secara teknis: membuat tipe data baru custom yang berisi kumpulan variable / data lain. Tipe data baru ini menjadi "kerangka" untuk variabel baru.
// secara bahasa bayi: buat objek dengan atribut tertentu. Di C ini adalah Object-Oriented Programming dasar.

// struktur struct:

/*

struct <nama_struct> {
    <tipe_data_member> <nama_member>;
    <tipe_data_member> <nama_member>;
    <tipe_data_member> <nama_member>;
    .
    .
    .
};

atau lebih formal: 

typedef struct {
    <tipe_data_member> <nama_member>;
    <tipe_data_member> <nama_member>;
    <tipe_data_member> <nama_member>;
} <nama_struct>;

*/

// pembuatan struct di atas hanya membuat kerangka aja. Semacam macro #define tapi kita buat tipe data baru.

#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[100];
    char nrp[20];
    int umur;
    double ipk;
    int semester;
    int status;
};

int main(void)
{
    struct Mahasiswa mhs1;

    strcpy(mhs1.nama, "Ahmad");
    strcpy(mhs1.nrp, "05111940000012");
    mhs1.umur = 18;
    mhs1.ipk = 3.94;
    mhs1.semester = 3;
    mhs1.status = 1;

    printf("Nama\t: %s\n", mhs1.nama);
    printf("NRP\t: %s\n", mhs1.nrp);
    printf("Umur\t: %d\n", mhs1.umur);
    printf("IPK\t: %.2lf\n", mhs1.ipk);
    printf("Sem\t: %d\n", mhs1.semester);
    printf("Status\t: %s\n", (mhs1.status == 1 ? "Aktif" : "Tidak Aktif"));
    
    return 0;
}

// Mahasiswa menjadi tipe data baru dan mhs1 bersifat seperti vairable (bisa dideklarasikan sebagai array);