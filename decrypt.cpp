#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

double round(double number)
{
    return number < 0.0 ? ceil(number - 0.5) : floor(number + 0.5);
}

int main() {

  std::string message [2500];
	std::string done [2500];
	//std::string file;
	char file[64];
	cout << "Filename: ";
	//getline(cin, file);
	cin >> file;


	double pubkey;
	cout << "Decryption Key: ";
	cin >> pubkey;

	int privkey = 37;
	double key = pubkey * privkey;
	double logkey = log(key);
	int i = 0;
	double numbers [2500];
//cout << "Debug Code: 1\n";

	int rawnums[2500];
	double frac[2500];

	int adjust[2500];

	ifstream in (file);
	if (in.is_open())
	{
/*
cout << "Debug Code: 2\n";
	while (in.good())
	{
		//getline(in, message );
		//cout << message << "\n";


	}*/
//cout << "Debug Code: 2\n";
	for (i = 0;; ++i)
	{
		getline (in, message [i]);

		if (message [i] == "DONE"){
		break;
		}

		numbers [i] = atof(message [i].c_str());
		//cout << "4";
		//cout << message [i] << "\n";
		frac[i] = 1 / numbers[i];


		rawnums[i] = int(round(pow(key, frac[i])));

		adjust[i] = rawnums[i] - i;
		//cout << adjust[i] << "\n\n";


switch (adjust[i])
{
case 0:
	done[i] = ' ' ; break;
case 1:
        done[i] = 'a' ; break;
case 2:
        done[i] = 'b' ; break;
case 3:
        done[i] = 'c' ; break;
case 4:
        done[i] = 'd' ; break;
case 5:
        done[i] = 'e' ; break;
case 6:
        done[i] = 'f' ; break;
case 7:
        done[i] = 'g' ; break;
case 8:
        done[i] = 'h' ; break;
case 9:
        done[i] = 'i' ; break;
case 10:
        done[i] = 'j' ; break;
case 11:
        done[i] = 'k' ; break;
case 12:
        done[i] = 'l' ; break;
case 13:
        done[i] = 'm' ; break;
case 14:
        done[i] = 'n' ; break;
case 15:
        done[i] = 'o' ; break;
case 16:
        done[i] = 'p' ; break;
case 17:
        done[i] = 'q' ; break;
case 18:
        done[i] = 'r' ; break;
case 19:
        done[i] = 's' ; break;
case 20:
        done[i] = 't' ; break;
case 21:
        done[i] = 'u' ; break;
case 22:
        done[i] = 'v' ; break;
case 23:
        done[i] = 'w' ; break;
case 24:
        done[i] = 'x' ; break;
case 25:
        done[i] = 'y' ; break;
case 26:
        done[i] = 'z' ; break;
case 27:
        done[i] = 'A' ; break;
case 28:
        done[i] = 'B' ; break;
case 29:
        done[i] = 'C' ; break;
case 30:
        done[i] = 'D' ; break;
case 31:
        done[i] = 'E' ; break;
case 32:
        done[i] = 'F' ; break;
case 33:
        done[i] = 'G' ; break;
case 34:
        done[i] = 'H' ; break;
case 35:
        done[i] = 'I' ; break;
case 36:
        done[i] = 'J' ; break;
case 37:
        done[i] = 'K' ; break;
case 38:
        done[i] = 'L' ; break;
case 39:
        done[i] = 'M' ; break;
case 40:
        done[i] = 'N' ; break;
case 41:
        done[i] = 'O' ; break;
case 42:
        done[i] = 'P' ; break;
case 43:
        done[i] = 'Q' ; break;
case 44:
        done[i] = 'R' ; break;
case 45:
        done[i] = 'S' ; break;
case 46:
        done[i] = 'T' ; break;
case 47:
        done[i] = 'U' ; break;
case 48:
        done[i] = 'V' ; break;
case 49:
        done[i] = 'W' ; break;
case 50:
        done[i] = 'X' ; break;
case 51:
        done[i] = 'Y' ; break;
case 52:
        done[i] = 'Z' ; break;
}

		cout << done[i];


		//i++;

		//if (message [i] == "DONE"){
		//break;
		//}
		//else
		//{}
	}



	in.close();
	}

	cout << "\n";
	return 0;
}
