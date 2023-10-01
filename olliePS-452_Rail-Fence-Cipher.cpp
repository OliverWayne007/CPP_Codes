// C++ program to illustrate Rail Fence Cipher
// Encryption and Decryption
#include <bits/stdc++.h>
using namespace std;

// function to encrypt a message
string encryptRailFence(string text, int key)
{
	// create the matrix to cipher plain text
	// key = rows , length(text) = columns
	char rail[key][(text.length())];

	// filling the rail matrix to distinguish filled
	// spaces from blank ones
	for (int i=0; i < key; i++)
		for (int j = 0; j < text.length(); j++)
			rail[i][j] = '\n';

	// to find the direction
	bool dir_down = false;
	int row = 0, col = 0;

	for (int i=0; i < text.length(); i++)
	{
		// check the direction of flow
		// reverse the direction if we've just
		// filled the top or bottom rail
		if (row == 0 || row == key-1)
			dir_down = !dir_down;

		// fill the corresponding alphabet
		rail[row][col++] = text[i];

		// find the next row using direction flag
		dir_down?row++ : row--;
	}

	//now we can construct the cipher using the rail matrix
	string result;
	for (int i=0; i < key; i++)
		for (int j=0; j < text.length(); j++)
			if (rail[i][j]!='\n')
				result.push_back(rail[i][j]);

	return result;
}

// This function receives cipher-text and key
// and returns the original text after decryption
string decryptRailFence(string cipher, int key)
{
	// create the matrix to cipher plain text
	// key = rows , length(text) = columns
	char rail[key][cipher.length()];

	// filling the rail matrix to distinguish filled
	// spaces from blank ones
	for (int i=0; i < key; i++)
		for (int j=0; j < cipher.length(); j++)
			rail[i][j] = '\n';

	// to find the direction
	bool dir_down;

	int row = 0, col = 0;

	// mark the places with '*'
	for (int i=0; i < cipher.length(); i++)
	{
		// check the direction of flow
		if (row == 0)
			dir_down = true;
		if (row == key-1)
			dir_down = false;

		// place the marker
		rail[row][col++] = '*';

		// find the next row using direction flag
		dir_down?row++ : row--;
	}

	// now we can construct the fill the rail matrix
	int index = 0;
	for (int i=0; i<key; i++)
		for (int j=0; j<cipher.length(); j++)
			if (rail[i][j] == '*' && index<cipher.length())
				rail[i][j] = cipher[index++];


	// now read the matrix in zig-zag manner to construct
	// the resultant text
	string result;

	row = 0, col = 0;
	for (int i=0; i< cipher.length(); i++)
	{
		// check the direction of flow
		if (row == 0)
			dir_down = true;
		if (row == key-1)
			dir_down = false;

		// place the marker
		if (rail[row][col] != '*')
			result.push_back(rail[row][col++]);

		// find the next row using direction flag
		dir_down?row++: row--;
	}
	return result;
}

//driver program to check the above functions
int main()
{
    cout << "Name: ARPIT SINGH" << endl;
    cout << "Roll No: 20115016" << endl;
    
    cout << endl;

    cout << "Plain Text: " << "attack at once" << endl;
	cout << "Encrypted Text: " << encryptRailFence("attack at once", 2) << endl;
	cout << "Deciphered Text: " << decryptRailFence(encryptRailFence("attack at once", 2) , 2) << endl;

    cout << endl;

    cout << "Plain Text: " << "My nameis Oliver Queen" << endl;
	cout << "Encrypted Text: " << encryptRailFence("My name is Oliver Queen", 3) << endl;
	cout << "Deciphered Text: " << decryptRailFence(encryptRailFence("My name is Oliver Queen", 3) , 3) << endl;

    cout << endl;

    cout << "Plain Text: " << "You have failed this city" << endl;
	cout << "Encrypted Text: " << encryptRailFence("You have failed this city", 3) << endl;
	cout << "Deciphered Text: " << decryptRailFence(encryptRailFence("You have failed this city", 3) , 3) << endl;

    cout << endl;

	return 0;
}
