// ============================================================
// C Programming Journey — c_programming_journey.c
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025
// ============================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// ============================================================
// 01 — Hello Deniz
// Topic: First printf, printing text to screen
// Note : 21/02/2026 time 21:21 First code written by Deniz Kaygusuz (age 9) — a memory
// ============================================================
void practice01() {
    printf("Hello, I am Deniz!\n");
}

// ============================================================
// 02 — Square of a Number
// Topic: int variable, multiplication operator
// ============================================================
void practice02() {
    int number, square;
    printf("Please enter a number: "); scanf("%i", &number);
    square = number * number;
    printf("The square of %i is %i\n", number, square);
}

// ============================================================
// 03 — Addition
// Topic: Two int variables, scanf, arithmetic operator
// ============================================================
void practice03() {
    int first_number;
    int second_number;
    printf("Enter first number: "); scanf("%i", &first_number);
    printf("Enter second number: "); scanf("%i", &second_number);
    int total = first_number + second_number;
    printf("First number %i + Second number %i = %i\n", first_number, second_number, total);
}

// ============================================================
// 04 — Price Calculator
// Topic: float variable, multiplication, %.2f format
// ============================================================
void practice04() {
    float price;
    int quantity;
    printf("Enter price: "); scanf("%f", &price);
    printf("Enter quantity: "); scanf("%i", &quantity);
    float total_price = price * quantity;
    printf("You bought %i items. Total cost: £%.2f\n", quantity, total_price);
}

// ============================================================
// 05 — Age Calculator
// Topic: int variable, subtraction, fixed year value
// ============================================================
void practice05() {
    int year_of_birth;
    int year_now = 2026;
    int age;
    printf("Please enter your year of birth: "); scanf("%i", &year_of_birth);
    age = year_now - year_of_birth;
    printf("You were born in %i, it is now %i - That means you will turn %i this year!\n", year_of_birth, year_now, age);
}

// ============================================================
// 06 — Height Converter (cm to metres)
// Topic: int/float casting, division
// ============================================================
void practice06() {
    int height;
    float meter;
    printf("Please enter your height in cm: "); scanf("%i", &height);
    meter = (float)height / 100;
    printf("You are %.2f meters tall\n", meter);
}

// ============================================================
// 07 — Find the Larger of Two Numbers
// Topic: int variables, if/else, comparison operator
// ============================================================
void practice07() {
    int number1 = 0;
    int number2 = 0;

    printf("This program compares two numbers.\n");

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    if (number1 > number2) {
        printf("%d is greater than %d\n", number1, number2);
    }
    else if (number1 < number2) {
        printf("%d is greater than %d\n", number2, number1);
    }
    else {
        printf("Both numbers are equal: %d and %d\n", number1, number2);
    }
}

// ============================================================
// 08 — Average of Three Numbers
// Topic: int variables, sum, float casting, division
// ============================================================
void practice08() {
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0;
    float average = 0;

    printf("This program calculates averages.\n");

    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    printf("Enter the third number: ");
    scanf("%d", &number3);

    sum = number1 + number2 + number3;
    average = (float)sum / 3;

    printf("The average of %d, %d, %d is %.2f\n", number1, number2, number3, average);
}

// ============================================================
// 09 — Average (for loop — how many numbers)
// Topic: for loop, counter, running total, float casting
// ============================================================
void practice09() {
    int count = 0;
    int number = 0;
    int sum = 0;
    float average = 0;

    printf("How many numbers will you enter? ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);
        sum += number;
    }

    average = (float)sum / count;

    printf("The average of %d numbers is %.2f\n", count, average);
}

// ============================================================
// 10 — Average (while loop — enter 0 to finish)
// Topic: while loop, break condition, running total, float casting
// ============================================================
void practice10() {
    int number = 0;
    int sum = 0;
    int count = 0;
    float average = 0;

    printf("Enter numbers (enter 0 to finish):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("The average of %d numbers is %.2f\n", count, average);
    } else {
        printf("No numbers were entered.\n");
    }
}

