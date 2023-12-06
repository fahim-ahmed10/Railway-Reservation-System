#include<iostream>
#include<conio.h>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

void mainMenu();
void exitProgram();
void invalidProgram();
void userMode();
void basicInformation();
void trainSchedule();
void insideUserMode();
void exitFunction();
void insideBasicInformation();
void insideTrainSchedule();
void backSystem();
void importantnumber();
void login();
void registr();
void forget();
void backFunction();
void dhaToNorthRoute();
void insideDhaToNorthRoute();
void dhaToThakurgoan();
void dhaToTangail();
void dhaToNatore();
void dhaToBirampur();
void dhaToPhulbari();
void dhaToParbatipur();
void dhaToDinajpur();
void loginInterface();
void insideLogin();
void insideTrainScheduleForLogin();
void insideDhaToNorthRouteForLogin();
void backSystemForLogin();
void buyTicket();
void cancelTicket();
void adminModelogin();
void showUserDetails();

//Main Fumction start from here
int main()
{
    int choice =0;
    char again = 'm';



    do
    {
        while(again == 'm' || again == 'M')
        {

            system("cls");
            mainMenu();
            cout<< "\t\t\t\t\t\t\t\t        Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1 :
            {
                {
                    insideUserMode();
                }
                break;
            }

            case 2 :
            {
                {
                    adminModelogin();
                }
                break;
            }
            case 3 :
            {
                {
                    insideBasicInformation();
                }
                break;
            }
            case 4 :
            {
                exitFunction();
                break;
            }




            default:
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Back to Main Menu, Press 'm' OR "<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
            }
        }
        if(again != 'm' || again != 'M' )
        {
            exitProgram();
            exit(0);
        }

    }
    while(choice != 4);
    getch();
}
//End of Main Function




void mainMenu()
{
    cout<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t           ^     "<<endl;
    cout<< "\t\t\t\t\t\t\t          | |    "<<endl;
    cout<< "\t\t\t\t\t\t\t          | |________    __________    __________   "<<endl;
    cout<< "\t\t\t\t\t\t\t        <()   --- -- |  | -- -- -- |  | -- -- -- |  "<<endl;
    cout<< "\t\t\t\t\t\t\t        <()__________|--|__________|--|__________|> "<<endl;
    cout<< "\t\t\t\t\t\t\t ----------0--0--0--0----0--0--0--0----0--0--0--0--------  "<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t      ----------------------------------------------- "<<endl;
    cout<< "\t\t\t\t\t\t\t      |        RAILWAY   RESERVATION   SYSTEM       | "<<endl;
    cout<< "\t\t\t\t\t\t\t      ............................................... "<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t                    ~~~~~~~~~~~~~~~~~"<<endl;
    cout<< "\t\t\t\t\t\t\t                    |   MAIN-MENU   |"<<endl;
    cout<< "\t\t\t\t\t\t\t                    ~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t      *********************************************** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **                                           ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **            1) User Panel                  ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **            2) Admin Panel                 ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **            3) Basic Information           ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **            4) Exit                        ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      **                                           ** "<<endl;
    cout<< "\t\t\t\t\t\t\t      *********************************************** "<<endl<<endl;

}
void userMode()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t                     USER PANEL     "<<endl;
    cout<< "\t\t\t\t\t\t\t               ~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<< "\t\t\t\t\t\t\t            ***************************"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                         **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **      1) Login             **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **       2) Sign-up           **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **       3) Forget Password    **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **       4) Back               **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **      5) Exit              **"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                         **"<<endl;
    cout<< "\t\t\t\t\t\t\t            ***************************"<<endl;
}
void exitProgram()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<< "\t\t\t\t\t\t      ********************************************************* "<<endl;
    cout<< "\t\t\t\t\t\t      ***                                                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***  This Program is Dedicated to MD. NAZMUL HOSSAIN  *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                                                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ********************************************************* "<<endl;
    cout<< "\t\t\t\t\t\t      ***                    Submitted By                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                 ------------------                *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***     1. Faisal Ahmed Fahim Rifat (20-43642-2)      *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***     2. Nazmul Hasan Mamun (20-43675-2)            *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***     3. Zawad Anam (20-43967-2)                    *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***     4. Tanjil Hasan Sakib (20-43633-2)            *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                                                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ********************************************************* "<<endl;
    cout<< "\t\t\t\t\t\t      ***                                                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                  Program Ending                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                     Goodbye!                      *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***               Hope to see you again               *** "<<endl;
    cout<< "\t\t\t\t\t\t      ***                                                   *** "<<endl;
    cout<< "\t\t\t\t\t\t      ********************************************************* "<<endl<<endl<<endl;
    cin.get();
    cin.get();


}
void invalidProgram()
{
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<endl<< "\t\t\t\t\t\t\t   ************************************************** "<<endl;
    cout<<       "\t\t\t\t\t\t\t   ***     You have pressed a invalid option      *** "<<endl;
    cout<<       "\t\t\t\t\t\t\t   ************************************************** "<<endl<<endl<<endl;
}

