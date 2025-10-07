# 🔁 Loops in C++

## 🎯 AIM  
To explore the use of `for`, `while`, and `do while` loops in C++ for automating repetitive tasks, implementing algorithms, and optimizing control flow in applications.

---

## 📚 THEORY

Loops in C++ are control flow structures that allow repeated execution of a block of code. They are fundamental in programming for:

- Automating repetitive tasks  
- Iterating over data structures  
- Implementing algorithms efficiently  
- Enhancing code modularity and readability  

---

## 🔄 Types of Loops in C++

### 1. **For Loop**
Used when the number of iterations is known beforehand.  
Combines initialization, condition check, and increment or decrement in a single line.  
Ideal for counting loops, array traversal, and fixed iteration tasks.

### 2. **While Loop**
Used when the number of iterations is unknown.  
Condition is checked before each iteration.  
Suitable for condition-driven logic such as waiting for user input or sensor data.

### 3. **Do While Loop**
Executes the loop body at least once before checking the condition.  
Useful in scenarios like menu-driven programs or input validation where the loop must run at least once.

---

## 🧭 Loop Control Statements

### **Break**
Terminates the loop immediately when a specific condition is met.  
Commonly used in search operations or early exits.

### **Continue**
Skips the current iteration and proceeds to the next.  
Helps avoid deeply nested conditions and improves clarity.

---

## 🔁 Nested Loops

Nested loops are loops placed inside other loops. They are essential for:

- Generating patterns such as triangles or grids  
- Traversing multi-dimensional arrays or matrices  
- Creating structured outputs like multiplication tables  

In nested loops, the inner loop completes its full cycle for each iteration of the outer loop.

---

## 🧠 Common Loop-Based Algorithms

### **Factorial Calculation**
Multiplies all positive integers up to a given number.  
Used in combinatorics and mathematical computations.

### **Fibonacci Sequence**
Each term is the sum of the two preceding ones.  
Applied in algorithm design and modelling growth patterns.

### **Prime Number Check**
Determines if a number has no divisors other than one and itself.  
Crucial in cryptography and number theory.

### **Sum of Natural Numbers**
Adds numbers sequentially from one to N.  
Demonstrates basic iterative accumulation.

### **Pattern Generation**
Uses nested loops to print visual structures.  
Enhances understanding of loop flow and indexing.

---

## 📊 Comparative Overview of Loop Types

| Feature               | For Loop                          | While Loop                        | Do While Loop                          |
|----------------------|-----------------------------------|-----------------------------------|----------------------------------------|
| Use Case             | Known iteration count             | Unknown iteration count           | Must run at least once                 |
| Condition Check      | Before loop starts                | Before loop starts                | After loop body                        |
| Initialization       | Inside loop header                | Outside loop                      | Outside loop                           |
| Iteration Control    | Structured and concise            | Manual control                    | Manual control                         |
| Readability          | High for counting tasks           | Good for condition-based logic    | Best for menu or input-driven programs |
| Risk of Infinite Loop| Lower                             | Moderate                          | Moderate                               |

---

## ⚙️ Loop Optimisation Techniques

### **Minimise Work Inside the Loop**
Avoid complex operations or function calls within the loop body.

### **Use Efficient Conditions**
Keep loop conditions simple and fast to evaluate.

### **Reduce Memory Access**
Store frequently accessed values in temporary variables.

### **Avoid Deep Nesting**
Flatten logic where possible to reduce time complexity.

### **Short Circuiting with Break**
Exit loops early when the goal is achieved.

### **Loop Unrolling**
Combines multiple iterations into one to reduce overhead.  
Used in performance-critical systems.

---

## 📋 Algorithm

### ✅ Print Even Numbers from 1 to 10

1. **Start**  
2. Initialise an integer variable `i` to 1  
3. Repeat steps 4-5 while `i` is less than or equal to 10  
4. Check if `i % 2 == 0`  
   - If true → Display the value of `i`  
5. Increment `i` by 1  
6. **End**

---

### ✅ Password Validation System

1. **Start**
2. Declare a constant string variable `password` which holds the correct password (`"BCD9QTTU"`).
3. Initialise a variable `user_password` to store the entered password.
4. Initialise an integer `attempts` to keep track of the number of login attempts, and set a constant `max_attempts` to 3.
5. Start a loop that runs while the number of attempts is less than `max_attempts`:
   - Prompt the user to enter a password.
   - Hide the entered characters and display '*' for each character typed by the user using `_getch()`.
   - If the user presses backspace, remove the last entered character.
6. Check if the entered password matches the predefined password:
   - If true → Display "System is Unlocked" and exit.
   - If false → Increment the number of attempts and display the remaining attempts.
7. If the user exceeds the maximum allowed attempts, display "System is locked."
8. **End**

---

### ✅ PRN Palindrome Checker

1. **Start**
2. Prompt the user to enter a PRN.
3. Initialise the variables `reversed` to 0 and `digit_count` to 0.
4. Store the original PRN value in `original_PRN`.
5. Start a loop to reverse the digits of the PRN:
   - Extract the last digit of the PRN using `PRN % 10`.
   - Multiply `reversed` by 10 and add the extracted digit.
   - Divide the PRN by 10 (integer division) to remove the last digit.
   - Increment `digit_count` by 1 for each digit processed.
6. Display the `original_PRN`, `reversed PRN`, and `digit_count`.
7. Check if the original PRN is equal to the reversed PRN:
   - If true → Display "The PRN is a Palindrome."
   - If false → Display "The PRN is not a Palindrome."
8. **End**

---

### ✅ Hourglass Pattern Printer

1. **Start**
2. Prompt the user to enter the number of rows, `n`.
3. Print the upper half of the diamond:
   - For each row, print leading spaces to align the stars correctly.
   - Print the stars in the current row.
4. Print the lower half of the diamond:
   - Similar to the upper half, but the number of stars increases as you go down.
5. **End**

---

## 🧠 CONCLUSION

Loops are a cornerstone of C++ programming, enabling efficient repetition, algorithmic logic, and structured control flow. Understanding the differences between `for`, `while`, and `do while` loops, along with control statements and optimisation techniques, empowers developers to write clean, scalable, and high-performance code. Mastery of loops is essential for solving real-world problems, from pattern generation to complex algorithmic tasks.
