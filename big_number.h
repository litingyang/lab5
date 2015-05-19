#ifndef BIGNUMER_H
#define BIGNUMER_H
#include<iostream>
#include<vector>
class Huglet{
Huglet(){};
friend ostream &operator<<(ostream&,const Huglet& hu);
friend istream &operator>>(istream&,const Huglet& hu);



privite:
vector<int>vec1;

};
#endif