void basicInformation()
{
    cout<<endl<<endl<<endl<<endl<<endl;

    cout<< "\t\t\t\t\t\t\t                 BASIC INFORMATION    "<<endl;
    cout<< "\t\t\t\t\t\t\t              ~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t            ***************************"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                         **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **     1) Train Schedule     **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **      2) Important Number    **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **      3) Back                **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **     4) Exit               **"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                         **"<<endl;
    cout<< "\t\t\t\t\t\t\t            ***************************"<<endl;
    cout<<endl<<endl;
}
void loginInterface()
{

    cout<<endl<<endl<<endl<<endl<<endl;

    cout<< "\t\t\t\t\t\t\t            ******************************"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                            **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **    1) Check Train Schedule   **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **     2) Buy Ticket              **"<<endl;
    cout<< "\t\t\t\t\t\t\t        **      3) Cancel Ticket            **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **     4) Main-Menu               **"<<endl;
    cout<< "\t\t\t\t\t\t\t          **    5) Exit                   **"<<endl;
    cout<< "\t\t\t\t\t\t\t           **                            **"<<endl;
    cout<< "\t\t\t\t\t\t\t            ******************************"<<endl;
    cout<<endl<<endl;
}
void trainSchedule()
{
    cout<<endl<<endl<<endl<<endl<<endl;

    cout<< "\t\t\t\t\t\t\t                   TRAIN SCHEDULE    "<<endl;
    cout<< "\t\t\t\t\t\t\t            ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t          ********************************"<<endl;
    cout<< "\t\t\t\t\t\t\t         **                              **"<<endl;
    cout<< "\t\t\t\t\t\t\t        **                                **"<<endl;
    cout<< "\t\t\t\t\t\t\t       **     1) Dhaka to North Route      **"<<endl;
    cout<< "\t\t\t\t\t\t\t      **      2) Main_menu                  **"<<endl;
    cout<< "\t\t\t\t\t\t\t      **      3) Exit                       **"<<endl;
    cout<< "\t\t\t\t\t\t\t       **     0) Back                      **"<<endl;
    cout<< "\t\t\t\t\t\t\t        **                                **"<<endl;
    cout<< "\t\t\t\t\t\t\t         **                              **"<<endl;
    cout<< "\t\t\t\t\t\t\t          ********************************"<<endl;
    cout<<endl<<endl;

}
void dhaToNorthRoute()
{
    cout<< "\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t\t            ~~~~~~~~~~~~~~~~~~~~~~~~~ "<<endl;
    cout<< "\t\t\t\t\t\t\t            |  Select Your Arrival  | "<<endl;
    cout<< "\t\t\t\t\t\t\t            ~~~~~~~~~~~~~~~~~~~~~~~~~ "<<endl;
    cout<< "\t\t\t\t\t\t\t                Dhaka to where ?    "<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t                1) Tangail "<<endl;
    cout<< "\t\t\t\t\t\t\t                2) Natore "<<endl;
    cout<< "\t\t\t\t\t\t\t                3) Birampur "<<endl;
    cout<< "\t\t\t\t\t\t\t                4) Phulbari "<<endl;
    cout<< "\t\t\t\t\t\t\t                5) Parbatipur "<<endl;
    cout<< "\t\t\t\t\t\t\t                6) Dinajpur "<<endl;
    cout<< "\t\t\t\t\t\t\t                7) Thakurgaon "<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t           ------------***------------- "<<endl;
    cout<< "\t\t\t\t\t\t\t                0) Back "<<endl<<endl;
}

