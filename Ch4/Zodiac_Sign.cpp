// What is your zodiac sign
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int dob;
    string month;
    cout<<"Enter Birthday Month (e.g. jan=january): ";cin>>month;
    cout<<"Enter Birthday Date:";cin>>dob;
if ((month=="jan" && dob<=19 ) || (month=="dec" && dob>=22))
{
    cout<<"Capricon";
}
else if ((month=="jan" && dob>=20 ) || (month=="feb" && dob<=17))
{
    cout<<"Aquarius";
}
else if ((month=="feb" && dob>=18 ) || (month=="mar" && dob<=19))
{
    cout<<"Pisces";
}
else if ((month=="mar" && dob>=20 ) || (month=="apr" && dob<=19))
{
    cout<<"Aries";
}
else if ((month=="apr" && dob>=20 ) || (month=="may" && dob<=20))
{
    cout<<"Taurus";
}
else if ((month=="may" && dob>=21 ) || (month=="jun" && dob<=20))
{
    cout<<"Gemini";
}
else if ((month=="jun" && dob>=21 ) || (month=="jul" && dob<=22))
{
    cout<<"Cancer";
}
else if ((month=="jul" && dob>=23 ) || (month=="aug" && dob<=22))
{
    cout<<"Leo";
}
else if ((month=="aug" && dob>=23 ) || (month=="sep" && dob<=22))
{
    cout<<"Virgo";
}
else if ((month=="sep" && dob>=23 ) || (month=="oct" && dob<=22))
{
    cout<<"Libra";
}
else if ((month=="oct" && dob>=23 ) || (month=="nov" && dob<=21))
{
    cout<<"Scorpio";
}
else if ((month=="nov" && dob>=22 ) || (month=="dec" && dob<=21))
{
    cout<<"Sagittarius";
}
 return 0;
}