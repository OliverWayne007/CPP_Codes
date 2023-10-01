// Caesar-Cipher
#include <bits/stdc++.h>
using namespace std;

string encrypt(string text, int s)
{
	string result = "";

	for (int i = 0; i < text.length(); i++) 
	{
		if (isupper(text[i]))
		{
			result += char(int(text[i] + s - 65) % 26 + 65);
		}
		else
		{
			result += char(int(text[i] + s - 97) % 26 + 97);
		}
	}
	return result;
}

string decrypt(string text, int s)
{
	string result = "";

	for (int i = 0; i < text.length(); i++) 
	{
		if (isupper(text[i]))
		{
			result += char(int(text[i] - s - 65) % 26 + 65);
		}
		else
		{
			result += char(int(text[i] - s - 97) % 26 + 97);
		}
	}
	return result;
}

int main()
{
	string PlainText = "OLIVERQUEEN";
	int shift = 4;
	string Cipher = encrypt(PlainText, shift);
	cout << "PlainText : " << PlainText << endl;
	cout << "Shift: " << shift << endl;
	cout << "CipherText: " << encrypt(PlainText, shift) << endl;
	cout << "DecryptedText: " << decrypt(Cipher , shift) << endl;
	return 0;
}
