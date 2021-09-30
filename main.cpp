 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   don't forget to remove the blank lines left behind after you remove your comments
   - you should be left with only your UDTs.
*/
// example:
// if you had something like this at the end of Part1e:
/*
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
namespace Part1eVersion 
{
struct CarWash        
{
    //number of vacuum cleaners                     
    int numVacuumCleaners = 3; 
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); 
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}

//this is what I want to see after the code is cleaned up: 
namespace Part2Version
{
struct CarWash        
{
    int numVacuumCleaners = 3; 
    int numEcoFriendlyCleaningSupplies = 20;     
    float waterUsedPerWeek = 200.f;            
    float profitPerWeek = 495.95f;               
    int numberOfCarsServiced = 10;               
    
    struct Car  
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    void washAndWaxCar( Car car ); 
    float chargeCustomer(float discountPercentage);
    void detailInterior( Car car );
    
    Car carBeingServiced;  
};
}
  /*
    The above snippet is just an example showing you how to clean up your code.  
    Do not put your cleaned up code into a namespace like I have done here.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
    If you have warnings about 'unused parameter', you aren't using one of your function parameters in your implementation.
    use the parameter in your implementation.
    If you have warnings about 'overshadow', a local variable in the function has the same name as a class member.
    change the name of your local variable so it is different from the class member's name.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */



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

struct Orchestra
{
    //number of players (int)
    int numPlayers = 80;
    //number of players doubling instruments (int)
    int numPlayersDoublInst = 10;
    //number of practice days per week (int)
    int numPracticeDaysPerWeek = 5;
    //money spent on player salaries (float)
    float salariesTotalUSD = 6254138.54f;
    //men/women ratio (float)
    float menToWomen = 1.12f;

    //play music
    void playMusic (float tempo, std::string pieceName);
    //entertain people
    void entertain (bool headbang = 1, bool dramaticConductor = 1);
    //d̶r̶i̶n̶k̶ ̶a̶ ̶l̶o̶t̶  charge recording fees
    void chargeRecFees (int minutesRecTime, float feeTotal);
};

/*
Thing 2) Microphone
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

struct Microphone
{
    //diaphragm size (double)
    double diaphragmSize = 0.500000004;
    //polar pattern (std::string)
    std::string polarPattern = "Subcardioid";
    // sensitivity (double)
    double sensitivity = 40.0;
    // signal to noise ratio (float)
    float snr = 92;
    // impendance at 1000 hz (double)
    double impendance1k = 1000;

    // record audio
    void recordAudio (float sampleRate = 44.1f, std::string filetype = ".wav");
    // produce feedback
    void produceFeedback (double volume);
    // use electricity
    void useElectricity (bool switchOn);
};


/*
Thing 3) Recording Studio
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

struct RecordingStudio
{
    // number of employees (int)
    int numEmployees = 4;
    // number of microhpones available  (int)
    int numMics = 67;
    // session fee (float)
    int sessionFee = 1000.0f;
    // desk specifications (std::string)
    std::string deskSpecs = "Digital, 64 channels, 96 kHz";
    // live room area (float)
    float liveRoomArea = 49.5f;

    // record music
    void record (float sampleRate, int channelCount, float duration, Microphone mic);
    // mix music 
    void mix (float sampleRate, int channelCount, float duration);
    // master music
    void master (float targetLUFS, float ceiling = -0.3f);
};


/*
Thing 4) Computer
5 properties:
    1) amount of RAM (double)
    2) CPU speed (double)
    3) available storage (double) 
    4) PSU wattage (int)
    5) number of display outputs (int)
3 things it can do:
    1) compile code
    2) display images
    3) play audio
 */

struct Computer
{
    // amount of RAM (double)
    double ramTotal = 68.7194767360;
    // CPU speed (double)
    double cpuSpeed = 3.41;
    // available storage (double) 
    double storageTotal = 1099.511627776;
    // PSU wattage (double)
    int powerTotal = 850;
    // number of display outputs (int)
    int numVideoOuts = 4;

    struct Soundcard
    {
        float volume = -20.0f;
        float sampleRateSC = 48.0f;
        int bufferSize = 256;
        int numIn = 2;
        int numOut = 2;

        void DAC (float getSourceSR, float maxCeiling = -0.1f);
        void ADC (float getTargetSR, float getPreampGain);
        void changeBufferSize (int getBufferSize, int targetBufferSize);
    };

