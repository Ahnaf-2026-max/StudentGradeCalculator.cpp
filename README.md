# C++ Student Grade Calculator

## 📌 Overview
The C++ Student Grade Calculator is a simple console-based application that calculates a student's average marks across three subjects and determines their grade and pass/fail status.

This beginner-friendly project demonstrates fundamental C++ programming concepts, including user input, conditional statements, calculations, and formatted output.

## ✨ Features
- Enter the student's name.
- Input marks for three subjects.
- Calculate the average marks.
- Assign a grade based on the average.
- Display the student's result with two decimal places.
- Show pass or fail status.

## 🧠 Grading System

| Average Marks | Grade |
|---|---|
| 80 and above | A+ |
| 70–79.99 | A |
| 60–69.99 | B |
| 50–59.99 | C |
| Above 40 but below 50 | D |
| 40 and below | F |

**Pass/Fail Rule:** Students pass if their average is greater than 40. Otherwise, they fail.

## 💻 Concepts Used
- C++ input and output (`cin`, `cout`)
- Strings (`string`)
- Variables and data types
- Arithmetic calculations
- Conditional statements (`if`, `else if`, `else`)
- `getline()` for reading the student's full name
- Output formatting using `iomanip`, `fixed`, and `setprecision()`

## 🛠️ Technologies
- **Programming Language:** C++
- **Libraries:** `iostream`, `string`, `iomanip`
- **IDE:** Code::Blocks or any C++-compatible IDE

## ▶️ How to Run

1. Download or clone this repository.
2. Open the source file in Code::Blocks or another C++ IDE.
3. Build and run the program.
4. Enter the student's name and marks for three subjects.
5. View the calculated average, grade, and result status.

### Compile using GCC

If your source file is named `StudentGradeCalculator.cpp`, run:

```bash
g++ StudentGradeCalculator.cpp -o grade_calculator
```

On Windows, run the compiled program using:

```bash
grade_calculator.exe
```

## 📷 Example Output

```text
Enter student name: John Smith
Enter marks for 3 subjects: 85 75 90

--- Student Result ---
Name: John Smith
Average: 83.33
Grade: A+
Status: Pass
```

## ⚠️ Limitations
- The program calculates results for only three subjects.
- It does not validate whether marks are within a particular range.
- Results are displayed in the console and are not saved to a file.

## 🚀 Future Improvements
- Support more subjects.
- Validate marks before calculating the average.
- Store student results in a file.
- Allow users to calculate results for multiple students.

## 👨‍💻 Author
**Ahnaf-2026-max**

GitHub: https://github.com/Ahnaf-2026-max

## 📄 License
This project is licensed under the MIT License. See the `LICENSE` file for details.

