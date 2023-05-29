class ParkingSystem {
public:
int bigSlots = 0, medSlots = 0, smallSlots = 0;
    ParkingSystem(int big, int medium, int small) {
        // no.of slots available
        bigSlots = big;
        medSlots = medium;
        smallSlots = small;
    }
    
    bool addCar(int carType) {
        // store the car and decrease no.of stores avaialble by one for each car
        if (carType == 1 && bigSlots)
            {
                bigSlots--;
                return true;
            }
        else if(carType==2 && medSlots)
        {
            medSlots--;
            return true;
        }else if(carType==3 && smallSlots)
        {
            smallSlots--;
            return true;
        }
        // if no available stores
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */