#include <iostream>
using namespace std;
template <typename T>
// Bubble sort algorithm
void bubble(T a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (a[j] > a[j + 1])
            {
                // Swap the elements
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble(arr, size);

    // Print the sorted array
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <typeinfo>
// using namespace std;

// int main()
// {
//     float num1, num2, result;

//     // Accept user input for num1 and num2
//     cout << "Enter the first number: ";
//     cin >> num1;

//     // Attempt to convert the input to a float
//     try
//     {
//         num1 = stof(num1);
//     }
//     catch (const invalid_argument &e)
//     {
//         cout << "Invalid input. Please enter a numeric value.\n";
//         continue;
//     }

//     try
//     {
//         if (num2 == 0)
//         {
//             throw(num2);
//         }
//         if (typeid(num1).name() != typeid(num2).name())
//         {
//             throw(num2);
//         }
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result << endl;
//     }
//     catch (float num2)
//     {
//         if (num2 == 0)
//         {
//             cout << "Denominator is Zero  ";
//         }
//         else
//         {
//             cout << "Input is not provided Correctly.";
//         }
//     }
// }

// #include <iostream> 
// #include <string>
// using namespace std;
// int main() {
//     float num1, num2, result;
//     string input;

//     while (true) {
//         // Accept the first number
//         cout << "Enter the first number: ";
//         cin >> input;

//         // Attempt to convert the input to a float
//         try {
//             num1 = stof(input);
//         }
//         catch (const invalid_argument& e) {
//             cout << "Invalid input. Please enter a numeric value.\n";
//             continue;
//         }

//         // Accept the second number
//         cout << "Enter the second number: ";
//         cin >> input;

//         // Attempt to convert the input to a float
//         try {
//             num2 = stof(input);
//         }
//         catch (const invalid_argument& e) {
//             cout << "Invalid input. Please enter a numeric value.\n";
//             continue;
//         }

//         // Check if the second number is zero
//         if (num2 == 0) {
//             cout << "Division by zero error. Please enter the numbers again.\n";
//             continue;
//         }

//         // Calculate the result
//         result = num1 / num2;
//         cout << "The result of " << num1 << " / " << num2 << " is: " << result << endl;

//         // Exit the loop
//         break;
//     }

//     return 0;
// }