void dhaToTangail()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Tangail                                         |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 12:07 PM  | 1 hour     |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 57 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 115.00  | BDT 80.00   | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 10:02 PM  | 2 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 2 minutes  |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 115.00  | BDT 80.00   | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToNatore()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Natore                                          |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 03:13 PM  | 5 hours    |  BDT 736.00  | BDT 489.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 3 minutes  |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 320.00  | BDT 215.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 12:31 AM  | 4 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 31 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 320.00  | BDT 215.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | PANCHAGARH EXPRESS | 10:45 PM    | 03:10 AM  | 4 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (793)           |             |           | 25 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |  BDT 320.00  | BDT 215.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToBirampur()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Birampur                                        |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 05:39 PM  | 7 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 29 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 415.00  | BDT 275.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 02:36 AM  | 6 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 36 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 415.00  | BDT 275.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToPhulbari()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Phulbari                                        |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 05:53 PM  | 7 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 43 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 425.00  | BDT 280.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 02:50 AM  | 6 hours    |      0       |      0      | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 50 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 425.00  | BDT 280.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToParbatipur()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Parbatipur                                      |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 06:25 PM  | 8 hours    |  BDT 1,007   | BDT 667.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 15 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 440.00  | BDT 290.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 03:25 AM  | 7 hours    |  BDT 1,007   | BDT 667.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 25 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 440.00  | BDT 290.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | PANCHAGARH EXPRESS | 10:45 PM    | 06:00 AM  | 7 hours    |  BDT 1,007   | BDT 667.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (793)           |             |           | 15 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |  BDT 440.00  | BDT 290.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToDinajpur()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                         Dhaka To Dinajpur                                        |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 07:05 PM  | 8 hours    |  BDT 1,070   | BDT 708.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           | 55 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 465.00  | BDT 465.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 04:05 AM  | 8 hours    |  BDT 1,070   | BDT 708.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           | 05 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 465.00  | BDT 465.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | PANCHAGARH EXPRESS | 10:45 PM    | 06:37 AM  | 7 hours    |  BDT 1,070   | BDT 708.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (793)           |             |           | 52 minutes |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |  BDT 465.00  | BDT 465.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;
}

void dhaToThakurgoan()
{
    cout<< "\t\t\t\t        |--------------------------------------------------------------------------------------------------|"<<endl;
    cout<< "\t\t\t\t        |                                        Dhaka To Thakurgaon                                       |"<<endl;
    cout<< "\t\t\t\t        |                                                                                                  |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        |     Train Name     |  Departure  |  Arrival  |  Duration  |  Fare(Adult) |     Fare(Child)       |"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |              |                       |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | EKOTA EXPRESS      | 10:10 AM    | 10:42 AM  | 32 minutes |  BDT 1,191.0 | BDT 788.00  | AC_S    |"<<endl;
    cout<< "\t\t\t\t        |    (705)           |             |           |            |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Tuesday   |             |           |            |  BDT 520.00  | BDT 345.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | DRUTAJAN EXPRESS   | 08:00 PM    | 08:32 PM  | 32 minutes |  BDT 1,191.0 | BDT 788.00 | AC_S     |"<<endl;
    cout<< "\t\t\t\t        |    (757)           |             |           |            |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        | Offday - Wednesday |             |           |            |  BDT 520.00  | BDT 345.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<< "\t\t\t\t        | PANCHAGARH EXPRESS | 10:45 PM    | 11:17 PM  | 32 minutes |  BDT 1,191.0 | BDT 788.00 | AC_S     |"<<endl;
    cout<< "\t\t\t\t        |    (793)           |             |           |            |---------------------------------------"<<endl;
    cout<< "\t\t\t\t        |                    |             |           |            |  BDT 520.00  | BDT 345.00  | S_CHAIR |"<<endl;
    cout<< "\t\t\t\t        ----------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<< "\t\t\t\t        NOTE : To Buy Ticket Please Login to Your Account"<<endl<<endl;

}



void exitFunction()
{
    char again = 'y';
    do
    {
        cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
        cin>>again;

        while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
        {
            switch(again)
            {
            case 'y' :
                system("cls");
                exitProgram();
                exit(0);
                break;
            case 'Y' :
                system("cls");
                exitProgram();
                exit(0);
                break;
            case 'n' :
                main();
                break;
            case 'N' :
                main();
                break;
            default :
                cout<< endl;
                cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;


            }
            break;


        }

    }
    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
}
//###################exit function ends from here

