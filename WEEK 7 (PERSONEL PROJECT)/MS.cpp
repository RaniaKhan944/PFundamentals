#include <iostream>
#include <conio.h> //to use getch()
using namespace std;

int main()
{
    int total_patients = 100;
    int current_patient = 5;
    // data structures
    string nameArray[total_patients] = {"Ali", "Ammar", "Sara", "Fatima", "Ahmed"};
    int ageArray[total_patients] = {8, 13, 15, 20, 5};
    string scheduleArray[total_patients] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};
    int billArray[total_patients] = {20000, 25000, 30000, 40000, 15000};
    string diagnosisArray[total_patients] = {"ADHD", "DYPRAXIA", "DYSGRAPHIA", "AUTISM", "STUTTER"};
    int rateperSession = 2500;

    // CREATE
    while (true)
    {
        system("cls");
        cout << "|----------------------------------------------|" << endl;
        cout << "|-------SPEECH  CLINIC MANAGEMENT SYSTEM-------|" << endl;
        cout << "|----------------------------------------------|" << endl;
        cout << endl;
        cout << "START MENU: " << endl;
        cout << "1. RECEPTIONIST" << endl;
        cout << "2. THERAPIST" << endl;
        cout << "3. EXIT" << endl;
        string userOption;
        cout << "CHOOSE OPTION: ";
        cin >> userOption;
        cout << "YOU CHOSE: " << userOption << endl;

        if (userOption == "1")
        {
            // receptionist code here
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "RECEPTION LOGIN ATTEMPT: " << i + 1;
                cout << "\nENTER USERNAME: ";
                string username;
                cin >> username;
                cout << "ENTER PASSWORD: ";
                string password;
                cin >> password;

                if (username == "reception" && password == "123")
                {
                    cout << "SUCCESS!";
                    // reception code
                    while (true)
                    {
                        system("cls");
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

                        if (recepOption == "1")
                        {
                            system("cls");
                            cout << endl;
                            // show all records of patients
                            cout << "NAME\tAGE\tSCHEDULE\tCURRENT BILL" << endl;
                            for (int i = 0; i < current_patient; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << scheduleArray[i] << "\t" << billArray[i] << "\t" << endl;
                                }
                            }
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (recepOption == "2")
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

                            // int new_patient = -1;
                            // for (int i = 0; i < current_patient; i++)
                            // {
                            //     if (nameArray[i] == "")
                            //     {
                            //         new_patient = i;
                            //         break;
                            //     }
                            // }
                            // dealing with garbage values
                            // if (new_patient == -1)
                            // {
                            //     new_patient = current_patient;
                            //     current_patient++;
                            // }

                            nameArray[current_patient] = name;
                            ageArray[current_patient] = age;
                            scheduleArray[current_patient] = schedule;
                            billArray[current_patient] = 00000;
                            current_patient = current_patient + 1;

                            cout << "PATIENT ADDED!" << endl;
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (recepOption == "3")
                        {
                            system("cls");
                            // update record
                            // find patient
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
                                    break;
                                }
                            }
                            // update record
                            if (found == true)
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

                                cout << "PRESS ANY KEY TO CONTINUE: ";
                                getch();
                            }
                        }
                        else if (recepOption == "4")
                        {
                            //  delete record
                            cout << "NAME OF PATIENT TO DELETE: ";
                            string findname;
                            cin >> findname;
                            bool found = false;
                            int foundindex = -1;
                            // Search function
                            for (int i = 0; i < current_patient; i++)
                            {
                                if (nameArray[i] == findname)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            { // delete code
                                nameArray[foundindex] = " ";
                                ageArray[foundindex] = 000;
                                scheduleArray[foundindex] = " ";
                                billArray[foundindex] = 000;

                                cout << "RECORD DELETED " << endl;
                            }
                            else
                            {
                                cout << "RECORD NOT FOUND." << endl;
                            }

                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (recepOption == "5")
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
                                    break;
                                }
                            }
                            // show found record
                            if (found == true)
                            {
                                cout << "NAME\tAGE\tSCHEDULE\tCURRENT BILL" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << scheduleArray[foundindex] << "\t" << billArray[foundindex] << endl;
                            }
                            if (found == false)
                            {
                                cout << patientname << " DOES NOT EXIST IN RECORD" << endl;
                            }
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (recepOption == "6")
                        {
                            system("cls");
                            cout << "SELECT SORT OPTION: " << endl;
                            cout << "1.HIGH TO LOW " << endl;
                            cout << "2.LOW TO HIGH" << endl;
                            int sortOption;
                            cin >> sortOption;

                            if (sortOption == 1)
                            {
                                cout << "SORTING: HIGH TO LOW" << endl;

                                cout << "PATIENT\tCURRENT BILL" << endl;
                                for (int col = 0; col < current_patient; col++)
                                {
                                    for (int row = 0; row < current_patient - col - 1; row++)
                                    {
                                        if (billArray[row] < billArray[row + 1])
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
                                cout << "PRESS ANY KEY TO CONTINUE: ";
                                getch();
                            }
                            else if (sortOption == 2)
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
                                cout << "PRESS ANY KEY TO CONTINUE: ";
                                getch();
                            }
                        }

                        else if (recepOption == "7")
                        {
                            break;
                        }
                        else
                        {
                            cout << "WRONG OPTION SELECTED" << endl;
                        }
                    }
                    break;
                }

                else
                {
                    cout << "INVALID USERNAME/PASSWORD!" << endl;
                    cout << "PRESS ANY KEY TO CONTINUE: ";
                    getch();
                }
            }
        }

        /// therapist side
        if (userOption == "2")
        {
            // therapist code here

            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "THERAPIST LOGIN ATTEMPT: " << i + 1;
                cout << "\nENTER USERNAME: ";
                string username;
                cin >> username;
                cout << "ENTER PASSWORD: ";
                string password;
                cin >> password;

                if (username == "therapist" && password == "456")
                {
                    cout << "SUCCESS!";
                    while (true)
                    {
                        system("cls");

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

                        if (therapOption == "1")
                        {
                            cout << endl;
                            cout << "NAME\tAGE\tSCHEDULE\tDIAGNOSIS" << endl;
                            for (int i = 0; i < current_patient; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << scheduleArray[i] << "\t" << diagnosisArray[i] << "\t" << endl;
                                }
                            }
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (therapOption == "2")
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
                                    break;
                                }
                            }
                            // show found record
                            if (found == true)
                            {
                                cout << "NAME\tAGE\tSCHEDULE\tDIAGNOSIS" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << scheduleArray[foundindex] << "\t" << diagnosisArray[foundindex] << endl;
                            }
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (therapOption == "3" || therapOption == "4")
                        {
                            system("cls");
                            cout << "PATIENT NAME TO ADD/EDIT DIAGNOSIS: ";
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
                                    break;
                                }
                            }
                            // show found record
                            if (found == true)
                            {
                                cout << "ENTER NEW DIAGNOSIS: ";
                                string diagnosis;
                                cin >> diagnosis;

                                diagnosisArray[foundindex] = diagnosis;
                            }
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (therapOption == "5")
                        {
                            system("cls");
                            cout << "NAME OF PATIENT TO DELETE PLAN: ";
                            string findname;
                            cin >> findname;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < current_patient; i++)
                            {
                                if (nameArray[i] == findname)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                diagnosisArray[foundindex] = " ";
                            }
                            cout << "PLAN DELETED" << endl;
                            cout << "PRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (therapOption == "6")
                        {
                            system("cls");
                            cout << "PATIENT NAME\t SCHEDULE" << endl;
                            for (int i = 0; i < current_patient; i++)
                            {
                                cout << nameArray[i] << "\t" << scheduleArray[i];
                            }
                        }
                        else if (therapOption == "7")
                        {
                            // paisa paisa
                            system("cls");
                            int sessions_amount;
                            cout << "ENTER NO. OF SESSIONS CONDUCTED: ";
                            cin >> sessions_amount;
                            int totalamount = sessions_amount * rateperSession;
                            float amountearned = (totalamount) * 0.80;
                            cout << "INCOME FOR " << sessions_amount << " SESSION IS: " << amountearned;
                            cout << "\nPRESS ANY KEY TO CONTINUE: ";
                            getch();
                        }
                        else if (therapOption == "8")
                        {
                            break;
                        }
                        else
                        {
                            cout << "WRONG OPTION SELECTED" << endl;
                        }
                    }
                    break;
                }
                else
                {
                    cout << "INVALID USERNAME/PASSWORD!" << endl;
                    cout << "PRESS ANY KEY TO CONTINUE: ";
                    getch();
                }
            }
        }

        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "INVALID OPTION ENTERED." << endl;
        }
    }

    cout << endl;
    cout << "THANK YOU FOR USING THIS MANAGEMENT SYSTEM";
    return 0;
}
