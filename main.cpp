#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<sstream>
#include"big_number.h"
using namespace std;
int main(){
Hugelnt x;
Hugelnt y(28825252);
Hugelnt z("314159265358979323846");
Hugelnt result;
cin>>x;
result=x+y;
cout<<x<<'+'<<y<<'='<<result<<endl;
result=z-x;
cout<<result<<endl;
return 0;}
