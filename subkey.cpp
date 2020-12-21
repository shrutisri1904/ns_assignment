#include<bits/stdc++.h>
#include"subkey_header.h"
using namespace std;


void subkey_gen(string left, string right,int key_comp[48], int shift_table[16], vector<string> &rkb,vector<string> &rk)
{
	for (int i = 0; i < 16; i++) {
		// Shifting
		left = shift_left(left, shift_table[i]);
		right = shift_left(right, shift_table[i]);

		// Combining
		string combine = left + right;

		// Key Compression
		string RoundKey = permute(combine, key_comp, 48);

		rkb.push_back(RoundKey);
		rk.push_back(bin2hex(RoundKey));
	}
}
