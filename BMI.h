#include<iostream>
#include<string>
using namespace std;
class BMI{
public:
BMI();
BMI(float m,float h);

float getBMI();
void setBMI(float m,float h);
string getC();

private:
float mass, height,bmi;
string c;
};

