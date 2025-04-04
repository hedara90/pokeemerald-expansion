#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Thermal Exchange makes Will-O-Wisp fail")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        PLAYER(SPECIES_BAXCALIBUR) { Ability(ABILITY_THERMAL_EXCHANGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, opponent);
            STATUS_ICON(player, burn: TRUE);
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    }
}

SINGLE_BATTLE_TEST("Thermal Exchange prevents the user from getting burned when hitting Flame Body")
{
    GIVEN {
        PLAYER(SPECIES_BAXCALIBUR) { Ability(ABILITY_THERMAL_EXCHANGE); }
        OPPONENT(SPECIES_PONYTA) { Ability(ABILITY_FLAME_BODY); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        NONE_OF {
            ABILITY_POPUP(opponent, ABILITY_FLAME_BODY);
            STATUS_ICON(player, burn: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Thermal Exchange cures burns when acquired")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        ASSUME(gMovesInfo[MOVE_SKILL_SWAP].effect == EFFECT_SKILL_SWAP);
        PLAYER(SPECIES_BAXCALIBUR) { Ability(ABILITY_THERMAL_EXCHANGE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_WILL_O_WISP); MOVE(opponent, MOVE_SKILL_SWAP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, player);
        STATUS_ICON(opponent, burn: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SKILL_SWAP, opponent);
        NOT HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Thermal Exchange burn prevention can be bypassed with Mold Breaker")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        PLAYER(SPECIES_BAXCALIBUR) { Ability(ABILITY_THERMAL_EXCHANGE); }
        OPPONENT(SPECIES_RAMPARDOS) { Ability(ABILITY_MOLD_BREAKER); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_WILL_O_WISP); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, opponent);
        STATUS_ICON(player, burn: TRUE);
    }
}
