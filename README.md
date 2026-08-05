# String Linear Search in C++

## 📌 Description
This C++ program performs a **Linear Search** on an array of strings. It asks the user to enter a name and searches for that name in a predefined list using the `strcmp()` function from the `<cstring>` library.

If the name is found, the program displays its index position; otherwise, it displays **"Not Found"**.

---

## 🚀 Features
- Stores multiple names in a 2D character array.
- Accepts user input.
- Uses `strcmp()` for string comparison.
- Implements the Linear Search algorithm.
- Displays the index of the searched string if found.

---

## 🛠 Technologies Used
- C++
- `<iostream>`
- `<cstring>`

---

## 📂 Array Used

```cpp
{"RAJU", "KAMAL", "KHUSHI", "ORANGE"}
```

---

## ▶️ How It Works

1. Store names in a character array.
2. Calculate the total number of elements.
3. Take a name as input from the user.
4. Traverse the array one by one.
5. Compare each string with the input using `strcmp()`.
6. If a match is found, display its index.
7. Otherwise, print **"Not Found"**.

---

## 💻 Sample Output

### Input
```
Enter name to search: KHUSHI
```

### Output
```
Found at index 2
```

### Input
```
Enter name to search: ROHAN
```

### Output
```
Not Found
```

---

## ⏱ Time Complexity

- **Best Case:** O(1)
- **Worst Case:** O(n)
- **Average Case:** O(n)

where **n** is the number of strings in the array.

---

## 📚 Concepts Covered

- Arrays
- Character Arrays (Strings)
- Linear Search
- `strcmp()` Function
- Looping
- Conditional Statements

---

## 👨‍💻 Author

**Madhav Mishra**
