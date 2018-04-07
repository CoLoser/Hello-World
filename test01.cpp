#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int overflow(const char* key) {
	int right;
	char buf[8];
	right = strcmp("12345", key);
	strcpy(buf, key);
	return right;
}

int main()
{
	string s = "123412341234hello world";
	int t = overflow(s.c_str());
	cout << t << endl;
}