// ============================================================
// 11 — Fahrenheit <-> Celsius Converter
// Topic: char input, if/else, float calculation, formula
// ============================================================
void practice11() {
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F): "); scanf(" %c", &choice);

    if (choice == 'C') {
        printf("Enter the temperature in Celsius: "); scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);
    }
    else if (choice == 'F') {
        printf("Enter the temperature in Fahrenheit: "); scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius\n", fahrenheit, celsius);
    }
    else {
        printf("Invalid choice! Please select C or F\n");
    }
}

// ============================================================
// 12 — Weight Converter (kg <-> pounds)
// Topic: int menu, float calculation, if/else
// ============================================================
void practice12() {
    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): "); scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if (choice == 2) {
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else {
        printf("Invalid choice! Please enter 1 or 2\n");
    }
}

// ============================================================
// 13 — Sphere Calculator (area, surface area, volume)
// Topic: double, pow(), const, math.h
// ============================================================
void practice13() {
    double radius = 0.0;
    double area = 0.0;
    double surface_area = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surface_area = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area         : %.2lf\n", area);
    printf("Surface area : %.2lf\n", surface_area);
    printf("Volume       : %.2lf\n", volume);
}

// ============================================================
// 14 — Age Check
// Topic: if / else — basic condition structure
// ============================================================
void practice14() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age < 18)
        printf("You CANNOT BUY ALCOHOL\n");
    else
        printf("You CAN BUY ALCOHOL\n");
}

// ============================================================
// 15 — Speed Check
// Topic: if / else if / else, comparison operators
// ============================================================
void practice15() {
    int speed, speed_limit;
    printf("Enter your speed: "); scanf("%i", &speed);
    printf("Enter the speed limit: "); scanf("%i", &speed_limit);
    if (speed > speed_limit)
        printf("You are speeding! Slow down! Your speed is %i and the speed limit is %i\n", speed, speed_limit);
    else if (speed == speed_limit)
        printf("You are at the speed limit. Drive safely!\n");
    else
        printf("You are driving within the speed limit. Good job!\n");
}

// ============================================================
// 16 — Ticket Price
// Topic: if / else if / else, float calculation, age groups
// ============================================================
void practice16() {
    int age;
    float price = 4;
    float ticket_price = price;
    printf("How old are you? "); scanf("%i", &age);
    if (age < 4) {
        ticket_price = 0;
        printf("Your ticket is free!\n");
    }
    else if (age >= 4 && age < 16) {
        ticket_price = price / 2;
        printf("Your ticket price is £%.2f\n", ticket_price);
    }
    else if (age >= 16 && age < 65) {
        ticket_price = price;
        printf("Your ticket price is £%.2f\n", ticket_price);
    }
    else {
        ticket_price = price / 3;
        printf("Your ticket price is £%.2f\n", ticket_price);
    }
}

// ============================================================
// 17 — April Fools Day
// Topic: if / else, && (AND) logical operator
// ============================================================
void practice17() {
    int day, month;
    printf("Please enter day and month: "); scanf("%i %i", &day, &month);
    if (day == 1 && month == 4)
        printf("Happy April Fools Day!\n");
    else
        printf("Today is not April Fools Day\n");
}

// ============================================================
// 18 — Age Comparison
// Topic: if / else if, equality and less-than operators
// ============================================================
void practice18() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age <= 8)
        printf("Wow, people start using computers early!\n");
    else if (age == 49)
        printf("Hey! We are the same age!\n");
}

// ============================================================
// 19 — Discount Calculator (nested if, bool)
// Topic: bool type, nested if/else, float multiplication
// ============================================================
void practice19() {
    float price = 10.00;
    bool is_student = false;
    bool is_senior = true;

    if (is_student) {
        if (is_senior) {
            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7;
        }
        else {
            printf("You get a student discount of 10%%\n");
            price *= 0.9;
        }
    }
    else {
        if (is_senior) {
            printf("You get a senior discount of 20%%\n");
            price *= 0.8;
        }
    }
    printf("The price of the ticket is: £%.2f\n", price);
}

