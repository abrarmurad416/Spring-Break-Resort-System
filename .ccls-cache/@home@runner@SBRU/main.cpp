#include <iostream>
using namespace std;
#include <unistd.h>
#include <time.h>

// Hello Ms. Bailey! This is my SBRU design, and it might not be on the same level as some of the others, but I tried my best alone and put my effort.

// Student class for option 1 in int main.
class student {
public:
// Declaring variables.
  string name, gender, email;
  int age, phonenumber;
  int unichoice;
  int ID;

// This functions gathers personal info from the student.
  void getstudent() {
    cout.width(48);
    cout << "Welcome to the student login page. \n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;
    cout << "Email: ";
    cin >> email;
    cout << "Phone number (ex. 6478043708): ";
    cin >> phonenumber;
    
    cout.width(48);
    cout << "1. University of British Columbia \n";
    cout.width(48);
    cout << "2. University of Waterloo \n";
    cout.width(48);
    cout << "3. University of Toronto \n";
    cout.width(48);
    cout << "4. McMaster Univeristy \n";
    cout.width(48);
    cout << "5. McGill University \n";
    cout << " \n";
    cout << "University that you attend: ";
    cin >> unichoice;
    
// It's under the assumption that universities provided their students with a membership ID, so I built my SBRU code that way. Students can only register if they have their member ID.
    // UBC ID = 789456
    // UWaterloo ID = 159357
    // UofT ID = 123456
    // Mac ID = 147258
    // McGill ID = 451236

    // Error trapping.
    if (unichoice < 1 || unichoice > 5) {
      cout << "try again: ";
      cin >> unichoice;
    }

    if (unichoice == 1) {
      cout << "enter the member ID UBC provided you with: ";
      cin >> ID;
      while (ID != 789456) {
        cout << "try again: ";
        cin >> ID;
      }
      cout << "Welcome UBC student! \n";
    }

    if (unichoice == 2) {
      cout << "enter the member ID UWaterloo provided you with: ";
      cin >> ID;
      while (ID != 159357) {
        cout << "try again: ";
        cin >> ID;
      }
      cout << "Welcome UWaterloo student! \n";
    }

    if (unichoice == 3) {
      cout << "enter the member ID provided you with: ";
      cin >> ID;
      while (ID != 123456) {
        cout << "try again: ";
        cin >> ID;
      }
      cout << "Welcome UofT student! \n";
    }

    if (unichoice == 4) {
      cout << "enter the member ID Mac provided you with: ";
      cin >> ID;
      while (ID != 147258) {
        cout << "try again: ";
        cin >> ID;
      }
      cout << "Welcome Mac student! \n";
    }

    if (unichoice == 5) {
      cout << "enter the member ID McGill provided you with: ";
      cin >> ID;
      while (ID != 451236) {
        cout << "try again: ";
        cin >> ID;
      }
      cout << "Welcome McGill student! \n";
    }
  }
};


