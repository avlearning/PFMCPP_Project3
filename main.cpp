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
Thing 5)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 6)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 7)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 8)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 9)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
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
