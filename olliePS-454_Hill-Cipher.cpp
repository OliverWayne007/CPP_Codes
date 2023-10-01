// Hill-Cipher
#include <bits/stdc++.h>
using namespace std;

void getKeyMatrix(string key, int keyMatrix[][3])
{
	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			keyMatrix[i][j] = (key[k]) % 65;
			k++;
		}
	}
}

void encrypt(int cipherMatrix[][1] , int keyMatrix[][3] , int messageVector[][1])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cipherMatrix[i][j] = 0;
		
			for (int x = 0; x < 3; x++)
			{
				cipherMatrix[i][j] += keyMatrix[i][x] * messageVector[x][j];
			}
		
			cipherMatrix[i][j] = cipherMatrix[i][j] % 26;
		}
	}
}

void HillCipher(string message, string key)
{
	int keyMatrix[3][3];
	getKeyMatrix(key, keyMatrix);

	cout << "KeyMatrix: " << endl;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			cout << keyMatrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int messageVector[3][1];

	for (int i = 0; i < 3; i++)
	{
		messageVector[i][0] = (message[i]) % 65;
	}

	int cipherMatrix[3][1];

	encrypt(cipherMatrix, keyMatrix, messageVector);

	string CipherText;

	for (int i = 0; i < 3; i++)
	{
		CipherText += cipherMatrix[i][0] + 65;
	}

	cout << "CipherText: " << CipherText << endl;
}

int main()
{
	string PlainText = "ACT";
	string key = "GYBNQKURP";

	cout << "PlainText: ACT" << endl;
	cout << "KeyString: GYBNQKURP" << endl;
	cout << endl;
	HillCipher(PlainText , key);

	return 0;
}