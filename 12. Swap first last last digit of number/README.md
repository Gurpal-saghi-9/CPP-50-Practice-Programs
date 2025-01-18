# 🔢 Swap First and Last Digit of a Number

This folder contains a C++ program to swap the first and last digits of a given number. This program demonstrates basic mathematical operations and logical thinking.

---

## 📜 Program Details

### 📄 File Name: 
- `12. Swap first last last digit of number`

### ✨ Features:
- Accepts an integer input from the user.
- Extracts the first and last digits of the number.
- Swaps the two digits while keeping the rest of the number unchanged.
- Displays the modified number.

### 🛠️ Techniques Used:
1. Mathematical operations like division and modulus to extract digits.
2. Loops to determine the number of digits.
3. Arithmetic to reconstruct the number with swapped digits.

---

## 📂 Folder Structure
- `01_using_string_conversion.cpp`: Program file to swap the first and last digits usig string conversion.
- `02_using_mathematical_op.cpp`: Program file to swap the first and last digits usig mathemetical functions.
- `03_using_array_manipulation.cpp`: Program file to swap the first and last digits usig array manipulation.
- `04_using_recursion.cpp`: Program file to swap the first and last digits usig recursion.
- `README.md`: Documentation for the program.

---

## 💻 Example Input & Output

### Example 1:
**Input:**  
```sh
Enter a number: 12345
```
**Output:**  
```sh
Number after swapping first and last digit: 52341
```

### Example 2:
**Input:**  
```sh
Enter a number: 400
```

**Output:**  
```sh
Number after swapping first and last digit: 004
```


---

## 📷 Dry Code Explanation
Below is a visual representation of how the program checks if a number is a palindrome:

<div align="center">
  <img src="https://github.com/Gurpal-saghi-9/CPP-50-Practice-Programs" alt="Palindrome Number Logic Dry Run" width="50%">
</div>

---

## 🚀 How It Works
1. The program takes a number as input.
2. Extracts:
   - **First digit** by repeatedly dividing the number by 10.
   - **Last digit** using the modulus operator (`% 10`).
3. Reconstructs the number by swapping the first and last digits:
   - Removes the original first and last digits.
   - Inserts the swapped digits in their respective places.
4. Prints the resulting number.

---

## 🖼️ Dry Code Example
If the input is `2734`:
- **First digit:** `2`
- **Last digit:** `4`
- **Intermediate steps:**
  - Remove the first digit: `734`
  - Remove the last digit: `273`
  - Reconstruct the number with swapped digits: `4732`
- **Output:** `4732`

---

## 🤝 Contributions
Contributions are welcome! You can:
- Add error handling for edge cases (e.g., single-digit numbers).
- Optimize the logic for performance with large numbers.
- Submit a pull request with your improvements.

---

## 📧 Contact
For any queries, connect with me:

GitHub: [Gurpal-saghi-9](https://github.com/Gurpal-saghi-9)  
Email: Gurusaghi324@gmail.com  
