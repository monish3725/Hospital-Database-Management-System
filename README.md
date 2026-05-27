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

1. **Clone the repository:**
```bash
   git clone [https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPOSITORY_NAME.git)
