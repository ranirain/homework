#include <iostream>
#include <string>

// Создание класса Author
class Author {
private:
    std::string name;
    int birthYear;
public:
    // Конструктор класса Author
    Author(std::string authorName, int yearOfBirth) {
        name = authorName;
        birthYear = yearOfBirth;
    }

    // Методы установки и получения информации об авторе
    void setName(std::string authorName) {
        name = authorName;
    }

    void setBirthYear(int yearOfBirth) {
        birthYear = yearOfBirth;
    }

    std::string getName() {
        return name;
    }

    int getBirthYear() {
        return birthYear;
    }
};

// Создание класса Book
class Book {
private:
    std::string title;
    Author author;

public:
    Book(std::string bookTitle, Author bookAuthor) : title(bookTitle), author(bookAuthor) {}

    // Методы установки и получения информации об авторе книги
    void setAuthorInfo(std::string authorName, int yearOfBirth) {
        author.setName(authorName);
        author.setBirthYear(yearOfBirth);
    }

    std::string getAuthorName() {
        return author.getName();
    }

    int getAuthorBirthYear() {
        return author.getBirthYear();
    }

    std::string getTitle() {
        return title;
    }
};

int main() {
    Author author("Джек Лондон", 1876);
    Book book("Мартин Иден", author);

    std::cout << "Book Title: " << book.getTitle() << std::endl;
    std::cout << "Author: " << book.getAuthorName() << std::endl;
    std::cout << "Author's Birth Year: " << book.getAuthorBirthYear() << std::endl;

    // Обновляем информацию об авторе
    book.setAuthorInfo("A$AP Rocky", 1990);
    std::cout << "\nUpdated Author Information:\n";
    std::cout << "Author: " << book.getAuthorName() << std::endl;
    std::cout << "Author's Birth Year: " << book.getAuthorBirthYear() << std::endl;

    return 0;
}

