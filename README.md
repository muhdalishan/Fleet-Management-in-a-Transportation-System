# Fleet Management in a Transportation System
⚠ Download Both main and header file always
_________________________________________________
Breif Problem Statement 👇
Classes Structure:
Class: Vehicle
Common Attributes:
make : Represents the manufacturer or brand of the vehicle.
model : Specifies the model name of the vehicle.
variant (int): Represents the manufacturing year of the vehicle.
Default and Parameterized Constructor:
Initializes make, model, and variant based on provided parameters.
Getters and Setters:
Allows access and modification of the make, model, and variant attributes.
Operators Overloaded:
==: Compares two vehicles for equality based on their attributes.
=: Assigns one vehicle's attributes to another.
++: Increments the manufacturing year of the vehicle.
<< and >>: Outputs/inputs vehicle attributes to/from a stream.
Virtual Functions (to be overridden by child classes):
calculateFuelEfficiency(): Calculates and returns a default fuel efficiency value.
Class: Car (Derived from Vehicle)
Additional Attributes:
•numDoors (int): Represents the number of doors in the car.
•isConvertible (bool): Indicates whether the car is convertible or not.
Constructor:
•	Calls the parent class constructor and initializes car-specific attributes.
Getters and Setters:
•	Provides access and modification for car-specific attributes.
Operators Overloaded:
•	Inherits and reuses the operators overloaded in the parent class.
Overridden Virtual Functions:
•	calculateFuelEfficiency(): Calculates and returns fuel efficiency specific to a car.
Class: Truck (Derived from Vehicle)
Additional Attributes:
•	payloadCapacity (double): Specifies the payload capacity of the truck in tons.
•	hasTrailer (bool): Indicates whether the truck is equipped with a trailer or not.
Constructor:
•	Calls the parent class constructor and initializes truck-specific attributes.
Getters and Setters:
•	Provides access and modification for truck-specific attributes.
Operators Overloaded:
•	Inherits and reuses the operators overloaded in the parent class.
Overridden Virtual Functions:
•	calculateFuelEfficiency(): Calculates and returns fuel efficiency specific to a truck.


Class: Bus (Derived from Vehicle)
Additional Attributes:
seatingCapacity (int): Represents the maximum number of passengers the bus can accommodate.
hasDoubleDecker (bool): Indicates whether the bus has a double-decker design or not.
Constructor:
Calls the parent class constructor and initializes bus-specific attributes.
Getters and Setters:
Provides access and modification for bus-specific attributes.
Operators Overloaded:
Inherits and reuses the operators overloaded in the parent class.
Overridden Virtual Functions:
calculateFuelEfficiency(): Calculates and returns fuel efficiency specific to a bus.
Write main to test above classes and relationships. After that in main function Create array of pointers of parent type class and then user polymorphism to access functions and operators of children classes.
The use of inheritance allows for code reuse, and the overridden virtual functions enable polymorphic behaviour, allowing each derived class to provide its specific implementation of fuel efficiency calculation.
