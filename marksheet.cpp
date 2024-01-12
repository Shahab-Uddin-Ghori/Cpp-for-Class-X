#include <iostream>
using namespace std;
char subject1[5];
char subject2[5];
char subject3[5];
char subject4[5];
char subject5[5];

int Marks1, Marks2, Marks3, Marks4, Marks5;

int main()
{
    char name[20];
    cout << "\t\t\t\t===============Enter Your Name===============\n\n";
    cin >> name;
    cout << "\t\t\t\t===============Welcome Mr." << name << "===============\n\n";
    // subjects
    cout << "Enter your 1st Subject\n";
    cin >> subject1;
    cout << "Enter your 2st Subject\n";
    cin >> subject2;
    cout << "Enter your 3st Subject\n";
    cin >> subject3;
    cout << "Enter your 4st Subject\n";
    cin >> subject4;
    cout << "Enter your 5st Subject\n";
    cin >> subject5;
    // marks in subjects
    cout << "Marks in " << subject1 << "?\n";
    cin >> Marks1;
    while (Marks1 > 100 || Marks1 < 0)
    {
        cout << "Invalid marks. Enter marks (0 to 100): ";
        cin >> Marks1;
    }

    cout << "Marks in " << subject2 << " Marks \n";
    cin >> Marks2;
    while (Marks2 > 100 || Marks2 < 0)
    {
        cout << "Invalid marks. Enter marks (0 to 100): ";
        cin >> Marks2;
    }
    cout << "Marks in " << subject3 << " Marks \n";
    cin >> Marks3;
    while (Marks3 > 100 || Marks3 < 0)
    {
        cout << "Invalid marks. Enter marks (0 to 100): ";
        cin >> Marks3;
    }
    cout << "Marks in " << subject4 << " Marks \n";
    cin >> Marks4;
    while (Marks4 > 100 || Marks4 < 0)
    {
        cout << "Invalid marks. Enter marks (0 to 100): ";
        cin >> Marks4;
    }
    cout << "Marks in " << subject5 << " Marks \n";
    cin >> Marks5;
    while (Marks5 > 100 || Marks5 < 0)
    {
        cout << "Invalid marks. Enter marks (0 to 100): ";
        cin >> Marks5;
    }
    // percentage
    int Percentage1;
    Percentage1 = Marks1;

    int Percentage2;
    Percentage2 = Marks2;

    int Percentage3;
    Percentage3 = Marks3;

    int Percentage4;
    Percentage4 = Marks4;

    int Percentage5;
    Percentage5 = Marks5;

    // rank

    cout << "\t\t\t\t===============MarkSheet===============\n\n";
    cout << "\t\t Subjects\t\t Marks \t\tPercentage \t\t Rank\n\n";
    // output of subjec, marks , pecentage and grade

    // subject1
    if (Percentage1 >= 80 && Percentage1 <= 100)
    {
        cout << "\t\t" << subject1 << "\t\t\t" << Marks1 << "\t\t" << Percentage1 << "\t\t\t A1 \n";
    }
    else if (Percentage1 >= 70 && Percentage1 < 80)
    {
        cout << "\t\t" << subject1 << "\t\t\t" << Marks1 << "\t\t" << Percentage1 << "\t\t\t A \n";
    }
    else if (Percentage1 >= 60 && Percentage1 < 70)
    {
        cout << "\t\t" << subject1 << "\t\t\t" << Marks1 << "\t\t" << Percentage1 << "\t\t\t B \n";
    }
    else
    {
        cout << "\t\t" << subject1 << "\t\t\t" << Marks1 << "\t\t" << Percentage1 << "\t\t\t Fail \n";
    }

    // subject2
    if (Percentage2 >= 80 && Percentage2 <= 100)
    {
        cout << "\t\t" << subject2 << "\t\t\t" << Marks2 << "\t\t" << Percentage2 << "\t\t\t A1 \n";
    }
    else if (Percentage2 >= 70 && Percentage2 < 80)
    {
        cout << "\t\t" << subject2 << "\t\t\t" << Marks2 << "\t\t" << Percentage2 << "\t\t\t A \n";
    }
    else if (Percentage2 >= 60 && Percentage2 < 70)
    {
        cout << "\t\t" << subject2 << "\t\t\t" << Marks2 << "\t\t" << Percentage1 << "\t\t\t B \n";
    }
    else
    {
        cout << "\t\t" << subject2 << "\t\t\t" << Marks2 << "\t\t" << Percentage2 << "\t\t\t Fail \n";
    }

    // subject 3
    if (Percentage3 >= 80 && Percentage3 <= 100)
    {
        cout << "\t\t" << subject3 << "\t\t\t" << Marks3 << "\t\t" << Percentage3 << "\t\t\t A1 \n";
    }
    else if (Percentage3 >= 70 && Percentage3 < 80)
    {
        cout << "\t\t" << subject3 << "\t\t\t" << Marks3 << "\t\t" << Percentage3 << "\t\t\t A \n";
    }
    else if (Percentage3 >= 60 && Percentage3 < 70)
    {
        cout << "\t\t" << subject3 << "\t\t\t" << Marks3 << "\t\t" << Percentage3 << "\t\t\t B \n";
    }
    else
    {
        cout << "\t\t" << subject3 << "\t\t\t" << Marks3 << "\t\t" << Percentage3 << "\t\t\t Fail \n";
    }

    // subject 4
    if (Percentage4 >= 80 && Percentage4 <= 100)
    {
        cout << "\t\t" << subject4 << "\t\t\t" << Marks4 << "\t\t" << Percentage4 << "\t\t\t A1 \n";
    }
    else if (Percentage4 >= 70 && Percentage4 < 80)
    {
        cout << "\t\t" << subject4 << "\t\t\t" << Marks4 << "\t\t" << Percentage4 << "\t\t\t A \n";
    }
    else if (Percentage4 >= 60 && Percentage4 < 70)
    {
        cout << "\t\t" << subject4 << "\t\t\t" << Marks4 << "\t\t" << Percentage4 << "\t\t\t B \n";
    }
    else
    {
        cout << "\t\t" << subject4 << "\t\t\t" << Marks4 << "\t\t" << Percentage4 << "\t\t\t Fail \n";
    }

    // subject5
    if (Percentage5 >= 80 && Percentage5 <= 100)
    {
        cout << "\t\t" << subject5 << "\t\t\t" << Marks5 << "\t\t" << Percentage5 << "\t\t\t A1 \n";
    }
    else if (Percentage5 >= 70 && Percentage5 < 80)
    {
        cout << "\t\t" << subject5 << "\t\t\t" << Marks5 << "\t\t" << Percentage5 << "\t\t\t A \n";
    }
    else if (Percentage5 >= 60 && Percentage5 < 70)
    {
        cout << "\t\t" << subject5 << "\t\t\t" << Marks5 << "\t\t" << Percentage5 << "\t\t\t B \n";
    }
    else
    {
        cout << "\t\t" << subject5 << "\t\t\t" << Marks5 << "\t\t" << Percentage5 << "\t\t\t Fail \n\n";
    }

    // Total Marks
    cout << "\n\n\t\t\t\t============ Total Marks is 500============\n\n";
    int toatl = Marks1 + Marks2 + Marks3 + Marks4 + Marks5;
    cout << "\t\t\t\t============ Obtained Marks is " << toatl << " ========\n\n";
    // percentage
    float totalpercentage;
    totalpercentage = (Marks1 + Marks2 + Marks3 + Marks4 + Marks5) * 100 / 500;

    cout << "\t\t\t\t============ Total Percentage is " << totalpercentage << " % =====\n\n";
    // ranked
    char Ranked;
    Ranked = totalpercentage;
    if (Marks1 < 60 || Marks2 < 60 || Marks3 < 60 || Marks4 < 60 || Marks5 < 60)
    {
        cout << "\t\t\t\t============ You are Fail==================\n\n";
    }

    else if (Ranked >= 80 && Ranked <= 100)
    {
        cout << "\t\t\t\t============ You Ranked A1============\n\n";
    }
    else if (Ranked >= 70 && Ranked < 80)
    {

        cout << "\t\t\t\t============ You Ranked A============\n\n";
    }
    else if (Ranked >= 60 && Ranked < 70)
    {
        cout << "\t\t\t\t============ You Ranked B ============\n\n";
    }
    else if (Ranked < 60)
    {
        cout << "\t\t\t\t============ You are Fail ================\n\n";
    }
// Ask the user if they want to continue
char choice;
  cout << "Do you want to continue? (y/n): ";
  cin>>choice;

  if (choice == 'y' || choice == 'Y') {
    // Restart the program
    system("cls"); // Clear the console screen
    main();
  } else {
    // Exit the program
    cout << "Thank you for using our program!" << endl;
  }
    return 0;
}