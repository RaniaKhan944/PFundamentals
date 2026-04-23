#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int total_students = 1000; // total size
    int current_student = 8;
    // data structures
    string nameArray[total_students] = {"Ali", "Ammar", "Sara", "Fatima", "Ahmed", "Zara", "Bilal", "Hira"};
    int ageArray[total_students] = {20, 21, 19, 22, 20, 21, 19, 20};
    float matricArray[total_students] = {1050, 890, 980, 1020, 910, 970, 880, 990};
    float interArray[total_students] = {980, 850, 910, 970, 880, 940, 860, 950};
    float ecatArray[total_students] = {350, 280, 310, 360, 290, 330, 270, 340};
    string pref1Array[total_students] = {"CS", "CE", "CS", "SE", "CE", "CS", "SE", "CS"};
    string pref2Array[total_students] = {"CE", "CS", "SE", "CS", "CS", "SE", "CS", "SE"};
    string pref3Array[total_students] = {"IT", "IT", "CE", "IT", "IT", "CE", "IT", "CE"};
    float aggrArray[total_students];

    // CRUD CREATE, READ, UPDATE, DELETE
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "|--------------------------------------------|" << endl;
        cout << "|---UNIVERSITY ADMISSION MANAGEMENT SYSTEM---|" << endl;
        cout << "|--------------------------------------------|" << endl;

        cout << "USER MENU: " << endl;
        cout << "1. ADMIN" << endl;
        cout << "2. STUDENT" << endl;
        cout << "3. EXIT" << endl;
        string userOption;
        cout << "CHOOSE OPTION: " << endl;
        cin >> userOption;

        cout << "YOU CHOSE: " << userOption << endl;

        if (userOption == "1")
        {
            // admin code here
            int count = 0;
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "ADMIN MENU LOGIN ATTEMPT: " << i + 1 << endl;
                cout << "ENTER USERNAME: ";
                string username;
                cin >> username;
                cout << "ENTER PASSWORD: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    cout << "SUCCESS!";
                    // admin menu code
                    while (true)
                    {
                        system("cls");
                        cout << "1. SHOW ALL STUDENTS " << endl;
                        cout << "2. SEARCH STUDENT " << endl;
                        cout << "3. UPDATE STUDENT RECORD " << endl;
                        cout << "4. GENERATE MERIT LIST " << endl;
                        cout << "5. DELETE RECORD BY NAME " << endl;
                        cout << "6. LOGOUT " << endl;
                        cout << "CHOOSE AN OPTION: ";
                        string adminOption; // to prevent crash
                        cin >> adminOption;

                        if (adminOption == "1")
                        {
                            // show student record
                            cout << "NAME\tAGE\tMATRIC\tFSC\tECAT\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < current_student; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << "\t" << endl;
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // FIND student by name
                            cout << "NAME OF STUDENT TO FIND: ";
                            string findname;
                            cin >> findname;
                            bool found = false;
                            int foundindex = -1;
                            // Search function
                            for (int i = 0; i < current_student; i++)
                            {
                                if (nameArray[i] == findname)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                                if (found == false)
                                {
                                    cout << "RECORD NOT FOUND AGAINST NAME: " << findname << endl;
                                }
                                else
                                {
                                    cout << "NAME\tAGE\tMATRIC\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                    cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << "\t" << endl;
                                    found = true;
                                }
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student record
                            // FIND student by name
                            cout << "NAME OF STUDENT TO UPDATE: ";
                            string findname;
                            cin >> findname;
                            bool found = false;
                            int foundindex = -1;
                            // Search function
                            for (int i = 0; i < current_student; i++)
                            {
                                if (nameArray[i] == findname)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "------------------OLD RECORD-------------" << endl;
                                cout << "NAME\tAGE\tMATRIC\tFSC\tECAT\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << "\t" << endl;
                                cout << "------------------------------------------" << endl;

                                cout << "ENTER NEW RECORD FOR UPDATE: " << endl;
                                cout << "ENTER YOUR NAME: ";
                                string name;
                                cin >> name;
                                cout << "ENTER AGE: ";
                                int age;
                                cin >> age;
                                cout << "ENTER MATRIC MARKS: ";
                                float matric;
                                cin >> matric;
                                cout << "ENTER FSC MARKS: ";
                                float fsc;
                                cin >> fsc;
                                cout << "ENTER ECAT MARKS: ";
                                float ecat;
                                cin >> ecat;

                                cout << "ENTER CS,SE OR IT AS PREFERENCE" << endl;
                                cout << "ENTER 1RST PREFERENCE: ";
                                string pref1;
                                cin >> pref1;
                                cout << "ENTER 2ND PREFERENCE: ";
                                string pref2;
                                cin >> pref2;
                                cout << "ENTER 3RD PREFERENCE: ";
                                string pref3;
                                cin >> pref3;

                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "RECORD NOT FOUND.";
                            }
                        }
                        else if (adminOption == "4")
                        { // generate merit list
                            // calculate aggregate and show highest to lowest
                            for (int i = 0; i < current_student; i++)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 * 0.30 + ecatArray[i] / 400.0 * 100 * 0.30;
                                aggrArray[i] = aggri;

                                // code to display old data with aggri
                                cout << "NAME\tAGE\tAGGREGATE" << endl;
                                for (int i = 0; i < current_student; i++)
                                {
                                    if (nameArray[i] != " ")
                                    {
                                        cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggrArray[i] << endl;
                                    }
                                }
                                // code with aggr sorted
                                for (int i = 0; i < current_student; i++)
                                {
                                    for (int j = 1; j < current_student; j++)
                                    {
                                        if (aggrArray[i] < aggrArray[j])
                                        {
                                            // swap name
                                            string temp = nameArray[i];
                                            nameArray[i] = nameArray[j];
                                            nameArray[j] = temp;
                                            // swap age
                                            int temp1 = ageArray[i];
                                            ageArray[i] = ageArray[j];
                                            ageArray[j] = temp1;
                                            // swap matric
                                            int temp2 = matricArray[i];
                                            matricArray[i] = matricArray[j];
                                            matricArray[j] = temp2;
                                            // swap inter
                                            int temp3 = interArray[i];
                                            interArray[i] = interArray[j];
                                            interArray[j] = temp3;
                                            // swap ecat
                                            int temp4 = ecatArray[i];
                                            ecatArray[i] = ecatArray[j];
                                            ecatArray[j] = temp4;
                                            // swap p1
                                            string temp5 = pref1Array[i];
                                            pref1Array[i] = pref1Array[j];
                                            pref1Array[j] = temp5;
                                            // swap p2
                                            string temp6 = pref2Array[i];
                                            pref2Array[i] = pref2Array[j];
                                            pref2Array[j] = temp6;
                                            // swap p3
                                            string temp7 = pref3Array[i];
                                            pref3Array[i] = pref3Array[j];
                                            pref3Array[j] = temp7;
                                            // swap aggr
                                            float temp8 = aggrArray[i];
                                            aggrArray[i] = aggrArray[j];
                                            aggrArray[j] = temp8;
                                        }
                                    }
                                }

                                cout << "NAME\tAGE\tAGGREGATE" << endl;
                                for (int i = 0; i < current_student; i++)
                                {
                                    if (nameArray[i] != " ")
                                    {
                                        cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggrArray[i] << endl;
                                    }
                                }
                            }

                            // admit students to programs
                        }
                        else if (adminOption == "5")
                        { // delete record
                            cout << "NAME OF STUDENT TO DELETE: ";
                            string findname;
                            cin >> findname;
                            bool found = false;
                            int foundindex = -1;
                            // Search function
                            for (int i = 0; i < current_student; i++)
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
                                matricArray[foundindex] = 000;
                                interArray[foundindex] = 000;
                                ecatArray[foundindex] = 000;
                                pref1Array[foundindex] = " ";
                                pref2Array[foundindex] = " ";
                                pref3Array[foundindex] = " ";

                                cout << "RECORD DELETED " << endl;
                            }
                            else
                            {
                                cout << "RECORD NOT FOUND." << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "WRONG OPTION SELECTED" << endl;
                        }

                        cout << "PRESS ANY KEY TO CONTINUE: ";
                        getch();
                    }
                    cout << "PRESS ANY KEY TO CONTINUE: ";
                    getch();
                    break;
                }
                else
                {
                    cout << "INVALID USERNAME/PASSWORD!";
                }
                cout << "PRESS ANY KEY TO CONTINUE: ";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // student code here
            system("cls");
            cout << "WELCOME TO UMS STUDENT MENU!" << endl;
            cout << "ENTER YOUR NAME: ";
            string name;
            cin >> name;
            cout << "ENTER AGE: ";
            int age;
            cin >> age;
            cout << "ENTER MATRIC MARKS: ";
            float matric;
            cin >> matric;
            cout << "ENTER FSC MARKS: ";
            float fsc;
            cin >> fsc;
            cout << "ENTER ECAT MARKS: ";
            float ecat;
            cin >> ecat;

            cout << "ENTER CS,SE OR IT AS PREFERENCE" << endl;
            cout << "ENTER 1RST PREFERENCE: ";
            string pref1;
            cin >> pref1;
            cout << "ENTER 2ND PREFERENCE: ";
            string pref2;
            cin >> pref2;
            cout << "ENTER 3RD PREFERENCE: ";
            string pref3;
            cin >> pref3;

            nameArray[current_student] = name;
            ageArray[current_student] = age;
            matricArray[current_student] = matric;
            interArray[current_student] = fsc;
            ecatArray[current_student] = ecat;
            pref1Array[current_student] = pref1;
            pref2Array[current_student] = pref2;
            pref3Array[current_student] = pref3;
            current_student++;
            cout << "DATA HAS BEEN SAVED";

            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "INVALID OPTION ENTERED." << endl;
        }

    } // end of our main while loop

    cout << endl;
    cout<< "THANK YOU FOR USING THIS SOFTWARE";

    return 0;
}