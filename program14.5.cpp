#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12] = {0};
    int C[12] = {0};
    int I, J, K;
    int total = 0;
    float rataRata;
    
    // Cetak isi array A
    printf("Isi Array A : ");
    for (I=0; I<12; I++) {
        printf("%3i", A[I]);
    }
    
    // Hitung rata-rata
    for (I=0; I<12; I++) {
        total = total + A[I];
    }
    rataRata = (float)total / 12;
    
    printf("\n\nRata-rata Nilai Mahasiswa : %.2f\n", rataRata);
    
    // Pisahkan ke array B (nilai di atas rata-rata) dan C (nilai di bawah rata-rata)
    J = 0;
    K = 0;
    for (I=0; I<12; I++) {
        if (A[I] > rataRata) {
            B[J] = A[I];
            J++;
        } else if (A[I] < rataRata) {
            C[K] = A[I];
            K++;
        }
    }
    
    // Cetak isi array B
    printf("\nIsi Array B : ");
    for (I=0; I<12; I++) {
        printf("%3i", B[I]);
    }
    
    // Cetak isi array C
    printf("\nIsi Array C : ");
    for (I=0; I<12; I++) {
        printf("%3i", C[I]);
    }
    
    return 0;
}