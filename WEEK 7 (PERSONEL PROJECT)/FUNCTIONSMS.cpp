#include <iostream>
#include <conio.h> //to use getch()
using namespace std;

// start prototypes
string checkuser(string username, string password);
void main_header();
string start_menu();
string reception_menu();
void showAllData();
void addPatient();
int searchPatient();
void updateRecord();
void deleteRecord();
void sortLowToHigh();
void sortHighToLow();

string therapist_menu();
void allpatientProfile();
void singlePatientData(int foundindex);
void patientAndSchedule();
int calculateSalary();
void continue_menu();
// end prototypes

// start data structures
const int total_patients = 100;
int current_patient = 5;
string nameArray[total_patients] = {"Ali", "Ammar", "Sara", "Fatima", "Ahmed"};
int ageArray[total_patients] = {8, 13, 15, 20, 5};
string scheduleArray[total_patients] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};
int billArray[total_patients] = {20000, 25000, 30000, 40000, 15000};
string diagnosisArray[total_patients] = {"ADHD", "DYPRAXIA", "DYSGRAPHIA", "AUTISM", "STUTTER"};
int rateperSession = 2500;
// end data structures

int main()
{

    while (true)
    {
        main_header();
        string userOption = start_menu(); // to get into therapist or receptionist login
        if (userOption == "1")
        {
            // reception login start
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                main_header();
                cout << "RECEPTION LOGIN ATTEMPT: " << i + 1;
                cout << "\nENTER USERNAME: ";
                string username;
                cin >> username;
                cout << "ENTER PASSWORD: ";
                string password;
                cin >> password;

                string result = checkuser(username, password);

                if (result == "1")
                {
                    // reception work
                    cout << "SUCCESS!" << endl;
                    while (true)
                    {
                        string recepOption = reception_menu();
                        if (recepOption == "1")
                        {
                            // show all patients
                            showAllData();
                        }
                        else if (recepOption == "2")
                        {
                            // add patient
                            addPatient();
                        }
                        else if (recepOption == "3")
                        {
                            // update patient record

                            updateRecord();
                        }
                        else if (recepOption == "4")
                        {
                            // delete patient record

                            deleteRecord();
                        }
                        else if (recepOption == "5")
                        {
                            // search patient and schedule by name
                            int foundindex = searchPatient();
                            cout << "NAME\tAGE\tSCHEDULE\tCURRENT BILL" << endl;
                            cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << scheduleArray[foundindex] << "\t" << billArray[foundindex] << endl;
                            continue_menu();
                        }
                        else if (recepOption == "6")
                        {
                            // sort patients via bills
                            system("cls");
                            cout << "SELECT SORT OPTION: " << endl;
                            cout << "1.HIGH TO LOW " << endl;
                            cout << "2.LOW TO HIGH" << endl;
                            int sortOption;
                            cin >> sortOption;
                            // high to low
                            if (sortOption == 1)
                            {
                                sortHighToLow();
                            }
                            // low to high
                            else if (sortOption == 2)
                            {
                                sortLowToHigh();
                            }
                            else
                            {
                                cout << "INVALID OPTION!" << endl;
                            }
                        }
                        else if (recepOption == "7")
                        {
                            // logout
                            break;
                        }
                        else
                        {
                            cout << "INVALID OPTION!" << endl;
                            continue_menu();
                        }
                    }
                    break;
                }
                else
                {
                    cout << "INVALID USERNAME/PASSWORD!   " << endl;
                    continue_menu();
                }
            }
        }
        else if (userOption == "2")
        {
            // therapist login start
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                main_header();
                cout << "THERAPIST LOGIN ATTEMPT: " << i + 1;
                cout << "\nENTER USERNAME: ";
                string username;
                cin >> username;
                cout << "ENTER PASSWORD: ";
                string password;
                cin >> password;

                string result = checkuser(username, password);
                if (result == "2")
                {
                    // start therapist work
                    cout << "SUCCESS!";
                    while (true)
                    {
                        string therapOption = therapist_menu();

                        if (therapOption == "1")
                        {
                            // see all patients
                            allpatientProfile();
                        }
                        else if (therapOption == "2")
                        {
                            // search by name
                            int foundindex = searchPatient();
                            if (foundindex != -1)
                            {
                                singlePatientData(foundindex);
                            }
                        }
                        else if (therapOption == "3" || therapOption == "4")
                        {
                            // add diagnosis or update plan
                            updateRecord();
                        }

                        else if (therapOption == "5")
                        {
                            // delete patient plan
                            deleteRecord();
                        }
                        else if (therapOption == "6")
                        {
                            // view shedule and patient
                            patientAndSchedule();
                        }
                        else if (therapOption == "7")
                        {
                            // calculate salary function
                            int current_salary = calculateSalary();
                        }
                        else if (therapOption == "8")
                        {
                            break;
                        }
                        else
                        {
                            cout << "INVALID OPTION!" << endl;
                            continue_menu();
                        }
                    }
                }
                else
                {
                    cout << "INVALID USERNAME/PASSWORD!   " << endl;
                    continue_menu();
                }
            }
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "WRONG VALUE!" << endl;
        }
    }

    cout << "\nTHANK YOU FOR USING THIS MANAGEMENT SYSTEM";
    return 0;
}