// ============================================================
// 20 — Positive / Negative / Odd / Even
// Topic: nested if/else, modulo (%) operator
// ============================================================
void practice20() {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input, please enter a number\n"); return;
    }
    if (number == 0)
        printf("The number %d is zero.\n", number);
    else if (number < 0) {
        if (number % 2 == 0)
            printf("The number %d is negative and even.\n", number);
        else
            printf("The number %d is negative and odd.\n", number);
    }
    else {
        if (number % 2 == 0)
            printf("The number %d is positive and even.\n", number);
        else
            printf("The number %d is positive and odd.\n", number);
    }
}

// ============================================================
// 21 — Traffic Light
// Topic: switch / case / default — basic usage
// ============================================================
void practice21() {
    int light;
    printf("Enter number for traffic light (1=Red, 2=Yellow, 3=Green): "); scanf(" %d", &light);
    switch (light) {
        case 1: printf("Stop\n"); break;
        case 2: printf("Get Ready\n"); break;
        case 3: printf("Go\n"); break;
        default: printf("Invalid input\n");
    }
}

// ============================================================
// 22 — Restaurant Menu
// Topic: switch / case / default, user selection
// ============================================================
void practice22() {
    int menu;
    printf("1=Pizza  2=Pasta  3=Salad  4=Soup\nSelect (1-4): "); scanf(" %d", &menu);
    switch (menu) {
        case 1: printf("You selected Pizza\n"); break;
        case 2: printf("You selected Pasta\n"); break;
        case 3: printf("You selected Salad\n"); break;
        case 4: printf("You selected Soup\n"); break;
        default: printf("Out of range\n");
    }
}

// ============================================================
// 23 — Grade System
// Topic: switch, grouping cases using division (grade/10)
// ============================================================
void practice23() {
    int grade;
    printf("Enter your grade (0-100): "); scanf(" %d", &grade);
    switch (grade / 10) {
        case 10:
        case 9:  printf("Grade is A\n"); break;
        case 8:  printf("Grade is B\n"); break;
        case 7:  printf("Grade is C\n"); break;
        case 6:  printf("Grade is D\n"); break;
        default: printf("Grade is F\n");
    }
}

// ============================================================
// 24 — Calculator
// Topic: switch, char type, double casting
// ============================================================
void practice24() {
    int number1, number2;
    char op;
    printf("Enter first number: "); scanf("%d", &number1);
    printf("Enter second number: "); scanf("%d", &number2);
    printf("Choose operator ( + - * / ): "); scanf(" %c", &op);
    switch (op) {
        case '+': { int sum = number1 + number2;
            printf("%d + %d = %d\n", number1, number2, sum); break; }
        case '-': { int sub = number1 - number2;
            printf("%d - %d = %d\n", number1, number2, sub); break; }
        case '*': { int mul = number1 * number2;
            printf("%d * %d = %d\n", number1, number2, mul); break; }
        case '/': { double div = (double)number1 / number2;
            printf("%d / %d = %.2lf\n", number1, number2, div); break; }
        default: printf("Invalid operator\n");
    }
}

// ============================================================
// 25 — Day and Time (Nested Switch)
// Topic: nested switch / case
// ============================================================
void practice25() {
    int day, time;
    printf("Enter day (1=Mon, 2=Tue, 3=Wed, 4=Thu, 5=Fri, 6=Sat, 7=Sun): "); scanf("%i", &day);
    printf("Enter time (1=AM, 2=PM): "); scanf("%i", &time);
    switch (day) {
        case 1: printf("Day: Monday\n"); break;
        case 2: printf("Day: Tuesday\n"); break;
        case 3: printf("Day: Wednesday\n"); break;
        case 4: printf("Day: Thursday\n"); break;
        case 5: printf("Day: Friday\n"); break;
        case 6: printf("Day: Saturday\n"); break;
        case 7: printf("Day: Sunday\n"); break;
        default: printf("Invalid day\n"); return;
    }
    switch (time) {
        case 1: printf("Time: Morning (AM)\n"); break;
        case 2: printf("Time: Afternoon (PM)\n"); break;
        default: printf("Invalid time\n");
    }
}

