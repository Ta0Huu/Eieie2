#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){
    double l, p, y, t;
    int i = 1;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> p;
	cout << "Enter amount you can pay per year: ";
	cin >> y;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (l > 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
	cout << setw(13) << left << l;
	t = l*(p/100);
	cout << setw(13) << left << t;
	cout << setw(13) << left << l+t;
	l = l+t;
	if (l >= y){
	cout << setw(13) << left << y;
	l = l - y;
	}
	else {
	cout << setw(13) << left << l;
	l = 0;
	}
	i++;
	if (l > 0){
	cout << setw(13) << left << l;
	}
	else{
	cout << setw(13) << left << 0.00;
	}
	cout << "\n";
	}
	return 0;
}