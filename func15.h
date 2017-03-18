using namespace std;
void tempConvert(){
	//convert f to c and c to f

	int num, selection;
	while(selection!= 1 && selection != 2){
	  cout << "1) F to C" << endl << "2) C to F" << endl;
	  cin >> selection;
	}
	cout << "Enter a number: ";
	cin >> num;
	switch(selection) {
	  case 1:
	    cout << ((num-32)*5/9) << endl;
	    break;
	  case 2:
	    cout << ((num*9/5)+32) << endl;
	    break;
	}
}
