// pr1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() 
{//zad1
    int n, max;
    std::cout << "n = ";
    std::cin >> n;
    max = 0;
    while (n) 
    {
        if (n % 10 > max)
        {
            max = n % 10;
        }
        n /= 10;
    }
    std::cout << "Result: " << max << "\n";
 //zad2
    int a, b;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    a = a +b;
    b = a-b;
    a = a-b;
    std::cout << a; "\n";
    std::cout << b;
}

