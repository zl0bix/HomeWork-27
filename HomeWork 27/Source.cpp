#include<iostream>
#include<string>
//#include"Functions.h"
struct movies {
	std::string title{};
	int year{ 1920 };
	std::string genre{};
	unsigned int duration{ 1 };
	unsigned int price{ 0 };
};
void show_movie(const movies& S1);
int expensive(const movies& S1, const movies& S2, const movies& S3);
void update_info(const movies& S,int num);

int main() {
	setlocale(LC_ALL, "rus");
	movies move1 = {
		"Title",
		2022,
		"Genre",
		95,
		150
	};
	show_movie(move1);
	movies move2 = {
		"Title1",
		2020,
		"Genre1",
		90,
		99
	};
	movies move3 = {
		"Title2",
		2021,
		"Genre2",
		105,
		1150
	};
	std::cout<<expensive(move1, move2, move3);
	int n;
	//show_movie(S);
	std::cout << "Выберите, какую информацию о фильме необходимо обновить -> ";
	//do
		std::cin >> n;
	//while (n < 1 && n>5);
	std::cout << std::endl;
	update_info(move1,n);
	
	return 0;
}
void show_movie(const movies& S1) {
	std::cout <<"Название фильма -> " << S1.title << std::endl;
	std::cout <<"Год выхода фильма -> "<< S1.year << std::endl;
	std::cout <<"Жанр фильма -> " << S1.genre << std::endl;
	std::cout <<"Продолжительность фильма в минутах -> " << S1.duration << std::endl;
	std::cout <<"Цена за диск фильма -> " << S1.price << std::endl;
	std::cout << std::endl;
}
int expensive(const movies& S1, const movies& S2, const movies& S3) {
	if(S1.price >= S2.price && S1.price >= S3.price)
	return S1.price;
	if (S2.price > S1.price && S2.price >= S3.price)
		return S2.price;
	if (S3.price > S1.price && S3.price > S2.price)
		return S3.price;
}
void update_info(movies& S, int num) {
	//show_movie(S);
	switch (num) {
	case 1: {
		std::cout << "Название фильма -> ";
		std::cin.ignore();
		std::getline(std::cin, S.title);
		break; }
	case 2: {
		std::cout << "Год выхода фильма -> ";
		std::cin >> S.year;
		break; }

	case 3: {
		std::cout << "Жанр фильма -> ";
		std::cin.ignore();
		std::getline(std::cin, S.genre);
		break; }
	case 4: {
		std::cout << "Продолжительность фильма в минутах -> ";
		std::cin >> S.year;
		break; }
	case 5: {
		std::cout << "Цена за диск фильма -> ";
		std::cin >> S.price;
		break; }

	default:
		std::cout<<std::endl;
	}
	std::cout << "Информация обновлена.";
}
