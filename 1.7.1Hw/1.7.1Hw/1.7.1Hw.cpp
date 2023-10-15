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
   std::cout << "������� � ������ ����������" << std::endl;

#elif MODE == 1
   int numF;
   int numS;
   std::cout << "������� � ������ ������" << std::endl;
   std::cout << "������� ����� 1: ";
   std::cin >> numF;
   std::cout << "������� ����� 2: ";
   std::cin >> numS;
   std::cout << "��������� ��������: " << add(numF, numS);

#elif MODE != 0 && MODE != 1
   std::cout << "����������� �����. ���������� ������";
   return 1;
#else
#error MODE is not defined
#endif
#endif

   return 0;
}