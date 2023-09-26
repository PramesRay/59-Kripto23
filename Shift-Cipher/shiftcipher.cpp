// A C++ program to illustrate Caesar Cipher Technique
#include <iostream>
#include <string.h>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string shiftEncrypt(string text, int s)
{
	string result = "";

	// traverse text
	for (int i = 0; i < text.length(); i++) {
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
    {
			result += char(int(text[i] + s - 65) % 26 + 65);
    }

		// Encrypt Lowercase letters
		else if (islower(text[i]))
    {
			result += char(int(text[i] + s - 97) % 26 + 97);
    }

    else if (isspace(text[i]))
    {
      result += ' ';
    }
	}

	// Return the resulting string
	return result;
}

string shiftDecrypt(string text, int s)
{
	string result = "";

	// traverse text
	for(int i=0;i< text.size(); i++){
		if(isupper(text[i]))
    {
			result += char((int(text[i] - s - 65) % 26 + 26) % 26 + 65);
		}
    else if(islower(text[i]))
    {
			result += char((int(text[i]- s - 97) % 26 + 26) % 26 + 97);
		}
    else if (isspace(text[i]))
    {
      result += ' ';
    }
    
	}
	// Return the resulting string
	return result;
}

int main()
{
	char teks[100];
	int k, menu;

  cout << "[ PROGRAM SHIFT CIPHER ]" << endl;
  cout << "1. Enkripsi" << endl;
  cout << "2. Dekripsi" << endl;
  cout << "3. Keluar" << endl;
  cout << "> ";
    cin >> menu;
  system("cls");

  if (menu == 3)
  {
    return(0);
  }
  
  
  cout << "Teks: ";
    cin.ignore();
    cin.getline(teks, 100);
  cout << "kunci: ";
    cin >> k;

  switch (menu)
  {
    case 1:
      cout << "Teks Cipher: " << shiftEncrypt(teks, k);
      break;
    
    case 2:
      cout << "Teks Cipher: " << shiftDecrypt(teks, k);
      break;
  }
}
