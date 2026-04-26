#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string card, fcard, bcard;

    cin >> card;

    fcard = card.substr(0, card.length() - 1);
    bcard = card[card.length() - 1];

    if (bcard == "D" || bcard == "d")
    {
        if (fcard == "A" || fcard == "a")
        {
            cout << "ace" << " of " << "diamonds";
        }
        else if (fcard == "J" || fcard == "j")
        {
            cout << "jack" << " of " << "diamonds";
        }
        else if (fcard == "Q" || fcard == "q")
        {
            cout << "queen" << " of " << "diamonds";
        }
        else if (fcard == "K" || fcard == "k")
        {
            cout << "king" << " of " << "diamonds";
        }
        else
        {
            cout << fcard << " of " << "diamonds";
        }
    }
    else if (bcard == "H" || bcard == "h")
    {
        if (fcard == "A" || fcard == "a")
        {
            cout << "ace" << " of " << "hearts";
        }
        else if (fcard == "J" || fcard == "j")
        {
            cout << "jack" << " of " << "hearts";
        }
        else if (fcard == "Q" || fcard == "q")
        {
            cout << "queen" << " of " << "hearts";
        }
        else if (fcard == "K" || fcard == "k")
        {
            cout << "king" << " of " << "hearts";
        }
        else
        {
            cout << fcard << " of " << "hearts";
        }
    }
    else if (bcard == "S" || bcard == "s")
    {
        if (fcard == "A" || fcard == "a")
        {
            cout << "ace" << " of " << "spades";
        }
        else if (fcard == "J" || fcard == "j")
        {
            cout << "jack" << " of " << "spades";
        }
        else if (fcard == "Q" || fcard == "q")
        {
            cout << "queen" << " of " << "spades";
        }
        else if (fcard == "K" || fcard == "k")
        {
            cout << "king" << " of " << "spades";
        }
        else
        {
            cout << fcard << " of " << "spades";
        }
    }
    else if (bcard == "C" || bcard == "c")
    {
        if (fcard == "A" || fcard == "a")
        {
            cout << "ace" << " of " << "clubs";
        }
        else if (fcard == "J" || fcard == "j")
        {
            cout << "jack" << " of " << "clubs";
        }
        else if (fcard == "Q" || fcard == "q")
        {
            cout << "queen" << " of " << "clubs";
        }
        else if (fcard == "K" || fcard == "k")
        {
            cout << "king" << " of " << "clubs";
        }
        else
        {
            cout << fcard << " of " << "clubs";
        }
    }

    return 0;
}