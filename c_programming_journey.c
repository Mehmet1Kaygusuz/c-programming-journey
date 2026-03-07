// ============================================================
// C Programming Journey — c_programming_journey.c
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025
// ============================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
// 07 — Age Check
// Topic: if / else — basic condition structure
// ============================================================
void practice07() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age < 18)
        printf("You CANNOT BUY ALCOHOL\n");
    else
        printf("You CAN BUY ALCOHOL\n");
}

// ============================================================
// 08 — Speed Check
// Topic: if / else if / else, comparison operators
// ============================================================
void practice08() {
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
// 09 — Ticket Price
// Topic: if / else if / else, float calculation, age groups
// ============================================================
void practice09() {
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
// 10 — April Fools Day
// Topic: if / else, && (AND) logical operator
// ============================================================
void practice10() {
    int day, month;
    printf("Please enter day and month: "); scanf("%i %i", &day, &month);
    if (day == 1 && month == 4)
        printf("Happy April Fools Day!\n");
    else
        printf("Today is not April Fools Day\n");
}

// ============================================================
// 11 — Age Comparison
// Topic: if / else if, equality and less-than operators
// ============================================================
void practice11() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age <= 8)
        printf("Wow, people start using computers early!\n");
    else if (age == 49)
        printf("Hey! We are the same age!\n");
}

// ============================================================
// 12 — Positive / Negative / Odd / Even
// Topic: nested if/else, modulo (%) operator
// ============================================================
void practice12() {
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
// 13 — Traffic Light
// Topic: switch / case / default — basic usage
// ============================================================
void practice13() {
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
// 14 — Restaurant Menu
// Topic: switch / case / default, user selection
// ============================================================
void practice14() {
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
// 15 — Grade System
// Topic: switch, grouping cases using division (grade/10)
// ============================================================
void practice15() {
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
// 16 — Calculator
// Topic: switch, char type, double casting
// ============================================================
void practice16() {
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
// 17 — Day and Time (Nested Switch)
// Topic: nested switch / case
// ============================================================
void practice17() {
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
// 18 — Restaurant Sub-Menu (Nested Switch)
// Topic: nested switch, sub-menu selection
// ============================================================
void practice18() {
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
// 19 — Positive / Negative / Zero (Switch)
// Topic: switch with arithmetic expression: (n>0)-(n<0)
// ============================================================
void practice19() {
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
// 20 — Login System
// Topic: char[], strcmp(), int comparison
// ============================================================
void practice20() {
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
// 21 — Name Input (fgets)
// Topic: fgets(), buffer clearing, reading strings with spaces
// Note : scanf cannot read spaces, fgets is the solution
// ============================================================
void practice21() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char name[50];
    printf("Enter your full name: "); fgets(name, 50, stdin);
    printf("Name entered: %s\n", name);
}

// ============================================================
// 22 — BMI Calculator
// Topic: float calculation, strcpy(), if/else chain, formatted output
// ============================================================
void practice22() {
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
    printf("Weight                : %.2f kg\n", weight);
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
// 23 — Sum of Numbers (while loop)
// Topic: while loop, exit with 0, running total
// ============================================================
void practice23() {
    int number, total = 0;
    printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    while (number != 0) {
        total = total + number;
        printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    }
    printf("Total sum: %i\n", total);
}

// ============================================================
// 24 — Positive and Negative Sum
// Topic: while loop, separate total variables
// ============================================================
void practice24() {
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
// 25 — Odd and Even Sum
// Topic: while loop, modulo (%), separate total variables
// ============================================================
void practice25() {
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
// 26 — Maximum and Minimum
// Topic: while loop, initial value assignment, comparison
// ============================================================
void practice26() {
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
// 27 — Even Numbers (for loop)
// Topic: for loop, filtering with modulo
// ============================================================
void practice27() {
    int i;
    printf("Even numbers between 1 and 10:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            printf("%i\n", i);
    }
}

// ============================================================
// 28 — Sum 1 to 10 (for loop)
// Topic: for loop, counter, running total
// ============================================================
void practice28() {
    int i, total = 0;
    for (i = 1; i <= 10; i++) {
        printf("%i\n", i);
        total = total + i;
    }
    printf("Sum from 1 to 10: %i\n", total);
}

// ============================================================
// 29 — Number Guessing Game (Mini Project)
// Topic: while loop, rand/srand, counter, comparison
// ============================================================
void practice29() {
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
// 30 — Shopping Tracker (Mini Project)
// Topic: while loop, total/average/max/min, negative input check
// ============================================================
void practice30() {
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
    printf("\n--- CONDITIONS (if/else) ---\n");
    printf(" 7  - Age Check\n");
    printf(" 8  - Speed Check\n");
    printf(" 9  - Ticket Price\n");
    printf(" 10 - April Fools Day\n");
    printf(" 11 - Age Comparison\n");
    printf(" 12 - Positive / Negative / Odd / Even (if/else)\n");
    printf("\n--- SWITCH / CASE ---\n");
    printf(" 13 - Traffic Light\n");
    printf(" 14 - Restaurant Menu\n");
    printf(" 15 - Grade System\n");
    printf(" 16 - Calculator\n");
    printf(" 17 - Day and Time (nested switch)\n");
    printf(" 18 - Restaurant Sub-Menu (nested switch)\n");
    printf(" 19 - Positive / Negative / Zero (switch)\n");
    printf("\n--- STRINGS ---\n");
    printf(" 20 - Login System\n");
    printf(" 21 - Name Input (fgets)\n");
    printf(" 22 - BMI Calculator\n");
    printf("\n--- LOOPS ---\n");
    printf(" 23 - Sum of Numbers (while)\n");
    printf(" 24 - Positive / Negative Sum\n");
    printf(" 25 - Odd / Even Sum\n");
    printf(" 26 - Maximum / Minimum\n");
    printf(" 27 - Even Numbers (for)\n");
    printf(" 28 - Sum 1 to 10 (for)\n");
    printf("\n--- MINI PROJECTS ---\n");
    printf(" 29 - Number Guessing Game\n");
    printf(" 30 - Shopping Tracker\n");
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
        case 0:  printf("Exiting program...\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}