/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/







/*
Thing 1) Orchestra
5 properties:
    1) number of players
    2) number of players doubling instruments
    3) number of practice days per week
    4) money spent on player salaries
    5) men/women ratio
3 things it can do:
    1) play music
    2) entertain people
    3) d̶r̶i̶n̶k̶ ̶a̶ ̶l̶o̶t̶  charge recording fees
 */

/*
Thing 2) Recording Studio
5 properties:
    1) number of employees
    2) number of microhpones available 
    3) session fee
    4) desk specifications
    5) live room area (in m2)
3 things it can do:
    1) record music
    2) mix music 
    3) master music
 */

/*
Thing 3) Computer
5 properties:
    1) amount of RAM
    2) CPU speed
    3) available storage 
    4) PSU wattage
    5) number of display outputs
3 things it can do:
    1) compile code
    2) display images
    3) play audio
 */

/*
Thing 4) Microphone
5 properties:
    1) diaphragm size
    2) polar pattern
    3) sensitivity
    4) signal to noise ratio
    5) impendance at 1000 hz
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
    1) Backlight Array
    2) Pixel Array
    3) Tuner
    4) WiFi controller
    5) Operating System

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
