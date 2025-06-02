import java.util.Scanner;

class Student {
    private String name;
    private int[] grades;

    public Student(String name, int[] grades) {
        this.name = name;
        this.grades = grades;
    }

    public double average() {
        int sum = 0;
        for (int grade : grades)
            sum += grade;

        // ❌ Bug: Cast is in the wrong place — sum / grades.length is int division
        // (decimal part is truncated)
        return grades.length == 0 ? 0 : (int) (sum / grades.length);
    }

    public void printInfo() {
        System.out.printf("Student: %s, Average: %.2f%n", name, average());
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        String[] gradeStrings = sc.nextLine().split(" ");
        int[] grades = new int[gradeStrings.length];
        for (int i = 0; i < gradeStrings.length; i++) {
            grades[i] = Integer.parseInt(gradeStrings[i]);
        }
        Student student = new Student(name, grades);
        student.printInfo();
    }
}