void insideUserMode()
{
    int choice =0;
    char again = 'b';



    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            userMode();
            cout<< "\t\t\t\t\t\t\t\t        Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1 :
            {
                login();
                break;
            }

            case 2 :

            {
                registr();
                break;
            }
            case 3 :
            {
                forget();
                break;
            }
            case 4 :
            {
                main();
                break;
            }
            case 5:
            {
                char again = 'y';
                do
                {
                    cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
                    cin>>again;

                    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
                    {
                        switch(again)
                        {
                        case 'y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'Y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'n' :
                            insideUserMode();
                            break;
                        case 'N' :
                            insideUserMode();
                            break;
                        default :
                            cout<< endl;
                            cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                            cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                            cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;


                        }
                        break;


                    }

                }
                while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back User Mode OR "<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideUserMode();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }

            }// end of switch statement


        }// end of while statement


    }// end of do while statement
    while(choice != 5);
    getch();

}//end of function
//########################## user panel interface ends from here

void insideBasicInformation()
{
    int choice =0;
    char again = 'b';
    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            basicInformation();
            cout<< "\t\t\t\t\t\t\t               Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                insideTrainSchedule();
                break;
            }
            case 2:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                importantnumber();
                break;


            }
            case 3:
            {
                system("cls");
                cout<<endl<<endl;
                main();
                break;

            }
            case 4 :
            {
                //Exit control loop starts from here
                char again = 'y';
                do
                {
                    cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
                    cin>>again;

                    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
                    {
                        switch(again)
                        {
                        case 'y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'Y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'n' :
                            insideBasicInformation();
                            break;
                        case 'N' :
                            insideBasicInformation();
                            break;
                        default :
                            cout<< endl;
                            cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                            cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                            cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;

                        }
                        break;


                    }

                }
                while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
                // exit control loop ends from here
                break;

            }


            }// end of switch statement
        }// end of while statement
    }// end of do while statement
    while(choice !=4);
}//end of function
//##################### inside basic information ends from here

void insideTrainSchedule()
{
    int choice =0;
    char again = 'b';
    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            trainSchedule();
            cout<< "\t\t\t\t\t\t\t               Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1:
            {
                insideDhaToNorthRoute();
                break;
            }
            case 2 :
            {
                main();
                break;
            }
            case 3 :
            {
                // exit control loop start
                char again = 'y';
                do
                {
                    cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
                    cin>>again;

                    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
                    {
                        switch(again)
                        {
                        case 'y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'Y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'n' :
                            insideTrainSchedule();
                            break;
                        case 'N' :
                            insideTrainSchedule();
                            break;
                        default :
                            cout<< endl;
                            cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                            cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                            cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;


                        }
                        break;


                    }

                }
                while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
                //exit control loop end
                break;
            }
            case 0:
            {
                system("cls");
                insideBasicInformation();
                break;
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back Train Schedule OR "<<endl<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideTrainSchedule();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }
            }// end of switch statement

        }// end of while statement
    }// end of do while loop
    while(choice != 3);
}// end of function
//#################### end of inside train schedule

void insideDhaToNorthRoute()
{
    int choice =0;
    char again = 'b';
    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            dhaToNorthRoute();
            cout<< "\t\t\t\t\t\t\t               Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl;
                dhaToTangail();
                backSystem();
                break;
            }
            case 2:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToNatore();
                backSystem();
                break;
            }
            case 3:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToBirampur();
                backSystem();
                break;
            }
            case 4:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToPhulbari();
                backSystem();
                break;
            }
            case 5:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToParbatipur();
                backSystem();
                break;
            }
            case 6:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToDinajpur();
                backSystem();
                break;
            }
            case 7:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToThakurgoan();
                backSystem();
                break;
            }

            case 0:
            {
                system("cls");
                insideTrainSchedule();
                break;
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back  OR "<<endl<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideDhaToNorthRoute();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }
            }// end of switch statement
        }// end of while statement


    }// end of do while statement
    while(choice !=0);
}//end of function

//######################### inside train schedule ends from here

void backSystem()
{
    char again;
    cout<<endl;
    cout<< "\t\t\t\t        To Back Press         : 'b'   "<<endl;
    cout<< "\t\t\t\t        To go Main-Menu Press : 'm'   "<<endl;
    cout<< "\t\t\t\t        -----------------------------------------------"<<endl;
    cout<< "\t\t\t\t        Choose your option (b/m) : ";
    cin>>again;
    if(again == 'b' || again == 'B')
    {
        insideDhaToNorthRoute();
    }
    else if(again=='m'||again=='M')
    {
        main();
    }
    else
    {
        cout<<endl;
        cout<< "\t\t\t\t        Invalid option!!! "<<endl;
        cout<< "\t\t\t\t        ----------------------------------------------"<<endl;
        backSystem();
    }
}//######################### Back System ends from here