// ============================================================
// 26 — Restaurant Sub-Menu (Nested Switch)
// Topic: nested switch, sub-menu selection
// ============================================================
void practice26() {
    int item;
    printf("1=Burger  2=Pizza  3=Doner\nSelect: "); scanf("%i", &item);
    switch (item) {
        case 1:
            printf("1=Cheese Burger  2=Chicken Burger  3=Veggie Burger\nSelect: "); scanf("%i", &item);
            switch (item) {
                case 1: printf("You selected Cheese Burger\n"); break;
                case 2: printf("You selected Chicken Burger\n"); break;
                case 3: printf("You selected Veggie Burger\n"); break;
                default: printf("Invalid selection\n");
            } break;
        case 2:
            printf("1=Pepperoni  2=Veggie  3=Margherita\nSelect: "); scanf("%i", &item);
            switch (item) {
                case 1: printf("You selected Pepperoni Pizza\n"); break;
                case 2: printf("You selected Veggie Pizza\n"); break;
                case 3: printf("You selected Margherita Pizza\n"); break;
                default: printf("Invalid selection\n");
            } break;
        case 3:
            printf("1=Chicken Doner  2=Beef Doner  3=Veggie Doner\nSelect: "); scanf("%i", &item);
            switch (item) {
                case 1: printf("You selected Chicken Doner\n"); break;
                case 2: printf("You selected Beef Doner\n"); break;
                case 3: printf("You selected Veggie Doner\n"); break;
                default: printf("Invalid selection\n");
            } break;
        default: printf("Invalid selection\n");
    }
}

// ============================================================
// 27 — Positive / Negative / Zero (Switch)
// Topic: switch with arithmetic expression: (n>0)-(n<0)
// ============================================================
void practice27() {
    int number;
    printf("Enter a number: "); scanf(" %d", &number);
    switch ((number > 0) - (number < 0)) {
        case 1:
            printf("Your number is Positive.\n");
            switch (number % 2) {
                case 0: printf("Your number is Even.\n"); break;
                case 1: printf("Your number is Odd.\n"); break;
            } break;
        case -1:
            printf("Your number is Negative.\n");
            switch (number % 2) {
                case 0: printf("Your number is Even.\n"); break;
                case 1: printf("Your number is Odd.\n"); break;
            } break;
        case 0:
            printf("Your number is Zero.\n"); break;
    }
}

// ============================================================
// 28 — Login System
// Topic: char[], strcmp(), int comparison
// ============================================================
void practice28() {
    char registered_username[] = "mehmet";
    int registered_password = 1234;
    char entered_username[20];
    int entered_password;
    printf("Enter username: "); scanf("%s", entered_username);
    printf("Enter password: "); scanf("%i", &entered_password);
    if (strcmp(registered_username, entered_username) == 0)
        printf("Username is correct\n");
    else
        printf("Username is incorrect\n");
    if (registered_password == entered_password)
        printf("Password is correct\n");
    else
        printf("Password is incorrect\n");
}

// ============================================================
// 29 — Name Input (fgets)
// Topic: fgets(), buffer clearing, reading strings with spaces
// Note : scanf cannot read spaces, fgets is the solution
// ============================================================
void practice29() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char name[50];
    printf("Enter your full name: "); fgets(name, 50, stdin);
    printf("Name entered: %s\n", name);
}

