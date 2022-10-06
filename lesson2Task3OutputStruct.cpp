#include <iostream>
#include <string>

struct dataCity {

	std::string country_name;
	std::string name_of_the_city;
	std::string name_of_the_street;
	int house_number;
	int apartment_number;
	int index;
};

void outputConsole(dataCity& d) {
	std::cout << "������: " << d.country_name << std::endl;
	std::cout << "�����: " << d.name_of_the_city << std::endl;
	std::cout << "�����: " << d.name_of_the_street << std::endl;
	std::cout << "����� ����: " << d.house_number << std::endl;
	std::cout << "����� ��������: " << d.apartment_number << std::endl;
	std::cout << "������: " << d.index << std::endl;
}

int main(int argc, char** argv) {

	setlocale(LC_ALL, "rus");

	dataCity info;

	std::string countryName;
	std::string cityName;
	std::string streetName;
	int houseNumber;
	int appartmentNumber;
	int indexNumber;

	std::cout << "������� �������� ������: ";
	std::cin >> countryName;

	std::cout << "������� �������� ������: ";
	std::cin >> cityName;

	std::cout << "������� �������� �����: ";
	std::cin >> streetName;

	std::cout << "������� ����� ����: ";
	std::cin >> houseNumber;

	std::cout << "������� ��������: ";
	std::cin >> appartmentNumber;

	std::cout << "������� ������: ";
	std::cin >> indexNumber;

	info.country_name = countryName;
	info.name_of_the_city = cityName;
	info.name_of_the_street = streetName;
	info.house_number = houseNumber;
	info.apartment_number = appartmentNumber;
	info.index = indexNumber;

	std::cout << std::endl;

	outputConsole(info);

	return 0;
}
