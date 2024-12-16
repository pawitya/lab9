#include <iostream>
#include <iomanip> // For output formatting
using namespace std;

int main() {

    double l, D, P, interest, total, prevBalance;
    int year = 1;

    cout << "Enter initial loan: ";
    cin >> l;

    cout << "Enter interest rate per year (%): ";
    cin >> D;

    cout << "Enter amount you can pay per year: ";
    cin >> P;

    cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

    prevBalance = l;

    while (prevBalance > 0) {
        interest = (prevBalance * D) / 100;
        total = prevBalance + interest;
        double payment = (total < P) ? total : P;
        double newBalance = total - payment;
        cout << setw(13) << year
             << setw(13) << fixed << setprecision(2) << prevBalance
             << setw(13) << interest
             << setw(13) << total
             << setw(13) << payment
             << setw(13) << newBalance << endl;
        prevBalance = newBalance;
        year++;
    }

    return 0;
}
