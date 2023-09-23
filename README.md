# C++ Person Class

This C++ code defines a `Person` class that represents an individual with attributes like ID, first name, last name, email, and phone number. It provides methods for interacting with these attributes, including sending emails and SMS messages.

## Introduction

The `Person` class is designed for managing individual person-related data within a C++ program. It encapsulates common attributes and operations associated with a person's information.

## Getting Started

To use the `Person` class in your C++ program, follow these steps:

1. **Copy the `Person` Class Definition:** Include the `Person` class definition in your code.

2. **Create `Person` Objects:** Instantiate `Person` objects by providing values for the ID, first name, last name, email, and phone number attributes.

3. **Interact with `Person` Objects:** Use the provided methods to interact with `Person` objects, including sending emails, SMS messages, or modifying attributes.

4. **Compile and Run:** Finally, compile and run your C++ program.

## Class Structure

The `Person` class has the following attributes:

- `int _id` (read-only)
- `string _firstName`
- `string _lastName`
- `string _email`
- `string _phone`

## Methods

The `Person` class provides the following methods:

- `int getId()`
- `string getFirstName()`
- `void setFirstName(string fName)`
- `string getLastName()`
- `void setLastName(string lName)`
- `string getEmail()`
- `void setEmail(string eMail)`
- `string getPhone()`
- `void setPhone(string phoneNumber)`
- `void sendEmail(string subject, string body)`
- `void sendSms(string message)`
- `void print()`

## Example

Here's an example of how to create a `Person` object and use its methods:

```cpp
int main() {
    // Create a Person object
    Person person1(1, "Abdelrahman", "Alfawakhry", "Abdelrahman.Alfawakhry@X.com", "1234567890");
    
    // Print person details
    person1.print();
    
    // Send an email
    person1.sendEmail("Hello", "How are you?");
    
    // Send an SMS
    person1.sendSms("How are you");
    
    return 0;
}
