#include <iostream>
#include <string>
#include <cstdlib>

class Friend {
private:
    std::string name;
    int age;

public:
    Friend(const std::string& name, int age) : name(name), age(age) {}

    std::string greet() const {
        return "Hi, I'm " + name + " and I'm " + std::to_string(age) + " years old.";
    }

    std::string sayFavoriteHobby(const std::string& hobby) const {
        return name + " loves " + hobby + ".";
    }
};

int main(int argc, char* argv[]) {
    std::string name = argv[1];
    int age = std::atoi(argv[1]);
    std::string hobby = argv[2];

    Friend f(name, age);

    std::cout << f.greet() << std::endl;
    std::cout << f.sayFavoriteHobby(hobby) << std::endl;

    return 0;
}
