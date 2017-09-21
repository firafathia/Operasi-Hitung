/* Nama		: Fira Nurul Fathia
   Kelas	: SIE-B
   NIM		: 3411151090
*/

#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<math.h>

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int pangkat(int a, int b);
void Fx(int a, int b);
void utama();

void utama(){
	int pilih;

	printf("\t      MENU PERHITUNGAN SEDERHANA");
	printf("\n\t\tTUGAS METODE NUMERIK");
	printf("\n--------------------------------------------------------");
	printf("\t\n\n1. Operasi Penjumlahan");
	printf("\t\n2. Operasi Pengurangan");
	printf("\t\n3. Operasi Perkalian");
	printf("\t\n4. Operasi Perpangkatan");
	printf("\t\n5. Operasi F(x)");
   printf("\t\n6. Keluar");
}

int tambah(int a, int b){
	int nilai;

	nilai = a + b;
	return(nilai);
}

int kurang(int a, int b){
	int nilai;

	nilai = a - b;
	return(nilai);
}

int kali(int a, int b){
	int nilai;

	nilai = a * b;
	return(nilai);
}

int pangkat(int a, int b){
	int nilai;

	nilai = pow(a,b);
	printf("\n%d ^ %d = %d", a, b, nilai);
}

void Fx(int a, int b){
	int q,nilai;

	for(q=a;q<=b;q++){
		nilai = (3*(q*q)  + (1*q) - 1);
      printf("\n3x^2+x-1 : %d", nilai);
	}
}

int main(){
	int a,b,pilih,hasil;

   utama:
   utama();
   printf("\n\nMasukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih){
	case 1:
   	system("cls");
		printf("\t\t\t OPERASI PENJUMLAHAN");
		printf("\n--------------------------------------------------");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B : "); scanf("%d", &b);
		hasil = tambah(a,b);
		printf("\n%d + %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 2:
   	system("cls");
		printf("\t\t OPERASI PENGURANGAN");
		printf("\n--------------------------------------------------");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B : "); scanf("%d", &b);
		hasil = kurang(a,b);
		printf("\n%d - %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 3:
   	system("cls");
		printf("\t\t OPERASI PERKALIAN");
		printf("\n--------------------------------------------------");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B : "); scanf("%d", &b);
		hasil = kali(a,b);
		printf("\n%d * %d = %d",a,b,hasil);

      getch();
      system("cls");
      goto utama;

    case 4:
   	system("cls");
		printf("\t\t OPERASI PANGKAT");
		printf("\n--------------------------------------------------");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B untuk pangkat : "); scanf("%d", &b);
		hasil = pangkat(a,b);

      getch();
      system("cls");
      goto utama;

    case 5:
   	system("cls");
		printf("\t\t OPERASI FUNGSI");
		printf("\n--------------------------------------------------");
		printf("\n\nMasukkan bilangan A : "); scanf("%d", &a);
		printf("\nMasukkan bilangan B : "); scanf("%d", &b);
      Fx(a,b);

      getch();
      system("cls");
      goto utama;

    case 6:
    	system("cls");
    	printf("T E R I M A K A S I H !");
      getch();
    	return 0;
      break;
      default: printf("\n\t\tPilihan Salah!");

      getch();
      system("cls");
      goto utama;

    }
}
