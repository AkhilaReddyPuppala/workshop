#include<iostream>
#include <string>
using namespace std;
int timeAM(int, int, int);
int timePM(int, int, int);
void printTime(int, int, int, int);
int main()
{
int time;
int minutes;
int hours;
int tens;

cout << "Please enter a time in the 24 hour clock format: " << endl;
cin >> hours >> tens >> minutes;

if (hours > 0 && hours < 12)
time = timeAM(hours, tens, minutes);

else
time = timePM(hours,tens, minutes);

cout << hours << " " << tens << " " << minutes << " " << time;

return 0;
}
int timeAM(int hours, int tens, int minutes)
{
switch (hours)
{
case '1' :
case '13': cout << "One";
break;
case '2' :
case '14': cout << "Two";
break;
case '3' :
case '15': cout << "Three";
break;
case '4' :
case '16': cout << "Four";
break;
case '5' :
case '17': cout << "Five";
break;
case '6' :
case '18': cout << "Six";
break;
case '7' :
case '19': cout << "Seven";
break;
case '8' :
case '20': cout << "Eight";
break;
case '9' :
case '21': cout << "Nine";
break;
case '10':
case '22': cout << "Ten";
break;
case '11':
case '23': cout << "Eleven";
break;
case '12': cout << "Noon";
}
switch(tens)
{
case '20': cout << "twenty";
break;
case '30': cout << "thirty";
break;
case '40': cout << "forty";
break;
case '50': cout << "fifty";
}
switch(minutes)
{
case '1': cout << "one";
break;
case '2': cout << "two";
break;
case '3': cout << "three";
break;
case '4': cout << "four";
break;
case '5': cout << "five";
break;
case '6': cout << "six";
break;
case '7': cout << "seven";
break;
case '8': cout << "eight";
break;
case '9': cout << "nine";
break;
case '10': cout << "ten";
break;
case '11': cout << "eleven";
break;
case '12': cout << "twelve";
break;
case '13': cout << "thirteen";
break;
case '14': cout << "fourteen";
break;
case '15': cout << "fifthteen";
break;
case '16': cout << "sixteen";
break;
case '17': cout << "seventeen";
break;
case '18': cout << "eighteen";
break;
case '19': cout << "nineteen";
break;
}
return hours;
}
int timePM(int hours, int tens, int minutes)
{
switch (hours)
{
case '1' :
case '13': cout << "One";
break;
case '2' :
case '14': cout << "Two";
break;
case '3' :
case '15': cout << "Three";
break;
case '4' :
case '16': cout << "Four";
break;
case '5' :
case '17': cout << "Five";
break;
case '6' :
case '18': cout << "Six";
break;
case '7' :
case '19': cout << "Seven";
break;
case '8' :
case '20': cout << "Eight";
break;
case '9' :
case '21': cout << "Nine";
break;
case '10':
case '22': cout << "Ten";
break;
case '11':
case '23': cout << "Eleven";
break;
case '12': cout << "Noon";
}
switch(tens)
{
case '20': cout << "twenty";
break;
case '30': cout << "thirty";
break;
case '40': cout << "forty";
break;
case '50': cout << "fifty";
}
switch(minutes)
{
case '1': cout << "one";
break;
case '2': cout << "two";
break;
case '3': cout << "three";
break;
case '4': cout << "four";
break;
case '5': cout << "five";
break;
case '6': cout << "six";
break;
case '7': cout << "seven";
break;
case '8': cout << "eight";
break;
case '9': cout << "nine";
break;
case '10': cout << "ten";
break;
case '11': cout << "eleven";
break;
case '12': cout << "twelve";
break;
case '13': cout << "thirteen";
break;
case '14': cout << "fourteen";
break;
case '15': cout << "fifthteen";
break;
case '16': cout << "sixteen";
break;
case '17': cout << "seventeen";
break;
case '18': cout << "eighteen";
break;
case '19': cout << "nineteen";
break;
}

return 0;
}

void printTime(int hours, int tens, int minutes, int time)
{
cout << hours << " " << tens << " " << minutes << " " << time;
system("pause");
return;
}

