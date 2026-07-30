# 🏨 Hotel Management System (C++)

A modern **console-based Hotel Management System** built in **C++**, designed to simulate the day-to-day operations of a hotel while strengthening Object-Oriented Programming (OOP) concepts and modern C++ practices.

This project is being developed **step by step**, with every feature carefully implemented and documented to reflect a real software development workflow.

---

## ✨ Project Vision

Imagine managing a hotel where every guest, booking, and room is organized efficiently.

This project aims to recreate that experience through a menu-driven application, transforming a simple terminal into a functional hotel management system.

Rather than writing everything at once, the application is built incrementally—just like professional software projects—making it easy to understand, maintain, and extend.

---

## 🚀 Current Features

* Add new customers
* Display all registered customers
* Object-Oriented design using classes
* Dynamic customer storage using `std::vector`
* Menu-driven interface
* Modular project structure with separate header and source files

---

## 🔨 Upcoming Features

* 🔍 Search customer by ID
* 🛏️ Room booking system
* 🚪 Customer check-out
* 💰 Automatic bill generation
* 💾 Save customer records to files
* 📂 Load records on startup
* ✔️ Input validation
* 📊 Booking reports and statistics
* ⭐ Improved user experience

---

## 🧠 Concepts Practiced

* Classes & Objects
* Constructors
* Encapsulation
* Getters & Setters
* Header & Source File Separation
* Scope Resolution Operator (`::`)
* `const` Member Functions
* Vectors (`std::vector`)
* Range-based `for` Loops
* Modular Programming
* File Handling

---

## 📂 Project Structure

```text
cpp-hotel-management-system/
│
├── include/
│   ├── customer.h
│   └── hotel.h
│
├── src/
│   ├── customer.cpp
│   ├── hotel.cpp
│   └── main.cpp
│
├── data/
│   └── customers.txt
│
├── README.md
├── LICENSE
└── .gitignore
```

---

## 🛠️ Technologies Used

* C++
* Object-Oriented Programming
* Standard Template Library (STL)
* Visual Studio Code
* MinGW (G++)
* Git & GitHub

---

## ▶️ How to Compile

```bash
g++ src/main.cpp src/customer.cpp src/hotel.cpp -o hotel.exe
```

Run the application:

```bash
./hotel.exe
```

On Windows PowerShell:

```powershell
.\hotel.exe
```

---

## 🎯 Learning Goal

This project is more than a hotel management application.

It serves as a practical journey through C++, where each feature introduces a new programming concept and demonstrates how multiple classes work together to build a complete software application.

Every commit represents a meaningful milestone in that learning process.

---

## 📜 License

This project is licensed under the MIT License.
