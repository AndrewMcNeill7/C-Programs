#include <iostream>
#include <string>
#include <assert.h>
using namespace std;
const int NROWS=7, NCOLS=5;
const int CAPACITY = 28; //test_capacity (full=28)
int init_seats(char plane_seats[][NCOLS], int nrows, int ncols);
void print_seats(char plane_seats[][NCOLS], int nrows, int ncols);

int main() {
    char planeSeats[NROWS][NCOLS];	   
    string nextSeat; //string "5c"
    int nOccupants = 0; //number of occupants
    char choice;
	int seat_rows;
	int seat_col;
	
	nOccupants = init_seats(planeSeats, NROWS, NCOLS);
	print_seats(planeSeats, NROWS, NCOLS);

    do {
		if (nOccupants >= CAPACITY)
		{
			cout << "Plane Is Full. Trry Again Later" << endl;
			break;
		}
	
        cout << "\n\nEnter Seat Selection For Flight: ";
        cin >> nextSeat;
		
		
        seat_rows = nextSeat[0] - '1';
        seat_col = nextSeat[1] - 'a' + 1;
		
		
        //compartmentalize sections of code
        /*if((seat_rows < 0) && (seat_rows < NROWS) && (seat_col < 0) && (seat_col < NCOLS))
		{
			if(planeSeats[seat_rows][seat_col] == 'X')
			{
				cout << nextSeat << " has a passenger currently. Try Another Seat" << endl;
			}
			else 
			{
				planeSeats[seat_rows][seat_col] = 'X';
				print_seats(planeSeats, NROWS, NCOLS);
				nOccupants++;
			}
		}
		else
		{
			cout << "Seat is Invalid. Try Again By Pressing Y";
			continue;
		}
		*/
		
		if((seat_rows < 0) || (seat_rows >= NROWS) || (seat_col < 0) || (seat_col >= NCOLS))
		{
			cout << "Seat is Invalid. Try Again By Pressing Y";
			continue;	
		} 
		else
		{
			if(planeSeats[seat_rows][seat_col] == 'x')
			{
				cout << nextSeat << " has a passenger currently. Try Another Seat" << endl;
			}
			else 
			{
				planeSeats[seat_rows][seat_col] = 'x';
				print_seats(planeSeats, NROWS, NCOLS);
				nOccupants++;
			}
		}

        cout << "\n\nContinue (Y/Q)? ";
        cin >> choice;
        choice = toupper(choice);

    } while (choice == 'Y' && choice != 'Q');

    if (nOccupants >= CAPACITY)
		cout << "Reached Capacity " << nOccupants << endl;
    return (0);
} //main

int init_seats(char plane_seats[][NCOLS], int nrows, int ncols) {
    int nOccupants = 3;
	
	for (int row=0; row<nrows; row++) {
        plane_seats[row][0] = row + '1';
        for (int col=1; col<ncols; col++)
            plane_seats[row][col] = 'a' + col-1;
    }
    plane_seats[0][1] = 'x'; //1a
    plane_seats[1][2] = 'x'; //2b
    plane_seats[3][3] = 'x'; //4c
	//nOccupants = 3;
    return (nOccupants);
}

void print_seats(char plane_seats[][NCOLS], int nrows, int ncols) {
    for (int row = 0; row < nrows; row++) 
	{
        for (int col = 0; col < ncols; col++)
		{
            cout << plane_seats[row][col] << " ";
        }
        cout << endl;
    }

}

