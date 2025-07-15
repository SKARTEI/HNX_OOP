#include <iostream>
#include <string>
using namespace std;

int checkarr[4];
int myarr[4];
int checksecret = 0;
void addfunc(char c);
void removefunc(char c);


int main()
{
	int S, P;
	int result = 0;
	string A;
	
	cin >> S >> P;
	cin >> A;

	for (int i =0; i <4 ; i++) 
	{
		cin >> checkarr[i];
		if (checkarr[i] == 0) 
		{
			checksecret++;
		}
	}

	for (int i = 0; i < P; i++)
	{
		addfunc(A[i]);
	}
	if(checksecret == 4) 
	{
		result++;
	}

	for (int i = P; i < S; i++)
	{
		int j = i - P;
		addfunc(A[i]);

		removefunc(A[j]);

		if(checksecret == 4) 
		{
			result++;
		}
	}

	cout << result << endl;

	return 0;
}

void addfunc(char c)
{
	if (c == 'A') {
		myarr[0]++;
		if (checkarr[0] == myarr[0]) {
			checksecret++;
		}
	}
	else if (c == 'C') {
		myarr[1]++;
		if (checkarr[1] == myarr[1]) {
			checksecret++;
		}
	}
	else if (c == 'G') {
		myarr[2]++;
		if(checkarr[2] == myarr[2]) {
			checksecret++;
		}
	}
	else if (c == 'T') {
		myarr[3]++;
		if (checkarr[3] == myarr[3]) {
			checksecret++;
		}
	}
}


void removefunc(char c)
{
	if (c == 'A') {
		if (myarr[0] == checkarr[0]) checksecret--;
		myarr[0]--;
	}
	else if (c == 'C') {
		if (myarr[1] == checkarr[1]) checksecret--;
		myarr[1]--;
	}
	else if (c == 'G') {
		if (myarr[2] == checkarr[2]) checksecret--;
		myarr[2]--;
	}
	else if (c == 'T') {
		if (myarr[3] == checkarr[3]) checksecret--;
		myarr[3]--;
	}
}