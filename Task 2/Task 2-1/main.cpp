это вариант 2 
делал сам так как этот вариант никто из группы не делал
делал по вашим видео

#define _USE_MATH_DEFINES
 #include <iostream>
 #include <cmath>
 using namespace std;
 
/**
 * \brief Рассчитывает периметр треугольника.
 * \param first первый катет прямоугольного треугольника.
 * \param second второй катет прямоугольного треугольника.
 * \return периметр треугольника.
 */
 double getPerimetr(double first, double second);
 
/**
 * \brief Рассчитывает площадь треугольника.
 * \param first первый катет прямоугольного треугольника.
 * \param second второй катет прямоугольного треугольника.
 * \return площадь треугольника.
 */
 double getArea(double first, double second);
 
 /**
 * \brief считать сторону трегольника из консоли.
 * \param message побуждающая надпись для пользователя.
 * \return сторона треугольника треугольника.
 */
 double getSide( const string& message = "");
 
/**
 * \brief пользовательский ввод
 * \param PERIMETR расчет периметра треугольника
 * \param AREA расчет площади треугольника
 */
 enum class userInput
 {
     PERIMETR = 1,
     AREA
 };
 
/**
 * \brief
 * \return
 */
 int main()
 {
    try 
    {
     const double first = getSide("Введите значение первого катета треугольника = ");
     const double second = getSide("Введите значение второго катета треугольника = ");
     
     
     cout << "Введите число,соответствующее заданию.\n"
     << static_cast<int>(userInput::AREA) << "- вычесление площади треугольника.\n "
     << static_cast<int>(userInput::PERIMETR) << "- вычесление периметра треугольника.\n "
     
     int input = 0;
     cin >> input;
     const auto choice = static_cast<userInput>(input);
     
     switch(choice)
     {
     case userInput::AREA:
         {
             const auto area = getArea(first,second);
             cout << "Площадь треугольника = " << area;
             break;
         }
     case userInput::PERIMETR:
         {
             const auto perimetr = getPerimetr(first,second);
             cout << "Периметр треугольника = " << perimetr;
             break;
         }
     }
     
    }
     catch (out_of_range&)
     {
         cout << "Введена неправильная сторона!";
         return 1;
     }
     return 0;
 }
 
 double getPerimetr(const double first, const double second)
 {
     return first + second + sqrt(pow(first,2) + pow(second,2))
 }
 
 double getArea(const double first, const double second)
 {
     return (first * second)/2
 }
 
 double getSide(const string& message)
 {
     cout << message;
     double side = 0.0;
     cin >> side;
     if (side < = 0)
     {
         throw out_of_range("Введена неправильная сторона!");
     }
     
     return side;
 }
 
