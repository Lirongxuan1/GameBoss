# GameBoss
You are a raid boss in an MMORPG.

The party before you is disorganized and toxic, so all their tanks rage quit. 
The remaining players consist of two types, healers and damage dealers. 
Each healer has two attributes: healing per second (hps) and health (hp)
Each damage dealer has two attributes: Player damage per second (Pdps) and health (hp)

You have one attribute: Boss damage per second (Bdps)

Whenever you attack a player, all their healing will be “aimed” at that player. Effectively, your damage per second to any target is calculated by 

Bdps - Total(hps)
//your damage per second minus the combined healing of all surviving healers 

In addition, all their damage will be aimed at you, so the damage you receive per second is calculated by 

Total(dps)
//combined damage per second of all living damage dealers 

After a player’s hp reaches 0, they die and they can no longer contribute to the total damage or healing. 

Find the most optimal order of attacking the players to minimize the damage to yourself.

Conditions: 
1) The combined hps of the group will be less than Bdps
2) There will always be a damage dealer, but not always a healer 

Given a vector of the player class in no particular order,
Return a vector of players arranged in the most optimal order to attack. 

Examples on next page






Examples : 
Ex1::

P1 = 1 Pdps, 1 hp

P2 = 1 hps, 1 hp

Bdps = 2

Returns [P1,P2]

/*
you attack P1 first, taking 1 second to kill him. You take 1 damage. Then the healer dies 0.5 seconds later. The alternative, [2,1], means that you take 1 damage in the first second you take to kill the healer, then an additional 0.5 damage while you are killing the damage dealer
*/

Ex2::
P1 = 1 Pdps, 2 hp

P2 = 2 Pdps, 3 hp

Bdps = 4

Returns [P1,P2]

/*
P2, P1 gives 3+⅔ damage to you, while P1,P2 gives 2+3/2, which is slightly less
*/

starter code in main.cpp

test files incoming

test files are configured like this:

int p for number of players

int Bdps

Player1.id

Player1.isHealer

Player1.dpsorhps

Player1.hp

(REPEAT FOR ALL PLAYERS)
















