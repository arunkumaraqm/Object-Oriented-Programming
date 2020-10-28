// Simple interest

#include <iostream>
class Loan
{
	double amount;
	int years;
	double rate;

	public:
	Loan() : amount(0), years(0), rate(0) {}
	Loan(double amount, int years, double rate) 
	: amount(amount), years(years), rate(rate) {}

	friend void operator<<(std::ostream& out, const Loan& loan);
	friend double simple_interest(const Loan& loan);

};

void operator<<(std::ostream& out, const Loan& loan)
{
	out << "Loan of " << loan.amount
		<< " for " << loan.years << " years at "
		<< loan.rate << "% rate.\n"; 
}

inline double simple_interest(const Loan& loan)
{
	return loan.amount * loan.years * loan.rate  / 100;
}

int main()
{
	Loan myloan(100, 5, 10);
	std::cout << myloan;
	std::cout << "Simple Interest = " 
	          << simple_interest(myloan) << '\n';
}