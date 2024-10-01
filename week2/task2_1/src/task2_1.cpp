#include <iostream>
#include <string>
#include <ctime>

class Student {
private:
    std::string name;
    tm birthDate; // Структура tm используется для хранения даты и времени
    std::string group;
    int studentId;
    float averageScore;

public:
    // Конструктор
    Student(std::string name, tm birthDate, std::string group, int studentId, float averageScore)
        : name(name), birthDate(birthDate), group(group), studentId(studentId), averageScore(averageScore) {}

    // Методы для получения и установки значений полей
    void setName(std::string name) {
        this->name = name;
    }

    std::string getName() {
        return name;
    }

    void setBirthDate(tm birthDate) {
        this->birthDate = birthDate;
    }

    tm getBirthDate() {
        return birthDate;
    }

    void setGroup(std::string group) {
        this->group = group;
    }

    std::string getGroup() {
        return group;
    }

    void setStudentId(int studentId) {
        this->studentId = studentId;
    }

    int getStudentId() {
        return studentId;
    }

    void setAverageScore(float averageScore) {
        this->averageScore = averageScore;
    }

    float getAverageScore() {
        return averageScore;
    }

    // Метод для вычисления возраста студента
    int getAge() {
        time_t now;
        time(&now);
        tm* currentTime = localtime(&now);
        int currentYear = currentTime->tm_year + 1900;
        int birthYear = birthDate.tm_year + 1900;
        return currentYear - birthYear;
    }

    // Метод для проверки, является ли студент отличником
    bool isExcellentStudent() {
        return averageScore >= 4.8;
    }

    // Метод для вывода информации о студенте
    void toString() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Birth Date: " << asctime(&birthDate);
        std::cout << "Group: " << group << std::endl;
        std::cout << "Student ID: " << studentId << std::endl;
        std::cout << "Average Score: " << averageScore << std::endl;
    }
};

int main() {
    struct tm birthDate = {0, 0, 0, 12, 9, 102}; // Пример заполнения структуры tm для даты рождения
    Student student1("Vlad", birthDate, "23IB1b", 12345, 3.5);
    Student student2("Andrey", birthDate, "A102", 67890, 4.5);

    student1.toString();
    std::cout << "Age: " << student1.getAge() << " years" << std::endl;
    std::cout << "Is student1 an excellent student? " << (student1.isExcellentStudent() ? "Yes" : "No") << std::endl;

    std::cout << std::endl;

    student2.toString();
    std::cout << "Age: " << student2.getAge() << " years" << std::endl;
    std::cout << "Is student2 an excellent student? " << (student2.isExcellentStudent() ? "Yes" : "No") << std::endl;

    return 0;
}

