#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 float
 char
 bool
 double
 void
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int vol1 = 3;
    int vol2 = 7;
    int vol3 = 9;

    float dep1 = 3.4f;
    float dep2 = 1.3f;
    float dep3 = 9.8f;

    bool audioIn = true;
    bool appOn = false;
    bool midiThru = false;

    char name = 'x';
    char boot = 'y';
    char swap = 'z';

    double dot = 3.334;
    double tail = 4.67;
    double mop = -1.23; 
    
    ignoreUnused(number, vol1, vol2, vol3, dep1, dep2, dep3, audioIn, appOn, midiThru, name, boot, swap, dot, tail, mop); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void rotateKnob (int currentPos = 1, int endPos = 5)
{
    ignoreUnused(currentPos, endPos);
} 
/*
 2)
 */
bool isWorkOver (float endTime, float currentTime)
{
    ignoreUnused(endTime, currentTime);
    return {};
}
/*
 3)
 */
int numPondAnimals (int ducks, int frogs, int fish, int newts)
{
    ignoreUnused(ducks, frogs, fish, newts);
    return {};
}
/*
 4)
 */
double gainDifference (double inputGain,double outputGain)
{
    ignoreUnused(inputGain, outputGain);
    return {};
}
/*
 5)
 */
char capitalCity (char country)
{
    ignoreUnused(country);
    return {};
}
/*
 6)
 */
bool turnPage (int wordPos, int wordTotal)
{
    ignoreUnused(wordPos, wordTotal);
    return {};
}
/*
 7)
 */
float teaBrewTime (char type, char origin, bool isLoose = false)
{
    ignoreUnused(type, origin, isLoose);
    return {};
}
/*
 8)
 */
int numOutputs (char synthType, bool isOn = true)
{
    ignoreUnused(synthType, isOn);
    return {};
}
/*
 9)
 */
int numDaysHoliday (int numDaysGiven = 29, bool daysTaken = true,int numDaysTaken = 7 )
{
    ignoreUnused(numDaysGiven, daysTaken, numDaysTaken);
    return {};
}
/*
 10)
 */
void bakeCake (char cakeType, double amntFlour, float amntSuger, float amntButter, float bakeTime, bool risen = true)
{
    ignoreUnused(cakeType, amntFlour, amntSuger, amntButter, bakeTime, risen);
}  
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    rotateKnob(1, 5);
    //2)
    auto yesWorkOver = isWorkOver (17.f, 17.34f);
    //3)
    auto totalPondAnimals = numPondAnimals(4, 7, 10, 1);
    //4)
    auto volumeChange = gainDifference(-3.56, 0.65);
    //5)
    auto genGeog = capitalCity('u');
    //6)
    auto reading = turnPage(56, 112);
    //7)
    auto niceCuppa = teaBrewTime('x', 'i', false);
    //8)
    auto limitOutputs = numOutputs('m', true);
    //9)
    auto bookHoliday = numDaysHoliday(29, true, 7);
    //10)
    bakeCake('c', 50.75, 10.2f, 15.5f, 1.15f, true);
    
    ignoreUnused(carRented, yesWorkOver, totalPondAnimals, volumeChange, genGeog, reading,niceCuppa, limitOutputs, bookHoliday);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