void importantnumber()
{
    cout<< "\t\t\t\t\t\t                              Important Number       "<<endl;
    cout<< "\t\t\t\t\t\t                            ~~~~~~~~~~~~~~~~~~~~     "<<endl<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (1) National Emergency center   <<<<->>>>   999                       |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (2) National Help Desk          <<<<->>>>   333                       |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (3) Dhaka Station               <<<<->>>>   029358634                 |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (4) Khulna Station              <<<<->>>>   041760691                 |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (5) Rajshahi Station            <<<<->>>>   0721761940                |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (6) Chittagong Station          <<<<->>>>   031635163                 |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (7) Tech. Support(9AM - 6PM)    <<<<->>>>   01401168806               |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl;
    cout<< "\t\t\t\t\t\t  | (8) Tech. Support(Email)        <<<<->>>>   esheba-ticket@cnsbd.com   |   "<<endl;
    cout<< "\t\t\t\t\t\t   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   "<<endl<<endl<<endl;

    char again;
    cout<< "\t\t\t\t\t\t\t   *******************************"<<endl;
    cout<< "\t\t\t\t\t\t\t   Press 'b' to Back in Train Schedule"<<endl;
    cout<< "\t\t\t\t\t\t\t   -----------------OR----------------------------"<<endl;
    cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
    cin>>again;
    if(again == 'b' || again == 'B')
    {
        insideBasicInformation();

    }
    else if(again != 'b' || again != 'B' )
    {
        system("cls");
        exitProgram();
        exit(0);
    }
}
void backFunction()
{
    char again;
    cout<< "\t\t\t\t\t\t\t   *******************************"<<endl;
    cout<< "\t\t\t\t\t\t\t   Press 'b' to Back in Main-Menu"<<endl;
    cout<< "\t\t\t\t\t\t\t   -----------------OR----------------------------"<<endl;
    cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
    cin>>again;
    if(again == 'b' || again == 'B')
    {
        insideUserMode();

    }
    else if(again != 'b' || again != 'B' )
    {
        system("cls");
        exitProgram();
        exit(0);
    }
}
//################ backFunction ends here

void login()
{
    int count;
    string user,pass,u,p;
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t\t   ***********************************************"<<endl;
    cout<< "\t\t\t\t\t\t\t   **           Welcome To Login Page           **"<<endl;
    cout<< "\t\t\t\t\t\t\t   ***********************************************"<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t   Username : ";
    cin>>user;
    cout<<endl;
    cout<< "\t\t\t\t\t\t\t   Password : ";
    cin>>pass;
    ifstream input("database.txt");
    while(input>>u>>p)
    {
        if(u==user && p==pass)

        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t  || Hi "<<user<<" :)        "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t  || Login Successful...        "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t  || Thanks for logging in.   "<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t   ========================================  "<<endl<<endl<<endl;
        getch();
        insideLogin();
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t   || LOGIN ERROR !!!\n\t\t\t\t\t\t\t   || Check your username and password.\n\n\n";
        cin.get();
        backFunction();
    }
}
//################ login function ends here
void registr()
{
    string reguser,regpass,ru,rp;
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t\t   **************************************************"<<endl;
    cout<< "\t\t\t\t\t\t\t   **      please enter the following details      **"<<endl;
    cout<< "\t\t\t\t\t\t\t   **************************************************"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t    Enter the username : ";
    cin>>reguser;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t    Enter the password : ";
    cin>>regpass;

    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t   || Registration Sucessful...";
    cout<<endl<<endl<<endl;
    backFunction();
}
//###################### register function ends here

