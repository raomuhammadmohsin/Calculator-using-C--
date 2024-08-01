#include<iostream>
#include <stdlib.h>
#include<math.h>
#include<cmath>
using namespace std;

	double add(double a,double b)
	{
	return a+b;
	}
	double sub(double a,double b)
	{
	return a-b;
	}
	double mult(double a,double b)
	{
	return a*b;
	}
	double divid(double a,double b)
	{
	return a/b;
	}
	double power(double base,double exp)
	{
		if(exp==1){
		return base;
		}else
		return base*power(base,exp-1);
	}
	double mod(int a,int b)
	{
	return a%b;
	}
	double square_root(double a)
	{
	double sqrt(a);
	}
	double square(double a)
	{
	return a*a;
	}
	int mix(double result){
	result = 0;
  char operation;
  double number;

  cout << "Enter a number: ";
  cin >> result;

  do {
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
      cout << "Enter a number: ";
      cin >> number;

      if (operation == '+') {
        result += number;
      } else if (operation == '-') {
        result -= number;
      } else if (operation == '*') {
        result *= number;
      } else if (operation == '/') {
        result /= number;
      }
    }
  } while (operation != '=');

  cout << "The Answer is =" << result <<endl;
	
}	
	int OctalToBinary(int octalNum) {
   int decimalNum = 0, binaryNum = 0, i = 0;

   while(octalNum != 0) {
      decimalNum += (octalNum%10) * pow(8,i);
      ++i;
      octalNum/=10;
   }
   i = 1;
   while (decimalNum != 0) {
      binaryNum += (decimalNum % 2) * i;
      decimalNum /= 2;
      i *= 10;
   }
   return binaryNum;
}
int HexadecimalToBinary(int hexadecimalNum) {
   int decimalNum = 0, binaryNum = 0, i = 0;

   while(hexadecimalNum != 0) {
      decimalNum += (hexadecimalNum%10) * pow(16,i);
      ++i;
      hexadecimalNum/=10;
   }
   i = 1;
   while (decimalNum != 0) {
      binaryNum += (decimalNum % 2) * i;
      decimalNum /= 2;
      i *= 10;
   }
   return binaryNum;
}
int decimaltoBinary(int decimalnum){
		int decimal,binary=0,rem,i=1;
	cout<<"Enter decimal number="<<endl;
	cin>>decimal;
	while(decimal!=0){
		rem=decimal % 2;
		binary=binary+(rem*i);
		decimal=decimal/2;
		i*=10;
	}

	return binary;
}

int binarytoDecimal(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}
int BinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
int BinarytoHexadecimal(long long binaryNumber)
{
    int HexadecimlaNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        HexadecimlaNumber += (decimalNumber % 16) * i;
        decimalNumber /= 16;
        i *= 10;
    }

    return HexadecimlaNumber;
}
int decimalToHexadeciml(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 16;
        decimalNumber /= 16;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}
int hexadecimalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(16, i);
        ++i;
    }
    return decimalNumber;
}