void main_header()
{
    system("cls");
    cout << "|----------------------------------------------|" << endl;
    cout << "|-------SPEECH  CLINIC MANAGEMENT SYSTEM-------|" << endl;
    cout << "|----------------------------------------------|" << endl;
    cout << endl;
}
string start_menu()
{
    cout << "START MENU: " << endl;
    cout << "1. RECEPTIONIST" << endl;
    cout << "2. THERAPIST" << endl;
    cout << "3. EXIT" << endl;
    string userOption;
    cout << "CHOOSE OPTION: ";
    cin >> userOption;
    cout << "YOU CHOSE: " << userOption << endl;
    return userOption;
}
string checkuser(string username, string password)
{
    if (username == "reception" && password == "123")
    {
        return "1";
    }
    else if (username == "therapist" && password == "456")
    {
        return "2";
    }

    else
    {
        return "3";
    }
}

string reception_menu()
{
    system("cls");
    main_header();
    cout << "RECEPTIONIST MENU:" << endl;
    cout << "1.SHOW ALL PATIENTS" << endl;
    cout << "2.ADD PATIENT" << endl;
    cout << "3.UPDATE PATIENT RECORD" << endl;
    cout << "4.DELETE PATIENT RECORD" << endl;
    cout << "5.SEARCH PATIENT AND SCHEDULE BY NAME" << endl;
    cout << "6.SORT PATIENTS VIA BILLS" << endl;
    cout << "7.LOGOUT" << endl;
    cout << "CHOOSE AN OPTION: ";
    string recepOption; // to prevent crash
    cin >> recepOption;
    return recepOption;
}

string therapist_menu()
{
    system("cls");
    main_header();
    // therapist menu
    cout << "THERAPIST MENU:" << endl;
    cout << "1.SEE ALL PATIENTS PROFILE" << endl;
    cout << "2.SEARCH PATIENT BY NAME" << endl;
    cout << "3.ADD PATIENT DIAGNOSIS" << endl;
    cout << "4.EDIT PATIENT PLAN" << endl;
    cout << "5.DELETE PATIENT PLAN" << endl;
    cout << "6.VIEW SCHEDULE AND PATIENT" << endl;
    cout << "7.CALCULATE SALARY" << endl;
    cout << "8.LOGOUT" << endl;
    string therapOption;
    cout << "CHOOSE AN OPTION: ";
    cin >> therapOption;
    return therapOption;
}

void continue_menu()
{
    cout << "PRESS ANY KEY TO CONTINUE: ";
    getch();
}

void showAllData()
{
    system("cls");
    cout << endl;
    cout << "NAME\tAGE\tSCHEDULE\tCURRENT BILL" << endl;
    for (int i = 0; i < current_patient; i++)
    {
        if (nameArray[i] != " ")
        {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << scheduleArray[i] << "\t" << billArray[i] << "\t" << endl;
        }
    }
    continue_menu();
}

void addPatient()
{
    system("cls");
    // add patient
    cout << "ENTER NEW RECORD: " << endl;
    cout << "ENTER NAME: ";
    string name;
    cin >> name;
    cout << "ENTER AGE: ";
    int age;
    cin >> age;
    cout << "ENTER SCHEDULE: ";
    string schedule;
    cin >> schedule;

    nameArray[current_patient] = name;
    ageArray[current_patient] = age;
    scheduleArray[current_patient] = schedule;
    billArray[current_patient] = 00000;
    current_patient = current_patient + 1;

    cout << "PATIENT ADDED!" << endl;
    continue_menu();
}

int searchPatient()
{
    system("cls");
    cout << "PATIENT NAME TO SEARCH: ";
    string patientname;
    cin >> patientname;

    bool found = false;
    int foundindex = -1;
    for (int i = 0; i < current_patient; i++)
    {
        if (nameArray[i] == patientname)
        {
            foundindex = i;
            found = true;
            return foundindex;
        }
    }

    cout << "PATIENT DOES NOT EXIST IN RECORD" << endl;
    continue_menu();
    return -1;
}