// ============================================================
// 30 — BMI Calculator
// Topic: float calculation, strcpy(), if/else chain, formatted output
// ============================================================
void practice30() {
    char name[50];
    char gender;
    char status[20];
    int birth_year, current_year = 2026, age;
    float height, weight, bmi, ideal_low, ideal_high, underweight, overweight, obese;
    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF);
    printf("Enter your full name: "); fgets(name, 50, stdin);
    printf("Enter your birth year: "); scanf("%d", &birth_year);
    age = current_year - birth_year;
    printf("Enter your gender (M/F): "); scanf(" %c", &gender);
    printf("Enter your height in cm: "); scanf("%f", &height);
    printf("Enter your weight in kg: "); scanf("%f", &weight);
    height = height / 100;
    bmi = weight / (height * height);
    if (bmi < 18.5)  strcpy(status, "UNDERWEIGHT");
    else if (bmi < 25) strcpy(status, "NORMAL");
    else if (bmi < 30) strcpy(status, "OVERWEIGHT");
    else               strcpy(status, "OBESE");
    ideal_low   = 18.5 * (height * height);
    ideal_high  = 24.5 * (height * height);
    underweight = 18.5 * (height * height);
    overweight  = 29.9 * (height * height);
    obese       = 30   * (height * height);
    printf("\nUSER INFORMATION\n");
    printf("------------------------\n");
    printf("Name                  : %s", name);
    printf("Age                   : %i\n", age);
    printf("Gender                : %c\n", gender);
    printf("Height                : %.2fm\n", height);
    printf("Volume                : %.2f kg\n", weight);
    printf("\nBMI CALCULATION\n");
    printf("-------------------\n");
    printf("BMI                   : %.2f (%s)\n", bmi, status);
    printf("Ideal weight range    : %.2f - %.2f kg\n", ideal_low, ideal_high);
    printf("\nWeight ranges for your height\n");
    printf("------------------------------\n");
    printf("UNDERWEIGHT           : %.2f kg and below\n", underweight);
    printf("NORMAL                : %.2f - %.2f kg\n", ideal_low, ideal_high);
    printf("OVERWEIGHT            : %.2f - %.2f kg\n", ideal_high, overweight);
    printf("OBESE                 : %.2f kg and above\n", obese);
}

// ============================================================
// 31 — Sum of Numbers (while loop)
// Topic: while loop, exit with 0, running total
// ============================================================
void practice31() {
    int number, total = 0;
    printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    while (number != 0) {
        total = total + number;
        printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    }
    printf("Total sum: %i\n", total);
}

// ============================================================
// 32 — Positive and Negative Sum
// Topic: while loop, separate total variables
// ============================================================
void practice32() {
    int number, positive_total = 0, negative_total = 0;
    printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
    while (number != 0) {
        if (number > 0) positive_total = number + positive_total;
        else            negative_total = number + negative_total;
        printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
    }
    printf("Sum of positive numbers: %i\n", positive_total);
    printf("Sum of negative numbers: %i\n", negative_total);
}

// ============================================================
// 33 — Odd and Even Sum
// Topic: while loop, modulo (%), separate total variables
// ============================================================
void practice33() {
    int number, odd_total = 0, even_total = 0;
    printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
    while (number != 0) {
        if (number % 2 == 0) even_total = number + even_total;
        else                  odd_total  = number + odd_total;
        printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
    }
    printf("Sum of odd numbers  : %i\n", odd_total);
    printf("Sum of even numbers : %i\n", even_total);
}

// ============================================================
// 34 — Maximum and Minimum
// Topic: while loop, initial value assignment, comparison
// ============================================================
void practice34() {
    int number, max, min;
    printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
    max = number;
    min = number;
    while (number != 0) {
        printf("Enter a number (enter 0 to finish):\n"); scanf("%i", &number);
        if (number == 0) break;
        if (number > max) max = number;
        if (number < min) min = number;
    }
    printf("Largest number : %i\n", max);
    printf("Smallest number: %i\n", min);
}

// ============================================================
// 35 — Even Numbers (for loop)
// Topic: for loop, filtering with modulo
// ============================================================
void practice35() {
    int i;
    printf("Even numbers between 1 and 10:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            printf("%i\n", i);
    }
}

