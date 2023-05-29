class ParkingSystem:
    def __init__(self, big: int, medium: int, small: int):
        # no.of slots available
        self.bigSlots, self.medSlots, self.smallSlots = big, medium, small

    def addCar(self, carType: int) -> bool:
        # store the car and decrease no.of stores avaialble by one for each car
        if carType==1 and self.bigSlots:
            self.bigSlots-=1
            return True
        elif carType==2 and self.medSlots:
            self.medSlots-=1
            return True
        elif carType==3 and self.smallSlots:
            self.smallSlots-=1
            return True

        # if no available stores
        return False

        


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)