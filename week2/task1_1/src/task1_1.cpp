#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Конструктор по умолчанию
    Car() : brand("Unknown"), model("Unknown"), year(0) {}

    // Конструктор с параметрами
    Car(std::string brand, std::string model, int year) : brand(brand), model(model), year(year) {}

    // Геттеры
    std::string getBrand() {
        return brand;
    }

    std::string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    // Сеттеры
    void setBrand(std::string newBrand) {
        brand = newBrand;
    }

    void setModel(std::string newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }
};

class Person {
private:
    std::string name;
    int age;

public:
    // Конструктор по умолчанию
    Person() : name("Unknown"), age(0) {}

    // Конструктор с параметрами
    Person(std::string name, int age) : name(name), age(age) {}

    // Геттеры
    std::string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    // Сеттеры
    void setName(std::string newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Создание экземпляров классов Car и Person
    Car car("Lada", "Xray", 2020);
    Person person("Vlad", 21);

    // Вывод данных экземпляров классов
    std::cout << "Car: " << car.getBrand() << " " << car.getModel() << " " << car.getYear() << std::endl;
    std::cout << "Person: " << person.getName() << " " << person.getAge() << " years old" << std::endl;

    return 0;
}

