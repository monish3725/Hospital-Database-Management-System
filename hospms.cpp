#include <iostream>
#include <string>
using namespace std;

class Hospital
{
private:
    struct Patient
    {
        int id;
        string name;
        int age;
        string doctor;
        string date;
        string time;
    };

    Patient patients[100];
    int count = 0;

public:
    void addPatient()
    {
        if (count >= 100)
        {
            cout << "\n[Error] Hospital is at full capacity!\n";
            return;
        }

        cout << "\n--- Add Patient ---\n";
        patients[count].id = count + 1;

        cout << "Enter name: ";
        cin.ignore();
        getline(cin, patients[count].name);

        cout << "Enter age: ";
        cin >> patients[count].age;

        cout << "Enter doctor: ";
        cin.ignore();
        getline(cin, patients[count].doctor);

        cout << "Enter appointment date (DD-MM-YYYY): ";
        cin >> patients[count].date;

        cout << "Enter time (HH:MM): ";
        cin >> patients[count].time;

        count++;
        cout << "Patient added successfully!\n";
    }

    void viewPatients()
    {
        cout << "\n--- Patient List ---\n";
        if (count == 0)
        {
            cout << "No records found.\n";
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout << "ID: " << patients[i].id 
                 << " | Name: " << patients[i].name 
                 << " | Age: " << patients[i].age 
                 << " | Doctor: " << patients[i].doctor 
                 << " | Date: " << patients[i].date 
                 << " | Time: " << patients[i].time << endl;
        }
    }

    void searchPatient()
    {
        int id;
        cout << "Enter Patient ID: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (patients[i].id == id)
            {
                cout << "Found: " << patients[i].name 
                     << ", Doctor: " << patients[i].doctor 
                     << ", Date: " << patients[i].date 
                     << ", Time: " << patients[i].time << endl;
                return;
            }
        }
        cout << "Patient not found!\n";
    }

    void updatePatient()
    {
        int id;
        cout << "Enter Patient ID to update: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (patients[i].id == id)
            {
                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, patients[i].name);

                cout << "Enter new age: ";
                cin >> patients[i].age;

                cout << "Enter new doctor: ";
                cin.ignore();
                getline(cin, patients[i].doctor);

                cout << "Enter new date: ";
                cin >> patients[i].date;

                cout << "Enter new time: ";
                cin >> patients[i].time;

                cout << "Updated successfully!\n";
                return;
            }
        }
        cout << "Patient not found!\n";
    }

    void deletePatient()
    {
        int id;
        cout << "Enter Patient ID to delete: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (patients[i].id == id)
            {
                for (int j = i; j < count - 1; j++)
                {
                    patients[j] = patients[j + 1];
                }
                count--;
                cout << "Deleted successfully!\n";
                return;
            }
        }
        cout << "Patient not found!\n";
    }

    void billing()
    {
        int days;
        float charge = 500.0;
        cout << "\n--- Billing ---\n";
        cout << "Enter number of days admitted: ";
        cin >> days;
        
        float total = days * charge;
        cout << "Total Bill: " << total << endl;
    }

    void bookAppointment()
    {
        addPatient();
        cout << "Appointment booked successfully!\n";
    }

    void rescheduleAppointment()
    {
        int id;
        cout << "\nEnter Patient ID to reschedule: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (patients[i].id == id)
            {
                cout << "Current Date: " << patients[i].date 
                     << " | Time: " << patients[i].time << endl;
                cout << "Enter new date: ";
                cin >> patients[i].date;
                cout << "Enter new time: ";
                cin >> patients[i].time;
                cout << "Rescheduled successfully!\n";
                return;
            }
        }
        cout << "Patient not found!\n";
    }
};

int main()
{
    Hospital h;
    int choice;

    do
    {
        cout << "\n====== Hospital Management System ======\n";
        cout << "1. Add Patient\n"
             << "2. View Patients\n"
             << "3. Search Patient\n"
             << "4. Update Patient\n"
             << "5. Delete Patient\n"
             << "6. Billing\n"
             << "7. Book Appointment\n"
             << "8. Reschedule Appointment\n"
             << "9. Exit\n"
             << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: h.addPatient(); break;
            case 2: h.viewPatients(); break;
            case 3: h.searchPatient(); break;
            case 4: h.updatePatient(); break;
            case 5: h.deletePatient(); break;
            case 6: h.billing(); break;
            case 7: h.bookAppointment(); break;
            case 8: h.rescheduleAppointment(); break;
            case 9: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 9);

    return 0;
}   
