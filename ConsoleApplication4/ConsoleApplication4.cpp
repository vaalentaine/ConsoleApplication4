
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Результат: " << num1 / num2 << endl;
        }
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
        break;
    default:
        cout << "Некорректная операция." << endl;
        break;




    }
        

    int day;
    cout << "Введите номер дня недели (1-7): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    default:
        cout << "Некорректный номер дня." << endl;
        break;
    }



    double amount;
    int currency;

    cout << "Введите сумму: ";
    cin >> amount;
    cout << "Выберите валюту для конвертации:n1 - Доллары в Евроn2 - Евро в Рублиn3 - Рубли в Долларыn";
    cin >> currency;

    switch (currency) {
    case 1:
        cout << "Сумма в евро: " << amount * 0.85 << endl; 
        break;
    case 2:
        cout << "Сумма в рублях: " << amount * 90.0 << endl; 
        break;
    case 3:
        cout << "Сумма в долларах: " << amount * 0.012 << endl;
        break;
    default:
        cout << "Некорректный выбор валюты." << endl;
        break;
    }



    int month;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    switch (month) {
    case 12: case 1: case 2:
        cout << "Зима" << endl;
        break;
    case 3: case 4: case 5:
        cout << "Весна" << endl;
        break;
    case 6: case 7: case 8:
        cout << "Лето" << endl;
        break;
    case 9: case 10: case 11:
        cout << "Осень" << endl;
        break;
    default:
        cout << "Некорректный номер месяца." << endl;
        break;
    }





    char grade;
    cout << "Введите оценку (A, B, C, D, F): ";
    cin >> grade;

    switch (grade) {
    case 'A':
        cout << "Количество баллов: 4.0" << endl;
        break;
    case 'B':
        cout << "Количество баллов: 3.0" << endl;
        break;
    case 'C':
        cout << "Количество баллов: 2.0" << endl;
        break;
    case 'D':
        cout << "Количество баллов: 1.0" << endl;
        break;
    case 'F':
        cout << "Количество баллов: 0.0" << endl;
        break;
    default:
        cout << "Некорректная оценка." << endl;
        break;
    }




    int choice;

    cout << "Выберите напиток:n1 - Чайn2 - Кофеn3 - Сокn4 - Водаn";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Цена чая: 50 рублей." << endl;
        break;
    case 2:
        cout << "Цена кофе: 100 рублей." << endl;
        break;
    case 3:
        cout << "Цена сока: 70 рублей." << endl;
        break;
    case 4:
        cout << "Цена воды: 30 рублей." << endl;
        break;
    default:
        cout << "Некорректный выбор напитка." << endl;
        break;
    }



    int shape;

    cout << "Выберите фигуру:n1 - Кругn2 - Квадратn3 - Треугольникn";
    cin >> shape;

    switch (shape) {
    case 1:
        cout << "Формула для площади круга: S = π * r^2" << endl; 
        break;
    case 2:
        cout << "Формула для площади квадрата: S = a^2" << endl; 
        break;
    case 3:
        cout << "Формула для площади треугольника: S = (a * h) / 2" << endl; 
        break;
    default:
        cout << "Некорректный выбор фигуры." << endl;
        break;
    }



        char ch;

        cout << "Введите символ: ";
        cin >> ch;

        switch (ch) {
        case 'b': case 'B':
            cout << "'b' или 'B' имеет код ASCII: " << int(ch) << endl; 
            break; 

        default:
            cout << "'" << ch << "' имеет код ASCII: " << int(ch) << endl; 
            break;
        }




        int rating;

        cout << "Введите оценку (1-5): ";
        cin >> rating;

        switch (rating) {
        case 1:
            cout << "Очень плохо" << endl;
            break;
        case 2:
            cout << "Плохо" << endl;
            break;
        case 3:
            cout << "Удовлетворительно" << endl;
            break;
        case 4:
            cout << "Хорошо" << endl;
            break;
        case 5:
            cout << "Отлично" << endl;
            break;
        default:
            cout << "Некорректная оценка." << endl;
            break;
        }



        int course;

        cout << "Выберите курс обучения:n1 - Программированиеn2 - Дизайнn3 - Маркетингn4 - Менеджментn";
        cin >> course;

        switch (course) {
        case 1:
            cout << "Курс программирования включает изучение языков программирования и разработки ПО." << endl;
            break;
        case 2:
            cout << "Курс дизайна охватывает графический и веб-дизайн." << endl;
            break;
        case 3:
            cout << "Курс маркетинга включает изучение стратегий продвижения товаров и услуг." << endl;
            break;
        case 4:
            cout << "Курс менеджмента фокусируется на управлении проектами и командами." << endl;
            break;
        default:
            cout << "Некорректный выбор курса." << endl;
            break;
        }

        return 0;
}

