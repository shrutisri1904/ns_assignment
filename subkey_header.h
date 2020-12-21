#include<bits/stdc++.h>
using namespace std;

string hex2bin(string s);
string bin2hex(string s);
string permute(string k, int* arr, int n);
string shift_left(string k, int shifts);
string xor_(string a, string b);
string encrypt(string pt, vector<string> rkb, vector<string> rk);
void subkey_gen(string left, string right,int key_comp[48],int shift_table[16], vector<string> &rkb,vector<string> &rk);
