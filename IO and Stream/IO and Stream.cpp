#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
	std::string name;
	double population;
	int price;
};

struct Country {
	std::string name;
	std::vector<City> cities;
};

struct Tour {
	std::string title;
	std::vector<Country> countries;
};

static void display(Tour& t) {
	int offset = 50 - t.title.length();
	std::cout << std::setw(offset / 2) << "" << t.title << std::endl;
	std::cout << std::endl;
	std::cout << std::left << std::setw(20) << "Country" << std::setw(10) << "City" << std::setw(10) << std::right << "Population" << std::setw(10) << std::right << "Price" << std::endl;
	std::cout << std::setw(50) << std::cout.fill('-') << std::setfill(' ') << std::endl;
	for (auto& country : t.countries) {
		int count = 0;
		std::cout << std::left << std::setw(20) << country.name;
		for (auto& city : country.cities) {
			if (count != 0) {
				std::cout << std::setfill(' ') << std::setw(20) << ' ';
			}
			std::cout << std::setw(10) << std::left << city.name;
			std::cout << std::setw(10) << std::right << city.population;
			std::cout << std::setw(10) << std::right << city.price;
			std::cout << std::endl;
			count++;
		}
	}
}

int main()
{
	Tour firstTour;

	firstTour.title = "Tour across the EU";
	firstTour.countries = {
		{
			"Spain",
				{
					{"Madrid", 3.46, 1464},
					{"Barcelona", 1.70, 1529},
					{"Valencia", 0.81, 1278}
				},
		},
		{
			"France",
				{
					{"Paris", 2.1, 4000}
				}
		},
		{
			"Finland",
				{
					{"Helsinki", 0.58, 1758},
					{"Espoo", 0.27, 1521}
				}
		}
	};

	display(firstTour);
	return 0;
}


