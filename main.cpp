#include<iostream>
using namespace std;
class addition
{
private:
    int a,b;
public:
    void getdata();
    void putdata();
};

void addition::getdata()
{
    cout<<"\ Enter 1st number:";
    cin>>a;
    cout<<"\ Enter 2nd number:";
    cin>>b;
}

void addition ::putdata()
{
    cout<<"\n addition="<<a+b;
}

int main()
{
    addition aa;
    aa.getdata();
    aa.putdata();
}
*

#include<iostream>
using namespace std;
class oddev
{
private:
    int a;
public:
    void gatedata();
    void putdata();
};

void oddev::gatedata()
{
    cout<<"\n Enter number:";
    cin>>a;
}

void oddev::putdata()
{

    if(a%2==0)

        cout<<"\n The number is even";

    else

        cout<<"\n The number is odd";


}



int main()
{
    oddev aa;
    aa.gatedata();
    aa.putdata();


}

*

#include<iostream>
using namespace std;

class oneten
{

public:
    void putdata();

};

void oneten::putdata()
{
    int i;
    for(i=1;i<=189;i++)

    {
        cout<<"\n"<<i;

    }
}



int main()
{
    oneten aa;
    aa.putdata();
}


*
#include<iostream>
using namespace std;

class ary
{
private:
    int a, b;
public:
    void gatedata();
    void putdata();
};

void ary::gatedata()
{
    cout<<"\n Enter number:";
    cin>>a>>b;
}
void ary::putdata()
{
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;
}

int main()
{
    ary aa[5];
    int i;
    for(i=0;i<5;i++)
    {
    aa[i].gatedata();
    }

    for(i=0;i<5;i++)
    {
    aa[i].putdata();

}
}
*
#include<iostream>
using namespace std;

class time
{
private:
    int h, m;
public:
    void gatedata();
    void putdata();
    void sum(time t1, time t2);
};

void time::gatedata()
{
    cout<<"\n Enter hours:";
    cin>>h;
    cout<<"\n Enter minite:";
    cin>>m;

}

void time::putdata()
{

    cout<<"\n hours="<<h;
    cout<<"\n minite="<<m;
}
void time::sum (time t1, time t2)
{
    h=(t1.m+t2.m)/60;
    m=(t1.m+t2.m)%60;
    h=h+(t1.h+t2.h);
}


int main()
{
    time t1,t2,t3;

    t1.gatedata();
    t2.gatedata();
    t3.sum(t1,t2);
    t1.putdata();
    t2.putdata();
    t3.sum(t1,t2);

}

*
#include<iostream>
using namespace std;
class demo
{
    int a,b;
public:
    demo()
    {
        a=10;
        b=30;
    }
    void putdata();
};

void demo::putdata()
{
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;

}




int main()
{
    demo aa;
    aa.putdata();
    return 0;
}


*

#include<iostream>
using namespace std;

class demo
{
    int a,b;
public:
    demo (int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void putdata();

};

void demo::putdata()
{

    cout<<"\n a="<<a;
    cout<<"\n b="<<b;

}




int main()
{
    //demo aa(98,56);
    int a,b;
    cout<<"\n Enter 1st number:";
    cin>>a;
     cout<<"\n Enter 2nd number:";
    cin>>b;
    demo aa(a,b);
    aa.putdata();
    return 0;

}

*
#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    point( int x, int y)
    {
        this->x=x;
        this->y=y;
    }
    void display();
};

void point::display()
{

    cout<<"\n x="<<x;
    cout<<"\n y="<<y;

}




int main()
{
    int x,y;
    cout<<"\n Enter the 1st number:";
    cin>>x;

    cout<<"\n Enter the 2st number:";
    cin>>y;
    point aa(x,y );
    aa.display();

}

*
#include<iostream>
using namespace std;

class demo
{
    int a;
public:
    demo()
    {
        a=60;
    }
    demo(int a)
    {
        this->a=a;
    }

    demo(demo &z)

    {
        a=z.a;
    }
    void putdata();

};

void demo::putdata()
{

    cout<<"\n a="<<a;
}



int main()
{
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.putdata();
    bb.putdata();
    cc.putdata();
}

*
#include<iostream>
using namespace std;
int count=0;
class demo
{
public:
    demo()
    {
        count++;
        cout<<"\n Number of object ereated"<<count;
    }
    ~demo()
    {
        count--;
        cout<<"\n Number of object destroyed"<<count;
    }

};
int main()
{
    demo aa,bb,cc,dd,ee,ff;
    {
        demo gg;
    }
    return 0;

}

*
#include <iostream>
using namespace std;

class BankAccount
{
public:
    double balance;
};

class SavingsAccount : public BankAccount
{
public:
    double interestRate;
};

int main()
{
    SavingsAccount savings;
    savings.balance = 5000.75;
    savings.interestRate = 3.5;


    cout << "Account Balance: $" << savings.balance
         << ", Interest Rate: " << savings.interestRate << "%" << endl;

    return 0;
}


*
#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    int width;
    int height;
};

class Color
{
public:
    string color;
};

class ColoredShape : public Shape, public Color
{
public:
    void displayDetails()
    {
        cout << "Width: " << width
             << ", Height: " << height
             << ", Color: " << color << endl;
    }
};

int main()
{
    // Create a ColoredShape object
    ColoredShape shape;
    shape.width = 10;
    shape.height = 20;
    shape.color = "Red";

    // Display the details of the shape
    shape.displayDetails();

    return 0;
}