void forget()
{
    int ch;
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t   Forgotten ? No problem"<<endl;
    cout<<"\t\t\t\t\t\t\t   We are here to help you..."<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t   *******************************************"<<endl;
    cout<<"\t\t\t\t\t\t\t   **                                       **"<<endl;
    cout<<"\t\t\t\t\t\t\t   **  1) Search your password by username  **"<<endl;
    cout<<"\t\t\t\t\t\t\t   **  2) Search your username by password  **"<<endl;
    cout<<"\t\t\t\t\t\t\t   **  3) Back                              **"<<endl;
    cout<<"\t\t\t\t\t\t\t   **                                       **"<<endl;
    cout<<"\t\t\t\t\t\t\t   *******************************************"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t   Enter your choice : ";
    cin>>ch;
    cout<<endl;
    switch(ch)
    {
    case 1:
    {
        int count=0;
        string searchuser,su,sp;
        cout<<"\n\t\t\t\t\t\t\t   Enter your remembered username : ";
        cin>>searchuser;

        ifstream searchu("database.txt");
        while(searchu>>su>>sp)
        {
            if(su==searchuser)
            {
                count=1;
            }
        }
        searchu.close();
        if(count==1)
        {
            cout<<"\n\t\t\t\t\t\t\t   Your password is found in the database.\n";
            cout<<"\n\t\t\t\t\t\t\t   Your password is : "<<sp;
            cin.get();
            cin.get();
            cout<<endl;
            backFunction();
        }
        else
        {
            cout<<"\n\t\t\t\t\t\t\t   Sorry, Your userID is not found in our database.\n";
            cout<<"\n\t\t\t\t\t\t\t   Please kindly contact your system administrator for more details.";
            cin.get();
            cin.get();
            cout<<endl;
            backFunction();

        }
        break;
    }
    case 2:
    {
        int count=0;
        string searchpass,su2,sp2;
        cout<<"\n\t\t\t\t\t\t\t   Enter the remembered password : ";
        cin>>searchpass;

        ifstream searchp("database.txt");
        while(searchp>>su2>>sp2)
        {
            if(sp2==searchpass)
            {
                count=1;
            }
        }
        searchp.close();
        if(count==1)
        {
            cout<<"\n\t\t\t\t\t\t\t   Your username is found in the database. \n";
            cout<<"\n\t\t\t\t\t\t\t   Your username is : "<<su2;
            cin.get();
            cin.get();
            cout<<endl;
            backFunction();


        }
        else
        {
            cout<<"\n\t\t\t\t\t\t\t   Sorry, We cannot found your password in our database. \n";
            cout<<"\n\t\t\t\t\t\t\t   Kindly contact your administrator for more information.";
            cin.get();
            cin.get();
            cout<<endl;
            backFunction();
        }

        break;
    }

    case 3:
    {
        cin.get();
        insideUserMode();
    }
    default:
        cout<<endl<< "\t\t\t\t\t\t\t   ************************************************** "<<endl;
        cout<<       "\t\t\t\t\t\t\t   ***     You have pressed a invalid option      *** "<<endl;
        cout<<       "\t\t\t\t\t\t\t   ************************************************** "<<endl<<endl<<endl;
        backFunction();
    }
}
//########### forget function ends here

void insideLogin()
{
    int choice =0;
    char again = 'b';



    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            loginInterface();
            cout<< "\t\t\t\t\t\t\t\t        Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1 :
            {
                insideTrainScheduleForLogin();
                break;
            }

            case 2 :

            {
                buyTicket();
                break;
            }
            case 3 :
            {
                cancelTicket();
                break;
            }
            case 4 :
            {
                main();
                break;
            }
            case 5:
            {
                char again = 'y';
                do
                {
                    cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
                    cin>>again;

                    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
                    {
                        switch(again)
                        {
                        case 'y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'Y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'n' :
                            insideLogin();
                            break;
                        case 'N' :
                            insideLogin();
                            break;
                        default :
                            cout<< endl;
                            cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                            cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                            cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;


                        }
                        break;


                    }

                }
                while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back User Mode OR "<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideLogin();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }

            }// end of switch statement


        }// end of while statement


    }// end of do while statement
    while(choice != 5);
    getch();
}// end of function
//##################### inside login function ends here

void insideTrainScheduleForLogin()
{
    int choice =0;
    char again = 'b';
    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            trainSchedule();
            cout<< "\t\t\t\t\t\t\t               Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1:
            {
                insideDhaToNorthRouteForLogin();
                break;
            }
            case 2 :
            {
                main();
                break;
            }
            case 3 :
            {
                // exit control loop start
                char again = 'y';
                do
                {
                    cout<< "\t\t\t\t\t\t\t       Are you sure you want to exit (y/n) : ";
                    cin>>again;

                    while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N')
                    {
                        switch(again)
                        {
                        case 'y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'Y' :
                            system("cls");
                            exitProgram();
                            exit(0);
                            break;
                        case 'n' :
                            insideTrainScheduleForLogin();
                            break;
                        case 'N' :
                            insideTrainScheduleForLogin();
                            break;
                        default :
                            cout<< endl;
                            cout<< "\t\t\t\t\t\t\t       Invalid Key !!! "<<endl;
                            cout<< "\t\t\t\t\t\t\t       Press 'y' to Exit or Press 'n' to Continue"<<endl;
                            cout<< "\t\t\t\t\t\t\t       ___________________________________________"<<endl<<endl;


                        }
                        break;


                    }

                }
                while(again != 'y'|| again != 'Y' || again != 'n' || again != 'N');
                //exit control loop end
                break;
            }
            case 0:
            {
                system("cls");
                insideLogin();
                break;
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back Train Schedule OR "<<endl<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideTrainScheduleForLogin();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }
            }// end of switch statement

        }// end of while statement
    }// end of do while loop
    while(choice != 3);
}// end of function
//################## inside train schedule for login ends here

