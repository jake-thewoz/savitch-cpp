/*
 * This program caluclates figures for a 'discount installment loan'.
 *
 * It takes 3 inputs: 
 * 	1- the amount the customer needs to receive,
 * 	2- the interest rate,
 * 	3- and the duration in months of the loan.
 *
 * The program's output is: 
 * 	1- the true face value of the loan,
 * 	2- and the monthly payment.
 *
 * The loan works by multiplying the face value by the interest rate,
 * 	(ie $1,000 * 0.15) = 150
 * That interest figure is then multiplied by the loan period in years,
 * 	(ie 150 * 1.5 (18 months)) = 225
 * This interest value is immediately deducted from the face value,
 * resulting in the loan amount the consumer gets.
 * 	(ie $1,000 - 225 = 775)
 * To calculate the monthly payment, we divide the face value by the period
 * in months,
 * 	(ie 1,000 / 18 = 55.56)
 */

#include<iostream>
using namespace std;

int main()
{

	return 0;
}
