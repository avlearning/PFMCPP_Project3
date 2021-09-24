/*
Project 3 - Part 1c / 5
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

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  

2) write the name of the primitive type you'll be using after each property in UDTs 1-4:
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

3) Move the Thing 10 pseudo-code to after your Thing1-4 in the project.
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
Thing 10) Smart TV
5 properties:
    1) Backlight Array
        - Brightness (double)
        - Rows (int)
        - Columns (int)
        - LED Type (std::string)
        - LED impendance (double)

        - provide backlight
        - change refresh rate
        - do local dimming
    2) Pixel Array
        - Rows (int)
        - Columns (int)
        - Impendance (double)
        - pattern type (std::string)
        - gamut (double)

        - change color of pixels to display image
        - change display resolution
        - change refresh rate
    3) Tuner
        - operating frequency (double)
        - number of available channels (int)
        - make (std::string)
        - supported codecs (std:string)
        - available memory (double)

        - tune to a frequency to receive content
        - memorize different populated frequencies
        - receive and memorize metadata to give channel names to memorized frequencies
    4) WiFi controller
        - operating frequency (double)
        - encryption (std::string)
        - protocol (float)
        - bandwidth (double)
        - range (float)

        - send data wirelessly
        - receive data wirelessly
        - connect to a router
    5) Operating System
        - name (std::string)
        - applications (int) 
        - version number (std::string)
        - fonts (std::string)
        - modules (int)

        - perform multiple tasks
        - regulate hardware power draw
        - make binary code human readable

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