void insideDhaToNorthRouteForLogin()
{
    int choice =0;
    char again = 'b';
    do
    {
        while(again == 'b' || again == 'B')
        {
            system("cls");
            dhaToNorthRoute();
            cout<< "\t\t\t\t\t\t\t               Enter Your Choice : ";
            cin>>choice;
            cout<<endl<<endl;
            switch(choice)
            {
            case 1:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl;
                dhaToTangail();
                backSystemForLogin();
                break;
            }
            case 2:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToNatore();
                backSystemForLogin();
                break;
            }
            case 3:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToBirampur();
                backSystemForLogin();
                break;
            }
            case 4:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToPhulbari();
                backSystemForLogin();
                break;
            }
            case 5:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToParbatipur();
                backSystemForLogin();
                break;
            }
            case 6:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToDinajpur();
                backSystemForLogin();
                break;
            }
            case 7:
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl;
                dhaToThakurgoan();
                backSystemForLogin();
                break;
            }

            case 0:
            {
                system("cls");
                insideTrainScheduleForLogin();
                break;
            }
            default:
            {
                system("cls");
                invalidProgram();
                cout<< "\t\t\t\t\t\t\t   Press 'b' to Back  OR "<<endl<<endl;
                cout<< "\t\t\t\t\t\t\t   Press any Digit(0,1,2...) to Exit the Program : ";
                cin>>again;
                if(again == 'b' || again == 'B')
                {
                    insideDhaToNorthRouteForLogin();

                }
                else if(again != 'b' || again != 'B' )
                {
                    exitProgram();
                    exit(0);
                }

            }
            }// end of switch statement
        }// end of while statement


    }// end of do while statement
    while(choice !=0);
}//end of function

//######################### insideDhaToNorthRouteForLogin ends here

void backSystemForLogin()
{
    char again;
    cout<<endl;
    cout<< "\t\t\t\t        To Back Press         : 'b'   "<<endl;
    cout<< "\t\t\t\t        To go Main-Menu Press : 'm'   "<<endl;
    cout<< "\t\t\t\t        -----------------------------------------------"<<endl;
    cout<< "\t\t\t\t        Choose your option (b/m) : ";
    cin>>again;
    if(again == 'b' || again == 'B')
    {
        insideDhaToNorthRouteForLogin();
    }
    else if(again=='m'||again=='M')
    {
        main();
    }
    else
    {
        cout<<endl;
        cout<< "\t\t\t\t        Invalid option!!! "<<endl;
        cout<< "\t\t\t\t        ----------------------------------------------"<<endl;
        backSystemForLogin();
    }
}//######################### Back System ends from here

