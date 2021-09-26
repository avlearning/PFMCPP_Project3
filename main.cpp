/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};





/*
Thing 1) Orchestra
5 properties:
    1) number of players (int)
    2) number of players doubling instruments (int)
    3) number of practice days per week (int)
    4) money spent on player salaries (float)
    5) men/women ratio (float)
3 things it can do:
    1) play music
    2) entertain people
    3) d̶r̶i̶n̶k̶ ̶a̶ ̶l̶o̶t̶  charge recording fees
 */

/*
Thing 2) Recording Studio
5 properties:
    1) number of employees (int)
    2) number of microhpones available  (int)
    3) session fee (float)
    4) desk specifications (std::string)
    5) live room area (float)
3 things it can do:
    1) record music
    2) mix music 
    3) master music
 */

/*
Thing 3) Computer
5 properties:
    1) amount of RAM (double)
    2) CPU speed (double)
    3) available storage (double) 
    4) PSU wattage (double)
    5) number of display outputs (int)
3 things it can do:
    1) compile code
    2) display images
    3) play audio
 */

/*
Thing 4) Microphone
5 properties:
    1) diaphragm size (double)
    2) polar pattern (std::string)
    3) sensitivity (double)
    4) signal to noise ratio (float)
    5) impendance at 1000 hz (double)
3 things it can do:
    1) record audio
    2) produce feedback
    3) use electricity
 */

/*
Thing 5) Backlight Array
5 properties:
    1) Brightness (double)
    2) Rows (int)
    3) Columns (int)
    4) LED Type (std::string)
    5) LED impendance (double)
3 things it can do:
    1) provide backlight
    2) change refresh rate
    3) do local dimming
 */

/*
Thing 6) Pixel Array
5 properties:
    1) Rows (int)
    2) Columns (int)
    3) Impendance (double)
    4) pattern type (std::string)
    5) gamut (double)
3 things it can do:
    1) change color of pixels to display image
    2) change display resolution
    3) change refresh rate
 */

/*
Thing 7) Tuner
5 properties:
    1) operating frequency (double)
    2) number of available channels (int)
    3) make (std::string)
    4) supported codecs (std:string)
    5) available memory (double)
3 things it can do:
    1) tune to a frequency to receive content
    2) memorize different populated frequencies
    3) receive and memorize metadata to give channel names to memorized frequencies
 */

/*
Thing 8) WiFi controller
5 properties:
    1) operating frequency (double)
    2) encryption (std::string)
    3) protocol (float)
    4) bandwidth (double)
    5) range (float)
3 things it can do:
    1) send data wirelessly
    2) receive data wirelessly
    3) connect to a router
 */

/*
Thing 9)  Operating System
5 properties:
    1) name (std::string)
    2) applications (int) 
    3) version number (std::string)
    4) fonts (std::string)
    5) modules (int)
3 things it can do:
    1) perform multiple tasks
    2) regulate hardware power draw
    3) make binary code human readable
 */

/*
Thing 10) Smart TV
5 properties:
    1) Backlight Array (int)
    2) Pixel Array (int)
    3) Tuner (std::string)
    4) WiFi controller (std::string)
    5) Operating System (std::string)

3 things it can do:
    1) Display content from the tuner
    2) Display content from an external source
    3) Browse the internet
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