int main(){
	double n1,n2,answer;
	int m;
	char func;
	system("cls");
	cout<<"WHAT WOULD YOU LIKE TO DO:"<<endl;
	cout<<"PRESS '1' for addition:"<<endl;
	cout<<"PRESS '2' for subtraction:"<<endl;
	cout<<"PRESS '3' for multiplication:"<<endl;
	cout<<"PRESS '4' for divide:"<<endl;
	cout<<"PRESS '5' for power:"<<endl;
	cout<<"PRESS '6' for modulus:"<<endl;
	cout<<"PRESS '7' for square_root:"<<endl;
	cout<<"PRESS '8' for square:"<<endl;
	cout<<"PRESS '9' for sin:"<<endl;
	cout<<"PRESS '10' for cos:"<<endl;
	cout<<"PRESS '11' for tan:"<<endl;
	cout<<"PRESS '12' for log:"<<endl;
	cout<<"PRESS '13' for Absolute value:"<<endl;
	cout<<"PRESS '14' for MIX OPERATION:"<<endl;
	cout<<"PRESS '15' FOR OCTAL NUMBER INTO BINARY:"<<endl;
	cout<<"PRESS '16' FOR HEXADECIMAL NUMBER INTO BINARY:"<<endl;
	cout<<"PRESS '17' FOR DECIMAL NUMBER INTO BINARY:"<<endl;
	cout<<"PRESS '18' FOR DECIMAL NUMBER INTO OCTAL:"<<endl;
	cout<<"PRESS '19' FOR OCTAL NUMBER INTO DECIMAL:"<<endl;
	cout<<"PRESS '20' FOR BINARY NUMBER INTO DECIMAL:"<<endl;
	cout<<"PRESS '21' FOR BINARY NUMBER INTO OCTAL:"<<endl;
	cout<<"PRESS '22' FOR BINARY NUMBER INTO HEXADECIMAL:"<<endl;
	cout<<"PRESS '23' FOR DECIMAL NUMBER INTO HEXADECIMAL:"<<endl;
	cout<<"PRESS '24' FOR HEXADECIMAL NUMBER INTO DECIMAL:"<<endl;


cin>>m;
while(true){
switch(m)
{
	case 1:cout<<"Enter two number for addition:"<<endl;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	answer=add(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 2:cout<<"Enter two number for subtraction:"<<endl;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	answer=sub(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 3:cout<<"Enter two number for multiplication:"<<endl;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	answer=mult(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;	
	case 4:cout<<"Enter two number for division:"<<endl;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	answer=divid(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 5:cout<<"Enter two number to calculate power:"<<endl;
	cout<<"Enter BASE number=";
	cin>>n1;
	cout<<"Enter EXPONENT number=";
	cin>>n2;
	answer=power(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 6:cout<<"Enter two number for modulus:"<<endl;
	cout<<"Enter first number=";
	cin>>n1;
	cout<<"Enter second number=";
	cin>>n2;
	answer=mod(n1,n2);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 7:cout<<"Enter number for taking square_root:"<<endl;
	cout<<"Enter a number=";
	cin>>n1;
	answer=square_root(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
    case 8:cout<<"Enter two number for taking square:"<<endl;
	cout<<"Enter the number=";
	cin>>n1;
	answer=square(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 9:cout<<"Enter two number for calculating SIN:"<<endl;
	cout<<"Enter the value of SIN =";
	cin>>n1;
	answer=sin(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 10:cout<<"Enter two number for calculating COS:"<<endl;
	cout<<"Enter the value of COS =";
	cin>>n1;
	answer=cos(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 11:cout<<"Enter two number for calculating TAN:"<<endl;
	cout<<"Enter the value of TAN =";
	cin>>n1;
	answer=tan(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 12:cout<<"Enter two number for calculating LOG:"<<endl;
	cout<<"Enter the value of LOG=";
	cin>>n1;
	answer=log(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 13 :cout<<"Enter two number for calculating absolute value:"<<endl;
	cout<<"Enter the number=";
	cin>>n1;
	answer=abs(n1);
	cout<<"The Answer is="<<answer<<endl;
	break;
	case 14:cout<<"Enter number to calculate MIX FUNCTION:"<<endl;
	answer=mix(n1);
	break;
	case 15:cout<<"Enter number to calculate OCTAL TO BINARY"<<endl;
    cout<<"Enter number =";
    cin>>n1;
    cout <<" Octal to Binary:"<<endl;
    cout<<"Octal number= "<<n1<<endl;
    cout<<"Binary number= "<<OctalToBinary(n1)<<endl;
    break;
    case 16:cout<<"Enter number to calculate HEXADECIMAL TO BINARY"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" Hexadecimal to Binary:"<<endl;
    cout<<"Hexadecimal number= "<<n1<<endl;
    cout<<"Binary number= "<<HexadecimalToBinary(n1)<<endl;
    break;
    case 17:cout<<"Enter number to calculate DECIMAL TO BINARY"<<endl;
   	answer= decimaltoBinary(n1);
   	cout<<"Binary number is ="<<answer<<endl;
   	break;
    case 18:cout<<"Enter number to calculate  DECIMAL TO OCTAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" Decimal TO OCTAL:"<<endl;
    cout<<"DECIMAL number= "<<n1<<endl;
    cout<<"OCTAL number= "<<decimalToOctal(n1)<<endl;
    break;
    case 19:cout<<"Enter number to calculate   OCTAL TO DECIMAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" OCTAL TO DECIMAL:"<<endl;
    cout<<" OCTAL number= "<<n1<<endl;
    cout<<" DECIMAL number= "<<octalToDecimal(n1)<<endl;
    break;
    case 20:cout<<"Enter number to calculate BINARY TO DECIMAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" Binary TO Decimal:"<<endl;
    cout<<"Binary number= "<<n1<<endl;
    cout<<"Decimal number= "<<binarytoDecimal(n1)<<endl;
    break;
    case 21:cout<<"Enter number to calculate BINARY TO OCTAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" Binary TO Octal:"<<endl;
    cout<<"Binary number= "<<n1<<endl;
    cout<<"Octal number= "<<BinarytoOctal(n1)<<endl;  
    break;
    case 22:cout<<"Enter number to calculate BINARY TO HEXADECIMAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" Binary TO Hexadecimal:"<<endl;
    cout<<"Binary number= "<<n1<<endl;
    cout<<"Hexadecimal number= "<<BinarytoHexadecimal(n1)<<endl;
    break;
    case 23:cout<<"Enter number to calculate DECIMAL TO HEXADECIMAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" DECIMAL TO HEXADECIMAL:"<<endl;
    cout<<"Decimal number= "<<n1<<endl;
    cout<<"Hexadecimal number= "<<decimalToHexadeciml(n1)<<endl;
    break;
    case 24:cout<<"Enter number to calculate  HEXADECIMAL TO DECIMAL"<<endl;
	cout<<"Enter number =";
    cin>>n1;
    cout <<" HEXADECIMAL TO DECIMAL :"<<endl;
    cout<<"Hexadecimal number= "<<n1<<endl;
    cout<<"Decimal number= "<<hexadecimalToDecimal(n1)<<endl;    
    break;
	return 0;
}
cout<<"do another(y/n)";
cin>>func;
if(func=='y')
main();
else
exit(0);
}
}



