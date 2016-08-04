// RotateImage.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"RotateImage.h"

int main()
{
	int n;
	cin >> n;
	vector<vector<int> > num(n);
	for (int i = 0; i < n; i++) {
		num[i].resize(n);
		for (int j = 0; j < n; j++)
			cin >> num[i][j];
	}
	RotateImage RI;
	RI.rotate(num);
	for (int i = 0; i < n; i++,cout <<'\n')
		for (int j = 0; j < n; j++)
			cout << num[i][j] << ' ';
	exit(0);
    return 0;
}

