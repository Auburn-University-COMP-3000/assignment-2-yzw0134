
#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;

bool isLeapYear(int year);
int getCenturyValue(int year);
int getYearValue(int year);
int getMonthValue(int month, int year);

int main() {

    int month;
    int day = 0;
    int year = 0;
    int sum = 0;
    int day_of_week = 0;
    
    string day_string = "";

        cout << "enter the month" << endl;

        cin >> month;

while (month < 1 || month > 12){

        cout << "please give a valid month";
        cin >> month; 
    }

    cout << "enter a day" << endl;

    cin >> day; 

    if (month == 4 || month == 6|| month == 9 || month ==11 ){

        while (day < 1 || day > 30) {
			cout << "Enter a value between 1 and 30:";
			cin  >> day;
		}



    }
    // Calculate the day of week
	sum = day + getMonthValue(month,year) + getYearValue(year) + getCenturyValue(year);
	day_of_week = sum % 7;
	
	// Find corresponding day name
	switch(day_of_week) {

        case 0: 
           day_string = "Sunday"; 
           break; 

        case 1:
            day_string = "Monday";
            break;
        case 2:
            day_string = "Tuesday";
            break;
        case 3: 
            day_string = "Wednesday";
            break;
        case 4:
            day_string = "Thursday";
            break;
        case 5:
            day_string = "Friday";
            break;
        case 6:
            day_string = "Saturday";
            break;    
    }

    cout << day_string;
    return 0; 

}

bool isLeapYear(int year){
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int getCenturyValue(int year) {
    int century = 0,
	    century_value = 0;

	century = year / 100;
	century_value = (3 - (century % 4)) * 2;
	return century_value;
}
int getYearValue(int year){
    int last_two = year % 100;
    int leapcal = last_two / 4;
    return last_two + leapcal;
}
int getMonthValue(int month, int year){
switch(month){
    case 1:
            if(isLeapYear(year)){
                    return 6;
                }
            return 0;
    
    case 2:
           if(isLeapYear(year)){
                    return 2;
            }
            return 3;
  
    case 3:
        return 3;
   
    case 4:
        return 6;
 
    case 5:
        return 1;
    
    case 6:
        return 4;
   
    case 7:
        return 6;
    
    case 8:
        return 2;
   
    case 9:
        return 5;
    
    case 10:
        return 0;
  
    case 11:
        return 3;
    
    case 12:
        return 5;
  


}

}