#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include"big_number.h"
#include<sstream>
using namespace std;
Hugelnt::Hugelnt(){}
Hugelnt::Hugelnt(long long int i){
int n;
//str=""+i;
stringstream ss;
ss<<i;
str=ss.str();
for(n=0;n<str.length();n++){
vec1.push_back(static_cast<int>(str.at(n))-48);
}
}

Hugelnt::Hugelnt(string one){
	int k,j;
	str = one;
	for(k=0;k<str.length();k++)
	{	
	j=static_cast<int>(str.at(k))-48;
	vec1.push_back(j);
	}
}
const Hugelnt & Hugelnt::operator =(Hugelnt hu){
str=hu.str;
vec1=hu.vec1;
return (*this);}
Hugelnt Hugelnt::operator -(Hugelnt &hu){
Hugelnt ll;
int n,size=(this->vec1.size()>hu.vec1.size())?(this->vec1.size()):(hu.vec1.size());
vector<int>vec2(size);
for(n=0;n<vec1.size();n++)
vec2.at(n)=vec2.at(n)+(((vec1.size()-n-1>=0)?this->vec1.at(vec1.size()-n-1):0));
for(n=0;n<hu.vec1.size();n++){
vec2.at(n)= vec2.at(n)- hu.vec1.at(hu.vec1.size()-n-1);
//-((hu.vec1.size()-n-1>=0)?hu.vec1.at(hu.vec1.size()-n-1):0));
if(vec2.at(n)<0){
vec2.at(n+1)=vec2.at(n+1)-1;
vec2.at(n)=vec2.at(n)+10;
}
}
for(n=size-1;n>=0;n--){
if((n==(size-1))&&(vec2.at(n)==0)){n=n-1;}
ll.vec1.push_back(vec2[n]);}
return (ll);
}
Hugelnt Hugelnt::operator +(Hugelnt &hu){
Hugelnt ll;
int n,size=1+(this->vec1.size()>hu.vec1.size())?(this->vec1.size()):(hu.vec1.size());
vector<int>vec2(size);
for(n=0;n<vec1.size();n++)
vec2.at(n)=vec2.at(n)+(((vec1.size()-n-1>=0)?this->vec1    .at(vec1.size()-n-1):0));
for(n=0;n<hu.vec1.size();n++){
vec2.at(n)= vec2.at(n)+ hu.vec1.at(hu.vec1.size()-n-1);
if(vec2.at(n)>10){
vec2.at(n+1)=vec2.at(n+1)+1;
vec2.at(n)=vec2.at(n)-10;
}
}
 for(n=size-1;n>=0;n--){
 if((n==(size-1))&&(vec2.at(n)==0)){n=n-1;}
 ll.vec1.push_back(vec2[n]);}
return (ll);
}
//for(n=0;n<size;n++){
//vec2.push_back((vec1.size()-n)?this->vec1.at(vec1.size()-n):0+(hu.vec1.size()-n>=0)?hu.vec1.at(hu.vec1.size()-n):0);
//if(vec2.at(n)>9){
//vec2.at(n+1)=vec2.at(n)/10;
//vec2.at(n)=vec2.at(n)%10;
//}
//}
//for(n=vec2.size()-1;n>=0;n--)
//ll.vec1.push_back(vec2.at(n));
//return (ll);
//}
ostream & operator <<(ostream &out,const Hugelnt &hu){
int i;
for(i=0;i<hu.vec1.size();i++)
out<<hu.vec1.at(i);

return out;}
istream & operator >>(istream &in,Hugelnt &hu){
string i;
int j,k;
in>>i;
hu.str=i;
for(k=0;k<i.length();k++)
{
j=static_cast<int>(i.at(k))-48;
hu.vec1.push_back(j);
}

return in;}
