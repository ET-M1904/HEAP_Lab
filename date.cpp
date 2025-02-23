#include "date.h"
#include <iostream>

Date::Date(){
	month = "";
	day = "";
	year = "";
};

void Date::init(std::string dateString){
	std::stringsteam ss(dateString)

	Date::month = tMonth;
	Date::day = tDay;
	Date::year = tYear;

	std::string tMonth;
	std::string tDay;
	std::string tYear;

	ss.clear();
	ss.str(dateString);

	getline(ss, tMonth, '/');
	getline(ss, tDay, '/');
	getline(ss, tYear);

	ss.clear();
	ss.str("");

	ss << tDay << " " << tMonth << " " << tYear;
	ss >> day >> month >> year;
};

void Date::printDate(){
	std::string months[] = { "Null", "January", "Febuary",
	       			"March", "April", "May", "June",
			       	"July", "August", "September",
				"October", "November", "December"};
	std::cout << months[month] << " ";
	std::cout << day << ", " << year << std::endl;
};




