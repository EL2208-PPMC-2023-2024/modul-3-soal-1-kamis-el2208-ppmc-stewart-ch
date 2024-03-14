/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 3
 *   Hari dan Tanggal    : Kamis 14 Maret 2024
 *   Nama (NIM)          : Stewart Chauniago
 *   Nama File           : main.c
 *   Deskripsi           : Program untuk membuat decode terhadap angka menjadi huruf
 */

#include <stdio.h> 
#include <string.h>
int main(){ 
    long long i, key, loop, kei;  
    // Input Masukkan
    printf("Masukkan key : "); 
    scanf("%lld", &key);

    // Masukkan File yang digunakan :
    char data[100][100];
    int kata = 0;  
    char file[8];
    char test [25]; 
    FILE *address = NULL;  
    printf("Masukkan file : "); 
    scanf("%s", &file);
    address = fopen(file, "r");
    if (address == NULL){
        printf("Tidak Ditemukan"); 
    }
    else {
        while (fscanf(address, "%s", data[kata]) ==1){ 
            kata +=1; 
        }
        int sisa;
        for(i=0; i<15; i++){
            sisa = key%10; 
            key = key-sisa; 
            key= key/10;
            if ((sisa <6) && (i<5)){
                printf("%s ", data[sisa-1]);
            }
            else if ((sisa <6) && (i<10)){
                printf("%s ", data[sisa+4]);
            }
            else{
                printf("%s ", data[sisa+9]); 
            }
        }

        
        }
    }

