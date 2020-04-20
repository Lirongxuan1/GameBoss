#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct Player
{
    int id;         //an id to use as a name
    bool is_healer; // if this player is a healer
    int perSecond;  // either hps or Pdps, depending on player type
    int health;     //health
};


vector<Player> sort(vector<Player> &input, int Bdps)
{
    //implement here
    return input;
}


void print(vector<Player> p)
{
    for (Player i : p)
        cout << i.id << " ";
    cout << endl;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Please provide an input file" << endl;
        return 1;
    }
    ifstream is(argv[1]);
    vector<Player> original;
    int p = 0;
    is >> p;
    int Bdps = 0;
    is >> Bdps;
    for (int i = 0; i < p; i++)
    {
        Player pl;
        int ids = 0;
        is >> ids;
        pl.id = ids;
        int b = 0;
        is >> b;
        pl.is_healer = b;
        int ps = 0;
        is >> ps;
        pl.perSecond = ps;
        int hp = 0;
        is >> hp;
        original.push_back(pl);
    }
    print(sort(original, Bdps));
}
