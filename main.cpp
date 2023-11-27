#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Patient {
    string name;
    int icNum;
    int phoneNum;
   // Patient_Details details;  // Aggregation relationship

public:
    Patient() {
        // Constructor implementation if needed
    }

    string getName() const {
        return name;
    }

    int getIcNum() const {
        return icNum;
    }

    int getPhoneNum() const {
        return phoneNum;
    }

    const Patient_Details& getDetails() const {
        return details;
    }
};
