#include<iostream>
#include<string>
#include"BMI.h"
using namespace std;

BMI::BMI(){}
BMI::BMI(float m, float h){setBMI(m,h);}


void BMI::setBMI(float m,float h){
float a;

mass=m;
height=h;

a=h*h*0.0001;
bmi=m/a;
}
float BMI::getBMI(){
return bmi;
}

string BMI::getC(){
if(bmi<15)c="Very severely underweight";
else if (bmi<16)c="Severely underweight";
else if (bmi<18.5) c="Underweight";
else if (bmi<25) c="Normal";
else if (bmi<30) c="Overweight";
else if (bmi<35) c="Obese Class I (Moderately obese)";
else if (bmi<40) c="Obese Class II (Severely obese)";
else c="Obese Class III (Very severely obese";

return c;
}
