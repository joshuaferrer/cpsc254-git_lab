/*Philip Doan
18 March 2017
#30 Get Current Season
Will cout Spring, Summer, Fall, or Winter
depending on date and time.
*/

/*
March 20 
June 21
September 22
December 21
*/

#include <iostream>
#include <fstream>
#include <time.h>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(std::string S, char C){ //split the string into multiple parts using String and Delimiter
	std::vector<std::string> results; //initialize vector of string of date
	std::istringstream iss(S); //creating an input of date named iss
	std::string temp; //this will store the current "date" parameter.
	while(getline(iss,temp,C)){
		results.push_back(temp); //while there is an input in iss, "push back" the "current date parameter" from temp into result.
	}
	return results;
}
	
	

void displayseason(){
	time_t current_time; //define variable of type time
	current_time = time(NULL); //get current time
	std::string time_string = ctime(&current_time); //turn the time into a string at current time
	std::cout<<time_string;
	std::vector<std::string> time_array = split(time_string, ' ');
	for(int i = 0; i< time_array.size(); ++i){ // 0=Day of week, 1= Month, 2=Day of month, 3= Time of format 23:59:59, 4=Year
		std::cout<<time_array[i]<<std::endl;
	}
	std::string current_season; //init season string
	//turn the string of day into an int
	int day;
	std::istringstream iss(time_array[2]);
	iss>>day;
	//split the season by month. Mar 20 ,(spring) Apr May Jun 21, (summer) Jul Aug Sep 22, (fall) Oct Nov Dec 21, (winter) Jan Feb
		if(time_array[1] ==  "Apr"){ current_season="Spring";}
		if(time_array[1] ==  "May"){ current_season="Spring";}
		if(time_array[1] ==  "Jun"){ if(day>=21){current_season = "Summer";} else{ current_season = "Spring"; } }
		if(time_array[1] ==  "Jul"){ current_season = "Summer";}
		if(time_array[1] ==  "Aug"){ current_season = "Summer";}
		if(time_array[1] ==  "Sep"){ if(day>=22){current_season = "Fall";} else{ current_season = "Summer"; } }
		if(time_array[1] ==  "Oct"){ current_season = "Fall";}
		if(time_array[1] ==  "Nov"){ current_season = "Fall";}
		if(time_array[1] ==  "Dec"){ if(day>=21){current_season = "Winter";} else{ current_season = "Fall"; } }
		if(time_array[1] ==  "Jan"){ current_season = "Winter";}
		if(time_array[1] ==  "Feb"){ current_season = "Winter";}
		if(time_array[1] ==  "Mar"){ if(day>=20){current_season = "Spring";} else{ current_season = "Winter"; } }
	std::cout<<current_season;
}

