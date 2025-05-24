#include <iostream>
#include <vector>
using namespace std;
class Patient {
public:
 string name, illness, admissionDate, dischargeDate, doctor, contactNumber;
 int age;
 char gender;
 void display() {
 cout << "Name: " << name << "\n"
 << "Illness: " << illness << "\n"
 << "Admission Date: " << admissionDate << "\n"
 << "Discharge Date: " << dischargeDate << "\n"
 << "Doctor: " << doctor << "\n"
 << "Contact Number: " << contactNumber << "\n"
 << "Age: " << age << "\n"
 << "Gender: " << gender << "\n";
 }
};
class HospitalManagementSystem {
public:
 vector<Patient> patients;
 void addPatient() {
 Patient p;
 cout << "Enter Patient Name: ";
 cin.ignore();
 getline(cin, p.name);
 cout << "Enter Illness: ";
 getline(cin, p.illness);
 cout << "Enter Admission Date (DD/MM/YYYY): ";
 getline(cin, p.admissionDate);
 cout << "Enter Discharge Date (DD/MM/YYYY): ";
 getline(cin, p.dischargeDate);
 cout << "Enter Doctor Name: ";
 getline(cin, p.doctor);
 cout << "Enter Contact Number: ";
 getline(cin, p.contactNumber);
 cout << "Enter Age: ";
 cin >> p.age;
 cout << "Enter Gender (M/F): ";
 cin >> p.gender;
 patients.push_back(p);
 }
 void displayPatients() {
 if (patients.empty()) {
 cout << "No patients to display." << endl;
 } else {
 for (size_t i = 0; i < patients.size(); ++i) {
 cout << "\nPatient ID: " << i + 1 << "\n";
 patients[i].display();
 }
 }
 }
 void searchPatient() {
 int id;
 cout << "Enter Patient ID to search: ";
 cin >> id;
 if (id > 0 && id <= patients.size()) {
 cout << "\nPatient found:\n";
 patients[id - 1].display();
 } else {
 cout << "Patient not found." << endl;
 }
 }
};
int main() {
 HospitalManagementSystem hms;
 while (true) {
 system("cls");
 cout << "****************************************************"<<endl;
cout<<" \t Hospital Management System " << endl;
cout<< "****************************************************"<<endl;
 cout << " 1. Add Patient" << endl;
 cout << " 2. Display All Patients" << endl;
 cout << " 3. Search Patient" << endl;
 cout << " 4. Exit " << endl;
cout<<"*****************************************************"<<endl;
 int choice;
 cout << "Enter Choice: ";
 cin >> choice;
 switch (choice) {
 case 1:
 cout << "Enter patient details:" << endl;
 hms.addPatient();
 cout<<"PATIENT ADDED !!!!!!";
 break;
 case 2:
 hms.displayPatients();
 break;
 case 3:
 hms.searchPatient();
 break;
 case 4:
 exit(0);
 break;
 default:
 cout << "Invalid Choice !!!!!" << endl;
 }
 cout << "\n\n";
 system("pause");
 }
}