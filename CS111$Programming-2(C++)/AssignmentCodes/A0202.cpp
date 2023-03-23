#include <iostream>
using namespace std;

// First, we call our function prototypes
void display_menu();
void climbing_module();
void scuba_module();
void skydive_module();

int main()
{
    // This is the switch that will make our programm happen 
    int selection;

    // we make a condition to make the code run when selection is not equal to 0
    while (selection != 0){
       
        display_menu();
        cin >> selection;

        switch (selection) {
            // if the user selects "0" the program will close and display the message
            case 0:
                cout << "Exiting program..." << endl;
                break;
            // if the user selects any number between 1 and 3, it will calll the functions repectively
            case 1:
                climbing_module();
                break;
            case 2:
                scuba_module();
                break;
            case 3:
                skydive_module();
                break;
            // there is a defualt in case the user inputs a number higher than the number of functions or anyhting else
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } 
    return 0;

}

// The "display the menu" will display interface for the user for selection.
void display_menu()
{
    cout << "===== WELCOME TO TRAVEL AGENCY MENU =====" << endl;
    cout << "1. Climbing Module" << endl;
    cout << "2. Scuba Module" << endl;
    cout << "3. Skydive Module" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
}

/* Every function will do very similar things, the only changes I made in 
each of them involve different logic and inputs, but are similarly structured */

void climbing_module()
{
    // declare our variables to use 
    int num_needing_instruction, num_advanced_climbers, num_renting_equipment;
    double base_charges, discount, cost_of_instruction, cost_of_equipment_rental, total_charges, min_deposit,num_days_renting;

    /*receive the input from the user and set each variable*/ 
    cout << "Enter the number of people needing instruction: ";
    cin >> num_needing_instruction;
    cout << "Enter the number of advanced climbers in the party: ";
    cin >> num_advanced_climbers;
    cout << "Enter the number of people renting equipment: ";
    cin >> num_renting_equipment;
    cout << "Enter the number of days renting";
    cin >> num_days_renting;

    // charges calculations 
    base_charges = 350.0 * num_needing_instruction + 100.0 * num_advanced_climbers + (40.0 * num_renting_equipment * num_days_renting);

    if (num_needing_instruction + num_advanced_climbers >= 5) {
        discount = 0.1 * base_charges;
    } else {
        discount = 0.0;
    }

    cost_of_instruction = 100.0 * num_needing_instruction;
    cost_of_equipment_rental = 40.0 * num_renting_equipment * num_days_renting;
    total_charges = base_charges - discount + cost_of_instruction + cost_of_equipment_rental;
    min_deposit = 0.3 * total_charges;

    // Display results
    cout << "===== CLIMBING MODULE =====" << endl;
    cout << "Base charges: $" << base_charges << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Cost of instruction: $" << cost_of_instruction << endl;
    cout << "Cost of equipment rental: $" << cost_of_equipment_rental << endl;
    cout << "Total charges: $" << total_charges << endl;
    cout << "Minimum required deposit: $" << min_deposit << endl;
}

void scuba_module()
{
    // declare our variables to use 
    int num_needing_instructionSM, num_advanced_climbersSM;
    double base_chargesSM, discountSM, cost_of_instructionSM, total_chargesSM, min_depositSM;
    
    cout << "Enter the number of people needing instruction: ";
    cin >> num_needing_instructionSM;
    cout << "Enter the number of advanced climbers in the party: ";
    cin >> num_advanced_climbersSM;

    /*receive the input from the user and set each variable*/ 
    base_chargesSM = 100.0 * num_needing_instructionSM + 75.0 * num_advanced_climbersSM + 40.0;

    if (num_needing_instructionSM + num_advanced_climbersSM >= 5) {
        discountSM = 0.1 * base_chargesSM;
    } else {
        discountSM = 0.0;
    }

    cost_of_instructionSM = 50.0 * num_needing_instructionSM;
    total_chargesSM = base_chargesSM - discountSM + cost_of_instructionSM;
    min_depositSM = 0.5 * total_chargesSM;

    
    // Display results
    cout << "===== SCUBA DIVING MODULE =====" << endl;
    cout << "Base charges: $" << base_chargesSM << endl;
    cout << "Discount: $" << discountSM << endl;
    cout << "Cost of instruction: $" << cost_of_instructionSM << endl;
    cout << "Total charges: $" << total_chargesSM << endl;
    cout << "Minimum required deposit: $" << min_depositSM << endl;

}

void skydive_module()
{
    // declare our variables to use 
    int num_SKY, num_staying_wildernessLodge,num_staying_luxuryInn;    
    double base_chargesSKY, discountSKY, lodging_charges, total_chargesSKY, min_depositSKY, num_days_stayingWL, num_days_stayingLI;
    
    /*receive the input from the user and set each variable*/ 
    cout << "Enter the number of people: \n";
    cin >> num_SKY;
    cout << "Enter the number of people staying in Wilderness Lodge: \n";
    cin >> num_staying_wildernessLodge;
    cout << "Enter the number of days saying in Wilderness Lodge: \n";
    cin >> num_days_stayingWL;
    cout << "Enter the number of people staying in Luxury Inn: \n ";
    cin >> num_days_stayingLI;
    cout << "Enter the number of days staying in Luxury Innn: \n";


     // Calculate charges
    base_chargesSKY = 400.0 * num_SKY + (65.0 * num_staying_wildernessLodge * num_days_stayingWL) + (120 * num_staying_luxuryInn * num_days_stayingLI);

    if (num_SKY + num_staying_wildernessLodge + num_staying_luxuryInn >= 5) {
        discountSKY = 0.1 * base_chargesSKY;
    } else {
        discountSKY = 0.0;
    }

    lodging_charges = (65.0 * num_staying_wildernessLodge * num_days_stayingWL) + (120 * num_staying_luxuryInn * num_days_stayingLI);
    total_chargesSKY = base_chargesSKY - discountSKY + lodging_charges;
    min_depositSKY = 0.5 * total_chargesSKY;

    
    // Display results
    cout << "===== WELCOME TO SKY DIVING MODULE =====" << endl;
    cout << "Base charges: $" << base_chargesSKY << endl;
    cout << "Discount: $" << discountSKY << endl;
    cout << "Total Lodging Charges: $" << lodging_charges << endl;
    cout << "Total charges: $" << total_chargesSKY << endl;
    cout << "Minimum required deposit: $" << min_depositSKY << endl;
}