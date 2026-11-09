#include <iostream>
using namespace std;

// Function to read student marks
void readMarks(int marks[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter mark of student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Function to calculate total
int calculateTotal(int marks[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + marks[i];
    }

    return total;
}

// Function to find highest mark
int findHighest(int marks[], int n)
{
    int highest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    return highest;
}

// Function to find lowest mark
int findLowest(int marks[], int n)
{
    int lowest = marks[0];

    for (int i = 1; i < n; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    return lowest;
}

// Function to count pass and fail
void countPassFail(int marks[], int n)
{
    int passed = 0;
    int failed = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 40)
        {
            passed++;
        }
        else
        {
            failed++;
        }
    }

    cout << "Passed students: " << passed << endl;
    cout << "Failed students: " << failed << endl;
}

// Main function
int main()
{
    int marks[100];
    int n;
    char choice;

    do
    {
        cout << "\nEnter number of students (1-100): ";
        cin >> n;

        while (n < 1 || n > 100)
        {
            cout << "Invalid count! Enter again: ";
            cin >> n;
        }

        readMarks(marks, n);

        int total = calculateTotal(marks, n);
        float average = (float)total / n;

        cout << "\n----- STUDENT MARKS ANALYSIS -----" << endl;

        cout << "Total marks: " << total << endl;
        cout << "Average marks: " << average << endl;
        cout << "Highest mark: " << findHighest(marks, n) << endl;
        cout << "Lowest mark: " << findLowest(marks, n) << endl;

        countPassFail(marks, n);

        cout << "\nDo you want to run again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended." << endl;

    return 0;
}