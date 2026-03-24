// Started this portfolio on Feb 2026
// Each assessment completed through personal study and inside of class
// All code written manually — no copy-paste, no AI generation
// Total lines of code  : 2258
// Total practices      : 61
// Updated              : 24 March 2026 - 14:04
// Completion date      : June 2026 (expected)

// ============================================================
// C Programming Journey — c_programming_journey.c
// Author : Mehmet Kaygusuz
// Solent University — Computer Science Foundation 2025/2026
// ============================================================
// This file contains 61 practices organised by topic.
// Each practice builds on the one before it.
// Start from practice 01 and work your way down.
// Every practice has a WHAT YOU LEARNED block at the end.
// ============================================================

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// ============================================================
// SECTION 01 — BASICS: Variables & Arithmetic
// ============================================================
// In this section you learn how to:
//   - Store values in variables
//   - Read input from the user with scanf
//   - Print output with printf
//   - Do basic arithmetic (+ - * /)
//   - Work with different data types: int, float, double
// ============================================================

// ============================================================
// 01 — Hello Deniz
// Topic: First printf, printing text to screen
// Note : 21/02/2026 time 21:21 — First code written by Deniz Kaygusuz (age 9) — a memory
// ============================================================
void practice01() {
    printf("Hello, I am Deniz!\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * printf()  — prints text to the screen
 * \n        — moves the cursor to a new line (newline character)
 * Every C statement ends with a semicolon ;
 * This is the most basic program you can write in C.
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * int       — stores whole numbers (no decimal point)
 * scanf()   — reads input from the user
 * %i        — format specifier for int (same as %d)
 * &number   — the & means "address of" — scanf needs to know WHERE to store the value
 * *         — multiplication operator
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * You can declare a variable and assign a value to it on the same line: int total = ...
 * You can use multiple %i placeholders in one printf — values are matched left to right
 * + is the addition operator
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * float     — stores numbers with a decimal point (e.g. 3.14)
 * %f        — format specifier for float in scanf
 * %.2f      — prints a float with exactly 2 decimal places
 * You can mix int and float in one printf — each needs its own format specifier
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * You can assign a fixed value to a variable when you declare it: int year_now = 2026;
 * - is the subtraction operator
 * Variables can be used inside calculations on separate lines — they keep their value
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * Type casting: (float)height converts the int to float BEFORE dividing
 * Without the cast, int / int = int — the decimal part is lost
 * Example: 175 / 100 = 1  (int division — wrong!)
 *          (float)175 / 100 = 1.75  (float division — correct!)
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * if / else if / else — the program takes different paths based on a condition
 * >  means "greater than"
 * <  means "less than"
 * == means "equal to" (two equals signs — one = is assignment, two == is comparison)
 * The else block runs only if none of the conditions above were true
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * Combining two concepts: arithmetic AND type casting together
 * Always cast to float BEFORE dividing if you want a decimal result
 * sum = number1 + number2 + number3 — you can chain additions on one line
 */

// ============================================================
// SECTION 02 — CONDITIONS: if / else if / else
// ============================================================
// In this section you learn how to:
//   - Make decisions in your program using conditions
//   - Use comparison operators: > < == != >= <=
//   - Use logical operators: && (AND) || (OR) ! (NOT)
//   - Use nested conditions (if inside if)
//   - Use the bool data type
// ============================================================

// ============================================================
// 09 — Age Check
// Topic: if / else — basic condition structure
// ============================================================
void practice09() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age < 18)
        printf("You CANNOT BUY ALCOHOL\n");
    else
        printf("You CAN BUY ALCOHOL\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * The simplest if/else — only two possible outcomes
 * When there is only one statement after if or else, curly braces {} are optional
 * < means "less than" — the condition is true if age is 0 to 17
 */

// ============================================================
// 10 — Speed Check
// Topic: if / else if / else, comparison operators
// ============================================================
void practice10() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * if / else if / else — three possible outcomes, only one runs
 * == checks equality (do NOT use = here — that would assign, not compare)
 * The program checks conditions from top to bottom and stops at the first true one
 */

// ============================================================
// 11 — Ticket Price
// Topic: if / else if / else, float calculation, age groups
// ============================================================
void practice11() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * && means AND — both conditions must be true for the block to run
 * age >= 4 && age < 16 means "age is between 4 and 15 (inclusive)"
 * >= means "greater than or equal to"
 * You can have as many else if blocks as you need
 */

// ============================================================
// 12 — April Fools Day
// Topic: if / else, && (AND) logical operator
// ============================================================
void practice12() {
    int day, month;
    printf("Please enter day and month: "); scanf("%i %i", &day, &month);
    if (day == 1 && month == 4)
        printf("Happy April Fools Day!\n");
    else
        printf("Today is not April Fools Day\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * && (AND) — the condition is only true if BOTH sides are true
 * scanf can read two values at once with a space between format specifiers
 * day == 1 && month == 4 — both must match for the message to appear
 */

// ============================================================
// 13 — Age Comparison
// Topic: if / else if, equality and less-than operators
// ============================================================
void practice13() {
    int age;
    printf("How old are you? "); scanf("%i", &age);
    if (age <= 8)
        printf("Wow, people start using computers early!\n");
    else if (age == 49)
        printf("Hey! We are the same age!\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * <= means "less than or equal to"
 * If neither condition is true, nothing is printed — that is valid C
 * Not every if/else needs an else block
 */

// ============================================================
// 14 — Discount Calculator (nested if, bool)
// Topic: bool type, nested if/else, float multiplication
// ============================================================
void practice14() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * bool      — a true/false variable (needs #include <stdbool.h>)
 * true / false — the only two values a bool can hold
 * Nested if — an if block inside another if block
 * price *= 0.7 means price = price * 0.7 (multiply and assign in one step)
 * %% prints a literal % sign (one % starts a format specifier, two %% prints it)
 */

// ============================================================
// 15 — Positive / Negative / Odd / Even
// Topic: nested if/else, modulo (%) operator
// ============================================================
void practice15() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * % (modulo) — gives the REMAINDER after division
 *   Example: 7 % 2 = 1 (odd),  8 % 2 = 0 (even)
 * number % 2 == 0 checks if a number is even
 * Nested if — the first if checks positive/negative, the inner if checks odd/even
 * scanf returns 1 if it successfully read a value — useful for basic input checking
 */

// ============================================================
// SECTION 03 — SWITCH / CASE
// ============================================================
// In this section you learn how to:
//   - Use switch as a cleaner alternative to many if/else if blocks
//   - Use case labels and the default case
//   - Use break to stop falling through to the next case
//   - Group multiple cases together
//   - Use nested switch statements
// ============================================================

// ============================================================
// 16 — Traffic Light
// Topic: switch / case / default — basic usage
// ============================================================
void practice16() {
    int light;
    printf("Enter number for traffic light (1=Red, 2=Yellow, 3=Green): "); scanf(" %d", &light);
    switch (light) {
        case 1: printf("Stop\n"); break;
        case 2: printf("Get Ready\n"); break;
        case 3: printf("Go\n"); break;
        default: printf("Invalid input\n");
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * switch     — compares one variable against multiple possible values
 * case 1:    — runs if light == 1
 * break      — exits the switch block. Without break, execution "falls through" to the next case
 * default:   — runs if no case matched (like the final else in an if/else chain)
 * switch only works with integer types (int, char) — not float or string
 */

// ============================================================
// 17 — Restaurant Menu
// Topic: switch / case / default, user selection
// ============================================================
void practice17() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * switch is much cleaner than writing four separate if/else if blocks
 * Each case must end with break — otherwise ALL cases below it also run
 * default handles any value that does not match a case (e.g. user types 9)
 */

// ============================================================
// 18 — Grade System
// Topic: switch, grouping cases using division (grade/10)
// ============================================================
void practice18() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * You can put an expression inside switch(), not just a variable: switch(grade / 10)
 * 95 / 10 = 9, 87 / 10 = 8, 73 / 10 = 7 — integer division groups grades automatically
 * Two cases with no break between them (case 10: / case 9:) share the same output
 * This is called "fall-through" — used intentionally here to group 90-100 as grade A
 */

// ============================================================
// 19 — Calculator (int version)
// Topic: switch, char type, int operations
// ============================================================
void practice19() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * char      — stores a single character, e.g. '+', '-', '*', '/'
 * %c        — format specifier for char
 * " %c"     — the space before %c clears any leftover newline from the input buffer
 * switch works with char values too — case '+': matches the + character
 * {} inside a case allows you to declare local variables for that case only
 */

// ============================================================
// 20 — Calculator v2 (double + divide-by-zero check)
// Topic: double, division by zero protection, switch
// ============================================================
void practice20() {
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    char op = '\0';

    printf("Enter the first number: ");         scanf("%lf", &num1);
    printf("Enter the operator (+ - * /): ");   scanf(" %c", &op);
    printf("Enter the second number: ");        scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.4lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.4lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.4lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: You cannot divide by zero!\n");
            } else {
                result = num1 / num2;
                printf("Result: %.4lf\n", result);
            }
            break;
        default:
            printf("Invalid operator. Please use + - * /\n");
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * double    — more precise than float; use for calculations that need more decimal accuracy
 * %lf       — format specifier for double in scanf (lf = long float)
 * %.4lf     — prints double with 4 decimal places
 * Dividing by zero crashes a program — always check before dividing
 * This is version 2 of the calculator: more precise than v1, with safety added
 */

// ============================================================
// 21 — Day and Time (Nested Switch)
// Topic: nested switch / case
// ============================================================
void practice21() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * You can have two switch statements one after another — they run independently
 * return inside a switch (not in a function that returns a value) exits the whole function
 * This is different from break — break only exits the switch, return exits the function
 */

// ============================================================
// 22 — Restaurant Sub-Menu (Nested Switch)
// Topic: nested switch, sub-menu selection
// ============================================================
void practice22() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * Nested switch — a switch statement inside a case of another switch
 * The same variable (item) is reused for the sub-menu selection
 * The break at the end of each outer case (after the inner switch) exits the OUTER switch
 * This pattern is useful for multi-level menus
 */

// ============================================================
// 23 — Positive / Negative / Zero (Switch)
// Topic: switch with arithmetic expression: (n>0)-(n<0)
// ============================================================
void practice23() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * In C, a comparison like (number > 0) evaluates to 1 if true, 0 if false
 * So (number > 0) - (number < 0) gives:
 *    1 - 0 =  1  when number is positive
 *    0 - 1 = -1  when number is negative
 *    0 - 0 =  0  when number is zero
 * This is a clever trick — switch can match negative values like case -1:
 */

// ============================================================
// SECTION 04 — STRINGS
// ============================================================
// In this section you learn how to:
//   - Store text in char arrays (char[])
//   - Read strings with scanf and fgets
//   - Compare strings with strcmp()
//   - Copy strings with strcpy()
//   - Clear the input buffer
// ============================================================

// ============================================================
// 24 — Login System
// Topic: char[], strcmp(), int comparison
// ============================================================
void practice24() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * char[]    — an array of characters; this is how C stores text (strings)
 * strcmp()  — compares two strings. Returns 0 if they are identical
 * You CANNOT use == to compare strings in C — you must use strcmp()
 * scanf("%s", ...) reads a word (stops at a space — cannot read full names)
 * #include <string.h> is needed for strcmp()
 */

// ============================================================
// 25 — Name Input (fgets)
// Topic: fgets(), buffer clearing, reading strings with spaces
// ============================================================
void practice25() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char name[50];
    printf("Enter your full name: "); fgets(name, 50, stdin);
    printf("Name entered: %s\n", name);
}
/*
 * ---- WHAT YOU LEARNED ----
 * fgets()   — reads a full line including spaces (scanf cannot do this)
 * fgets(name, 50, stdin) reads up to 49 characters from keyboard into name
 * stdin     — means "standard input" — the keyboard
 * Buffer clearing: after scanf, a \n is left in the buffer.
 *   The while loop throws it away so fgets does not accidentally read it.
 * fgets includes the \n at the end of the string — that is why the output has a blank line
 */

// ============================================================
// 26 — Temperature Converter (C <-> F)
// Topic: char input, if/else, float calculation, formula
// ============================================================
void practice26() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * char can hold a single character like 'C' or 'F'
 * Single quotes are for characters: 'C'   Double quotes are for strings: "hello"
 * '\0' — the null character, used to initialise an empty char variable
 * 0.0f — the f suffix means float (without it, C treats the number as double)
 * Conversion formulas: F = (C * 9/5) + 32    C = (F - 32) * 5/9
 */

// ============================================================
// 27 — Weight Converter (kg <-> pounds)
// Topic: int menu, float calculation, if/else
// ============================================================
void practice27() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * Using a numbered menu (1 or 2) instead of a char menu — both are valid approaches
 * 2.20462 is the conversion factor between kg and pounds
 * Dividing by the same factor reverses the conversion
 * This is the same pattern as the temperature converter but with a different formula
 */

// ============================================================
// 28 — Sphere Calculator (area, surface area, volume)
// Topic: double, pow(), const, math.h
// ============================================================
void practice28() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * const     — a variable whose value cannot be changed after it is set
 * PI is declared as const because the value of pi never changes
 * pow(x, n) — raises x to the power of n. Needs #include <math.h>
 * 4.0 / 3.0 — writing .0 forces float division (4/3 would give 1, not 1.333...)
 * Compile with -lm flag to link the math library: gcc file.c -o file -lm
 */

// ============================================================
// SECTION 05 — LOOPS: while & for
// ============================================================
// In this section you learn how to:
//   - Repeat actions with while and for loops
//   - Use break to exit a loop early
//   - Use continue to skip to the next iteration
//   - Keep running totals and counters inside loops
//   - Use nested loops (loop inside a loop)
// ============================================================

// ============================================================
// 29 — Sum of Numbers (while loop)
// Topic: while loop, exit with 0, running total
// ============================================================
void practice29() {
    int number, total = 0;
    printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    while (number != 0) {
        total = total + number;
        printf("Enter a number (enter 0 to finish): \n"); scanf("%i", &number);
    }
    printf("Total sum: %i\n", total);
}
/*
 * ---- WHAT YOU LEARNED ----
 * while (condition) — repeats the block as long as condition is true
 * The loop checks the condition BEFORE each run — if false from the start, it never runs
 * total = total + number — this is a running total, updated on every loop cycle
 * != means "not equal to" — the loop continues as long as number is not 0
 * The user controls when the loop stops by entering 0
 */

// ============================================================
// 30 — Positive and Negative Sum
// Topic: while loop, separate total variables
// ============================================================
void practice30() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * You can use if/else INSIDE a loop to sort values as they come in
 * Two separate running totals: one for positive, one for negative
 * Negative numbers are added to negative_total — they stay negative
 * Example: entering -3 → negative_total = 0 + (-3) = -3
 */

// ============================================================
// 31 — Odd and Even Sum
// Topic: while loop, modulo (%), separate total variables
// ============================================================
void practice31() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * number % 2 == 0 — if the remainder when dividing by 2 is 0, the number is even
 * number % 2 == 1 — the remainder is 1, so the number is odd
 * Combining while loop + if/else + modulo to sort and accumulate values
 */

// ============================================================
// 32 — Maximum and Minimum
// Topic: while loop, initial value assignment, comparison
// ============================================================
void practice32() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * max = number and min = number — initialise with the first value, not 0
 *   (If you set max = 0 and all inputs are negative, max would be wrong)
 * if (number > max) max = number — update max whenever a bigger value appears
 * break — exits the loop immediately when 0 is entered
 * This pattern (track max and min inside a loop) is very common in programming
 */

// ============================================================
// 33 — Average (for loop — how many numbers?)
// Topic: for loop, counter, running total, float casting
// ============================================================
void practice33() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * for (start; condition; update) — a loop with three parts in one line
 *   int i = 1   — start: i begins at 1
 *   i <= count  — condition: keep looping while i is less than or equal to count
 *   i++         — update: add 1 to i after each loop cycle (i++ means i = i + 1)
 * sum += number means sum = sum + number (shorthand)
 * for loops are best when you know in advance how many times to loop
 */

// ============================================================
// 34 — Average (while loop — enter 0 to finish)
// Topic: while loop, break condition, running total, float casting
// ============================================================
void practice34() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * while (1) — an infinite loop. 1 is always true, so it never stops on its own
 * break is the ONLY way out — it exits when the user enters 0
 * count++ — increments count by 1 each time a valid number is entered
 * The if (count > 0) check prevents dividing by zero if no numbers were entered
 * Same result as practice33, but the user decides when to stop instead of saying how many
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * The for loop goes through every number from 1 to 10
 * The if inside filters — only even numbers get printed
 * This is called filtering: loop through all values, print only the ones that match
 * Output: 2 4 6 8 10
 */

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
/*
 * ---- WHAT YOU LEARNED ----
 * The loop variable i is also the value being added — i acts as both counter and data
 * total = total + i accumulates the running total on every cycle
 * After the loop, total holds 1+2+3+4+5+6+7+8+9+10 = 55
 * You can do multiple things inside a loop body — print AND add in the same cycle
 */

// ============================================================
// 37 — Times Table — Single Number (while loop)
// Topic: while loop, multiplication table, formatted output
// ============================================================
void practice37() {
    // Ask the user which times table they want to see
    int n = 0;
    int count = 1;
    int result = 0;

    printf("Enter a number to see its times table: ");
    scanf("%d", &n);

    // Loop from 1 to 12, multiply count by n each time
    while (count <= 12) {
        result = count * n;
        printf("%2d   x %2d  = %3d\n", count, n, result);
        count++;
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * while loop counting from 1 to 12 — count++ increments on every cycle
 * count * n calculates each line of the times table
 * %2d  — prints an int in a field of 2 characters (right-aligned, adds a space if needed)
 * %3d  — same but 3 characters wide — keeps the output neatly aligned in columns
 * This is called formatted output — padding numbers so they line up visually
 */

// ============================================================
// 38 — Multiplication Table 12x12 (nested while)
// Topic: nested while loop, full 12x12 grid, %4d format
// ============================================================
void practice38() {
    int row = 1;
    int col = 1;

    // Outer loop: goes through each row (1 to 12)
    while (row <= 12) {
        col = 1;

        // Inner loop: goes through each column (1 to 12)
        while (col <= 12) {
            printf("%4d", col * row);  // %4d keeps numbers aligned in 4-char columns
            col++;
        }

        printf("\n");  // After all 12 columns in a row, move to next line
        row++;
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * Nested loops — a loop inside a loop
 * The OUTER loop controls the row (runs 12 times)
 * The INNER loop controls the column (also runs 12 times per row)
 * Total iterations: 12 x 12 = 144
 * col = 1 is INSIDE the outer loop — it resets to 1 at the start of every new row
 * Without resetting col, the inner loop would only run on the first row
 * %4d — 4-character wide columns make all numbers align neatly
 */

// ============================================================
// 39 — Reverse a Number (for loop)
// Topic: for loop, modulo and division, digit extraction
// ============================================================
void practice39() {
    int number, reverse = 0, step;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Each cycle: extract the last digit, add it to reverse, remove it from number
    for (; number > 0; number = number / 10) {
        step = number % 10;       // Get the last digit
        reverse = reverse * 10 + step;  // Shift reverse left and add the digit
        printf("step=%d, reverse=%9d, number=%9d\n", step, reverse, number);
    }

    printf("Reversed number: %d\n", reverse);
}
/*
 * ---- WHAT YOU LEARNED ----
 * number % 10  — extracts the LAST digit of a number  (175 % 10 = 5)
 * number / 10  — removes the last digit               (175 / 10 = 17)
 * reverse * 10 + step — shifts existing digits left and adds the new one
 *   Example: number=175
 *     Cycle 1: step=5,  reverse = 0*10+5   = 5
 *     Cycle 2: step=7,  reverse = 5*10+7   = 57
 *     Cycle 3: step=1,  reverse = 57*10+1  = 571
 * The for loop has no initialiser (just ;) because number was already declared
 * The update is number = number / 10 — the loop shrinks the number each cycle
 */

// ============================================================
// 40 — Reverse a Number (while loop) — BUG FIXED
// Topic: while loop — same logic, different loop structure
// ============================================================
void practice40() {
    int number, reverse = 0, step;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Same algorithm as practice39 — using while instead of for
    while (number > 0) {
        step = number % 10;              // Get the last digit
        reverse = reverse * 10 + step;  // BUG FIX: was 'reverse * 10 + t' (t undefined)
        number = number / 10;            // Remove the last digit
        printf("step=%d, reverse=%9d, number=%9d\n", step, reverse, number);
    }

    printf("Reversed number: %d\n", reverse);
}
/*
 * ---- WHAT YOU LEARNED ----
 * Same algorithm as practice39 — but written with a while loop
 * The for loop version put the update (number = number/10) in the loop header
 * The while version puts it explicitly inside the loop body — both are correct
 * BUG FIXED: the original code used 't' which was never declared — changed to 'step'
 * Comparing for vs while teaches you that they can always be converted to each other
 */

// ============================================================
// 41 — Factorial (while loop)
// Topic: while loop, cumulative multiplication
// ============================================================
void practice41() {
    // Factorial of n = n * (n-1) * (n-2) * ... * 1
    // Example: 5! = 5 * 4 * 3 * 2 * 1 = 120

    int n = 0;
    int count = 1;    // Starts at 1 because multiplying by 0 would give 0
    int fact = 1;     // Starts at 1 (the identity for multiplication)

    printf("Enter a number: ");
    scanf("%d", &n);

    while (count <= n) {
        fact *= count;   // fact = fact * count
        count++;
    }

    printf("Factorial of %d = %d\n", n, fact);
}
/*
 * ---- WHAT YOU LEARNED ----
 * Factorial uses multiplication the same way sum uses addition
 * fact starts at 1 — if it started at 0, every result would be 0 (0 * anything = 0)
 * fact *= count means fact = fact * count (the *= shorthand for multiply-and-assign)
 * Example trace for n=4:
 *   count=1: fact = 1*1 = 1
 *   count=2: fact = 1*2 = 2
 *   count=3: fact = 2*3 = 6
 *   count=4: fact = 6*4 = 24
 *   Result: 4! = 24
 */

// ============================================================
// 42 — Factorial (for loop)
// Topic: for loop, long int, %lld — same logic different loop
// ============================================================
void practice42() {
    // Using long int to handle larger factorials (int overflows around 12!)
    int number = 0;
    int i = 0;
    long int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %ld\n", number, fact);
}
/*
 * ---- WHAT YOU LEARNED ----
 * long int  — a larger integer type. int can hold up to ~2 billion, long int much more
 * %ld       — format specifier for long int
 * Factorial numbers grow very fast — 13! = 6,227,020,800 (too big for int)
 * Same logic as practice41 — just a for loop instead of while
 * Comparing the two: for loop is more compact, while loop is more explicit — choose based on readability
 */

// ============================================================
// SECTION 06 — DO-WHILE LOOP
// ============================================================
// In this section you learn how to:
//   - Use the do-while loop
//   - Understand the key difference from while:
//     do-while always runs AT LEAST ONCE
//   - Build menus that keep running until the user chooses to exit
// ============================================================

// ============================================================
// 43 — Ticket Price (do-while)
// Topic: do-while loop, menu that keeps running
// ============================================================
void practice43() {
    int age = 0;
    char again = 'y';

    // do-while: runs the block first, then checks the condition
    do {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 5) {
            printf("Your ticket is free!\n");
        } else if (age > 65) {
            printf("You have a 5%% senior discount.\n");
        } else {
            printf("Your ticket is normal price.\n");
        }

        printf("Check another age? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y');

    printf("Goodbye!\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * do { ... } while (condition) — the body runs FIRST, then the condition is checked
 * This guarantees the block runs at least once — even if the condition is false at the start
 * Perfect for menus: show the menu, get input, then ask "again?"
 * while loop = check first, then run
 * do-while  = run first, then check
 */

// ============================================================
// 44 — Number Guessing Game v2 (do-while + range narrowing)
// Topic: do-while, rand/srand, min/max hints
// ============================================================
void practice44() {
    int guess   = 0;
    int tries   = 0;
    int min     = 1;
    int max     = 100;
    int answer  = 0;

    // srand seeds the random number generator with the current time
    // This ensures a different number each time the program runs
    srand(time(NULL));
    answer = rand() % (max - min + 1) + min;

    printf("*** NUMBER GUESSING GAME ***\n");
    printf("I have picked a number between %d and %d.\n", min, max);

    do {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("TOO LOW!\n");
            if (guess > min) min = guess;   // Narrow the range from below
        } else if (guess > answer) {
            printf("TOO HIGH!\n");
            if (guess < max) max = guess;   // Narrow the range from above
        } else {
            printf("CORRECT! The answer was %d. You got it in %d tries.\n", answer, tries);
        }

    } while (guess != answer);
}
/*
 * ---- WHAT YOU LEARNED ----
 * rand()         — generates a random integer
 * srand(time(NULL)) — seeds the generator with the current time (different each run)
 * rand() % (max - min + 1) + min — formula to get a random number in a range
 * do-while is perfect here: we always want at least one guess
 * The min/max variables narrow the hint range as the user guesses
 * This is a more advanced version of practice40's guessing game
 */

// ============================================================
// SECTION 07 — NESTED LOOPS & PATTERNS
// ============================================================
// In this section you learn how to:
//   - Use loops inside loops (nested loops)
//   - Build visual patterns with characters
//   - Control spacing and alignment with loops
//   - Think in rows and columns
// ============================================================

// ============================================================
// 45 — Star Pattern — Descending (nested while)
// Topic: nested while, outer loop counts down
// ============================================================
void practice45() {
    int i = 5;
    int j;
    char star = '*';

    // Outer loop: controls the row (starts at 5, counts DOWN to 1)
    while (i > 0) {
        j = i;

        // Inner loop: prints 'i' stars on the current row
        while (j > 0) {
            printf("%c", star);
            j--;
        }

        printf("\n");
        i--;
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * Nested while: the inner loop runs completely for EACH cycle of the outer loop
 * The outer loop controls how many stars per row (starts at 5, shrinks each row)
 * j = i — the inner loop uses a copy of i, not i itself
 * If you used i in the inner loop, decrementing it there would break the outer loop
 * Output:
 *   *****
 *   ****
 *   ***
 *   **
 *   *
 */

// ============================================================
// 46 — Star Pattern — Ascending (nested while)
// Topic: nested while, outer loop counts up
// ============================================================
void practice46() {
    int i = 1;
    int j;
    char star = '*';

    // Outer loop: controls the row (counts UP from 1 to 5)
    while (i <= 5) {
        j = 1;

        // Inner loop: prints 'i' stars on the current row
        while (j <= i) {
            printf("%c", star);
            j++;
        }

        printf("\n");
        i++;
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * Same structure as practice45 — but the outer loop counts UP
 * i starts at 1 and grows: row 1 gets 1 star, row 2 gets 2 stars, etc.
 * j resets to 1 at the start of every row (j = 1 is inside the outer loop)
 * Output:
 *   *
 *   **
 *   ***
 *   ****
 *   *****
 */

// ============================================================
// 47 — Diagonal Space Pattern (nested for)
// Topic: if(i==j) print space, else print star
// ============================================================
void practice47() {
    int row = 0;
    int col = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    // i = current row, j = current column
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == j)
                printf(" ");    // Space on the diagonal where row == column
            else
                printf("*");    // Star everywhere else
        }
        printf("\n");
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * Nested for loops — outer controls rows, inner controls columns
 * i == j detects the diagonal — where the row index equals the column index
 * This shows how you can make decisions INSIDE nested loops to create patterns
 * Example output (4 rows, 4 cols):
 *   ****  → no, with diagonal:
 *    ***
 *   * **
 *   ** *
 *   *** 
 */

// ============================================================
// 48 — Number Triangle (nested for, spacing)
// Topic: nested for, symmetrical number pattern, spacing
// ============================================================
void practice48() {
    int n = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        // Print leading spaces to centre the triangle
        for (int j = 1; j < (n - i); j++)
            printf("  ");

        // Print ascending numbers: 1 2 3 ... i-1
        for (int j = 1; j < i; j++)
            printf("%2d", j);

        // Print descending numbers: i i-1 ... 1
        for (int j = i; j > 0; j--)
            printf("%2d", j);

        printf("\n");
    }
}
/*
 * ---- WHAT YOU LEARNED ----
 * Three inner loops per row: spaces, ascending numbers, descending numbers
 * The spaces shift the numbers right — creating the triangle / pyramid shape
 * Row 1: just "1"
 * Row 2: "1 2 1"
 * Row 3: "1 2 3 2 1"
 * Each row uses three separate loops — this is the key insight:
 *   one loop body can contain multiple separate loops
 */

// ============================================================
// 49 — Random Number Generator
// Topic: rand(), srand(time(NULL)), range formula
// ============================================================
void practice49() {
    int min = 1;
    int max = 100;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate three random numbers in the range min to max
    int num1 = (rand() % (max - min + 1)) + min;
    int num2 = (rand() % (max - min + 1)) + min;
    int num3 = (rand() % (max - min + 1)) + min;

    printf("Three random numbers between %d and %d:\n", min, max);
    printf("%d   %d   %d\n", num1, num2, num3);
}
/*
 * ---- WHAT YOU LEARNED ----
 * rand()         — returns a random integer between 0 and RAND_MAX (~32767 or more)
 * srand()        — sets the starting point (seed) for rand()
 * time(NULL)     — returns the current time as a number — different every second
 * Without srand, rand() gives the SAME sequence every time the program runs
 * Formula: rand() % (max - min + 1) + min
 *   % (max - min + 1) shrinks the range to 0..(max-min)
 *   + min shifts it up to min..max
 * Needs #include <stdlib.h> for rand/srand and #include <time.h> for time()
 */

// ============================================================
// SECTION 08 — FUNCTIONS
// ============================================================
// In this section you learn how to:
//   - Write your own functions
//   - Pass values into functions (parameters)
//   - Return values from functions
//   - Use forward declarations (prototypes)
//   - Understand why functions make code reusable and organised
// ============================================================

// Forward declarations — tell the compiler these functions exist before main()
// Without these, the compiler would complain when it sees the functions called in practice53
int add_two_numbers(int a, int b);
float calculate_average(int a, int b, int c);
void print_separator(void);

// ============================================================
// 50 — void Function — Basic
// Topic: writing and calling a simple void function
// ============================================================
void greet_user(char name[]) {
    // This function takes a name and prints a greeting
    printf("Hello, %s! Welcome to C programming.\n", name);
}

void practice50() {
    char name[50];
    int temp;

    // Clear buffer before fgets
    while ((temp = getchar()) != '\n' && temp != EOF);

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    // Remove the newline fgets adds at the end
    name[strlen(name) - 1] = '\0';

    // Call the function — pass the name as an argument
    greet_user(name);
}
/*
 * ---- WHAT YOU LEARNED ----
 * void function — a function that does something but does NOT return a value
 * void greet_user(char name[]) — the function signature: name, parameter type, parameter name
 * char name[] — a char array (string) passed as a parameter
 * Calling the function: greet_user(name) — the value of name is passed in
 * Functions make code reusable — you can call greet_user() as many times as you like
 */

// ============================================================
// 51 — Function with Return Value
// Topic: int return type, return statement, using the result
// ============================================================
int square_of_number(int number) {
    // This function takes a number and returns its square
    int result = number * number;
    return result;
}

void practice51() {
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the returned value in a variable
    int answer = square_of_number(num);

    printf("The square of %d is %d\n", num, answer);
}
/*
 * ---- WHAT YOU LEARNED ----
 * int square_of_number(int number) — this function RETURNS an int
 * return result — sends the value back to wherever the function was called
 * int answer = square_of_number(num) — the returned value is stored in 'answer'
 * The function runs, calculates, and hands back the result — the caller uses it
 */

// ============================================================
// 52 — Function with Multiple Parameters
// Topic: float parameters, return float, calling with variables
// ============================================================
float calculate_bmi(float weight_kg, float height_m) {
    // BMI formula: weight (kg) / height (m) squared
    float bmi = weight_kg / (height_m * height_m);
    return bmi;
}

void practice52() {
    float weight = 0.0f;
    float height = 0.0f;

    printf("Enter your weight in kg: ");
    scanf("%f", &weight);

    printf("Enter your height in metres: ");
    scanf("%f", &height);

    float bmi = calculate_bmi(weight, height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)       printf("Category: Underweight\n");
    else if (bmi < 25.0)  printf("Category: Normal\n");
    else if (bmi < 30.0)  printf("Category: Overweight\n");
    else                  printf("Category: Obese\n");
}
/*
 * ---- WHAT YOU LEARNED ----
 * A function can have multiple parameters: calculate_bmi(float weight_kg, float height_m)
 * Each parameter has its own type and name, separated by commas
 * The function returns a float — the caller stores it: float bmi = calculate_bmi(...)
 * Functions separate calculation from display — calculate_bmi only does the maths
 * The if/else chain after the call uses the result — logic stays clean and separated
 */

// ============================================================
// 53 — Forward Declarations (Prototypes)
// Topic: declaring functions before main, calling them
// ============================================================

// These functions were declared at the top of Section 08 — here are their definitions:

int add_two_numbers(int a, int b) {
    return a + b;
}

float calculate_average(int a, int b, int c) {
    return (float)(a + b + c) / 3;
}

void print_separator(void) {
    printf("-----------------------------\n");
}

void practice53() {
    int x = 0, y = 0, z = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    print_separator();
    printf("Sum of first two : %d\n", add_two_numbers(x, y));
    printf("Average of three : %.2f\n", calculate_average(x, y, z));
    print_separator();
}
/*
 * ---- WHAT YOU LEARNED ----
 * Forward declaration (prototype) — tells the compiler a function exists before its full definition
 * Without it, calling add_two_numbers() before defining it would cause a compiler error
 * Prototype syntax: return_type function_name(param_types);  — just the signature, no body
 * void print_separator(void) — void in the parameter list means "takes no arguments"
 * In larger programs, prototypes go at the top of the file (or in a header .h file)
 */

// ============================================================
// SECTION 09 — MINI PROJECTS
// ============================================================
// These projects combine everything you have learned.
// Each one solves a real problem using multiple concepts together.
// ============================================================

// ============================================================
// 54 — Compound Interest Calculator
// Topic: double, pow(), formula, math.h
// ============================================================
void practice54() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * Formula: A = P * (1 + r/n)^(n*t)
 *   P = principal, r = rate (as decimal), n = times compounded, t = years
 * rate = rate / 100 converts percentage (e.g. 5) to decimal (0.05)
 * pow(base, exponent) from math.h handles the power calculation
 * Compile with -lm to link the math library
 * This project combines: double, scanf, pow(), formula application
 */

// ============================================================
// 55 — Mad Libs Game
// Topic: char[], fgets(), string input, formatted output
// ============================================================
void practice55() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * Multiple char arrays for storing different words
 * sizeof(adjective1) — returns the size of the array in bytes (safe for fgets)
 * adjective1[strlen(adjective1) - 1] = '\0' — removes the trailing \n fgets adds
 * strlen() returns the length of a string — needs #include <string.h>
 * This project combines: char arrays, fgets, buffer clearing, formatted output
 */

// ============================================================
// 56 — Shopping Cart
// Topic: char[], fgets(), float calculation, formatted output
// ============================================================
void practice56() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * Mixing fgets (for item name with spaces) and scanf (for numbers) in one program
 * char currency[] = "£" — storing a symbol as a string
 * The buffer clearing loop is needed before fgets when scanf was used earlier
 * total = price * quantity — simple calculation combining float and int
 * This project combines: strings, float, int, buffer handling
 */

// ============================================================
// 57 — Number Guessing Game v1
// Topic: while loop, rand/srand, counter, comparison
// ============================================================
void practice57() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * rand() % 100 + 1 — generates a number from 1 to 100
 * The while loop keeps the game running until the user wins or quits
 * attempts++ — counts guesses
 * Two break conditions: correct guess OR user enters 0
 * Compare with practice44 (v2) — v2 uses do-while and narrows the range hint
 */

// ============================================================
// 58 — Shopping Tracker
// Topic: while loop, total/average/max/min, negative input check
// ============================================================
void practice58() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * continue — skips the rest of the loop body and jumps back to the condition check
 *   Used here to reject negative prices without exiting the loop
 * break — exits the loop completely (used when price == 0)
 * count == 1 sets the initial max/min from the first valid entry
 * This project combines: while, break, continue, running total, max/min tracking
 */

// ============================================================
// 59 — BMI Calculator (full version)
// Topic: float, strcpy(), if/else chain, fgets
// ============================================================
void practice59() {
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
/*
 * ---- WHAT YOU LEARNED ----
 * strcpy(dest, src) — copies a string into a char array. Cannot use = for strings.
 * height = height / 100 — converts cm to metres before the BMI formula
 * bmi = weight / (height * height) — the BMI formula
 * Multiple calculated values from one input — ideal_low, ideal_high, overweight, obese
 * This is your most complete project before functions — combines almost everything
 */

// ============================================================
// 60 — Rock Paper Scissors
// Topic: functions, rand/srand, switch, do-while
// ============================================================

// Forward declarations for this practice
int rps_get_computer_choice();
int rps_get_user_choice();
void rps_check_winner(int user, int computer);

int rps_get_computer_choice() {
    return (rand() % 3) + 1;  // 1=Rock, 2=Paper, 3=Scissors
}

int rps_get_user_choice() {
    int choice = 0;

    do {
        printf("\nChoose:\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 3)
            printf("Invalid choice. Please enter 1, 2, or 3.\n");

    } while (choice < 1 || choice > 3);  // Keep asking until valid input

    return choice;
}

void rps_check_winner(int user, int computer) {
    if (user == computer) {
        printf("It's a TIE!\n");
    } else if ((user == 1 && computer == 3) ||
               (user == 2 && computer == 1) ||
               (user == 3 && computer == 2)) {
        printf("You WIN!\n");
    } else {
        printf("You LOSE!\n");
    }
}

void practice60() {
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int user     = rps_get_user_choice();
    int computer = rps_get_computer_choice();

    // Print what each player chose
    char *choices[] = {"", "ROCK", "PAPER", "SCISSORS"};  // Index 0 unused
    printf("You chose     : %s\n", choices[user]);
    printf("Computer chose: %s\n", choices[computer]);

    rps_check_winner(user, computer);
}
/*
 * ---- WHAT YOU LEARNED ----
 * Breaking a program into functions: get_user_choice, get_computer_choice, check_winner
 * Each function has ONE job — this is good programming practice
 * do-while in rps_get_user_choice — keeps asking until valid input (1, 2, or 3)
 * || means OR — (user==1 && computer==3) || (user==2 && computer==1) ...
 * char *choices[] — an array of strings (pointers to strings) — used for display only
 * rps_ prefix on function names — avoids name conflicts with other practices
 */

// ============================================================
// 61 — Bank System
// Topic: functions, do-while, float validation, balance control
// ============================================================

// Forward declarations for bank functions
void bank_check_balance(float balance);
float bank_deposit();
float bank_withdraw(float balance);

void bank_check_balance(float balance) {
    printf("\nYour current balance is: £%.2f\n", balance);
}

float bank_deposit() {
    float amount = 0.0f;
    printf("\nEnter amount to deposit: £");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Must be greater than zero.\n");
        return 0.0f;
    }

    printf("Successfully deposited £%.2f\n", amount);
    return amount;
}

float bank_withdraw(float balance) {
    float amount = 0.0f;
    printf("\nEnter amount to withdraw: £");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Must be greater than zero.\n");
        return 0.0f;
    } else if (amount > balance) {
        printf("Insufficient funds! Your balance is £%.2f\n", balance);
        return 0.0f;
    }

    printf("Successfully withdrew £%.2f\n", amount);
    return amount;
}

void practice61() {
    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK ***\n");

    do {
        printf("\nSelect an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bank_check_balance(balance);
                break;
            case 2:
                balance = balance + bank_deposit();
                break;
            case 3:
                balance = balance - bank_withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the bank. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select 1-4.\n");
        }

    } while (choice != 4);
}
/*
 * ---- WHAT YOU LEARNED ----
 * Functions that return values used directly in expressions:
 *   balance = balance + bank_deposit() — the deposit amount is returned and added
 *   balance = balance - bank_withdraw(balance) — balance passed in, amount returned
 * do-while keeps the menu running until the user chooses 4
 * Input validation in functions: amount <= 0 returns 0 so balance stays unchanged
 * bank_ prefix — naming convention to keep these functions separate from others
 * This is the most complete project in the file — it uses: functions, do-while,
 *   switch, float, validation, and passing values between functions
 */

// ============================================================
// MAIN MENU
// ============================================================
int main() {
    int choice;

    printf("\n========================================\n");
    printf("     C PROGRAMMING JOURNEY\n");
    printf("     Mehmet Kaygusuz\n");
    printf("     Solent University — 2025/2026\n");
    printf("========================================\n");
    printf("\n--- SECTION 01: BASICS ---\n");
    printf(" 1  - Hello Deniz (first printf)\n");
    printf(" 2  - Square of a Number\n");
    printf(" 3  - Addition\n");
    printf(" 4  - Price Calculator\n");
    printf(" 5  - Age Calculator\n");
    printf(" 6  - Height Converter (cm to metres)\n");
    printf(" 7  - Find the Larger of Two Numbers\n");
    printf(" 8  - Average of Three Numbers\n");
    printf("\n--- SECTION 02: CONDITIONS (if/else) ---\n");
    printf(" 9  - Age Check\n");
    printf(" 10 - Speed Check\n");
    printf(" 11 - Ticket Price\n");
    printf(" 12 - April Fools Day\n");
    printf(" 13 - Age Comparison\n");
    printf(" 14 - Discount Calculator (bool, nested if)\n");
    printf(" 15 - Positive / Negative / Odd / Even\n");
    printf("\n--- SECTION 03: SWITCH / CASE ---\n");
    printf(" 16 - Traffic Light\n");
    printf(" 17 - Restaurant Menu\n");
    printf(" 18 - Grade System\n");
    printf(" 19 - Calculator (int version)\n");
    printf(" 20 - Calculator v2 (double + divide-by-zero)\n");
    printf(" 21 - Day and Time (nested switch)\n");
    printf(" 22 - Restaurant Sub-Menu (nested switch)\n");
    printf(" 23 - Positive / Negative / Zero (switch)\n");
    printf("\n--- SECTION 04: STRINGS ---\n");
    printf(" 24 - Login System\n");
    printf(" 25 - Name Input (fgets)\n");
    printf(" 26 - Temperature Converter (C <-> F)\n");
    printf(" 27 - Weight Converter (kg <-> pounds)\n");
    printf(" 28 - Sphere Calculator\n");
    printf("\n--- SECTION 05: LOOPS (while & for) ---\n");
    printf(" 29 - Sum of Numbers (while)\n");
    printf(" 30 - Positive / Negative Sum\n");
    printf(" 31 - Odd / Even Sum\n");
    printf(" 32 - Maximum / Minimum\n");
    printf(" 33 - Average (for loop)\n");
    printf(" 34 - Average (while loop)\n");
    printf(" 35 - Even Numbers (for loop)\n");
    printf(" 36 - Sum 1 to 10 (for loop)\n");
    printf(" 37 - Times Table — Single Number (while)\n");
    printf(" 38 - Multiplication Table 12x12 (nested while)\n");
    printf(" 39 - Reverse a Number (for loop)\n");
    printf(" 40 - Reverse a Number (while loop)\n");
    printf(" 41 - Factorial (while loop)\n");
    printf(" 42 - Factorial (for loop)\n");
    printf("\n--- SECTION 06: DO-WHILE LOOP ---\n");
    printf(" 43 - Ticket Price (do-while)\n");
    printf(" 44 - Number Guessing Game v2 (do-while + range)\n");
    printf("\n--- SECTION 07: NESTED LOOPS & PATTERNS ---\n");
    printf(" 45 - Star Pattern — Descending\n");
    printf(" 46 - Star Pattern — Ascending\n");
    printf(" 47 - Diagonal Space Pattern\n");
    printf(" 48 - Number Triangle\n");
    printf(" 49 - Random Number Generator\n");
    printf("\n--- SECTION 08: FUNCTIONS ---\n");
    printf(" 50 - void Function — Basic\n");
    printf(" 51 - Function with Return Value\n");
    printf(" 52 - Function with Multiple Parameters (BMI)\n");
    printf(" 53 - Forward Declarations (Prototypes)\n");
    printf("\n--- SECTION 09: MINI PROJECTS ---\n");
    printf(" 54 - Compound Interest Calculator\n");
    printf(" 55 - Mad Libs Game\n");
    printf(" 56 - Shopping Cart\n");
    printf(" 57 - Number Guessing Game v1\n");
    printf(" 58 - Shopping Tracker\n");
    printf(" 59 - BMI Calculator (full version)\n");
    printf(" 60 - Rock Paper Scissors\n");
    printf(" 61 - Bank System\n");
    printf("\n  0 - Exit\n");
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
        case 42: practice42(); break;
        case 43: practice43(); break;
        case 44: practice44(); break;
        case 45: practice45(); break;
        case 46: practice46(); break;
        case 47: practice47(); break;
        case 48: practice48(); break;
        case 49: practice49(); break;
        case 50: practice50(); break;
        case 51: practice51(); break;
        case 52: practice52(); break;
        case 53: practice53(); break;
        case 54: practice54(); break;
        case 55: practice55(); break;
        case 56: practice56(); break;
        case 57: practice57(); break;
        case 58: practice58(); break;
        case 59: practice59(); break;
        case 60: practice60(); break;
        case 61: practice61(); break;
        case 0:  printf("Exiting program...\n"); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}