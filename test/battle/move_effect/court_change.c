#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_COURT_CHANGE].effect == EFFECT_COURT_CHANGE);
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the opponent")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_STICKY_WEB); MOVE(opponentRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(opponentLeft, MOVE_SPIKES); MOVE(opponentRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerLeft, 2); SWITCH(opponentLeft, 2); }
    } SCENE {
        MESSAGE("Foe Wobbuffet used Sticky Web!");
        MESSAGE("Foe Wobbuffet used Stealth Rock!");
        MESSAGE("Foe Wobbuffet used Spikes!");
        MESSAGE("Foe Wobbuffet used Toxic Spikes!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side of the field!");
        SEND_IN_MESSAGE("Wynaut");
        NONE_OF {
            MESSAGE("Wynaut was hurt by the spikes!");
            MESSAGE("Pointed stones dug into Wynaut!");
            MESSAGE("Wynaut was poisoned!");
            MESSAGE("Wynaut was caught in a sticky web!");
        }
        MESSAGE("2 sent out Wobbuffet!");
        MESSAGE("Foe Wobbuffet was hurt by the spikes!");
        MESSAGE("Pointed stones dug into foe Wobbuffet!");
        MESSAGE("Foe Wobbuffet was poisoned!");
        MESSAGE("Foe Wobbuffet was caught in a sticky web!");
    }
}

DOUBLE_BATTLE_TEST("Court Change swaps entry hazards used by the player")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); MOVE(playerRight, MOVE_STEALTH_ROCK); }
        TURN { MOVE(playerLeft, MOVE_SPIKES); MOVE(playerRight, MOVE_TOXIC_SPIKES); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(opponentLeft, 2); SWITCH(playerLeft, 2); }
    } SCENE {
        MESSAGE("Wobbuffet used Sticky Web!");
        MESSAGE("Wobbuffet used Stealth Rock!");
        MESSAGE("Wobbuffet used Spikes!");
        MESSAGE("Wobbuffet used Toxic Spikes!");
        MESSAGE("Foe Wynaut used Court Change!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side of the field!");
        SEND_IN_MESSAGE("Wobbuffet");
        MESSAGE("Wobbuffet was hurt by the spikes!");
        MESSAGE("Pointed stones dug into Wobbuffet!");
        MESSAGE("Wobbuffet was poisoned!");
        MESSAGE("Wobbuffet was caught in a sticky web!");
        MESSAGE("2 sent out Wynaut!");
        NONE_OF {
            MESSAGE("Foe Wynaut was hurt by the spikes!");
            MESSAGE("Pointed stones dug into foe Wynaut!");
            MESSAGE("Foe Wynaut was poisoned!");
            MESSAGE("Foe Wynaut was caught in a sticky web!");
        }
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the player swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SNOWSCAPE); MOVE(opponentLeft, MOVE_MIST); MOVE(opponentRight, MOVE_SAFEGUARD); }
        TURN { MOVE(opponentLeft, MOVE_AURORA_VEIL); MOVE(opponentRight, MOVE_REFLECT); }
        TURN { MOVE(opponentLeft, MOVE_LIGHT_SCREEN); MOVE(opponentRight, MOVE_TAILWIND); }
        TURN { MOVE(playerLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Wynaut used Snowscape!");
        MESSAGE("Foe Wobbuffet used Mist!");
        MESSAGE("Foe Wobbuffet used Safeguard!");
        MESSAGE("Foe Wobbuffet used Aurora Veil!");
        MESSAGE("Foe Wobbuffet used Reflect!");
        MESSAGE("Foe Wobbuffet used Light Screen!");
        MESSAGE("Foe Wobbuffet used Tailwind!");
        MESSAGE("Wynaut used Court Change!");
        MESSAGE("Wynaut swapped the battle effects affecting each side of the field!");
        // The effects now end for the player side.        
        MESSAGE("Your team's Mist wore off!");
        MESSAGE("Your team is no longer protected by Safeguard!");
        MESSAGE("Your team's Reflect wore off!");
        MESSAGE("Your team's Aurora Veil wore off!");
        MESSAGE("Your team's Tailwind petered out!");
        MESSAGE("Your team's Light Screen wore off!");
    }
}

DOUBLE_BATTLE_TEST("Court Change used by the opponent swaps Mist, Safeguard, Aurora Veil, Reflect, Light Screen, Tailwind")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SNOWSCAPE); MOVE(playerLeft, MOVE_MIST); MOVE(playerRight, MOVE_SAFEGUARD); }
        TURN { MOVE(playerLeft, MOVE_AURORA_VEIL); MOVE(playerRight, MOVE_REFLECT); }
        TURN { MOVE(playerLeft, MOVE_LIGHT_SCREEN); MOVE(playerRight, MOVE_TAILWIND); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { }
        TURN { }
        TURN { }
        TURN { }
    } SCENE {
        MESSAGE("Wobbuffet used Mist!");
        MESSAGE("Wobbuffet used Safeguard!");
        MESSAGE("Wobbuffet used Aurora Veil!");
        MESSAGE("Wobbuffet used Reflect!");
        MESSAGE("Wobbuffet used Light Screen!");
        MESSAGE("Wobbuffet used Tailwind!");
        MESSAGE("Foe Wynaut used Court Change!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side of the field!");
        // The effects now end for the player side.
        MESSAGE("Foe team's Mist wore off!");
        MESSAGE("Foe team is no longer protected by Safeguard!");
        MESSAGE("Foe team's Reflect wore off!");
        MESSAGE("Foe team's Aurora Veil wore off!");
        MESSAGE("Foe team's Tailwind petered out!");
        MESSAGE("Foe team's Light Screen wore off!");
    }
}

TO_DO_BATTLE_TEST("Court Change used by the player swaps G-Max Steelsurge, G-Max Vine Lash, G-Max Wildfire, G-Max Cannonade");
