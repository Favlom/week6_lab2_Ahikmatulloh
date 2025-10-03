#include <iostream>
using namespace std;


double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
    double futureValue = investmentAmount;
    int totalMonths = years * 12;

    for (int month = 0; month < totalMonths; month++) {
        futureValue = futureValue * (1 + monthlyInterestRate);
    }

    return futureValue;
}

int main() {
    double investmentAmount, annualInterestRate;


    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate (e.g., 9 for 9%): ";
    cin >> annualInterestRate;


    double monthlyInterestRate = annualInterestRate / 100 / 12;


    cout << "\nYears\tFuture Value" << endl;
    cout << "---------------------" << endl;


    for (int years = 1; years <= 30; years++) {
        double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, years);

        int dollars = futureValue;
        int cents = (futureValue - dollars) * 100 + 0.5;

        cout << years << "\t$" << dollars << ".";
        if (cents < 10) cout << "0";
        cout << cents << endl;
    }

    return 0;
}