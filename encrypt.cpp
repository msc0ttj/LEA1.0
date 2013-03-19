#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

int main() {

  std::string input;
	cout << "Message: ";
	getline(cin, input);

	int pubkey;
	cout << "Encryption Key: ";
	cin >> pubkey;


	int privkey = 37;
	double key = pubkey * privkey;
	double logkey = log(key);

	int stringsize = input.size();
	int strsz = stringsize - 1;
	int intstr[strsz];
	double dubstr[strsz];
	double encrypted[strsz];

	ofstream output;
	output.open ("encrypted.lgc", ios::trunc);
	output.close();



	for (int i = 0; i < input.size(); i++){

		intstr[i] = input[i];

switch (input[i])
{
case ' ':
	intstr[i] = 0; break;
case 'a':
        intstr[i] = 1; break;
case 'b':
        intstr[i] = 2; break;
case 'c':
        intstr[i] = 3; break;
case 'd':
        intstr[i] = 4; break;
case 'e':
        intstr[i] = 5; break;
case 'f':
        intstr[i] = 6; break;
case 'g':
        intstr[i] = 7; break;
case 'h':
        intstr[i] = 8; break;
case 'i':
        intstr[i] = 9; break;
case 'j':
        intstr[i] = 10; break;
case 'k':
        intstr[i] = 11; break;
case 'l':
        intstr[i] = 12; break;
case 'm':
        intstr[i] = 13; break;
case 'n':
        intstr[i] = 14; break;
case 'o':
        intstr[i] = 15; break;
case 'p':
        intstr[i] = 16; break;
case 'q':
        intstr[i] = 17; break;
case 'r':
        intstr[i] = 18; break;
case 's':
        intstr[i] = 19; break;
case 't':
        intstr[i] = 20; break;
case 'u':
        intstr[i] = 21; break;
case 'v':
        intstr[i] = 22; break;
case 'w':
        intstr[i] = 23; break;
case 'x':
        intstr[i] = 24; break;
case 'y':
        intstr[i] = 25; break;
case 'z':
        intstr[i] = 26; break;


case 'A':
        intstr[i] = 27; break;
case 'B':
        intstr[i] = 28; break;
case 'C':
        intstr[i] = 29; break;
case 'D':
        intstr[i] = 30; break;
case 'E':
        intstr[i] = 31; break;
case 'F':
        intstr[i] = 32; break;
case 'G':
        intstr[i] = 33; break;
case 'H':
        intstr[i] = 34; break;
case 'I':
        intstr[i] = 35; break;
case 'J':
        intstr[i] = 36; break;
case 'K':
        intstr[i] = 37; break;
case 'L':
        intstr[i] = 38; break;
case 'M':
        intstr[i] = 39; break;
case 'N':
        intstr[i] = 40; break;
case 'O':
        intstr[i] = 41; break;
case 'P':
        intstr[i] = 42; break;
case 'Q':
        intstr[i] = 43; break;
case 'R':
        intstr[i] = 44; break;
case 'S':
        intstr[i] = 45; break;
case 'T':
        intstr[i] = 46; break;
case 'U':
        intstr[i] = 47; break;
case 'V':
        intstr[i] = 48; break;
case 'W':
        intstr[i] = 49; break;
case 'X':
        intstr[i] = 50; break;
case 'Y':
        intstr[i] = 51; break;
case 'Z':
        intstr[i] = 52; break;


}
intstr[i] = intstr[i] + i;
cout << intstr[i] << "     ";
dubstr[i] = double(intstr[i]);

encrypted[i] = logkey / log(dubstr[i]);

cout << encrypted[i] << "\n";


output.open ("encrypted.lea", ios::out | ios::app);
output << encrypted[i] << "\n";
output.close();




}
output.open ("encrypted.lea", ios::out | ios::app);
output << "DONE\n";
output.close();


cout << "\nMessage Encrypted :)\n";

















return 0;
}
