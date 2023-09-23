#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    const int id;
    string firstName;
    string lastName;
    string email;
    string phone;

public:
    // Constructor
    Person(int id, const string& firstName, const string& lastName, const string& email, const string& phone)
        : id(id), firstName(firstName), lastName(lastName), email(email), phone(phone) {}

    // Getter for ID (read-only)
    int getId() const {
        return id;
    }

    // Getter and setter methods for other attributes
    const string& getFirstName() const {
        return firstName;
    }

    void setFirstName(const string& fName) {
        firstName = fName;
    }

    const string& getLastName() const {
        return lastName;
    }

    void setLastName(const string& lName) {
        lastName = lName;
    }

    const string& getEmail() const {
        return email;
    }

    void setEmail(const string& eMail) {
        email = eMail;
    }

    const string& getPhone() const {
        return phone;
    }

    void setPhone(const string& phoneNumber) {
        phone = phoneNumber;
    }

    // Method to send an email
    void sendEmail(const string& subject, const string& body) {
        cout << "Sending email to: " << email << endl;
        cout << "Subject: " << subject << endl;
        cout << "Body: " << body << endl;
    }

    // Method to send an SMS
    void sendSms(const string& message) {
        cout << "Sending SMS to phone " << phone << ": " << message << endl;
    }

    // Method to print person details
    void print() {
        cout << "ID: " << id << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
    }
};

int main() {
    // Example usage:
    Person person1(1, "Abdelrahman", "Alfawakhry", "Abdelrahman.Alfawakhry@X.com", "123456789");
    person1.print();
    person1.sendEmail("Hello", "How are you?");
    person1.sendSms("How are you");

    return 0;
}
