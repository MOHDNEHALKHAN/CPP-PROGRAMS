/*PROGRAM USING POLYMORPHISM*/

#include<iostream>

class vehicle {
    int wheels;
    float weight;
public:
    virtual void message(void) {
        std::cout << "vehicle message, from vehicle, the base class\n";
    }
};

class car : public vehicle {
    int passenger_load;
public:
    void message(void) override {
        std::cout << "car message, from car, the vehicle derived class\n";
    }
};

class truck : public vehicle {
    int passenger_load;
    float payload;
public:
    int passenger(void) {
        return passenger_load;
    }
};

class boat : public vehicle {
    int passenger_load;
public:
    int passenger(void) {
        return passenger_load;
    }

    void message(void) override {
        std::cout << "boat message from boat, the vehicle derived class\n";
    }
};

int main() {
    vehicle unicycle;
    car sedan_car;
    truck trailer;
    boat sailboat;

    unicycle.message();
    sedan_car.message();
    trailer.message();
    sailboat.message();

    // Using pointers for polymorphic behavior
    vehicle* ptr = &unicycle;
    ptr->message();

    ptr = &sedan_car;
    ptr->message();

    ptr = &trailer;
    ptr->message();

    ptr = &sailboat;
    ptr->message();

    return 0;
}