// ============================================================
// 36 — Sum 1 to 10 (for loop)
// Topic: for loop, counter, running total
// ============================================================
void practice36() {
    int i, total = 0;
    for (i = 1; i <= 10; i++) {
        printf("%i\n", i);
        total = total + i;
    }
    printf("Sum from 1 to 10: %i\n", total);
}

// ============================================================
// 37 — Compound Interest Calculator (Mini Project)
// Topic: double, pow(), formula, math.h
// ============================================================
void practice37() {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");
    printf("Enter the principal (P): "); scanf("%lf", &principal);
    printf("Enter the interest rate %% (r): "); scanf("%lf", &rate);

    rate = rate / 100;

    printf("Enter the number of years (t): "); scanf("%d", &years);
    printf("Enter the number of times compounded per year (n): "); scanf("%d", &times_compounded);

    total = principal * pow(1 + rate / times_compounded, times_compounded * years);

    printf("After %d years, the total will be £%.2lf\n", years, total);
}

// ============================================================
// 38 — Mad Libs Game (Mini Project)
// Topic: char[], fgets(), string input, formatted output
// ============================================================
void practice38() {
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);
}

// ============================================================
// 39 — Shopping Cart (Mini Project)
// Topic: char[], fgets(), float calculation, formatted output
// ============================================================
void practice39() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    char currency[] = "£";

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("What item would you like to buy? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each? : ");
    scanf("%f", &price);

    printf("How many would you like? : ");
    scanf("%d", &quantity);
    printf("\n-------------------------------------\n");

    total = price * quantity;
    printf("You have bought %d %s/s\n", quantity, item);
    printf("The total : %s%.2f\n", currency, total);
}

// ============================================================
// 40 — Number Guessing Game (Mini Project)
// Topic: while loop, rand/srand, counter, comparison
// ============================================================
void practice40() {
    int secret_number, guess = -1, attempts = 0;
    srand(time(NULL));
    secret_number = rand() % 100 + 1;
    while (guess != 0) {
        printf("Guess the secret number between 1 and 100 (enter 0 to quit): ");
        scanf("%i", &guess);
        if (guess == 0) { printf("Quitting game...\n"); break; }
        attempts++;
        if (guess == secret_number) {
            printf("Congratulations! The secret number was %i. You got it in %i attempt(s)!\n", secret_number, attempts); break;
        }
        else if (guess > secret_number) printf("Too high! Try lower.\n");
        else                            printf("Too low! Try higher.\n");
    }
}

// ============================================================
// 41 — Shopping Tracker (Mini Project)
// Topic: while loop, total/average/max/min, negative input check
// ============================================================
void practice41() {
    int total_price = 0, price = 0, count = 0;
    float average;
    int highest = 0, lowest = 0;
    while (1) {
        printf("Enter item price (enter 0 to finish): "); scanf("%i", &price);
        if (price == 0) break;
        if (price < 0) { printf("Price cannot be negative, please try again\n"); continue; }
        total_price += price;
        count++;
        if (count == 1) { highest = price; lowest = price; }
        else {
            if (price > highest) highest = price;
            if (price < lowest)  lowest  = price;
        }
    }
    if (count > 0) {
        average = (float)total_price / count;
        printf("Total items    : %i\n", count);
        printf("Total cost     : £%i\n", total_price);
        printf("Average price  : £%.2f\n", average);
        printf("Lowest price   : £%i\n", lowest);
        printf("Highest price  : £%i\n", highest);
    }
    else printf("No items entered.\n");
}