void updateRecord()
{
    system("cls");
    cout << "Are you the therapist or receptionist?" << endl;
    string person;
    cin >> person;

    int foundindex = searchPatient();
    if (foundindex != -1)
    {
        // update all record
        if (person == "receptionist")
        {
            cout << "UPDATING NEW RECORD: " << endl;
            cout << "ENTER NAME: ";
            string name;
            cin >> name;
            cout << "ENTER AGE: ";
            int age;
            cin >> age;
            cout << "ENTER SCHEDULE: ";
            string schedule;
            cin >> schedule;
            cout << "ENTER CURRENT BILL: ";
            int bill;
            cin >> bill;

            nameArray[foundindex] = name;
            ageArray[foundindex] = age;
            scheduleArray[foundindex] = schedule;
            billArray[foundindex] = bill;
            cout << "RECORD UPDATED!" << endl;

            continue_menu();
        }
        // update diagnosis only
        else if (person == "therapist")
        {

            cout << "ENTER  DIAGNOSIS: ";
            string diagnosis;
            cin >> diagnosis;

            diagnosisArray[foundindex] = diagnosis;
            cout << "RECORD UPDATED!" << endl;
            continue_menu();
        }
        else
        {
            cout << "INVALID USER!" << endl;
            continue_menu();
        }
    }
}

void deleteRecord()
{
    system("cls");
    cout << "Are you the therapist or receptionist?" << endl;
    string person;
    cin >> person;

    int foundindex = searchPatient();
    if (foundindex != -1)
    {
        // delete all records
        if (person == "receptionist")
        {

            nameArray[foundindex] = " ";
            ageArray[foundindex] = 000;
            scheduleArray[foundindex] = " ";
            billArray[foundindex] = 000;

            cout << "RECORD DELETED " << endl;

            continue_menu();
        }
        // delete diagnosis
        else if (person == "therapist")
        {
            diagnosisArray[foundindex] = "NO DIAGNOSIS";
            cout << "\nPLAN DELETED" << endl;
            continue_menu();
        }
        else
        {
            cout << "INVALID USER!" << endl;
            continue_menu();
        }
    }
}

void sortHighToLow()
{
    cout << "SORTING: HIGH TO LOW" << endl;

    cout << "PATIENT\tCURRENT BILL" << endl;
    for (int col = 0; col < current_patient; col++)
    {
        for (int row = 0; row < current_patient - col - 1; row++)
        {
            if (billArray[row] < billArray[row + 1])
            {
                int tempbill = billArray[row];
                billArray[row] = billArray[row + 1];
                billArray[row + 1] = tempbill;

                string tempname = nameArray[row];
                nameArray[row] = nameArray[row + 1];
                nameArray[row + 1] = tempname;
            }
        }
    }
    for (int i = 0; i < current_patient; i++)
    {
        cout << nameArray[i] << "\t" << billArray[i] << endl;
    }
    continue_menu();
}

void sortLowToHigh()
{
    cout << "SORTING LOW TO HIGH" << endl;
    cout << "PATIENT\tCURRENT BILL" << endl;
    for (int col = 0; col < current_patient; col++)
    {
        for (int row = 0; row < current_patient - col - 1; row++)
        {
            if (billArray[row] > billArray[row + 1])
            {
                int temp = billArray[row];
                billArray[row] = billArray[row + 1];
                billArray[row + 1] = temp;

                string tempname = nameArray[row];
                nameArray[row] = nameArray[row + 1];
                nameArray[row + 1] = tempname;
            }
        }
    }
    for (int i = 0; i < current_patient; i++)
    {
        cout << nameArray[i] << "\t" << billArray[i] << endl;
    }
    continue_menu();
}

void allpatientProfile()
{
    system("cls");
    cout << endl;
    cout << "NAME\tAGE\tSCHEDULE\tDIAGNOSIS" << endl;
    for (int i = 0; i < current_patient; i++)
    {
        if (nameArray[i] != " ")
        {
            cout << nameArray[i] << "\t" << ageArray[i] << "\t" << scheduleArray[i] << "\t" << diagnosisArray[i] << "\t" << endl;
        }
    }
    continue_menu();
}

void singlePatientData(int foundindex)
{
    cout << "NAME\tAGE\tSCHEDULE\tDIAGNOSIS" << endl;
    cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << scheduleArray[foundindex] << "\t" << diagnosisArray[foundindex] << endl;
    continue_menu();
}

void patientAndSchedule()
{
    system("cls");
    cout << "PATIENT NAME\t SCHEDULE" << endl;
    for (int i = 0; i < current_patient; i++)
    {
        cout << nameArray[i] << "\t" << scheduleArray[i] << endl;
    }
    continue_menu();
}

int calculateSalary()
{
    // paisa paisa
    system("cls");
    int sessions_amount;
    cout << "ENTER NO. OF SESSIONS CONDUCTED: ";
    cin >> sessions_amount;
    int totalamount = sessions_amount * rateperSession;
    float amountearned = (totalamount) * 0.80;
    cout << "INCOME FOR " << sessions_amount << " SESSIONS IS: " << amountearned;
    cout << endl;
    continue_menu();
    return amountearned;
}
