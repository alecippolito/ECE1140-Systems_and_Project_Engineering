#ifndef TRAINPHYSICS_H
#define TRAINPHYSICS_H


class TrainPhysics{
    public:
        int numCars;
        double mass;
        double length;
        double width;
        double height;
        double currentVelocity;
        double power;
        double acceleration;

    TrainPhysics(int numCars/*, Block *block*/);
    double calculateVelocity();

    void setPower(double);
    double getPower();
};
#endif // TRAINPHYSICS_H
