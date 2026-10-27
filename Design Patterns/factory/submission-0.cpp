class Vehicle {
public:
    virtual string getType() = 0;
};

class Car : public Vehicle {
public:
    string getType() override {
        return "Car";
    }
};

class Bike : public Vehicle {
public:
    string getType() override {
        return "Bike";
    }
};

class Truck : public Vehicle {
public:
    string getType() override {
        return "Truck";
    }
};

class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
};

class CarFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Car* c = new Car;
        Vehicle* v = c;
        return v;
    }
};

class BikeFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Bike* b = new Bike;
        Vehicle* v = b;
        return v;
    }
};

class TruckFactory : public VehicleFactory {
    // Write your code here
    Vehicle* createVehicle(){
        Truck* t = new Truck;
        Vehicle* v = t;
        return v;
    }
};
