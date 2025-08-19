# Experiment 10 : Pointer Operations in C++

## Aim
- To study and implement pointer operations in C++:
  1. Call by Value
  2. Call by Reference
  3. Incrementing salary by 20% if 3 out of 4 career-related conditions are true
  4. Reversing an array using pointers

## Tools Used
- Programiz Online Compiler or Visual Studio (VS)

## Theory

### Pointers in C++
Pointers are variables that store the memory addresses of other variables. They are fundamental in C++ for direct memory manipulation, efficient array handling, and implementing call by reference in functions.

### Concepts Covered:
- **Call by Value**: A copy of the variable is passed to the function. Changes inside the function do not affect the original variable.  
- **Call by Reference**: The address of the variable is passed. Changes inside the function affect the original variable.  
- **Pointer-based Conditions**: Logical conditions can be checked, and values (like salary) can be updated using pointers.  
- **Reversing Arrays**: Using pointers to swap elements from the start and end until the entire array is reversed.  

---

## Algorithm

### 1. Call by Value
1. Start  
2. Declare a variable and pass it to a function using call by value  
3. Modify the variable inside the function  
4. Display the variable before and after the function call to show no change  
5. Stop  

### 2. Call by Reference
1. Start  
2. Declare a variable and pass its reference to a function  
3. Modify the variable inside the function using its reference  
4. Display the variable before and after the function call to show the change  
5. Stop  

### 3. Incrementing Salary by 20% if 3 out of 4 Career Conditions are True
1. Start  
2. Take input for four career-related conditions (true/false)  
3. Count how many are true  
4. If count ≥ 3, increase salary by 20% using pointers  
5. Display updated salary  
6. Stop  

### 4. Reversing an Array Using Pointers
1. Start  
2. Input elements into an array  
3. Use two pointers: one pointing to the start, the other to the end  
4. Swap elements and move pointers### 4. Reversing an Array Using Pointers
1. Start  
2. Input elements into an array  
3. Use two pointers: one pointing to the start, the other to the end  
4. Swap elements and move pointers towards each other  
5. Continue until all elements are reversed  
6. Display the reversed array  
7. Stop  

---

## Functions
- `cin` and `cout` for input and output  
- Functions with **call by value** and **call by reference** parameters  
- Logical conditions (`if`, `>=`) to evaluate truth values  
- Pointer arithmetic for array reversal  

---

## Conclusion
Through this experiment, I learned the difference between call by value and call by reference in C++. I also learned how to apply pointers to real-world conditions like salary increments, and how to reverse an array using pointers. This deepened my understanding of how memory addresses and pointer arithmetic can be used effectively in solving problems.
