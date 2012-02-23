#include <iostream>
#include <fstream>

#define MAX_PATH 91
#define COL_WIDTH 120

using namespace std;

int main(void)

{

	int c ; // input character
	int i;

	char filename[MAX_PATH + 1];
	char input_line[COL_WIDTH + 1];

	cout << "Enter a file name and press Enter: ";
	cin.getline(filename,MAX_PATH);

	ifstream file_in(filename);

	if(! file_in)
	{
	    cout << filename << "could not be opened.";

	    cout << endl;
	    return -1 ;
	}

	while(true)
	{
	    for(i = 0; i<= 24 && !file_in.eof(); i++)
	    {
	        file_in.getline(input_line, COL_WIDTH);

	        cout << input_line << endl;
	    }

	    if ( file_in.eof() )
            break;

        cout << "More? (Press 'Q' and Enter to quit...";

        cin.getline(input_line,COL_WIDTH);

        c = input_line[0];

        if(c == 'Q' || c == 'q')
            break;

        i = 0;
	}









	return 0;
}