// Student class for option 1 in int main.
class booking {
public:
// Declaring variables.
  int resort;
  int days, daysprice;
  int room, roomprice;
  int totalprice;
  int random;

// List of hotels that I found on google.
  void getbooking() {
    cout.width(48);
    cout << "1. The Royal at Atlantis (Bahamas) \n";
    cout.width(48);
    cout << "2. Sandals Emerald Bay (Hawaii) \n";
    cout.width(48);
    cout << "3. Starfish Cayo Santa Maria (Cuba) \n";
    cout << "Choose a resort: ";
    cin >> resort;

    // Error trapping.
    while (resort < 1 || resort > 3) {
      cout << "try again: ";
      cin >> resort;
    }

    // The following code after resort == 1 follows the same way, so I'll just cover this because they're identical.
    if (resort == 1) {
      cout.width(48);
      cout << "1. 7 days ($100)\n";
      cout.width(48);
      cout << "2. 10 days ($120)\n";
      cout.width(48);
      cout << "3. 14 days ($140)\n";
      cout << "How long will you be staying?: ";
      cin >> days;

      // Error trapping.
      while (days < 1 || days > 3) {
        cout << "try again: ";
        cin >> days;
      }

      // Prices of rooms will stay the same despite amount of days.
      if (days == 1) {
        daysprice = 100;
        cout.width(48);
        cout << "1. Small room (1 bed // $60 // lower level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $80 // lower level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $100 // medium leve rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        // Error trapping.
        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        //add total price by getting roomprice and dayprice, also tells the user about where they're staying and a summary.
        if (room == 1) {
          roomprice = 60;
          random =  rand() % 1 + 200; 
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 7 days in a double room at the price of: $"
               << totalprice << endl
               << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }


        if (room == 2) {
          roomprice = 80;
          random =  rand() % 201 + 401; 
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 7 days in a double room at the price of: $"
               << totalprice << endl
               << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 100;
          random =  rand() % 402 + 602; 
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 7 days in a triple room at the price of: $"
               << totalprice << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 2) {
        daysprice = 120;
        cout.width(48);
        cout << "1. Small room (1 bed // $60 // medium level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $80 // medium level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $100 // medium level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 60;
          random =  rand() % 300 + 350; 
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 10 days in "
                  "a singular room at the price of: $"
               << totalprice << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 80;
          random = rand() % 400 + 450;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 10 days in "
                  "a double room at the price of: $"
               << totalprice << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 100;
          random = rand() % 351 + 399;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 10 days in "
                  "a triple room at the price of: $"
               << totalprice << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 3) {
        daysprice = 140;
        cout.width(48);
        cout << "1. Small room (1 bed // $60 // higher level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $80 // VIP rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $100 // penthouse rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 60;
          random = rand() % 500 + 600;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 14 days in "
                  "a singular room at the price of: $"
               << totalprice << " \n";
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 80;
          random = rand() % 601 + 701;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 14 days in "
                  "a double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 100;
          random = rand() % 702 + 802;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in The Royal at Atlantis for 14 days in "
                  "a triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }
    }

    //_____________________________________________________________

    if (resort == 2) {
      cout.width(48);
      cout << "1. 7 days ($200)\n";
      cout.width(48);
      cout << "2. 10 days ($220)\n";
      cout.width(48);
      cout << "3. 14 days ($240)\n";
      cout << "How long will you be staying?: ";
      cin >> days;

      while (days < 1 || days > 3) {
        cout << "try again: ";
        cin >> days;
      }

      if (days == 1) {
        daysprice = 200;
        cout.width(48);
        cout << "1. Small room (1 bed // $140 // ground level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $150 // lower level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $160 // medium level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 140;
          random = rand() % 50 + 100;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 7 days in a "
                  "singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 150;
          random = rand() % 101 + 151;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 7 days in a "
                  "double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 160;
          random = rand() % 152 + 202; 
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 7 days in a "
                  "triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 2) {
        daysprice = 220;
        cout.width(48);
        cout << "1. Small room (1 bed // $140 // medium level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $150 // medium level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $160 // medium level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 140;
          random = rand() % 203 + 253;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 10 days in a "
                  "singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 150;
          random = rand() % 254 + 294;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 10 days in a "
                  "double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 160;
          random = rand() % 295 + 345;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 10 days in a "
                  "triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 3) {
        daysprice = 240;
        cout.width(48);
        cout << "1. Small room (1 bed // $140 // higher level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $150 // VIP rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $160 // penthouse rooms available) \n";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 140;
          random = rand() % 346 + 396;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 14 days in a "
                  "singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 150;
          random = rand() % 397 + 447;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 14 days in a "
                  "double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 160;
          random = rand() % 448 + 498;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Sandals Emerald Bay for 14 days in a "
                  "triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }
    }

//_____________________________________________________________

    
    if (resort == 3) {
      cout.width(48);
      cout << "1. 7 days ($300)\n";
      cout.width(48);
      cout << "2. 10 days ($320)\n";
      cout.width(48);
      cout << "3. 14 days ($340)\n";
      cout << "How long will you be staying?: ";
      cin >> days;

      while (days < 1 || days > 3) {
        cout << "try again: ";
        cin >> days;
      }

      if (days == 1) {
        daysprice = 300;
        cout.width(48);
        cout << "1. Small room (1 bed // $180 // lower level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $190 // medium level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $200 // higher level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 180;
          random = rand() % 1 + 20;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 7 days "
                  "in a singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 190;
          random = rand() % 22 + 42;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 7 days "
                  "in a double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 200;
          random = rand() % 42 + 62;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 7 days "
                  "in a triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 2) {
        daysprice = 320;
        cout.width(48);
        cout << "1. Small room (1 bed // $180 // lower level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $190 // medium level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $200 // higher level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 180;
          random = rand() % 100 + 150;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Mariay for 10 "
                  "days in a singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 190;
          random = rand() % 151 + 301;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 10 days "
                  "in a double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 200;
          random = rand() % 302 + 452;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 10 days "
                  "in a triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }

      if (days == 3) {
        daysprice = 340;
        cout.width(48);
        cout << "1. Small room (1 bed // $180 // lower level rooms available) \n";
        cout.width(48);
        cout << "2. Medium room (2 beds // $190 // medium level rooms available) \n";
        cout.width(48);
        cout << "3. Large room (3 beds // $200 // higher level rooms available) \n";
        cout << "Enter room: ";
        cin >> room;

        while (room < 1 || room > 3) {
          cout << "try again: ";
          cin >> room;
        }

        if (room == 1) {
          roomprice = 180;
          random = rand() % 100 + 150;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 14 days "
                  "in a singular room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 2) {
          roomprice = 190;
          random = rand() % 200 + 250;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 14 days "
                  "in a double room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }

        if (room == 3) {
          roomprice = 200;
          random = rand() % 300 + 400;
          totalprice = roomprice + daysprice;
          cout << "You will be staying in Starfish Cayo Santa Maria for 14 days "
                  "in a triple room at the price of: $"
               << totalprice << endl;
          cout << "Day price: $" << daysprice << " \n";
          cout << "Room price: $" << roomprice << " \n";
          cout << "______________________ \n";
          cout << "Receipt: $" << totalprice << " \n";
          cout << "You will be staying in room # " << random              << ". \n";
          cout << "Receipt will be emailed to you shortly. ";
        }
      }
    }
  }
};

int main() {
  // Declaring variables.
  int choice;
  int ID;
  string choiceoption1;
  int choiceoption2;
  int choiceoption3;

  string name, gender;
  int age;
  string usernameone, passwordone;
  string usernametwo, passwordtwo;

  // Main menu.
  cout.width(48);
  cout << "Welcome to SBRU! \n";
  cout << " \n";
  cout.width(48);
  cout << "1. Student login \n";
  cout.width(48);
  cout << "2. Book a resort \n";
  cout << "Choose an option: ";
  cin >> choice;

  // Error trapping.
  while (choice < 1 || choice > 2) {
    cout << "try again: ";
    cin >> choice;
  }

  while (choice == 1) {
    // This functions runs through the class above.
    system("clear");    
    student c1;
    c1.getstudent();
    cout << "Create username: ";
    cin >> usernameone;
    cout << "Create password: ";
    cin >> passwordone;
    cout << "Do you want to register another student? (Y/N): ";
    cin >> choiceoption1;
    // If user inputs Y or y, then the function will be looped.
    if (choiceoption1 == "Y" || choiceoption1 == "y") {
      continue;
    }

    if (choiceoption1 != "Y" || choiceoption1 != "y") {
      // If the user inputs anything other than Y or y, then the function will direct the user to booking a resort or exiting SBRU.
      cout << "Please wait a second... \n";
      sleep(4);
      system("clear");
      cout.width(48);
      cout << "2. Book a resort \n";
      cout.width(48);
      cout << "Click any other number to exit SBRU \n";
      cout << "Choose an option: ";
      cin >> choice;
      if(choice != 2){
        cout << " \n";
        cout.width(48);
        cout << "Thank you for using SBRU, we hope to see you soon!";
        break;
      }
      system("clear");
    }
  }



  
  while (choice == 2) {
    system("clear");
    cout.width(48);
    cout << "Welcome to the booking system! \n";
    cout << " \n";
    cout.width(48);
    cout << "1. Already have an account, want to book. \n";
    cout.width(48);
    cout << "2. Just made an account, ready to book. \n";
    cout << " \n";
    cout << "Choose an option: ";
    cin >> choiceoption2;
    system("clear");

    while (choiceoption2 < 1 || choiceoption2 > 2) {
      cout << "try again: ";
      cin >> choiceoption2;
    }

    if (choiceoption2 == 1) {
      cout << "Enter member ID: ";
      cin >> ID;

      while (ID != 789456 && ID != 159357 && ID != 123456 && ID != 147258 &&
             ID != 451236) {
        cout << "try again: ";
        cin >> ID;
      }

      booking c2;
      c2.getbooking();
    }

    if (choiceoption2 == 2) {
      cout << "Enter username: ";
      cin >> usernametwo;
      cout << "Enter password: ";
      cin >> passwordtwo;
      cout << " \n";

      while (usernametwo != usernameone || passwordtwo != passwordone) {
        cout << "try again \n";
        cout << "Enter username: ";
        cin >> usernametwo;
        cout << "Enter password: ";
        cin >> passwordtwo;
      }

      booking c2;
      c2.getbooking();
    }
    cout << " \n";
    cout << "Book another resort? (Y/N): ";
    cin >> choiceoption1;
    if (choiceoption1 == "Y" || choiceoption1 == "y") {
      continue;
    }
    if (choiceoption1 != "Y" || choiceoption1 != "y") {
      cout << "Please wait a second... \n";
      sleep(4);
      system("clear");
      cout.width(48);
        cout << "Thank you for using SBRU, we hope to see you soon!";
        break;
     
    system("clear");
  }  
}





















    
}