void buyTicket()
{
    system("cls");
    ofstream file;
    string name,date,num;
    double code,fare, ticket;
    file.open("All User Details.txt",ios::out|ios::app);

    cout<<"\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t   *********************************************************************"<<endl;
    cout<< "\t\t\t\t\t\t   ***               please enter the following details              ***"<<endl;
    cout<< "\t\t\t\t\t\t   *********************************************************************"<<endl<<endl;
    cout<<setw(90)<<"Enter your name   :   ";
    cin.ignore(); //to skip the remaining newline character so the later getline() could get the value.
    getline(cin,name);
    file<<endl<<name;

    cout<<setw(90)<<"Enter your mobile number   :   ";
    cin.ignore();
    cin>>num;
    file<<"  "<<num;

    cout<<setw(90)<<"Enter the date of journey   :   ";
    cin.ignore();
    cin>>date;
    file<<"  "<<date;

    cout<<setw(90)<<"Enter the code of the train   :   ";
    cin.ignore();
    cin>>code;
    file<<"  "<<code;

    cout<<setw(90)<<"Enter the fare of your destination   :   ";
    cin.ignore();
    cin>>fare;
    file<<"  "<<fare;

    cout<<setw(90)<<"How many ticket you want to buy   :   ";
    cin.ignore();
    cin>>ticket;
    file<<"  "<<ticket;


    file.close();

    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t   Data Stored Successfully!  "<<endl;
    cout<< "\t\t\t\t\t\t   *********************************************************************"<<endl<<endl;
    cout<<setw(90)<< "Name   :   "<<name<<endl;
    cout<<setw(90)<< "Mobile Number   :   "<<num<<endl;
    cout<<setw(90)<< "Date of Journey    :   "<<date<<endl;
    cout<<setw(90)<< "Train Code    :   "<<code<<endl;
    cout<<setw(90)<< "Train Fare    :   "<<fare<<" taka"<<endl;
    cout<<setw(90)<< "Ticket    :   "<<ticket<<endl;
    cout<<setw(90)<< "Total fare    :   "<<fare*ticket<<" taka"<<endl<<endl<<endl;

    cout<< "\t\t\t\t\t   If everything looks fine then confirm ticket by paying that amount via MOBILE BANKING"<<endl;
    cout<< "\t\t\t\t\t   Please collect your ticket from your departure station. Your seat number will be mentioned there."<<endl;
    cout<< "\t\t\t\t\t   Thanks for taking our services."<<endl;
    cout<< "\t\t\t\t\t   **************************************************************************************************"<<endl<<endl;

    cout<< "\t\t\t\t\t\t\t\t\t   Press any key to back....";
    cin.get();
    cin.get();


}
void cancelTicket()
{
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t\t **********************************************"<<endl;
    cout<< "\t\t\t\t\t\t\t **  This feature is not available right now **"<<endl;
    cout<< "\t\t\t\t\t\t\t **********************************************"<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t Note : To cancel your ticket please go to your nearest railway station."<<endl<<endl<<endl;

    char again;
    cout<<endl;
    cout<< "\t\t\t\t\t\t\t To Back Press         : 'b'   "<<endl;
    cout<< "\t\t\t\t\t\t\t To go Main-Menu Press : 'm'   "<<endl;
    cout<< "\t\t\t\t\t\t\t -----------------------------------------------"<<endl;
    cout<< "\t\t\t\t\t\t\t Choose your option (b/m) : ";
    cin>>again;
    if(again == 'b' || again == 'B')
    {
        insideLogin();
    }
    else if(again=='m'||again=='M')
    {
        main();
    }
    else
    {
        cout<<endl;
        cout<< "\t\t\t\t\t\t\t Invalid option!!! "<<endl;
        cout<< "\t\t\t\t\t\t\t ----------------------------------------------"<<endl;
        getch();
        cancelTicket();
    }

}

void adminModelogin()
{
    string regAdmin,regPass;
    regAdmin = "admin";
    regPass = "password";
    ofstream reg("admin panel.txt",ios::app);
    reg<<regAdmin<<' '<<regPass<<endl;
    system("cls");

    int count;
    string user,pass,u,p;
    system("cls");
    cout<< "\n\n\n\n\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t\t\t   ***********************************************"<<endl;
    cout<< "\t\t\t\t\t\t\t   **           Welcome To Login Page           **"<<endl;
    cout<< "\t\t\t\t\t\t\t   ***********************************************"<<endl<<endl;
    cout<< "\t\t\t\t\t\t\t   Username : ";
    cin>>user;
    cout<<endl;
    cout<< "\t\t\t\t\t\t\t   Password : ";
    cin>>pass;
    ifstream input("admin panel.txt");
    while(input>>u>>p)
    {
        if(u==user && p==pass)

        {
            count=1;
            system("cls");
        }
    }
    input.close();
    if(count==1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t\t\t  || Hi "<<user<<" :)        "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t  || Login Successful...        "<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t  || Thanks for logging in.   "<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t   ========================================  "<<endl<<endl<<endl;
        getch();
        showUserDetails();

    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t\t\t   || LOGIN ERROR !!!\n\t\t\t\t\t\t\t   || Check your username and password.\n\n\n";
        getch();
        adminModelogin();
    }
}
void showUserDetails()
{
    system("cls");
    string line;
    ifstream file("All User Details.txt");
    cout<< "\n";
    cout<< "All User Details"<<endl;
    cout<< "****************"<<endl;
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    getch();
    file.close();
}





