#ifndef BIGNUMER_H
#define BIGNUMER_H
#include<iostream>
#include<vector>
#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<sstream>
using namespace std;
class Hugelnt{
	friend ostream & operator <<(ostream &,const Hugelnt &);
	friend istream & operator >>(istream &,Hugelnt &);
	public:
	Hugelnt();
	Hugelnt(long long int );

	Hugelnt(string);
	const Hugelnt & operator =(Hugelnt );
	Hugelnt operator -(Hugelnt &);
	Hugelnt operator +(Hugelnt &);
private:
vector<int>vec1;
string str;
};
ostream & operator <<(ostream &,const Hugelnt &);
	istream & operator >>(istream &,Hugelnt &);
#endif
