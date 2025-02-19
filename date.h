#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <string>
#include <int>


class Date {
	private:
		std::string dateString;
		std::int month;
		std::int day;
		std::int year;
	public:
		Date();
		void init(dateString);
		void printDate();
};

#endif
