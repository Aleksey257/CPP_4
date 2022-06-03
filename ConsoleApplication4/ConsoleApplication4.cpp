
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");

    int a;
    int b;
    int c;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите первое число: ";
    std::cin >> b;
    std::cout << "Cреднее арифметическое = " << (a + b)/2 << "\n";
    std::cout << "Выбери знак операции (1 - Сложение, 2 - Вычитание, 3 - Умножение, 4 - Деление): ";
    std::cin >> c;
 //   if (c == 1)
 //       std::cout << (a + b);
 //   else if (c == 2)
 //       std::cout << (a - b);
 //   else if (c == 3)
 //       std::cout << (a * b);
 //   else if (c == 4)
 //      std::cout << (a / b);
 //  else
 //       std::cout << "Неккоретный ввод";
    switch (c) {
    case 1:
       std::cout << (a + b);
        break;
    case 2:
        std::cout << (a - b);
        break;
     case 3:
        std::cout << (a * b);
        break;
    case 4:
        std::cout << (a / b);
        break;
    default:
       std::cout << "Неккоретный ввод";
    }
    }
