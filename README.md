# Hospital-Database-Management-System
# 🏥 Hospital Management System (DBMS)

A robust, console-based Database Management System built in C++ utilizing Object-Oriented Programming (OOP) principles. This application simulates real-world hospital workflows, including patient administrative tracking, live appointment scheduling, and automated billing management.

## 🚀 Features

The system offers a comprehensive suite of administrative modules managed via an interactive command-line interface:

*   **Patient Record Administration:** 
    *   **Add Patients:** Register new patients with auto-incremented secure IDs.
    *   **View Records:** Display a comprehensive, clean layout of all active patient files.
    *   **Search & Update:** Instantly query records by ID and modify existing details (e.g., doctor reassignment, updated contact schedules).
    *   **Safe Deletion:** Remove records with automatic array shifting to ensure zero data fragmentation.
*   **Appointment Management:** 
    *   **Book Appointments:** Streamlined entry linking patients directly to their designated specialist.
    *   **Reschedule Engine:** Quickly update time slots and structural dates without wiping profile details.
*   **Financial Engine:** 
    *   **Automated Billing:** Dynamic checkout calculation based on inpatient admission duration and fixed daily hospital tariffs.

---

## 🛠️ Tech Stack & Architecture

*   **Language:** C++ (C++11 or higher recommended)
*   **Paradigm:** Object-Oriented Programming (OOP) encapsulation via a dedicated `Hospital` manager class.
*   **Data Structure:** Internal structured arrays (`struct Patient`) optimizing local memory caching for fixed records (Capacity: 100 concurrent profiles).
*   **I/O Stream Handling:** Safe stream sanitation utilizing `cin.ignore()` and `getline()` to bypass common delimiter buffer errors.

---

## 💻 Getting Started

### Prerequisites
To compile and run this project locally, you need a C++ compiler installed on your system:
*   **GCC/G++** (Linux/Mac)
*   **MinGW** (Windows)
*   An IDE like **VS Code**, **Code::Blocks**, or **CLion**.

### Installation & Execution

1. **Step 1:** Clone the repository using git clone https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git to pull the project files to your machine.
2. **Step 2:** Navigate into the project folder by running cd YOUR_REPOSITORY_NAME to switch your working directory.
3. **Step 3:** Compile the C++ source code by executing g++ -O3 main.cpp -o hospital_system to build the optimized executable.
4. **Step 4:** Launch the application by running ./hospital_system to open the interactive command-line interface.

## System Preview & Menu Structure

====== Hospital Management System ======
1. Add Patient
2. View Patients
3. Search Patient
4. Update Patient
5. Delete Patient
6. Billing
7. Book Appointment
8. Reschedule Appointment
9. Exit
Enter choice:

## Data Schema Representation

Field      Data Type      Description
id         int            Auto-generated sequential tracking identifier
name       string         Full name of the patient (spaces supported)
age        int            Age tracking for demographic distribution
doctor     string         Assigned primary healthcare physician
date       string         Target reservation schedule (DD-MM-YYYY)
time       string         Target reservation timeframe (HH:MM)
