#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int pages;
public:
    Book(string t, int p) : title(t), pages(p) {}
    Book(Book other) : title(other.title), pages(other.pages) {}
    void display() { cout << title << " - " << pages << " pages" << endl; }
};

int main() {
    string title;
    int pages;
    cout << "Enter book title and pages: ";
    cin >> title >> pages;
    Book b1(title, pages);
    Book b2 = b1; // This will cause infinite recursion
    b2.display();
    return 0;
}