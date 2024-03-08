

#include <iostream>
using namespace std;

int a[20];			// Deklarasi array a dengan ukuran 20
int n;				// Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {		// Procedur untuk input
	while (true) {	// Looping
		cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
		cin >> n;	// Input dari pengguna
		if (n <= 20)// Jika n kurang dari atau sama dengan 20
			break;  // Keluar dari loop
		else {		// Jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n"; // Output ke layar 
		}
	}
	cout << endl;							// Output baris kosong
	cout << "===================" << endl;  // Output ke layar
	cout << "Masukan Elemen Array" << endl; // Output ke layar
	cout << "===================" << endl;  // Output ke layar

	for (int i = 0; i < n; 1++) {   // Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": ";  // Output ke layar
		cin >> a[i];                    // Input dari pengguna
	}
} 

void bubbleSortArray() {   // procedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1; // step 1

	do {
		for (int j = 0; j <= n - 1 - pass; j++) { // step 2

			if (a[j] > a[j + 1]) { // step 3
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		pass = pass + 1; //step 4

	} while (pass <= n - 1); // step 5
} 


