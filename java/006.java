class Animal {
    String name;

    public Animal(String name) {
        this.name = name;
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println(name + " says woof");
    }

}

    public class 006{

    public static void main(String[] args) {
        Dog d = new Dog("Fido");
        d.bark();
    }
}