*
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    float mileage, price;
    Vehicle(float mil, float pr) : mileage(mil), price(pr) {}
};

class Car : public Vehicle {
public:
    float ownershipCost;
    int warranty, seatingCapacity;
    string fuelType;

    Car(float mil, float pr, float ownership, int warranty, int seating, string fuel)
        : Vehicle(mil, pr), ownershipCost(ownership), warranty(warranty), seatingCapacity(seating), fuelType(fuel) {}
};

class Audi : public Car {
public:
    string model;
    Audi(float mil, float pr, float ownership, int warranty, int seating, string fuel, string mod)
        : Car(mil, pr, ownership, warranty, seating, fuel), model(mod) {}
};

class Ford : public Car {
public:
    string model;
    Ford(float mil, float pr, float ownership, int warranty, int seating, string fuel, string mod)
        : Car(mil, pr, ownership, warranty, seating, fuel), model(mod) {}
};

class Bike : public Vehicle {
public:
    int numCylinders, numGears, fuelTankSize;
    string coolingType, wheelType;

    Bike(float mil, float pr, int cylinders, int gears, string cooling, string wheel, int tankSize)
        : Vehicle(mil, pr), numCylinders(cylinders), numGears(gears), coolingType(cooling), wheelType(wheel), fuelTankSize(tankSize) {}
};

class Bajaj : public Bike {
public:
    string make;
    Bajaj(float mil, float pr, int cylinders, int gears, string cooling, string wheel, int tankSize, string m)
        : Bike(mil, pr, cylinders, gears, cooling, wheel, tankSize), make(m) {}
};

class TVS : public Bike {
public:
    string make;
    TVS(float mil, float pr, int cylinders, int gears, string cooling, string wheel, int tankSize, string m)
        : Bike(mil, pr, cylinders, gears, cooling, wheel, tankSize), make(m) {}
};

int main() {
    // Create Audi and Ford cars
    Audi audi(15.0, 5000000, 200000, 5, 5, "Petrol", "A6");
    Ford ford(12.0, 3000000, 150000, 4, 5, "Diesel", "Mustang");

    // Create Bajaj and TVS bikes
    Bajaj bajaj(40.0, 150000, 2, 5, "Air", "Alloys", 15, "Pulsar");
    TVS tvs(50.0, 120000, 1, 4, "Liquid", "Spokes", 12, "Apache");

    // Display information
    cout << "Audi Car: " << audi.model << ", " << audi.mileage << " km/l, " << audi.price << " INR\n";
    cout << "Ford Car: " << ford.model << ", " << ford.mileage << " km/l, " << ford.price << " INR\n";
    cout << "Bajaj Bike: " << bajaj.make << ", " << bajaj.mileage << " km/l, " << bajaj.price << " INR\n";
    cout << "TVS Bike: " << tvs.make << ", " << tvs.mileage << " km/l, " << tvs.price << " INR\n";

    return 0;
}


*
#include<iostream>
using namespace std;

class product
{
    int productId;
    string name;
    int price;
    product(int productId, string name, int price)
    {
        this->productId=productId;
        this->name=name;
        this->price=price;
    }

    double calculate(int quantity)
    {
        return price*quantity;
    }

    void displaydetails()
    {

        cout<<"\n productId"<<productId;
        cout<<"\n name"<<name;
        cout<<"\n price"<<price;


    }

};

int main()
{
    product pp(101, "laptop",98989 );

    pp.calculate(8);
}


*
#include <iostream>
using namespace std;

class GymMember
{
public:
    int memberID;
    string name;
    double membershipFee;

    GymMember(int id, string memberName, double fee)
    {
        memberID = id;
        name = memberName;
        membershipFee = fee;
    }

    double getDiscountedFee(string membershipType)
    {
        if (membershipType == "Basic")
            return membershipFee * 0.90; // 10% discount
        if (membershipType == "Premium")
            return membershipFee * 0.80; // 20% discount
        if (membershipType == "VIP")
            return membershipFee * 0.70; // 30% discount
        return membershipFee; // No discount for invalid type
    }

    void showDetails(string membershipType)
    {
        cout << "ID: " << memberID << ", Name: " << name << endl;
        cout << "Original Fee: " << membershipFee << ", Discounted Fee: " << getDiscountedFee(membershipType) << endl;
    }
};

int main()
{
    GymMember member1(101, "John", 1000);

    // Showing details for different membership types
    member1.showDetails("Basic");
    member1.showDetails("Premium");
    member1.showDetails("VIP");

    return 0;
}


*/
#include <iostream>
using namespace std;

class Room
{
public:
    int roomNumber;
    string roomType;
    double rate;

    Room(int num, string type, double r = 100.0)
    {
        roomNumber = num;
        roomType = type;
        if (type == "Deluxe") rate = 200.0;  // Deluxe rooms have a higher rate
        else if (type == "Standard") rate = 150.0;  // Standard rooms
        else rate = r;  // Default rate for unspecified room types
    }

    double calculateBill(int days)
    {
        return rate * days;
    }

    void displayBookingDetails(int days)
    {
        cout << "Room Number: " << roomNumber << endl;
        cout << "Room Type: " << roomType << endl;
        cout << "Rate per Day: " << rate << endl;
        cout << "Total Bill for " << days << " days: " << calculateBill(days) << endl;
    }
};

int main()
{
    Room room1(101, "Deluxe");
    Room room2(102, "Standard");

    room1.displayBookingDetails(3);
    cout << endl;
    room2.displayBookingDetails(5);

    return 0;
}



































