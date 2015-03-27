#include<iostream>
#include<fstream>
#include<string>
#include"BMI.h"
#include<cstdlib>

using namespace std;

int main()
{
float weight, height,b;
string cate;
BMI bmi;



ifstream inFile("infile", ios::in);
if(!inFile){
	cerr<<"Failed opening"<<endl;
	exit(1);
}

ofstream outFile("outfile",ios::out);
if(!outFile){
	cerr<<"Failed opening"<<endl;
	exit(2);
}

//cout<<"2"<<endl;
//inFile>>weight>>height;
//cout<<weight<<"\t"<<height<<endl;

while(inFile>>height>>weight){
//	if (weight == 0 && height == 0) break;
//cout<<"1"<<endl;
	bmi.setBMI(weight,height);
cout<<weight<<"\t"<<height<<endl;

	b=bmi.getBMI();

	cate=bmi.getC();
cout<<b<<endl;
cout<<cate<<endl;
	outFile<<b<<"\t"<<cate<<endl;

}
return 0;

}
