// Learning Book C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*(Enforcing Privacy with Cryptography) The explosive growth of Internet communications
and data storage on Internet-connected computers has greatly increased privacy concerns. The field
of cryptography is concerned with coding data to make it difficult (and hopefully—with the most
advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a
simple scheme for encrypting and decrypting data. A company that wants to send data over the Internet has asked you to write a program that will encrypt the data so that it may be transmitted more
securely. All the data is transmitted as four-digit integers. Your application should read a four-digit
integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7
to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit
with the third, and swap the second digit with the fourth. Then print the encrypted integer. Write
a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the
encryption scheme) to form the original number. [Optional reading project: Research “public key
cryptography” in general and the PGP (Pretty Good Privacy) specific public-key scheme. You may
also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]*/

#include <iostream>
using namespace std;


int main()
{
		int number;
	int digit1, digit2, digit3, digit4;
	int temp;
	cout << "Enter a four digit number: ";
	cin >> number;
	digit1 = number / 1000;
	digit2 = (number % 1000) / 100;
	digit3 = (number % 100) / 10;
	digit4 = number % 10;
	digit1 = (digit1 + 7) % 10;
	digit2 = (digit2 + 7) % 10;
	digit3 = (digit3 + 7) % 10;
	digit4 = (digit4 + 7) % 10;
	temp = digit1;
	digit1 = digit3;
	digit3 = temp;
	temp = digit2;
	digit2 = digit4;
	digit4 = temp;
	cout << "Encrypted number: " << digit1 << digit2 << digit3 << digit4 << endl;
	return 0;
		

	
	
}