// ============================================================
// MAIN MENU
// ============================================================
int main() {
    int choice;

    printf("\n========================================\n");
    printf("     C PROGRAMMING JOURNEY\n");
    printf("     Mehmet Kaygusuz\n");
    printf("     Solent University — 2025\n");
    printf("========================================\n");
    printf("\n--- BASICS ---\n");
    printf(" 1  - Hello Deniz (first printf)\n");
    printf(" 2  - Square of a Number\n");
    printf(" 3  - Addition\n");
    printf(" 4  - Price Calculator\n");
    printf(" 5  - Age Calculator\n");
    printf(" 6  - Height Converter (cm to metres)\n");
    printf(" 7  - Find the Larger of Two Numbers\n");
    printf(" 8  - Average of Three Numbers\n");
    printf(" 9  - Average (for loop)\n");
    printf(" 10 - Average (while loop — enter 0 to finish)\n");
    printf(" 11 - Fahrenheit <-> Celsius Converter\n");
    printf(" 12 - Weight Converter (kg <-> pounds)\n");
    printf(" 13 - Sphere Calculator\n");
    printf("\n--- CONDITIONS (if/else) ---\n");
    printf(" 14 - Age Check\n");
    printf(" 15 - Speed Check\n");
    printf(" 16 - Ticket Price\n");
    printf(" 17 - April Fools Day\n");
    printf(" 18 - Age Comparison\n");
    printf(" 19 - Discount Calculator (bool, nested if)\n");
    printf(" 20 - Positive / Negative / Odd / Even\n");
    printf("\n--- SWITCH / CASE ---\n");
    printf(" 21 - Traffic Light\n");
    printf(" 22 - Restaurant Menu\n");
    printf(" 23 - Grade System\n");
    printf(" 24 - Calculator\n");
    printf(" 25 - Day and Time (nested switch)\n");
    printf(" 26 - Restaurant Sub-Menu (nested switch)\n");
    printf(" 27 - Positive / Negative / Zero (switch)\n");
    printf("\n--- STRINGS ---\n");
    printf(" 28 - Login System\n");
    printf(" 29 - Name Input (fgets)\n");
    printf(" 30 - BMI Calculator\n");
    printf("\n--- LOOPS ---\n");
    printf(" 31 - Sum of Numbers (while)\n");
    printf(" 32 - Positive / Negative Sum\n");
    printf(" 33 - Odd / Even Sum\n");
    printf(" 34 - Maximum / Minimum\n");
    printf(" 35 - Even Numbers (for)\n");
    printf(" 36 - Sum 1 to 10 (for)\n");
    printf("\n--- MINI PROJECTS ---\n");
    printf(" 37 - Compound Interest Calculator\n");
    printf(" 38 - Mad Libs Game\n");
    printf(" 39 - Shopping Cart\n");
    printf(" 40 - Number Guessing Game\n");
    printf(" 41 - Shopping Tracker\n");
    printf("\n 0  - Exit\n");
    printf("========================================\n");
    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:  practice01(); break;
        case 2:  practice02(); break;
        case 3:  practice03(); break;
        case 4:  practice04(); break;
        case 5:  practice05(); break;
        case 6:  practice06(); break;
        case 7:  practice07(); break;
        case 8:  practice08(); break;
        case 9:  practice09(); break;
        case 10: practice10(); break;
        case 11: practice11(); break;
        case 12: practice12(); break;
        case 13: practice13(); break;
        case 14: practice14(); break;
        case 15: practice15(); break;
        case 16: practice16(); break;
        case 17: practice17(); break;
        case 18: practice18(); break;
        case 19: practice19(); break;
        case 20: practice20(); break;
        case 21: practice21(); break;
        case 22: practice22(); break;
        case 23: practice23(); break;
        case 24: practice24(); break;
        case 25: practice25(); break;
        case 26: practice26(); break;
        case 27: practice27(); break;
        case 28: practice28(); break;
        case 29: practice29(); break;
        case 30: practice30(); break;
        case 31: practice31(); break;
        case 32: practice32(); break;
        case 33: practice33(); break;
        case 34: practice34(); break;
        case 35: practice35(); break;
        case 36: practice36(); break;
        case 37: practice37(); break;
        case 38: practice38(); break;
        case 39: practice39(); break;
        case 40: practice40(); break;
        case 41: practice41(); break;
        case 0:  printf("Exiting program...\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}