#include<stdio.h>
#include<iostream>


using namespace std;

// Asal sayıları veren kod

bool asalmi(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	
	//cout << asalmi(19) << endl;

	int count = 1;
	for (int i = 2; count <= 20; i++) {
		if(asalmi(i)){
			cout << count << ". asal sayi : " << i << endl;
			count++;
		}
	}
	return 0;
}

/*
int ust(int t, int u) {
	int sonuc = 1;

	for (int i = 1; i <= u; i++) {
		sonuc = sonuc * i;
	}
	return sonuc;
}

int main() {
	//İlk 20 Mersanne sayısını veren kod (2^n)-1...

	for (int i = 1; i <= 20; i++) {
		cout << ust(2, i)-1 << endl;
	}
	return 0;
}*/


/*
int faktoriyelr(int n) {
	if (n == 1)
		return 1;
	return n * faktoriyelr(n - 1);
}

int func(int f) {
	if (f == 1)
		return 1;
	return f * func(f - 1);
}

int faktoriyel(int x) {
	int carpim = 1;
	for (int i = x; i > 0; i--) {
		carpim *= i;
	}
	return carpim;
}

int kombinasyon(int n, int r) {
	return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
}

//******************************************
int main() {

	cout << faktoriyel(3) << endl;
	cout << faktoriyel(6) << endl;
	cout << kombinasyon(5, 2) << endl;
	cout << faktoriyelr(5) << endl;
	cout << func(4) << endl;
	
	return 0;

}*/