    // compile code
    void compile (std::string code);
    // display images
    void displayImage (int displayRes);
    // play audio
    void playAudio (Soundcard soundcard);
};


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

struct BacklightArray 
{
    //Brightness (double)
    double brightness = 1200.15648;
    //Rows (int)
    int baRows = 900;
    //Columns (int)
    int baColums = 1600;
    //LED Type (std::string)
    std::string ledType = "RGB";
    //LED impendance (double)
    double ledImpendace = 10.056621;

    // provide backlight
    void provideBacklight (double brightness, bool dynamicContrast);
    // change refresh rate
    void changeBARefreshRate (float baRefRate, float utilityFreq = 60.0f );
    // do local dimming
    void doLocalDimming (float fadeSpeed = 0.05f, int numAreas = 240);
};


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

struct PixelArray
{
    //Rows (int)
    int paRows = 1080;
    //Columns (int)
    int paColumns = 1920;
    //Impendance (double)
    double paImpendance = 0.595123;
    //pattern type (std::string)
    std::string patternType = "delta";
    //gamut (double)
    double gamut = 99.15364823;

    // change color of pixels to display image
    void changePixColor (int targetWidth, int targetHeight, int red, int green, int blue);
    // change display resolution
    void changeResolution (int newWidth, int newHeight);
    // change refresh rate
    void changePARefreshRate (float paRefRate, float utilityFreq = 60.0f );
};


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

struct Tuner
{
    // operating frequency (double)
    double operatingFreq = 216.0 ;
    // number of available channels (int)
    int numChannels = 247;
    // make (std::string)
    std::string make = "Toshiba";
    // supported codecs (std:string)
    std::string supportedCodecs = "x264, x265, Matroska";
    // available memory (double)
    double memoryFree = 1024.0000;

    // tune to a frequency to receive content
    void tune (double tuningFreq);
    // memorize different populated frequencies
    void memorizeFreq (double tuningFreq, int slot, std::string saveName);
    // receive and memorize metadata to give channel names to memorized frequencies
    void pullMetadata (std::string channelName, int slot);
};


/*
Thing 8) WiFi controller
5 properties:
    1) operating frequency (double)
    2) encryption (std::string)
    3) protocol (std::string)
    4) bandwidth (double)
    5) range (float)
3 things it can do:
    1) send data wirelessly
    2) receive data wirelessly
    3) connect to a router
 */

struct WifiController
{
    // operating frequency (double)
    double wifiFreq = 5.00000;
    // encryption (std::string)
    std::string encryption = "WPA2";
    //) protocol (std::string)
    std::string protocol = "802.11ax";
    // bandwidth (double)
    double bandwidth = 152.12000014;
    // range (float) 
    float range = 15.2314f;

    // send data wirelessly
    void sendData (std::string macAddress);
    // receive data wirelessly
    void receiveData (std::string macAddress);
    // connect to a router
    void connectToRouter (std::string ssid, std::string passKey);
};


/*
Thing 9)  Operating System
5 properties:
    1) name (std::string)
    2) applications (int) 
    3) version number (std::string)
    4) number of fonts (int)
    5) modules (int)
3 things it can do:
    1) perform multiple tasks
    2) regulate hardware power draw
    3) make binary code human readable
 */

struct OperatingSystem
{
    // name (std::string)
    std::string osName = "Doors 11";
    // applications (int) 
    int applications = 45;
    // version number (std::string)
    std::string version = "1.0.0.1";
    // number of fonts (int)
    int numFonts = 89;
    // modules (int)
    int modules = 16;

    // perform multiple tasks
    void multitask (int taskNum, bool multithread);
    // regulate hardware power draw
    void regulatePowerDraw (bool powerSavingMode, float cpuMaxUtil = 20.0f);
    // make binary code human readable
    void readableBinary ();
};


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

struct SmartTV
{
    //Backlight Array 
    BacklightArray backlightArray;
    // Pixel Array
    PixelArray pixelArray;
    // Tuner
    Tuner tuner;
    // WiFi controller
    WifiController wifiController;
    // Operating System
    OperatingSystem operatingSystem;

    // Display content from the tuner
    void displayTuner (int channel);
    // Display content from an external source
    void displayExt (int out);
    // Browse the internet
    void browseNet (std::string url);
};


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
