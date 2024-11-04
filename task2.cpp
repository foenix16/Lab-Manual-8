#include<iostream>
using namespace std;

float calculateEffectiveness(string your_type, string opponent_type)
{
    if(your_type == opponent_type)
    {
        return 0.5;
    }
    if(your_type == "fire" && opponent_type == "water")
    {
        return 0.5;
    }
    if(your_type == "fire" && opponent_type == "grass")
    {
        return 2.0;
    }
    if(your_type == "fire" && opponent_type == "electric")
    {
        return 1.0;
    }
    if(your_type == "water" && opponent_type == "fire")
    {
        return 2.0;  // Corrected effectiveness
    }
    if(your_type == "water" && opponent_type == "electric")
    {
        return 0.5;
    }
    if(your_type == "water" && opponent_type == "grass")
    {
        return 0.5;
    }
    if(your_type == "electric" && opponent_type == "water")
    {
        return 2.0;
    }
    if(your_type == "electric" && opponent_type == "grass")
    {
        return 1.0;
    }
    if(your_type == "electric" && opponent_type == "fire")
    {
        return 1.0;
    }
    if(your_type == "grass" && opponent_type == "water")
    {
        return 2.0;
    }
    if(your_type == "grass" && opponent_type == "electric")
    {
        return 1.0;
    }
    if(your_type == "grass" && opponent_type == "fire")
    {
        return 0.5;
    }
    return 1.0;
}

float calculateDamage(int attack, int defence, string your_type, string opponent_type)
{
    float effectiveness = calculateEffectiveness(your_type, opponent_type);
    float damage = 50 * (float(attack) / defence) * effectiveness;
    return damage;
}

int main()
{
    int attack, defence;
    string your_type;
    string opponent_type;
    
    cout << "Enter your type (fire, water, grass, electric): ";
    cin >> your_type;
    cout << "Enter the opponent's type (fire, water, electric, grass): ";
    cin >> opponent_type;
    cout << "Enter your attack: ";
    cin >> attack;
    cout << "Enter the opponent's defence: ";
    cin >> defence;
    
    float damage = calculateDamage(attack, defence, your_type, opponent_type);
    cout << "The damage dealt is: " << damage << endl;

    return 0;
}
