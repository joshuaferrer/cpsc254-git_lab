#include <iostream>
#include "func15.h"
#include "factorial.h"
#include "UTC.h"
#include "Git Lab 30.h"

#include "digit_to_word.h"

#include "salesTax.h"
#include "savefile.h"
#include "Magic8Ball.h"
#include "randomNumGenerator.h"
#include "milestokm.h"
#include "Name_Story.h"
#include "blink.h"
#include "reverse_int.h"
#include "battingAverage.h"

using namespace std;
int main()
{
	int choice;
	
	cout<<\
	"\n1) How many characters in a file\
	\n2) Display date\
	\n3) Get a random number\
	\n4) Display UTC time\
	\n5) Blinking text\
	\n6) Show free RAM\
	\n7) Miles to Kilometers\
	\n8) Sales tax\
	\n9) Average score\
	\n10) Name to story\
	\n11) Batting average\
	\n12) Save input to file\
	\n13) Reverse int digits\
	\n14) Fibinacci sequence\
	\n15) F to C temperature\
	\n16) Area of a rectangle\
	\n17) Magic eight ball\
	\n18) Digit to word\
	\n19) Factorial\
	\n20) Largest number\
	\n21) Words in a file\
	\n22) Surface area of a sphere\
	\n23) Quadratic formula\
	\n24) Reverse string\
	\n25) Count lowercase\
	\n26) Count lines\
	\n27) Count spaces\
	\n28) Print a random color\
	\n29) Print a random fruit\
	\n30) Print the current season\
	\n";
	
	
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch (choice){
		case 1: break;
		case 2: break;
		case 3: randomNumGenerator();
			break;
		case 4: UTCtime();
		case 5: blink();
			break;
		case 6: break;

		case 7: break;
		case 8: break;

		case 7: conversionMilesToKM ();
			break;
        case 8: salesTax();
            break;

		case 9: break;
		case 10: name_story()
			break;
		case 11: break;
		case 12: break;
		case 13: reverse();
			break;
		case 14: break;
		case 15: tempConvert();
		         break;
		case 16: break;
		case 17: break;
		case 18: dothing();
			break;
		case 19: factorial();
			 break;
		case 20: break;
		case 21: break;
		case 22: break;
		case 23: break;
		case 24: break;
		case 25: break;
		case 26: break;
		case 27: break;
		case 28: break;
		case 29: break;
		case 30: displayseason();
			 break;
		default: cout<<"Not a valid choice.\n"; break;
	}
	
	
	return 0;
}
