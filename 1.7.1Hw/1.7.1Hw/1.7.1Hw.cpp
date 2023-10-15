#include <iostream>

#define MODE 1
#if MODE == 1
int add(int numF, int numS) {
   return numF + numS;
}
#endif

int main() {
   setlocale(LC_ALL, "Russian");

#if defined(MODE)
#if MODE == 0
   std::cout << "Работаю в режиме тренировки" << std::endl;

#elif MODE == 1
   int numF;
   int numS;
   std::cout << "Работаю в боевом режиме" << std::endl;
   std::cout << "Введите число 1: ";
   std::cin >> numF;
   std::cout << "Введите число 2: ";
   std::cin >> numS;
   std::cout << "Результат сложения: " << add(numF, numS);

#elif MODE != 0 && MODE != 1
   std::cout << "Неизвестный режим. Завершение работы";
   return 1;
#else
#error MODE is not defined
#endif
#endif

   return 0;
}