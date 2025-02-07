#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
using namespace std;


//struct Monitor {
//    string name;
//    int warranty;
//    double price;
//};
//
//bool compareByPrice(const Monitor& a, const Monitor& b) {
//    return a.price > b.price;
//}
//
//int main() {
//    int n;
//    cout << "Введіть кількість моніторів: ";
//    cin >> n;
//
//    vector<Monitor> monitors(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Монітор " << i + 1 << ":\n";
//        cout << "  Найменування: ";
//        cin >> monitors[i].name;
//        cout << "  Термін гарантії (у місяцях): ";
//        cin >> monitors[i].warranty;
//        cout << "  Ціна: ";
//        cin >> monitors[i].price;
//    }
//
//    sort(monitors.begin(), monitors.end(), compareByPrice);
//
//    cout << "\nСписок моніторів у порядку спадання ціни:\n";
//    for (const auto& m : monitors) {
//        cout << "  " << m.name << " | Гарантія: " << m.warranty << " міс. | Ціна: " << m.price << " грн\n";
//    }
//
//    return 0;
//}


//struct CarData {
//    string engine;
//    string color;
//    int owners;
//};
//
//struct Car {
//    string brand;
//    string model;
//    int year;
//    double price;
//    bool bargain;
//    CarData details;
//};
//
//void printCars(const vector<Car>& cars) {
//    cout << left << setw(12) << "Марка" << setw(12) << "Модель" << setw(8) << "Рік"
//        << setw(10) << "Ціна" << setw(6) << "Торг" << setw(12) << "Двигун"
//        << setw(12) << "Колір" << setw(10) << "Власники" << endl;
//    cout << string(80, '-') << endl;
//
//    for (const auto& car : cars) {
//        cout << left << setw(12) << car.brand << setw(12) << car.model << setw(8) << car.year
//            << setw(10) << car.price << setw(6) << (car.bargain ? "Так" : "Ні")
//            << setw(12) << car.details.engine << setw(12) << car.details.color
//            << setw(10) << car.details.owners << endl;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Введіть кількість автомобілів: ";
//    cin >> n;
//
//    vector<Car> cars(n);
//
//    for (int i = 0; i < n; i++) {
//        cout << "Авто " << i + 1 << ":\n";
//        cout << "  Марка: ";
//        cin >> cars[i].brand;
//        cout << "  Модель: ";
//        cin >> cars[i].model;
//        cout << "  Рік випуску: ";
//        cin >> cars[i].year;
//        cout << "  Ціна: ";
//        cin >> cars[i].price;
//        cout << "  Торг (1 - так, 0 - ні): ";
//        cin >> cars[i].bargain;
//        cout << "  Двигун: ";
//        cin >> cars[i].details.engine;
//        cout << "  Колір: ";
//        cin >> cars[i].details.color;
//        cout << "  Кількість власників: ";
//        cin >> cars[i].details.owners;
//    }
//
//    cout << "\nСписок автомобілів:\n";
//    printCars(cars);
//
//    return 0;
//}



//typedef struct {
//    string surname;
//    char gender;
//    double averageGrade;
//} Student;
//
//int main() {
//    int n;
//    cout << "Введіть кількість студентів: ";
//    cin >> n;
//
//    vector<Student> students(n);
//    double sumMale = 0, sumFemale = 0;
//    int countMale = 0, countFemale = 0;
//
//    for (int i = 0; i < n; i++) {
//        cout << "Студент " << i + 1 << ":\n";
//        cout << "  Прізвище: ";
//        cin >> students[i].surname;
//        cout << "  Стать (M/F): ";
//        cin >> students[i].gender;
//        cout << "  Середній бал: ";
//        cin >> students[i].averageGrade;
//
//        if (students[i].gender == 'M' || students[i].gender == 'm') {
//            sumMale += students[i].averageGrade;
//            countMale++;
//        }
//        else {
//            sumFemale += students[i].averageGrade;
//            countFemale++;
//        }
//    }
//
//    double avgMale = (countMale > 0) ? sumMale / countMale : 0;
//    double avgFemale = (countFemale > 0) ? sumFemale / countFemale : 0;
//
//    cout << "\nПідсумки:\n";
//    cout << "  Середній бал юнаків: " << avgMale << endl;
//    cout << "  Середній бал дівчат: " << avgFemale << endl;
//
//    if (avgMale > avgFemale)
//        cout << "Юнаки мають вищий середній бал.\n";
//    else if (avgFemale > avgMale)
//        cout << "Дівчата мають вищий середній бал.\n";
//    else
//        cout << "Середній бал однаковий у хлопців та дівчат.\n";
//
//    return 0;
//}


