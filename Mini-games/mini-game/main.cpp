#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    system("chcp 1251>nul");
    setlocale(LC_ALL, "uk_UA");

    std::srand(static_cast<unsigned>(std::time(0)));
    int number = 1 + std::rand() % 100;
    int guess;
    int attempts = 0;

    std::cout << "Вгадай число від 1 до 100.\n";

    while (true) {
        std::cout << "Ваш варіант: ";
        if (!(std::cin >> guess)) {
            
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Некоректне введення. Будь ласка, введіть ціле число.\n";
            continue;
        }

        ++attempts;

        if (guess == number) {
            std::cout << "Вітаю! Ви вгадали число за " << attempts << " спроб.\n";
            break;
        }
        else if (guess < number) {
            std::cout << "Загадане число більше. Спробуйте ще раз.\n";
        }
        else {
            std::cout << "Загадане число менше. Спробуйте ще раз.\n";
        }
    }

    return 0;
}