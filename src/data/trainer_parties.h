static const struct TrainerMon sParty_Sawyer1[] = {
    {
    .lvl = 21,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout1[] = {
    {
    .lvl = 65,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout2[] = {
    {
    .lvl = 65,
    .species = SPECIES_CROBAT,
    },
    {
    .lvl = 65,
    .species = SPECIES_LANTURN,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout3[] = {
    {
    .lvl = 65,
    .species = SPECIES_BEARTIC,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout4[] = {
    {
    .lvl = 65,
    .species = SPECIES_GOLURK,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern1[] = {
    {
    .lvl = 70,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 70,
    .species = SPECIES_PERSIAN,
    },
    {
    .lvl = 70,
    .species = SPECIES_PERSIAN_ALOLAN,
    }
};



static const struct TrainerMon sParty_GruntSeafloorCavern3[] = {
    {
    .lvl = 70,
    .species = SPECIES_CROBAT,
    },
    {
    .lvl = 70,
    .species = SPECIES_CARRACOSTA,
    }
};

static const struct TrainerMon sParty_Gabrielle1[] = {
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK,
    },
    {
    .lvl = 64,
    .species = SPECIES_MAROWAK_ALOLAN,
    },
};

static const struct TrainerMon sParty_GruntPetalburgWoods[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_QUICK_FEET,
    .species = SPECIES_POOCHYENA,
    .moves = {MOVE_BITE, MOVE_TACKLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CARVANHA,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_AQUA_JET, MOVE_BITE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Marcel[] = {
    {
    .lvl = 64,
    .species = SPECIES_CLOYSTER,
    },
    {
    .lvl = 64,
    .species = SPECIES_CARRACOSTA,
    }
};

static const struct TrainerMon sParty_Alberto[] = {
    {
    .lvl = 58,
    .species = SPECIES_SALAMENCE,
    },
    {
    .lvl = 58,
    .species = SPECIES_FLYGON,
    }
};

static const struct TrainerMon sParty_Ed[] = {
    {
    .lvl = 56,
    .species = SPECIES_MEGANIUM,
    },
    {
    .lvl = 56,
    .species = SPECIES_PORYGON2,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern4[] = {
    {
    .lvl = 70,
    .species = SPECIES_GOLISOPOD,
    },
    {
    .lvl = 70,
    .species = SPECIES_LOKIX,
    }
};

static const struct TrainerMon sParty_Declan[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TYRANTRUM,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_HEAD_SMASH, MOVE_EARTHQUAKE, MOVE_SCALE_SHOT, MOVE_STEALTH_ROCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ESPEON,
    .nature = NATURE_TIMID,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_MORNING_SUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SUNFLORA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_WEATHER_BALL, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_TYPHLOSION,
    .nature = NATURE_MODEST,
    .ability = ABILITY_BLAZING_SOUL,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .moves = {MOVE_ERUPTION, MOVE_FLAMETHROWER, MOVE_FOCUS_BLAST, MOVE_SCORCHING_SANDS}
    }
};

static const struct TrainerMon sParty_GruntRusturfTunnel[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_GLAMEOW,
    .moves = {MOVE_FAKE_OUT, MOVE_KNOCK_OFF, MOVE_U_TURN, MOVE_FACADE},
    .ability = ABILITY_DEFIANT,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_SILK_SCARF,

    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_MIGHTYENA,
    .moves = {MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG},
    .ability = ABILITY_INTIMIDATE,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_MUSCLE_BAND,

    },
    {
     .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),   
    .lvl = 202, 
    .species = SPECIES_SPOINK,
    .moves = {MOVE_PSYBEAM, MOVE_FLASH, MOVE_ICY_WIND, MOVE_GRASS_KNOT},
    .ability = ABILITY_GLUTTONY,
    .nature = NATURE_CALM,
    .heldItem = ITEM_SITRUS_BERRY,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst1[] = {
    {
    .lvl = 60,
    .species = SPECIES_PERRSERKER,
    },
    {
    .lvl = 60,
    .species = SPECIES_PERSIAN_ALOLAN,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst2[] = {
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 62,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_COMPETITIVE,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HIDDEN_POWER, MOVE_ALLURING_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 62,
    .species = SPECIES_OGERPON_WELLSPRING_MASK,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_WELLSPRING_MASK,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_IVY_CUDGEL, MOVE_HORN_LEECH, MOVE_THROAT_CHOP, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_TAUROS_PALDEAN_AQUA_BREED,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_STONE_EDGE, MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT}
    }
};

static const struct TrainerMon sParty_GruntWeatherInst5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 62,
    .species = SPECIES_ARMALDO,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_EXPERT_BELT,
    .ability = ABILITY_SKILL_LINK,
    .moves = {MOVE_ROCK_BLAST, MOVE_PIN_MISSILE, MOVE_SWORDS_DANCE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 62,
    .species = SPECIES_STARMIE,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_TIMID,
    .ability = ABILITY_ILLUMINATE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_IRON_JUGULIS,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_AIR_SLASH, MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_GruntWeatherInst3[] = {
    {
    .lvl = 60,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 60,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_GruntMuseum1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ROUGH_SKIN,
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VELUZA,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_PSYCHO_CUT, MOVE_LIQUIDATION, MOVE_AQUA_JET, MOVE_SLASH}
    },
};

static const struct TrainerMon sParty_GruntMuseum2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_GOLISOPOD,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_EMERGENCY_EXIT,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_RAZOR_SHELL, MOVE_AQUA_JET, MOVE_LEECH_LIFE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_LOKIX,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TINTED_LENS,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_LUNGE, MOVE_SUCKER_PUNCH, MOVE_DOUBLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_QWILFISH_HISUIAN,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_BARB_BARRAGE, MOVE_THROAT_CHOP, MOVE_FELL_STINGER, MOVE_FLIP_TURN}
    },
};

static const struct TrainerMon sParty_GruntSpaceCenter1[] = {
    {
    .lvl = 32,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_GruntMtPyre1[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre2[] = {
    {
    .lvl = 32,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntMtPyre3[] = {
    {
    .lvl = 30,
    .species = SPECIES_POOCHYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_GruntWeatherInst4[] = {
    {
    .lvl = 60,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout5[] = {
    {
    .lvl = 65,
    .species = SPECIES_BISHARP,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout6[] = {
    {
    .lvl = 65,
    .species = SPECIES_GRAPPLOCT,
    }
};

static const struct TrainerMon sParty_Fredrick[] = {
    {
    .lvl = 56,
    .species = SPECIES_FLORGES,
    },
    {
    .lvl = 56,
    .species = SPECIES_GOLURK,
    }
};

static const struct TrainerMon sParty_Matt[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_OVERQWIL,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_HAZE, MOVE_BARB_BARRAGE, MOVE_THROAT_CHOP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_BASCULEGION_MALE,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_ADAPTABILITY,
    .moves = {MOVE_SPIRIT_SHACKLE, MOVE_WAVE_CRASH, MOVE_SUPERPOWER, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_HYDRAPPLE,
    .heldItem = ITEM_YACHE_BERRY,
    .nature = NATURE_MODEST,
    .ability = ABILITY_REGENERATOR,
    .moves = {MOVE_ENERGY_BALL, MOVE_DRAGON_PULSE, MOVE_EARTH_POWER, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_GRENINJA_BATTLE_BOND,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DARK_PULSE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 74,
    .species = SPECIES_IRON_BUNDLE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_QUARK_DRIVE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_FREEZE_DRY, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 74,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_MACHAMPITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
};

static const struct TrainerMon sParty_Zander[] = {
    {
    .lvl = 65,
    .species = SPECIES_ANNIHILAPE,
    }
};

static const struct TrainerMon sParty_ShellyWeatherInstitute[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_HUNTAIL,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_WHITE_HERB,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_WAVE_CRASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_MANAPHY,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_HYDRATION,
    .moves = {MOVE_TAIL_GLOW, MOVE_SURF, MOVE_ICE_BEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_HAXORUS,
    .heldItem = ITEM_LUM_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_DUAL_CHOP, MOVE_EARTHQUAKE, MOVE_POISON_JAB, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SAMUROTT_HISUIAN,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BRAVIARY_HISUIAN,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_HEAT_WAVE, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_DREDNAWITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_JAW_LOCK, MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_LIQUIDATION}
    },
};

static const struct TrainerMon sParty_ShellySeafloorCavern[] = {
    //hp, atk, def, speed, spatk, spdef
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 80,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_MENTAL_HERB,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_TRICK_ROOM, MOVE_EARTH_POWER, MOVE_EXPLOSION, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 80,
    .species = SPECIES_SAMUROTT_HISUIAN,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_NIGHT_SLASH, MOVE_AQUA_CUTTER, MOVE_X_SCISSOR, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 80,
    .species = SPECIES_DRAMPA,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_MODEST,
    .ability = ABILITY_BERSERK,
    .moves = {MOVE_HYPER_VOICE, MOVE_DRAGON_PULSE, MOVE_ENERGY_BALL, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
    .lvl = 80,
    .species = SPECIES_DREDNAW,
    .heldItem = ITEM_DREDNAWITE,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_JAW_LOCK, MOVE_ICE_FANG, MOVE_CRUNCH, MOVE_LIQUIDATION}
    },
};

static const struct TrainerMon sParty_MattSeafloorCavern[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_ASSAULT_VEST,
    .nature = NATURE_QUIET,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_DRAIN_PUNCH, MOVE_LIQUIDATION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GRENINJA_BATTLE_BOND,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_TIMID,
    .moves = {MOVE_DARK_PULSE, MOVE_SURF, MOVE_ICE_BEAM, MOVE_GRASS_KNOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 30, 30),
    .lvl = 80,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_HEAVY_DUTY_BOOTS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MULTISCALE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DUAL_WINGBEAT, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_MACHAMPITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_MACH_PUNCH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
};

static const struct TrainerMon sParty_Archie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_SWAMPERT,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_STEALTH_ROCK, MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_ZEBSTRIKA,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAP_SIPPER,
    .moves = {MOVE_FLARE_BLITZ, MOVE_WILD_CHARGE, MOVE_FACADE, MOVE_ZIPPY_ZAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 80,
    .species = SPECIES_KELDEO_RESOLUTE,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SHARPNESS,
    .moves = {MOVE_SECRET_SWORD, MOVE_AIR_SLASH, MOVE_HYDRO_PUMP, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_SHARPEDO,
    .heldItem = ITEM_SHARPEDONITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SPEED_BOOST,
    .moves = {MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_LIQUIDATION, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_KYOGRE,
    .heldItem = ITEM_BLUE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_ORIGIN_PULSE, MOVE_THUNDER, MOVE_ICE_BEAM, MOVE_WATER_SPOUT}
    },
};

static const struct TrainerMon sParty_Leah[] = {
    {
    .lvl = 65,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Daisy[] = {
    {
    .lvl = 24,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 24,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Rose1[] = {
    {
    .lvl = 29,
    .species = SPECIES_LILLIGANT,
    },
    {
    .lvl = 29,
    .species = SPECIES_GARBODOR,
    }
};

static const struct TrainerMon sParty_Felix[] = {
    {
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_NONE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Violet[] = {
    {
    .lvl = 56,
    .species = SPECIES_VILEPLUME,
    },
    {
    .lvl = 56,
    .species = SPECIES_BELLOSSOM,
    }
};

static const struct TrainerMon sParty_Rose2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Rose5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Dusty1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DUGTRIO_ALOLAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_STONE_EDGE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MINIOR,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_SHIELDS_DOWN,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_POWER_GEM, MOVE_EARTHQUAKE, MOVE_ACROBATICS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOVISH,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_FISHIOUS_REND, MOVE_DRAGON_CLAW, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_AERODACTYL,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_AERODACTYLITE,
    .moves = {MOVE_HONE_CLAWS, MOVE_STONE_EDGE, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT}
    }
};

static const struct TrainerMon sParty_Foster[] = {
    {
    .lvl = 55,
    .species = SPECIES_SEISMITOAD,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Dusty2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 30,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 33,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_Dusty5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 36,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};

static const struct TrainerMon sParty_GabbyAndTy1[] = {
    {
    .lvl = 34,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 34,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy2[] = {
    {
    .lvl = 55,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 55,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy3[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy4[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy5[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_GabbyAndTy6[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWALOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Lola1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_CLAMPERL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 20,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Austina[] = {
    {
    .lvl = 56,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Gwen[] = {
    {
    .lvl = 56,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Lola2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lola5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ricky1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 22,
    .species = SPECIES_SIMIPOUR,
    .moves = {MOVE_NONE, MOVE_NONE, MOVE_NONE, MOVE_SCALD}
    }
};

static const struct TrainerMon sParty_Simon[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_HERACROSS,
    .heldItem = ITEM_FLAME_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GUTS,
    .moves = {MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_POUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_STUNFISK,
    .heldItem = ITEM_SHUCA_BERRY,
    .nature = NATURE_SASSY,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_DISCHARGE, MOVE_MUD_BOMB, MOVE_ROCK_SLIDE, MOVE_SILVER_WIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 28,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_MYSTIC_WATER,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_HUGE_POWER,
    .moves = {MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Charlie[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Ricky2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Ricky5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_SAND_ATTACK, MOVE_PIN_MISSILE, MOVE_TAIL_WHIP, MOVE_SURF}
    }
};

static const struct TrainerMon sParty_Randall[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SWELLOW,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Parker[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_George[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_SLAKOTH,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SLACK_OFF, MOVE_COUNTER, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Berke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_VIGOROTH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_ENERGY, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Braxton[] = {
    {
    .lvl = 56,
    .species = SPECIES_PRIMEAPE,
    },
    {
    .lvl = 56,
    .species = SPECIES_MAGNEZONE,
    },
    {
    .lvl = 56,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Vincent[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 44,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Leroy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 46,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Wilton1[] = {
    {
    .lvl = 35,
    .species = SPECIES_NOCTOWL,
    },
    {
    .lvl = 35,
    .species = SPECIES_SAWSBUCK,
    },
    {
    .lvl = 35,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_Edgar[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_CACTURNE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Albert[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_MUK,
    }
};

static const struct TrainerMon sParty_Samuel[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MAWILE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Vito[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_DODRIO,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_ELECTRODE,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_Owen[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Wilton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Wilton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Warren[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 33,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Mary[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FEINT_ATTACK, MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Alexia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_WIGGLYTUFF,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DEFENSE_CURL, MOVE_DOUBLE_EDGE, MOVE_SHADOW_BALL, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jody[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 26,
    .species = SPECIES_ZANGOOSE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SLASH, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Wendy[] = {
    {
    .lvl = 57,
    .species = SPECIES_EMOLGA,
    },
    {
    .lvl = 57,
    .species = SPECIES_ROSERADE,
    },
    {
    .lvl = 57,
    .species = SPECIES_CLAWITZER,
    }
};

static const struct TrainerMon sParty_Keira[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Brooke1[] = {
    {
    .lvl = 37,
    .species = SPECIES_GOGOAT,
    },
    {
    .lvl = 37,
    .species = SPECIES_GREEDENT,
    }
};

static const struct TrainerMon sParty_Jennifer[] = {
    {
    .lvl = 64,
    .species = SPECIES_PURUGLY,
    }
};

static const struct TrainerMon sParty_Hope[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Shannon[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Michelle[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TORKOAL,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_Caroline[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Julie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_NINETALES,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 42,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Brooke2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Brooke5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Patricia[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Kindra[] = {
    {
    .lvl = 56,
    .species = SPECIES_DUSKNOIR,
    },
    {
    .lvl = 56,
    .species = SPECIES_GOTHITELLE,
    }
};

static const struct TrainerMon sParty_Tammy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_JYNX,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_PSYSTRIKE, MOVE_FREEZE_DRY, MOVE_LOVELY_KISS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FAKE_OUT, MOVE_GUNK_SHOT, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HELIOLISK,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_SURF, MOVE_BOOMBURST, MOVE_THUNDER, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VIVILLON,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SHIELD_DUST,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER}
    }
};

static const struct TrainerMon sParty_Valerie1[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Tasha[] = {
    {
    .lvl = 65,
    .species = SPECIES_DUSKNOIR,
    }
};

static const struct TrainerMon sParty_Valerie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SPOINK,
    }
};

static const struct TrainerMon sParty_Valerie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SPOINK,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_SABLEYE,
    }
};

static const struct TrainerMon sParty_Valerie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_DUSKULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_SABLEYE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 42,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Cindy1[] = {
    {
    .lvl = 7,
    .species = SPECIES_CUTIEFLY,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Daphne[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SWEET_KISS, MOVE_FLAIL, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LUVDISC,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_ATTRACT, MOVE_SAFEGUARD, MOVE_TAKE_DOWN, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter2[] = {
    {
    .lvl = 26,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .lvl = 30,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Cindy2[] = {
    {
    .lvl = 11,
    .species = SPECIES_ZIGZAGOON,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Brianna[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_SEAKING,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Naomi[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 45,
    .species = SPECIES_ROSELIA,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Cindy6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Melissa[] = {
    {
    .lvl = 21,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Sheila[] = {
    {
    .lvl = 21,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Shirley[] = {
    {
    .lvl = 21,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Jessica1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GLISCOR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_HYPER_CUTTER,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STEALTH_ROCK, MOVE_EARTHQUAKE, MOVE_DUAL_WINGBEAT, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRAWDAUNT,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LIQUIDATION, MOVE_KNOCK_OFF, MOVE_X_SCISSOR, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_HASTY,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EXPLOSION, MOVE_FLASH_CANNON, MOVE_THUNDER, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BLASTOISE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_BLASTOISINITE,
    .moves = {MOVE_SHELL_SMASH, MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_AURA_SPHERE}
    }
};

static const struct TrainerMon sParty_Connie[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Bridget[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 40,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Olivia[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_CLAMPERL,
    .moves = {MOVE_IRON_DEFENSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_WATER_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_CORPHISH,
    .moves = {MOVE_TAUNT, MOVE_CRABHAMMER, MOVE_WATER_PULSE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_LOMBRE,
    .moves = {MOVE_UPROAR, MOVE_FURY_SWIPES, MOVE_FAKE_OUT, MOVE_WATER_PULSE}
    }
};

static const struct TrainerMon sParty_Tiffany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Jessica2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Jessica5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_BIND, MOVE_LICK, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 44,
    .species = SPECIES_SEVIPER,
    .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Winston1[] = {
    {
    .lvl = 8,
    .species = SPECIES_YUNGOOS,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Mollie[] = {
    {
    .lvl = 33,
    .species = SPECIES_WHISCASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Garret[] = {
    {
    .lvl = 45,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston2[] = {
    {
    .lvl = 27,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston3[] = {
    {
    .lvl = 30,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston4[] = {
    {
    .lvl = 33,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET
    }
};

static const struct TrainerMon sParty_Winston5[] = {
    {
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NUGGET,
    .moves = {MOVE_FURY_SWIPES, MOVE_MUD_SPORT, MOVE_ODOR_SLEUTH, MOVE_SAND_ATTACK}
    }
};

static const struct TrainerMon sParty_Steve1[] = {
    {
    .lvl = 36,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 36,
    .species = SPECIES_FORRETRESS,
    },
    {
    .lvl = 36,
    .species = SPECIES_LICKILICKY,
    }
};

static const struct TrainerMon sParty_Thalia1[] = {
    {
    .lvl = 25,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 25,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Mark[] = {
    {
    .lvl = 65,
    .species = SPECIES_TREVENANT,
    }
};

static const struct TrainerMon sParty_GruntMtChimney1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CENTISKORCH,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_CHARTI_BERRY,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_X_SCISSOR, MOVE_FIRE_LASH, MOVE_CRUNCH, MOVE_POWER_WHIP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_SKUNTANK,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_AFTERMATH,
    .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_SUCKER_PUNCH, MOVE_TRAILBLAZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TAUROS_PALDEAN_BLAZE_BREED,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_STONE_EDGE, MOVE_RAGING_BULL, MOVE_CLOSE_COMBAT, MOVE_ZEN_HEADBUTT}
    }
};

static const struct TrainerMon sParty_Steve2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_LAIRON,
    }
};

static const struct TrainerMon sParty_Steve3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_RHYHORN,
    }
};

static const struct TrainerMon sParty_Steve5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_AGGRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Luis[] = {
    {
    .lvl = 55,
    .species = SPECIES_BRUXISH,
    },
    {
    .lvl = 55,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Dominik[] = {
    {
    .lvl = 55,
    .species = SPECIES_INTELEON,
    }
};

static const struct TrainerMon sParty_Douglas[] = {
    {
    .lvl = 55,
    .species = SPECIES_GRAPPLOCT,
    },
    {
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Darrin[] = {
    {
    .lvl = 56,
    .species = SPECIES_POLIWRATH,
    },
    {
    .lvl = 56,
    .species = SPECIES_POLITOED,
    },
    {
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    }
};

static const struct TrainerMon sParty_Tony1[] = {
    {
    .lvl = 56,
    .species = SPECIES_RHYDON,
    }
};

static const struct TrainerMon sParty_Jerome[] = {
    {
    .lvl = 56,
    .species = SPECIES_GOLDUCK,
    },
    {
    .lvl = 56,
    .species = SPECIES_CLEFABLE,
    }
};

static const struct TrainerMon sParty_Matthew[] = {
    {
    .lvl = 56,
    .species = SPECIES_SHARPEDO,
    },
    {
    .lvl = 56,
    .species = SPECIES_SIRFETCHD,
    }
};

static const struct TrainerMon sParty_David[] = {
    {
    .lvl = 56,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 56,
    .species = SPECIES_CLODSIRE,
    }
};

static const struct TrainerMon sParty_Spencer[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AMBIPOM,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_LOADED_DICE,
    .moves = {MOVE_FAKE_OUT, MOVE_TAIL_SLAP, MOVE_ARM_THRUST, MOVE_DUAL_CHOP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FLAREON,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TOXIC_BOOST,
    .heldItem = ITEM_TOXIC_ORB,
    .moves = {MOVE_FLAME_CHARGE, MOVE_SACRED_FIRE, MOVE_FACADE, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRIFBLIM,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLARE_BOOST,
    .heldItem = ITEM_FLAME_ORB,
    .moves = {MOVE_STRENGTH_SAP, MOVE_SHADOW_BALL, MOVE_AIR_SLASH, MOVE_WEATHER_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VOLCANION,
    .nature = NATURE_MODEST,
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_STEAM_ERUPTION, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Roland[] = {
    {
    .lvl = 66,
    .species = SPECIES_POLIWRATH,
    }
};

static const struct TrainerMon sParty_Nolen[] = {
    {
    .lvl = 60,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Stan[] = {
    {
    .lvl = 60,
    .species = SPECIES_DONDOZO,
    }
};

static const struct TrainerMon sParty_Barry[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dean[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 31,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Rodney[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Richard[] = {
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Herman[] = {
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Santiago[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Gilbert[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Franklin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEALEO,
    }
};

static const struct TrainerMon sParty_Kevin[] = {
    {
    .lvl = 34,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Jack[] = {
    {
    .lvl = 34,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Dudley[] = {
    {
    .lvl = 33,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    },
    {
    .lvl = 33,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Chad[] = {
    {
    .lvl = 66,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Tony2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tony5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Takao[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_STUFFUL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_CRABRAWLER,
    }
};

static const struct TrainerMon sParty_Hitoshi[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 32,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Kiyo[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Koichi[] = {
    {
    .lvl = 55,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    }
};

static const struct TrainerMon sParty_Nob1[] = {
    {
    .lvl = 40,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Nob2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 27,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 31,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Nob5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOP,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_BLACK_BELT
    }
};

static const struct TrainerMon sParty_Yuji[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 26,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Daisuke[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GRANBULL,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_PLAY_ROUGH, MOVE_ICE_FANG, MOVE_JAW_LOCK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KROOKODILE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_STONE_EDGE, MOVE_CUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONTOP,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_TRIPLE_KICK, MOVE_SUCKER_PUNCH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONCHAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_MACH_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HITMONLEE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_KICKING_SHOES,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_SUCKER_PUNCH, MOVE_BLAZE_KICK, MOVE_AQUA_STEP}
    },
};

static const struct TrainerMon sParty_Atsushi[] = {
    {
    .lvl = 65,
    .species = SPECIES_THROH,
    },
    {
    .lvl = 65,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Kirk[] = {
    {
    .lvl = 27,
    .species = SPECIES_CHIMECHO,
    },
    {
    .lvl = 27,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout7[] = {
    {
    .lvl = 64,
    .species = SPECIES_TOXAPEX,
    },
    {
    .lvl = 64,
    .species = SPECIES_SPIRITOMB,
    }
};

static const struct TrainerMon sParty_GruntAquaHideout8[] = {
    {
    .lvl = 64,
    .species = SPECIES_LIEPARD,
    }
};

static const struct TrainerMon sParty_Shawn[] = {
    {
    .lvl = 27,
    .species = SPECIES_AERODACTYL,
    },
    {
    .lvl = 27,
    .species = SPECIES_DRUDDIGON,
    }
};

static const struct TrainerMon sParty_Fernando1[] = {
    {
    .lvl = 56,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_Dalton1[] = {
    {
    .lvl = 28,
    .species = SPECIES_SWANNA,
    },
    {
    .lvl = 28,
    .species = SPECIES_VIVILLON,
    },
    {
    .lvl = 28,
    .species = SPECIES_HELIOLISK,
    },
    {
    .lvl = 28,
    .species = SPECIES_OINKOLOGNE,
    },
};

static const struct TrainerMon sParty_Dalton2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_WHISMUR,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Dalton4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dalton5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Cole[] = {
    {
    .lvl = 40,
    .species = SPECIES_MAGCARGO,
    }
};

static const struct TrainerMon sParty_Jeff[] = {
    {
    .lvl = 40,
    .species = SPECIES_SUNFLORA,
    },
    {
    .lvl = 40,
    .species = SPECIES_TALONFLAME,
    }
};

static const struct TrainerMon sParty_Axle[] = {
    {
    .lvl = 41,
    .species = SPECIES_FLAREON,
    }
};

static const struct TrainerMon sParty_Jace[] = {
    {
    .lvl = 41,
    .species = SPECIES_RAPIDASH,
    }
};

static const struct TrainerMon sParty_Keegan[] = {
    {
    .lvl = 41,
    .species = SPECIES_TURTONATOR,
    }
};

static const struct TrainerMon sParty_Bernie1[] = {
    {
    .lvl = 37,
    .species = SPECIES_ELECTABUZZ,
    },
    {
    .lvl = 37,
    .species = SPECIES_GOURGEIST,
    },
};

static const struct TrainerMon sParty_Bernie2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_Bernie3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Bernie5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MAGCARGO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Drew[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_EXCADRILL,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARCANINE_HISUIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_HEADLONG_RUSH, MOVE_EXTREME_SPEED}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SANDACONDA,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAND_SPIT,
    .heldItem = ITEM_SANDACONDITE,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_QUICK_ATTACK, MOVE_HIGH_HORSEPOWER, MOVE_SCALE_SHOT}
    }
};

static const struct TrainerMon sParty_Beau[] = {
    {
    .lvl = 55,
    .species = SPECIES_CLAYDOL,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Larry[] = {
    {
    .lvl = 35,
    .species = SPECIES_UNFEZANT,
    },
    {
    .lvl = 35,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sParty_Shane[] = {
    {
    .lvl = 37,
    .species = SPECIES_JYNX,
    },
    {
    .lvl = 37,
    .species = SPECIES_DUBWOOL,
    }
};

static const struct TrainerMon sParty_Rusty[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CORVIKNIGHT,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_PRESSURE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_PRESS, MOVE_BULK_UP, MOVE_IRON_HEAD, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BRONZONG,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_OCCA_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GHOLDENGO,
    .nature = NATURE_TIMID,
    .ability = ABILITY_GOOD_AS_GOLD,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_NASTY_PLOT, MOVE_SHADOW_BALL, MOVE_MAKE_IT_RAIN, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SAMUROTT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_SMART_STRIKE, MOVE_KNOCK_OFF, MOVE_RAZOR_SHELL, MOVE_SACRED_SWORD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_COBALION,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_JUSTIFIED,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_IRON_HEAD, MOVE_CLOSE_COMBAT, MOVE_POISON_JAB, MOVE_STONE_EDGE}
    }
};

static const struct TrainerMon sParty_Ethan1[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERSIAN_ALOLAN,
    }
};

static const struct TrainerMon sParty_Autumn[] = {
    {
    .lvl = 40,
    .species = SPECIES_PERRSERKER,
    }
};

static const struct TrainerMon sParty_Travis[] = {
    {
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .lvl = 34,
    .species = SPECIES_PARASECT,
    },
    {
    .lvl = 34,
    .species = SPECIES_TOUCANNON,
    }
};

static const struct TrainerMon sParty_Ethan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Ethan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Ethan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Ethan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Brent[] = {
    {
    .lvl = 59,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Donald[] = {
    {
    .lvl = 57,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 57,
    .species = SPECIES_RIBOMBEE,
    },
    {
    .lvl = 57,
    .species = SPECIES_BEAUTIFLY,
    }
};

static const struct TrainerMon sParty_Taylor[] = {
    {
    .lvl = 58,
    .species = SPECIES_STONJOURNER,
    },
    {
    .lvl = 58,
    .species = SPECIES_GOGOAT,
    }
};

static const struct TrainerMon sParty_Jeffrey1[] = {
    {
    .lvl = 64,
    .species = SPECIES_MOTHIM,
    }
};

static const struct TrainerMon sParty_Jeffrey2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    }
};

static const struct TrainerMon sParty_Jeffrey3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 34,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_WURMPLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MASQUERAIN,
    }
};

static const struct TrainerMon sParty_Jeffrey5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_DUSTOX,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_SURSKIT,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_MASQUERAIN,
    .heldItem = ITEM_SILVER_POWDER
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_BEAUTIFLY,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Edward[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DACHSBUN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_WELL_BAKED_BODY,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_PRESS, MOVE_BODY_SLAM, MOVE_DIG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MUDSDALE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STAMINA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_ROCK_TOMB, MOVE_HEAVY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRYOGONAL,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_ANCIENT_POWER, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Preston[] = {
    {
    .lvl = 66,
    .species = SPECIES_SWOOBAT,
    }
};

static const struct TrainerMon sParty_Virgil[] = {
    {
    .lvl = 66,
    .species = SPECIES_RAICHU_ALOLAN,
    }
};

static const struct TrainerMon sParty_Blake[] = {
    {
    .lvl = 66,
    .species = SPECIES_BEHEEYEM,
    }
};

static const struct TrainerMon sParty_William[] = {
    {
    .lvl = 64,
    .species = SPECIES_HYPNO,
    },
    {
    .lvl = 64,
    .species = SPECIES_ESPATHRA,
    }
};

static const struct TrainerMon sParty_Joshua[] = {
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron1[] = {
    {
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    },
    {
    .lvl = 55,
    .species = SPECIES_LUNATONE
    }
};

static const struct TrainerMon sParty_Cameron2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 33,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 38,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_SOLROCK,
    }
};

static const struct TrainerMon sParty_Cameron5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_SOLROCK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Jaclyn[] = {
    {
    .lvl = 26,
    .species = SPECIES_HYPNO,
    }
};

static const struct TrainerMon sParty_Hannah[] = {
    {
    .lvl = 66,
    .species = SPECIES_GARDEVOIR,
    }
};

static const struct TrainerMon sParty_Samantha[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 66,
    .species = SPECIES_GALLADE,
    }
};

static const struct TrainerMon sParty_Maura[] = {
    {
    .lvl = 66,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Kayla[] = {
    {
    .lvl = 64,
    .species = SPECIES_COFAGRIGUS,
    },
    {
    .lvl = 64,
    .species = SPECIES_RUNERIGUS,
    }
};

static const struct TrainerMon sParty_Alexis[] = {
    {
    .lvl = 41,
    .species = SPECIES_KIRLIA,
    },
    {
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Jacki1[] = {
    {
    .lvl = 56,
    .species = SPECIES_MR_MIME,
    },
    {
    .lvl = 56,
    .species = SPECIES_PANGORO,
    }
};

static const struct TrainerMon sParty_Jacki2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_KADABRA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 40,
    .species = SPECIES_LUNATONE,
    }
};

static const struct TrainerMon sParty_Jacki5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_ALAKAZAM,
    }
};

static const struct TrainerMon sParty_Walter1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SEAKING,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FISHIOUS_REND, MOVE_AQUA_JET, MOVE_MEGAHORN, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_GYARADOSITE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_AQUA_TAIL, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_OMASTAR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_HYDRO_PUMP, MOVE_EARTH_POWER, MOVE_ICE_BEAM}
    }
};

static const struct TrainerMon sParty_Vanessa[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PELIPPER,
    .nature = NATURE_QUIET,
    .ability = ABILITY_DRIZZLE,
    .heldItem = ITEM_SHARP_BEAK,
    .moves = {MOVE_HURRICANE, MOVE_SCALD, MOVE_ROOST, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_EMOLGA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER, MOVE_AIR_SLASH, MOVE_SUBSTITUTE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KABUTOPS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SWORDS_DANCE, MOVE_STONE_EDGE, MOVE_LIQUIDATION, MOVE_X_SCISSOR}
    }
};

static const struct TrainerMon sParty_Micah[] = {
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 44,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Thomas[] = {
    {
    .lvl = 45,
    .species = SPECIES_ZANGOOSE,
    }
};

static const struct TrainerMon sParty_Walter2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Walter3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Walter4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Walter5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH, MOVE_FURY_SWIPES}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_GOLDUCK,
    .moves = {MOVE_FURY_SWIPES, MOVE_DISABLE, MOVE_CONFUSION, MOVE_PSYCH_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    .moves = {MOVE_QUICK_ATTACK, MOVE_SPARK, MOVE_ODOR_SLEUTH, MOVE_ROAR}
    }
};

static const struct TrainerMon sParty_Sidney[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_MIGHTYENA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_DOUBLE_EDGE, MOVE_SAND_ATTACK, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TORMENT, MOVE_DOUBLE_TEAM, MOVE_SWAGGER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 46,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LEECH_SEED, MOVE_FEINT_ATTACK, MOVE_NEEDLE_ARM, MOVE_COTTON_SPORE}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SWORDS_DANCE, MOVE_STRENGTH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_ABSOL,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE, MOVE_SLASH}
    }
};

static const struct TrainerMon sParty_Phoebe[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_GRUDGE, MOVE_WILL_O_WISP, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SABLEYE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_NIGHT_SHADE, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 49,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_DUSCLOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Glacia[] = {
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ENCORE, MOVE_BODY_SLAM, MOVE_HAIL, MOVE_ICE_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 50,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_CRUNCH, MOVE_ICY_WIND, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_SEALEO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ATTRACT, MOVE_DOUBLE_EDGE, MOVE_HAIL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 52,
    .species = SPECIES_GLALIE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_HAIL, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SURF, MOVE_BODY_SLAM, MOVE_ICE_BEAM, MOVE_SHEER_COLD}
    }
};

static const struct TrainerMon sParty_Drake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_SALAMENCE,
    .nature = NATURE_HASTY,
    .heldItem = ITEM_LIFE_ORB,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_FIRE_BLAST, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_MAGEARNA,
    .heldItem = ITEM_LEFTOVERS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SOUL_HEART,
    .moves = {MOVE_FLASH_CANNON, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_ARCHALUDON,
    .nature = NATURE_BOLD,
    .ability = ABILITY_STAMINA,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_GOUGING_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_PROTOSYNTHESIS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_BREAKING_SWIPE, MOVE_PSYCHIC_FANGS, MOVE_STOMPING_TANTRUM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAYQUAZA,
    .heldItem = ITEM_YACHE_BERRY,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_AIR_LOCK,
    .moves = {MOVE_DRAGON_ASCENT, MOVE_DRAGON_PULSE, MOVE_ROCK_SLIDE, MOVE_EXTREME_SPEED}
    },
};

static const struct TrainerMon sParty_Roxanne1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 14,
    .species = SPECIES_GEODUDE,
    .heldItem = ITEM_CUSTAP_BERRY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_SANDSTORM, MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_LILEEP,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_BOLD,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_ANCIENT_POWER, MOVE_MEGA_DRAIN, MOVE_ACID, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_GLIGAR,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SAND_VEIL,
    .moves = {MOVE_WING_ATTACK, MOVE_POISON_TAIL, MOVE_BULLDOZE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_BERRY_JUICE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_BLAST, MOVE_SPARK, MOVE_BULLDOZE, MOVE_THUNDER_WAVE}
    }
};

static const struct TrainerMon sParty_Brawly1[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_GURDURR,
    .nature = NATURE_ADAMANT,
    .heldItem = ITEM_EVIOLITE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_MACH_PUNCH, MOVE_FIRE_PUNCH, MOVE_LOW_SWEEP, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_LYCANROC_DUSK,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_MUSCLE_BAND,
    .ability = ABILITY_TOUGH_CLAWS,
    .moves = {MOVE_LOW_SWEEP, MOVE_ACCELEROCK, MOVE_BULLDOZE, MOVE_ICE_FANG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_SCRAFTY,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_LOW_SWEEP, MOVE_KNOCK_OFF, MOVE_BULLDOZE, MOVE_SWAGGER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_THICK_FAT,
    .moves = {MOVE_FAKE_OUT, MOVE_LOW_SWEEP, MOVE_BULLET_PUNCH, MOVE_BULK_UP}
    }
};

static const struct TrainerMon sParty_Wattson1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_LANTURN,
    .nature = NATURE_MODEST,
    .heldItem = ITEM_DAMP_ROCK,
    .ability = ABILITY_DRIZZLE,
    .moves = {MOVE_THUNDER, MOVE_SCALD, MOVE_ICY_WIND, MOVE_SIGNAL_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_KILOWATTREL,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_VOLT_ABSORB,
    .moves = {MOVE_HURRICANE, MOVE_THUNDER, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_ANALYTIC,
    .moves = {MOVE_THUNDER, MOVE_FLASH_CANNON, MOVE_VOLT_SWITCH, MOVE_TRI_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_EELEKTROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_THUNDER, MOVE_GIGA_DRAIN, MOVE_DRAIN_PUNCH, MOVE_LIQUIDATION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_LUXRAY,
    .heldItem = ITEM_LUXRITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_THUNDER_FANG, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ICE_FANG}
    }
};

static const struct TrainerMon sParty_Flannery1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NINETALES,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_HEAT_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_PSYSHOCK, MOVE_SCORCHING_SANDS}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 31, 30, 30),
    .lvl = 47,
    .species = SPECIES_WALKING_WAKE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_HYDRO_STEAM, MOVE_FLAMETHROWER, MOVE_DRAGON_PULSE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SCOVILLAIN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_ROTOM_HEAT,
    .nature = NATURE_BOLD,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_THUNDERBOLT, MOVE_OVERHEAT, MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_TORKOAL,
    .nature = NATURE_QUIET,
    .ability = ABILITY_DROUGHT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_INFERNAPE,
    .heldItem = ITEM_INFERNAPITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_BLAZE,
    .moves = {MOVE_FLARE_BLITZ, MOVE_CLOSE_COMBAT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_Norman1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_OBSTAGOON,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_FLAME_ORB,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT, MOVE_OBSTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_ZOROARK_HISUIAN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BITTER_MALICE, MOVE_AURA_SPHERE, MOVE_HYPER_VOICE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_IRON_VALIANT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_SPIRIT_BREAK, MOVE_BULK_UP, MOVE_KNOCK_OFF}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 30, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_URSALUNA_BLOODMOON,
    .nature = NATURE_QUIET,
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_EARTH_POWER, MOVE_BLOOD_MOON, MOVE_HYPER_VOICE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_SLAKING,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TRUANT,
    .heldItem = ITEM_SLAKITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_PLAY_ROUGH, MOVE_POWER_UP_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CYCLIZAR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_REGENERATOR,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_SHED_TAIL, MOVE_AQUA_TAIL, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Winona1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_STARAPTOR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_DOUBLE_EDGE, MOVE_BRAVE_BIRD, MOVE_CLOSE_COMBAT, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_MANDIBUZZ,
    .nature = NATURE_CAREFUL,
    .ability = ABILITY_OVERCOAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_FOUL_PLAY, MOVE_ROOST, MOVE_TOXIC, MOVE_FLY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FLYGON,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_TINTED_LENS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_DRACO_METEOR, MOVE_HEADLONG_RUSH, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_FROSMOTH,
    .nature = NATURE_TIMID,
    .ability = ABILITY_ICE_SCALES,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_QUIVER_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 30, 30, 30),
    .lvl = 68,
    .species = SPECIES_THUNDURUS_THERIAN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_THUNDERBOLT, MOVE_GRASS_KNOT, MOVE_SLUDGE_WAVE, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 68,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_ALTARIANITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_NATURAL_CURE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_RETURN}
    }
};

static const struct TrainerMon sParty_Tate[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_TAPU_LELE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PSYCHIC_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_THUNDERBOLT}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 31, 30, 30, 30, 30),
    .lvl = 76,
    .species = SPECIES_ESPATHRA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LUMINA_CRASH, MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_KANGASKHANITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SCRAPPY,
    .moves = {MOVE_POWER_UP_PUNCH, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Liza[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_IRON_LEAVES,
    .nature = NATURE_NAUGHTY,
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_CHOICE_SCARF,
    .moves = {MOVE_LEAF_BLADE, MOVE_PSYBLADE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_FARIGIRAF,
    .nature = NATURE_MODEST,
    .ability = ABILITY_PARENTAL_BOND,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ALAKAZAM,
    .heldItem = ITEM_ALAKAZITE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_MAGIC_GUARD,
    .moves = {MOVE_EXPANDING_FORCE, MOVE_PSYSHOCK, MOVE_FOCUS_BLAST, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Juan1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TAPU_FINI,
    .nature = NATURE_TIMID,
    .ability = ABILITY_MISTY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_MOONBLAST, MOVE_ICE_BEAM, MOVE_SURF, MOVE_FLIP_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_TINKATON,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_METAL_COAT,
    .moves = {MOVE_GIGATON_HAMMER, MOVE_PLAY_ROUGH, MOVE_STONE_EDGE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_URSALUNA,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_BULLETPROOF,
    .heldItem = ITEM_ASSAULT_VEST,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_HEADLONG_RUSH, MOVE_CLOSE_COMBAT, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_FLUTTER_MANE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_MOONBLAST, MOVE_PSYSHOCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 82,
    .species = SPECIES_DIANCIE,
    .heldItem = ITEM_DIANCITE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_CLEAR_BODY,
    .moves = {MOVE_MOONBLAST, MOVE_DIAMOND_STORM, MOVE_CALM_MIND, MOVE_EARTH_POWER}
    }
};

static const struct TrainerMon sParty_Jerry1[] = {
    {
    .lvl = 17,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Ted[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KLEAVOR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STONE_AXE, MOVE_X_SCISSOR, MOVE_ACCELEROCK, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_JUMPLUFF,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_AERILATE,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_DOUBLE_EDGE, MOVE_LEAF_BLADE, MOVE_STRENGTH_SAP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PARASECT,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_DRY_SKIN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SPORE, MOVE_SAPPY_SEED, MOVE_LEECH_LIFE, MOVE_CRABHAMMER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SNORLAX,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE, MOVE_HEAVY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PHEROMOSA,
    .nature = NATURE_MILD,
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_BUG_BUZZ, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, MOVE_CLOSE_COMBAT}
    }
};

static const struct TrainerMon sParty_Paul[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LEAVANNY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SHARPNESS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_SACRED_SWORD, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ELECTRODE_HISUIAN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_RECKLESS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CHLOROBLAST, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .nature = NATURE_HASTY,
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_FAKE_OUT, MOVE_SCALD, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CRUSTLE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_X_SCISSOR, MOVE_STONE_EDGE, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KARTANA,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_LEAF_BLADE, MOVE_SMART_STRIKE, MOVE_SACRED_SWORD, MOVE_NIGHT_SLASH}
    }
};

static const struct TrainerMon sParty_Jerry2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_RALTS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Jerry4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Jerry5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_KIRLIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_BANETTE,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 34,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Karen1[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 10,
    .species = SPECIES_NIDORINA,
    }
};

static const struct TrainerMon sParty_Georgia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TREVENANT,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_HARVEST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_LEECH_SEED, MOVE_SYNTHESIS, MOVE_HORN_LEECH, MOVE_POLTERGEIST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOEDSCRUEL,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_SPORE, MOVE_LEECH_SEED, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MASQUERAIN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_QUIVER_DANCE, MOVE_SCALD, MOVE_ICE_BEAM, MOVE_BUG_BUZZ}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BUTTERFREE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_COMPOUND_EYES,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_QUIVER_DANCE, MOVE_HURRICANE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_WO_CHIEN,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_TABLETS_OF_RUIN,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_LEECH_SEED, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN, MOVE_RUINATION}
    }
};

static const struct TrainerMon sParty_Karen2[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_WHISMUR,
    }
};

static const struct TrainerMon sParty_Karen3[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen4[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Karen5[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 35,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_KateAndJoy[] = {
    {
    .lvl = 64,
    .species = SPECIES_SPINDA,
    },
    {
    .lvl = 64,
    .species = SPECIES_LIEPARD,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg1[] = {
    {
    .lvl = 26,
    .species = SPECIES_LINOONE,
    },
    {
    .lvl = 26,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 24,
    .species = SPECIES_FLAAFFY,
    },
    {
    .lvl = 24,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_AnnaAndMeg2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAKUHITA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AnnaAndMeg5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_LINOONE,
    .moves = {MOVE_GROWL, MOVE_TAIL_WHIP, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 38,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_TACKLE, MOVE_FOCUS_ENERGY, MOVE_ARM_THRUST, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Victor[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BOLTUND,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_THUNDER_FANG, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PIDGEOT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FRISK,
    .heldItem = ITEM_PIDGEOTITE,
    .moves = {MOVE_HURRICANE, MOVE_FACADE, MOVE_ROOST, MOVE_HEAT_WAVE}
    },
};

static const struct TrainerMon sParty_Miguel1[] = {
    {
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .lvl = 25,
    .species = SPECIES_FEAROW,
    }
};

static const struct TrainerMon sParty_Colton[] = {
    {
    .lvl = 22,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 36,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 40,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 12,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 30,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    },
    {
    .lvl = 42,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
    }
};

static const struct TrainerMon sParty_Miguel2[] = {
    {
    .lvl = 29,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel3[] = {
    {
    .lvl = 32,
    .species = SPECIES_SKITTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel4[] = {
    {
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Miguel5[] = {
    {
    .lvl = 38,
    .species = SPECIES_DELCATTY,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Victoria[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CETITAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_ICICLE_CRASH, MOVE_BODY_SLAM, MOVE_BULLDOZE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLOWBRO,
    .nature = NATURE_MODEST,
    .ability = ABILITY_OWN_TEMPO,
    .heldItem = ITEM_SLOWBRONITE,
    .moves = {MOVE_PSYCHIC, MOVE_SCALD, MOVE_YAWN, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Bethany[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 35,
    .species = SPECIES_AZURILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_MARILL,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_AZUMARILL,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_TIMID,
    .ability = ABILITY_TRANSISTOR,
    .moves = {MOVE_GRASS_KNOT, MOVE_SIGNAL_BEAM, MOVE_ELECTROWEB, MOVE_CHARGE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MANTINE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_ICY_WIND, MOVE_AIR_SLASH, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Isabel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_ORAN_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_ORAN_BERRY
    }
};

static const struct TrainerMon sParty_Isabel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_PLUSLE,
    .heldItem = ITEM_SITRUS_BERRY
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_SITRUS_BERRY
    }
};

static const struct TrainerMon sParty_Timothy1[] = {
    {
    .lvl = 56,
    .species = SPECIES_HAXORUS,
    }
};

static const struct TrainerMon sParty_Timothy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_KNOCK_OFF, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Timothy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_ARM_THRUST, MOVE_BELLY_DRUM, MOVE_SAND_ATTACK, MOVE_DIG}
    }
};

static const struct TrainerMon sParty_Vicky[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MEDICHAM,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_PURE_POWER,
    .heldItem = ITEM_MEDICHAMITE,
    .moves = {MOVE_FAKE_OUT, MOVE_DRAIN_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_ICE_PUNCH}
    },
};

static const struct TrainerMon sParty_Shelby1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 21,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 30,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Shelby3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 36,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Shelby5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Calvin1[] = {
    {
    .lvl = 5,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_Billy[] = {
    {
    .lvl = 7,
    .species = SPECIES_WOOLOO,
    },
    {
    .lvl = 7,
    .species = SPECIES_SEEDOT,
    }
};

static const struct TrainerMon sParty_Josh[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 12,
    .species = SPECIES_GROWLITHE_HISUIAN,
    }
};

static const struct TrainerMon sParty_Tommy[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_SCRAGGY,
    .lvl = 10,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .species = SPECIES_DIGLETT_ALOLAN,
    .lvl = 10,
    }
};

static const struct TrainerMon sParty_Joey[] = {
    {
    .lvl = 10,
    .species = SPECIES_TIMBURR,
    }
};

static const struct TrainerMon sParty_Ben[] = {
    {
    .lvl = 27,
    .species = SPECIES_GRAFAIAI,
    },
    {
    .lvl = 27,
    .species = SPECIES_VULLABY,
    }
};

static const struct TrainerMon sParty_Quincy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_ATTRACT, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_DUSCLOPS,
    .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Katelynn[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 43,
    .species = SPECIES_SLAKING,
    .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_BALL, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
    }
};

static const struct TrainerMon sParty_Jaylen[] = {
    {
    .lvl = 37,
    .species = SPECIES_VIBRAVA,
    },
    {
    .lvl = 35,
    .species = SPECIES_GRAPPLOCT,
    }
};

static const struct TrainerMon sParty_Dillon[] = {
    {
    .lvl = 37,
    .species = SPECIES_LAIRON,
    },
    {
    .lvl = 36,
    .species = SPECIES_CLEFABLE,
    }
};

static const struct TrainerMon sParty_Calvin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 29,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Calvin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_Eddie[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_QWILFISH,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_TOXIC_SPIKES, MOVE_FLIP_TURN, MOVE_SPIKES, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_REVAVROOM,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_FILTER,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_GUNK_SHOT, MOVE_SPIN_OUT, MOVE_SHIFT_GEAR, MOVE_HIGH_HORSEPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRAPION,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_WICKED_BLOW, MOVE_CROSS_POISON, MOVE_ICE_FANG, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BEEDRILL,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_BEEDRILLITE,
    .moves = {MOVE_SWORDS_DANCE, MOVE_X_SCISSOR, MOVE_POISON_JAB, MOVE_DRILL_RUN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_NAGANADEL,
    .nature = NATURE_TIMID,
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_DRAGON_PULSE, MOVE_FIRE_BLAST, MOVE_NASTY_PLOT}
    }
};

static const struct TrainerMon sParty_Allen[] = {
    {
    .lvl = 4,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 5,
    .species = SPECIES_PATRAT,
    }
};

static const struct TrainerMon sParty_Timmy[] = {
    {
    .lvl = 25,
    .species = SPECIES_ELDEGOSS,
    },
    {
    .lvl = 25,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 25,
    .species = SPECIES_CHATOT,
    }
};

static const struct TrainerMon sParty_Wallace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_WAILORD,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_SPOUT, MOVE_DOUBLE_EDGE, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_LEECH_SEED, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_SURF, MOVE_AMNESIA, MOVE_HYPER_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_GYARADOS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_RECOVER, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TOXIC}
    }
};

static const struct TrainerMon sParty_Ivan[] = {
    {
    .lvl = 5,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 6,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 7,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Claude[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WEAVILE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_ICICLE_CRASH, MOVE_KNOCK_OFF, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARCTOVISH,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FISHIOUS_REND, MOVE_ICICLE_CRASH, MOVE_CRUNCH, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLOYSTER,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_SKILL_LINK,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_SHELL_SMASH, MOVE_ICICLE_SPEAR, MOVE_ROCK_BLAST, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARAQUANID,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_WATER_BUBBLE,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_LIQUIDATION, MOVE_LEECH_LIFE, MOVE_MIRROR_COAT, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Elliot1[] = {
    {
    .lvl = 13,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 15,
    .species = SPECIES_MAREANIE,
    },
    {
    .lvl = 14,
    .species = SPECIES_KRABBY,
    }
};

static const struct TrainerMon sParty_Ned[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 15,
    .species = SPECIES_TENTACOOL,
    },
    {
        .species = SPECIES_DUCKLETT,
        .lvl = 16,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WATER_PULSE, MOVE_AIR_CUTTER, MOVE_NONE, MOVE_NONE},
    }
};

static const struct TrainerMon sParty_Dale[] = {
    {
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 23,
    .species = SPECIES_PYUKUMUKU,
    },
    {
    .lvl = 23,
    .species = SPECIES_BASCULIN,
    },
    {
    .lvl = 22,
    .species = SPECIES_QUAGSIRE,
    }
};

static const struct TrainerMon sParty_Nolan[] = {
    {
    .lvl = 37,
    .species = SPECIES_WHISCASH,
    },
    {
    .lvl = 37,
    .species = SPECIES_GASTRODON,
    },
    {
    .lvl = 37,
    .species = SPECIES_QUAGSIRE,
    }
};

static const struct TrainerMon sParty_Barny[] = {
    {
    .lvl = 55,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 55,
    .species = SPECIES_DREDNAW,
    }
};

static const struct TrainerMon sParty_Wade[] = {
    {
    .lvl = 55,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Carter[] = {
    {
    .lvl = 55,
    .species = SPECIES_CRAMORANT,
    },
    {
    .lvl = 55,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 26,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_CARVANHA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Elliot5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GYARADOS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Ronald[] = {
    {
    .lvl = 19,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 21,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 23,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 26,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 30,
    .species = SPECIES_GYARADOS,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Jacob[] = {
    {
    .lvl = 23,
    .species = SPECIES_STARAVIA,
    },
    {
    .lvl = 23,
    .species = SPECIES_BOLDORE,
    },
    {
    .lvl = 23,
    .species = SPECIES_CINCCINO,
    },
    {
    .lvl = 23,
    .species = SPECIES_SIRFETCHD,
    }
};

static const struct TrainerMon sParty_Anthony[] = {
    {
    .lvl = 25,
    .species = SPECIES_MAGNETON,
    },
    {
    .lvl = 25,
    .species = SPECIES_VIGOROTH,
    },
    {
    .lvl = 25,
    .species = SPECIES_SIGILYPH,
    }
};

static const struct TrainerMon sParty_Benjamin1[] = {
    {
    .lvl = 26,
    .species = SPECIES_DIGGERSBY,
    },
    {
    .lvl = 26,
    .species = SPECIES_COMFEY,
    },
    {
    .lvl = 26,
    .species = SPECIES_SNEASEL,
    }
};

static const struct TrainerMon sParty_Benjamin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Benjamin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Benjamin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail1[] = {
    {
    .lvl = 26,
    .species = SPECIES_MORPEKO,
    },
    {
    .lvl = 26,
    .species = SPECIES_CORSOLA,
    }
};

static const struct TrainerMon sParty_Jasmine[] = {
    {
    .lvl = 24,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 24,
    .species = SPECIES_HOUNDOOM,
    },
    {
    .lvl = 24,
    .species = SPECIES_VOLTORB_HISUIAN,
    }
};

static const struct TrainerMon sParty_Abigail2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_MAGNEMITE,
    }
};

static const struct TrainerMon sParty_Abigail4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Abigail5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MAGNETON,
    }
};

static const struct TrainerMon sParty_Dylan1[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONCHAN,
    },
    {
    .lvl = 27,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Dylan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Dylan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Dylan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria1[] = {
    {
    .lvl = 27,
    .species = SPECIES_HITMONLEE,
    },
    {
    .lvl = 27,
    .species = SPECIES_THROH,
    },
};

static const struct TrainerMon sParty_Maria2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 28,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 31,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Maria4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Maria5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Camden[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Demetrius[] = {
    {
    .lvl = 25,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .lvl = 25,
    .species = SPECIES_ELECTRIKE,
    }
};

static const struct TrainerMon sParty_Isaiah1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo1[] = {
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Chase[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Isaiah4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isaiah5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Isobel[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Donny[] = {
    {
    .lvl = 26,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Talia[] = {
    {
    .lvl = 34,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn1[] = {
    {
    .lvl = 35,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Allison[] = {
    {
    .lvl = 27,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 33,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 42,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Katelyn4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Katelyn5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 48,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Nicolas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 37,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_BAGON,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 46,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Nicolas5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_NONE
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 49,
    .species = SPECIES_SHELGON,
    .heldItem = ITEM_DRAGON_FANG
    }
};

static const struct TrainerMon sParty_Aaron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_BAGON,
    .moves = {MOVE_DRAGON_BREATH, MOVE_HEADBUTT, MOVE_FOCUS_ENERGY, MOVE_EMBER}
    }
};

static const struct TrainerMon sParty_Perry[] = {
    {
    .lvl = 56,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Hugh[] = {
    {
    .lvl = 59,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Phil[] = {
    {
    .lvl = 60,
    .species = SPECIES_KOMALA,
    }
};

static const struct TrainerMon sParty_Jared[] = {
    {
    .lvl = 60,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 60,
    .species = SPECIES_TOUCANNON,
    }
};

static const struct TrainerMon sParty_Humberto[] = {
    {
    .lvl = 62,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Presley[] = {
    {
    .lvl = 59,
    .species = SPECIES_UNFEZANT,
    },
    {
    .lvl = 59,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Edwardo[] = {
    {
    .lvl = 60,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 60,
    .species = SPECIES_CORVIKNIGHT,
    }
};

static const struct TrainerMon sParty_Colin[] = {
    {
    .lvl = 62,
    .species = SPECIES_XATU,
    },
    {
    .lvl = 62,
    .species = SPECIES_HONCHKROW,
    }
};

static const struct TrainerMon sParty_Robert1[] = {
    {
    .lvl = 63,
    .species = SPECIES_CRAMORANT,
    }
};

static const struct TrainerMon sParty_Benny[] = {
    {
    .lvl = 36,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Chester[] = {
    {
    .lvl = 55,
    .species = SPECIES_FLAMIGO,
    },
    {
    .lvl = 55,
    .species = SPECIES_UNFEZANT,
    }
};

static const struct TrainerMon sParty_Robert2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 32,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Robert3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 35,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_Robert5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_ALTARIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_XATU,
    }
};

static const struct TrainerMon sParty_Alex[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_NATU,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Beck[] = {
    {
    .lvl = 34,
    .species = SPECIES_TROPIUS,
    }
};

static const struct TrainerMon sParty_Yasu[] = {
    {
    .lvl = 60,
    .species = SPECIES_MR_RIME,
    }
};

static const struct TrainerMon sParty_Takashi[] = {
    {
    .lvl = 58,
    .species = SPECIES_OINKOLOGNE,
    },
    {
    .lvl = 58,
    .species = SPECIES_HYPNO,
    }
};

static const struct TrainerMon sParty_Dianne[] = {
    {
    .lvl = 43,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKILL_SWAP, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 43,
    .species = SPECIES_LANTURN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jani[] = {
    {
    .lvl = 26,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_Lao1[] = {
    {
    .lvl = 36,
    .species = SPECIES_MIENSHAO,
    },
    {
    .lvl = 35,
    .species = SPECIES_THWACKEY,
    },
    {
    .lvl = 36,
    .species = SPECIES_SPIDOPS,
    }
};

static const struct TrainerMon sParty_Lung[] = {
    {
    .lvl = 35,
    .species = SPECIES_FROGADIER,
    },
    {
    .lvl = 34,
    .species = SPECIES_MABOSSTIFF,
    },
    {
    .lvl = 34,
    .species = SPECIES_WEEZING,
    }
};

static const struct TrainerMon sParty_Lao2[] = {
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .lvl = 24,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .lvl = 26,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_KOFFING,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Lao5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_KOFFING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_POISON_GAS, MOVE_TACKLE, MOVE_SLUDGE, MOVE_SELF_DESTRUCT}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 35,
    .species = SPECIES_WEEZING,
    .heldItem = ITEM_SMOKE_BALL,
    .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Jocelyn[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_PIGNITE,
    }
};

static const struct TrainerMon sParty_Laura[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 18,
    .species = SPECIES_LOPUNNY,
    }
};

static const struct TrainerMon sParty_Cyndy1[] = {
    {
    .lvl = 39,
    .species = SPECIES_DUDUNSPARCE,
    },
    {
    .lvl = 39,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Cora[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_MEDITITE,
    }
};

static const struct TrainerMon sParty_Paula[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 27,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Cyndy2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 26,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 29,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Cyndy4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 32,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Cyndy5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_MEDICHAM,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 35,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Madeline1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SNEASLER,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_DIRE_CLAW, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HONCHKROW,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SUPER_LUCK,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_DRILL_PECK, MOVE_NIGHT_SLASH, MOVE_SUCKER_PUNCH, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PALOSSAND,
    .nature = NATURE_BOLD,
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_EARTH_POWER, MOVE_SHADOW_BALL, MOVE_SHORE_UP, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HERACROSS,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_HERACRONITE,
    .moves = {MOVE_ROCK_BLAST, MOVE_ARM_THRUST, MOVE_BULLET_SEED, MOVE_PIN_MISSILE}
    },
};

static const struct TrainerMon sParty_Clarissa[] = {
    {
    .lvl = 63,
    .species = SPECIES_VICTREEBEL,
    },
    {
    .lvl = 63,
    .species = SPECIES_JELLICENT,
    }
};

static const struct TrainerMon sParty_Angelica[] = {
    {
    .lvl = 64,
    .species = SPECIES_LUXRAY,
    }
};

static const struct TrainerMon sParty_Madeline2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 29,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TACKLE, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_EMBER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_MEGA_DRAIN, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_NUMEL,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_MAGNITUDE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Madeline5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_CAMERUPT,
    .moves = {MOVE_FLAMETHROWER, MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY}
    }
};

static const struct TrainerMon sParty_Beverly[] = {
    {
    .lvl = 55,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 55,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Imani[] = {
    {
    .lvl = 55,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Kyla[] = {
    {
    .lvl = 56,
    .species = SPECIES_WAILORD,
    }
};

static const struct TrainerMon sParty_Denise[] = {
    {
    .lvl = 55,
    .species = SPECIES_BUTTERFREE,
    },
    {
    .lvl = 55,
    .species = SPECIES_VIVILLON,
    }
};

static const struct TrainerMon sParty_Beth[] = {
    {
    .lvl = 56,
    .species = SPECIES_MUK,
    },
    {
    .lvl = 56,
    .species = SPECIES_MUK_ALOLAN,
    }
};

static const struct TrainerMon sParty_Tara[] = {
    {
    .lvl = 57,
    .species = SPECIES_CHERRIM,
    },
    {
    .lvl = 57,
    .species = SPECIES_KINGLER,
    }
};

static const struct TrainerMon sParty_Missy[] = {
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    },
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    },
    {
    .lvl = 56,
    .species = SPECIES_WUGTRIO,
    }
};

static const struct TrainerMon sParty_Alice[] = {
    {
    .lvl = 54,
    .species = SPECIES_SEAKING,
    },
    {
    .lvl = 54,
    .species = SPECIES_QUAQUAVAL,
    },
    {
    .lvl = 54,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_Jenny1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_JOLTEON,
    .nature = NATURE_TIMID,
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_WEATHER_BALL, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VICTREEBEL,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_POWER_WHIP, MOVE_POISON_JAB, MOVE_SLEEP_POWDER, MOVE_KNOCK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCREAM_TAIL,
    .nature = NATURE_CALM,
    .ability = ABILITY_PROTOSYNTHESIS,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_PSYCHIC, MOVE_WISH, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKELEDIRGE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_UNAWARE,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_TORCH_SONG, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAGMORTAR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYDRO_STEAM, MOVE_AURA_SPHERE, MOVE_DARK_PULSE}
    }
};

static const struct TrainerMon sParty_Grace[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PYROAR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_SCORCHING_SANDS, MOVE_SOLAR_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LEAFEON,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_CHLOROPHYLL,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_LEAF_BLADE, MOVE_X_SCISSOR, MOVE_STOMPING_TANTRUM, MOVE_SWORDS_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WHISCASH,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_WATER_BUBBLE,
    .heldItem = ITEM_RINDO_BERRY,
    .moves = {MOVE_WATERFALL, MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CINDERACE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_LIBERO,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_HIGH_JUMP_KICK, MOVE_PYRO_BALL, MOVE_SUCKER_PUNCH, MOVE_GUNK_SHOT}
    }
};

static const struct TrainerMon sParty_Tanya[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWANNA,
    }
};

static const struct TrainerMon sParty_Sharon[] = {
    {
    .lvl = 60,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Nikki[] = {
    {
    .lvl = 33,
    .species = SPECIES_MARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Brenda[] = {
    {
    .lvl = 34,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Katie[] = {
    {
    .lvl = 33,
    .species = SPECIES_GOLDEEN,
    },
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Susie[] = {
    {
    .lvl = 34,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Kara[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Dana[] = {
    {
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Sienna[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Debra[] = {
    {
    .lvl = 34,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Linda[] = {
    {
    .lvl = 33,
    .species = SPECIES_HORSEA,
    },
    {
    .lvl = 33,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Kaylee[] = {
    {
    .lvl = 34,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    }
};

static const struct TrainerMon sParty_Laurel[] = {
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 33,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Carlee[] = {
    {
    .lvl = 35,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jenny2[] = {
    {
    .lvl = 38,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny3[] = {
    {
    .lvl = 41,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny4[] = {
    {
    .lvl = 43,
    .species = SPECIES_STARYU,
    },
    {
    .lvl = 43,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Jenny5[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 45,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Heidi[] = {
    {
    .lvl = 55,
    .species = SPECIES_SHUCKLE,
    },
    {
    .lvl = 55,
    .species = SPECIES_SANDSHREW_ALOLAN,
    }
};

static const struct TrainerMon sParty_Becky[] = {
    {
    .lvl = 55,
    .species = SPECIES_MAWILE,
    },
    {
    .lvl = 55,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    }
};

static const struct TrainerMon sParty_Carol[] = {
    {
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 34,
    .species = SPECIES_KROKOROK,
    },
    {
    .lvl = 35,
    .species = SPECIES_VANILLISH,
    }
};

static const struct TrainerMon sParty_Nancy[] = {
    {
    .lvl = 36,
    .species = SPECIES_ARBOK,
    },
    {
    .lvl = 36,
    .species = SPECIES_SEVIPER,
    },
    {
    .lvl = 36,
    .species = SPECIES_SANDACONDA,
    },
};

static const struct TrainerMon sParty_Martha[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DURANT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_HUSTLE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FIRST_IMPRESSION, MOVE_IRON_HEAD, MOVE_X_SCISSOR, MOVE_SUPERPOWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BASTIODON,
    .nature = NATURE_SASSY,
    .ability = ABILITY_DAUNTLESS_SHIELD,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_METAL_BURST, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_ROOST, MOVE_TOXIC, MOVE_FLY, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KINGLER,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_HYPER_CUTTER,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_AQUA_JET, MOVE_LIQUIDATION, MOVE_ICE_HAMMER, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_TREADS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_IRON_HEAD, MOVE_WILD_CHARGE, MOVE_EARTHQUAKE, MOVE_KNOCK_OFF}
    }
};

static const struct TrainerMon sParty_Diana1[] = {
    {
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 39,
    .species = SPECIES_DODRIO,
    }
};

static const struct TrainerMon sParty_Cedric[] = {
    {
    .lvl = 65,
    .species = SPECIES_WOBBUFFET,
    .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
    }
};

static const struct TrainerMon sParty_Irene[] = {
    {
    .lvl = 35,
    .species = SPECIES_WAILORD,
    },
    {
    .lvl = 35,
    .species = SPECIES_BOUFFALANT,
    }
};

static const struct TrainerMon sParty_Diana2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 25,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SWABLU,
    }
};

static const struct TrainerMon sParty_Diana5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_VILEPLUME,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_ALTARIA,
    }
};

static const struct TrainerMon sParty_AmyAndLiv1[] = {
    {
    .lvl = 25,
    .species = SPECIES_NIDOKING,
    },
    {
    .lvl = 25,
    .species = SPECIES_NIDOQUEEN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia1[] = {
    {
    .lvl = 9,
    .species = SPECIES_EKANS,
    },
    {
    .lvl = 9,
    .species = SPECIES_GOSSIFLEUR,
    }
};

static const struct TrainerMon sParty_MiuAndYuki[] = {
    {
    .lvl = 56,
    .species = SPECIES_ESPEON,
    },
    {
    .lvl = 56,
    .species = SPECIES_UMBREON,
    }
};

static const struct TrainerMon sParty_AmyAndLiv3[] = {
    {
    .lvl = 9,
    .species = SPECIES_PLUSLE,
    },
    {
    .lvl = 9,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_GinaAndMia2[] = {
    {
    .lvl = 10,
    .species = SPECIES_DUSKULL,
    .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
    },
    {
    .lvl = 10,
    .species = SPECIES_SHROOMISH,
    .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_AmyAndLiv4[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_PLUSLE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 30,
    .species = SPECIES_MINUN,
    }
};

static const struct TrainerMon sParty_AmyAndLiv5[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 33,
    .species = SPECIES_MINUN,
    .moves = {MOVE_SPARK, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_AmyAndLiv6[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PLUSLE,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MINUN,
    .moves = {MOVE_THUNDER, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
    }
};

static const struct TrainerMon sParty_Huey[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 21,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 21,
    .species = SPECIES_WHISCASH,
    }
};

static const struct TrainerMon sParty_Edmond[] = {
    {
    .lvl = 22,
    .species = SPECIES_OCTILLERY,
    }
};

static const struct TrainerMon sParty_Ernest1[] = {
    {
    .lvl = 59,
    .species = SPECIES_CONKELDURR,
    },
    {
    .lvl = 59,
    .species = SPECIES_LINOONE,
    }
};

static const struct TrainerMon sParty_Dwayne[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_THIEVUL,
    .heldItem = ITEM_DARK_GEM,
    .nature = NATURE_TIMID,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_DARK_PULSE, MOVE_SUCKER_PUNCH, MOVE_GRASS_KNOT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_CRAMORANT,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_GULP_MISSILE,
    .moves = {MOVE_ROOST, MOVE_SURF, MOVE_ICY_WIND, MOVE_AIR_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_PINSIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MOLD_BREAKER,
    .moves = {MOVE_X_SCISSOR, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE, MOVE_CUT}
    },
};

static const struct TrainerMon sParty_Phillip[] = {
    {
    .lvl = 44,
    .species = SPECIES_TENTACRUEL,
    },
    {
    .lvl = 44,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Leonard[] = {
    {
    .lvl = 43,
    .species = SPECIES_MACHOP,
    },
    {
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 43,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Duncan[] = {
    {
    .lvl = 25,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 25,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_TENTACOOL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 42,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Ernest5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 45,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Eli[] = {
    {
    .lvl = 41,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Annika[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_FEEBAS,
    .heldItem = ITEM_ORAN_BERRY,
    .moves = {MOVE_FLAIL, MOVE_WATER_PULSE, MOVE_RETURN, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Jazmyn[] = {
    {
    .lvl = 57,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Jonas[] = {
    {
    .lvl = 55,
    .species = SPECIES_WEEZING,
    },
    {
    .lvl = 55,
    .species = SPECIES_WEEZING_GALARIAN,
    }
};

static const struct TrainerMon sParty_Kayley[] = {
    {
    .lvl = 56,
    .species = SPECIES_TAUROS,
    },
    {
    .lvl = 56,
    .species = SPECIES_TAUROS_PALDEAN_COMBAT_BREED,
    }
};

static const struct TrainerMon sParty_Auron[] = {
    {
    .lvl = 59,
    .species = SPECIES_BOMBIRDIER,
    },
    {
    .lvl = 59,
    .species = SPECIES_KANGASKHAN,
    }
};

static const struct TrainerMon sParty_Kelvin[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    }
};

static const struct TrainerMon sParty_Marley[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 34,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
    }
};

static const struct TrainerMon sParty_Reyna[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Hudson[] = {
    {
    .lvl = 34,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Conor[] = {
    {
    .lvl = 33,
    .species = SPECIES_CHINCHOU,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 33,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Edwin1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUDICOLO,
    .heldItem = ITEM_COBA_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_OWN_TEMPO,
    .moves = {MOVE_GIGA_DRAIN, MOVE_BUBBLE_BEAM, MOVE_AURORA_BEAM, MOVE_FAKE_OUT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STOUTLAND,
    .heldItem = ITEM_SILK_SCARF,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_RETALIATE, MOVE_CRUNCH, MOVE_THUNDER_FANG, MOVE_PSYCHIC_FANGS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLODSIRE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_UNAWARE,
    .moves = {MOVE_POISON_JAB, MOVE_BULLDOZE, MOVE_ROCK_TOMB, MOVE_RECOVER}
    },
};

static const struct TrainerMon sParty_Hector[] = {
    {
    .lvl = 40,
    .species = SPECIES_ZANGOOSE,
    },
    {
    .lvl = 40,
    .species = SPECIES_SEVIPER,
    }
};

static const struct TrainerMon sParty_TabithaMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 36,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 38,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_GOLBAT,
    }
};

static const struct TrainerMon sParty_Edwin2[] = {
    {
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 26,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin3[] = {
    {
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 29,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin4[] = {
    {
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 32,
    .species = SPECIES_NUZLEAF,
    }
};

static const struct TrainerMon sParty_Edwin5[] = {
    {
    .lvl = 35,
    .species = SPECIES_LUDICOLO,
    },
    {
    .lvl = 35,
    .species = SPECIES_SHIFTRY,
    }
};

static const struct TrainerMon sParty_WallyVR1[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 41,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 45,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DRAGONAIR,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SHED_SKIN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_TAIL, MOVE_DRAGON_RAGE, MOVE_BODY_SLAM, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AURORA_BEAM, MOVE_WATER_PULSE, MOVE_DRAINING_KISS, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GROVYLE,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_POWER_UP_PUNCH, MOVE_LOW_SWEEP}
    }
};

static const struct TrainerMon sParty_BrendanRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_DRAGONITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MULTISCALE,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_MOONBLAST, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ARMAROUGE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ARMOR_CANNON, MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SCEPTILE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_SCEPTILITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_BULLET_SEED, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_METANG,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_METAL_CLAW, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_DAZZLING_GLEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FLAME_BURST, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK, MOVE_COUNTER}
    }
};

static const struct TrainerMon sParty_BrendanRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_METAGROSS,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MOONBLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BASCULEGION_FEMALE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_BLAZIKENITE,
    .moves = {MOVE_BLAZE_KICK, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_BrendanRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_BrendanRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLIGGOO_HISUIAN,
    .nature = NATURE_CALM,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_BREATH, MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_IMMUNITY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_WHEEL, MOVE_WILL_O_WISP, MOVE_COVET, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_FLIP_TURN}
    }
};

static const struct TrainerMon sParty_BrendanRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOODRA_HISUIAN,
    .nature = NATURE_CALM,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_WISH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FIRE_LASH, MOVE_WILL_O_WISP, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ELECTRODE_HISUIAN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_RECKLESS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CHLOROBLAST, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_AVALANCHE}
    }
};

static const struct TrainerMon sParty_MayRoute103Mudkip[] = {
    {
    .lvl = 5,
    .species = SPECIES_TREECKO,
    }
};

static const struct TrainerMon sParty_MayRoute110Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DRAGONAIR,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SHED_SKIN,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_TAIL, MOVE_DRAGON_RAGE, MOVE_BODY_SLAM, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_AURORA_BEAM, MOVE_WATER_PULSE, MOVE_DRAINING_KISS, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GROVYLE,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_ROCK_SLIDE, MOVE_POWER_UP_PUNCH, MOVE_LOW_SWEEP}
    }
};

static const struct TrainerMon sParty_MayRoute119Mudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_DRAGONITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MULTISCALE,
    .heldItem = ITEM_LUM_BERRY,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOREBYSS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DAZZLING,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_MOONBLAST, MOVE_SHELL_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ARMAROUGE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_ARMOR_CANNON, MOVE_AURA_SPHERE, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SCEPTILE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_SCEPTILITE,
    .moves = {MOVE_DUAL_CHOP, MOVE_BULLET_SEED, MOVE_EARTHQUAKE, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_MayRoute103Treecko[] = {
    {
    .lvl = 5,
    .species = SPECIES_TORCHIC,
    }
};

static const struct TrainerMon sParty_MayRoute110Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_METANG,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_METAL_CLAW, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_BULLDOZE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_DAZZLING_GLEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_COMBUSKEN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FLAME_BURST, MOVE_SCORCHING_SANDS, MOVE_QUICK_ATTACK, MOVE_COUNTER}
    }
};

static const struct TrainerMon sParty_MayRoute119Treecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_METAGROSS,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TOUGH_CLAWS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_METEOR_MASH, MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_WHIMSICOTT,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PRANKSTER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_MOONBLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BASCULEGION_FEMALE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_BLAZIKEN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SPEED_BOOST,
    .heldItem = ITEM_BLAZIKENITE,
    .moves = {MOVE_BLAZE_KICK, MOVE_CLOSE_COMBAT, MOVE_THUNDER_PUNCH, MOVE_SWORDS_DANCE}
    }
};

static const struct TrainerMon sParty_MayRoute103Torchic[] = {
    {
    .lvl = 5,
    .species = SPECIES_MUDKIP,
    }
};

static const struct TrainerMon sParty_MayRoute110Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLIGGOO_HISUIAN,
    .nature = NATURE_CALM,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAGON_BREATH, MOVE_FLASH_CANNON, MOVE_WATER_PULSE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_IMMUNITY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FLAME_WHEEL, MOVE_WILL_O_WISP, MOVE_COVET, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_BULLDOZE, MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_FLIP_TURN}
    }
};

static const struct TrainerMon sParty_MayRoute119Torchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CROBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_BRAVE_BIRD, MOVE_CROSS_POISON, MOVE_LEECH_LIFE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_GOODRA_HISUIAN,
    .nature = NATURE_CALM,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_WISH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_RAPIDASH_GALARIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FIRE_LASH, MOVE_WILL_O_WISP, MOVE_PLAY_ROUGH, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_URSHIFU_SINGLE_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_WICKED_BLOW, MOVE_SUCKER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_ELECTRODE_HISUIAN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_RECKLESS,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_CHLOROBLAST, MOVE_THUNDERBOLT, MOVE_VOLT_SWITCH, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_SWAMPERT,
    .heldItem = ITEM_SWAMPERTITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_POWER_UP_PUNCH, MOVE_AVALANCHE}
    }
};

static const struct TrainerMon sParty_Ezekiel1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_LOUDRED,
    .nature = NATURE_MODEST,
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_THROAT_SPRAY,
    .moves = {MOVE_HYPER_VOICE, MOVE_SHOCK_WAVE, MOVE_WATER_PULSE, MOVE_SHADOW_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_PIGNITE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_FIRE_PUNCH, MOVE_SUCKER_PUNCH, MOVE_FLAME_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_ORBEETLE,
    .nature = NATURE_CALM,
    .ability = ABILITY_SWARM,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SIGNAL_BEAM, MOVE_PSYSHOCK, MOVE_CONFUSE_RAY, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLAMIGO,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SCRAPPY,
    .heldItem = ITEM_FIGHTING_GEM,
    .moves = {MOVE_JUMP_KICK, MOVE_ACROBATICS, MOVE_ROOST, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SPIRITOMB,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DARK_PULSE, MOVE_SHADOW_BALL, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
};

static const struct TrainerMon sParty_Davis[] = {
    {
    .lvl = 27,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_Mitchell[] = {
    {
    .lvl = 43,
    .species = SPECIES_LUNATONE,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
    },
    {
    .lvl = 43,
    .species = SPECIES_SOLROCK,
    .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Ezekiel2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MAKUHITA,
    }
};

static const struct TrainerMon sParty_Ezekiel3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Ezekiel4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ARON,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Ezekiel5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_LAIRON,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_HARIYAMA,
    }
};

static const struct TrainerMon sParty_Lydia1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GLIMMORA,
    .nature = NATURE_BOLD,
    .ability = ABILITY_TOXIC_DEBRIS,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_BAYLEEF,
    .nature = NATURE_BOLD,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SYNTHESIS, MOVE_POISON_POWDER, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SEVIPER,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MERCILESS,
    .heldItem = ITEM_POISON_BARB,
    .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_BULLDOZE, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_MILTANK,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_THICK_FAT,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_THUNDER_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_SNEASEL_HISUIAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_FAKE_OUT, MOVE_CROSS_POISON, MOVE_ICE_PUNCH, MOVE_ROCK_SMASH}
    },
};

static const struct TrainerMon sParty_Halle[] = {
    {
    .lvl = 43,
    .species = SPECIES_SABLEYE,
    },
    {
    .lvl = 43,
    .species = SPECIES_ABSOL,
    }
};

static const struct TrainerMon sParty_Garrison[] = {
    {
    .lvl = 26,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Lydia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SHROOMISH,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 22,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 25,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_MARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 28,
    .species = SPECIES_GOLDEEN,
    }
};

static const struct TrainerMon sParty_Lydia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_AZUMARILL,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_ROSELIA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 31,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Jackson1[] = {
    {
    .lvl = 60,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Lorenzo[] = {
    {
    .lvl = 62,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 62,
    .species = SPECIES_VENUSAUR,
    },
    {
    .lvl = 62,
    .species = SPECIES_LILLIGANT,
    }
};

static const struct TrainerMon sParty_Sebastian[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 39,
    .species = SPECIES_CACTURNE,
    }
};

static const struct TrainerMon sParty_Jackson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 31,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 37,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Jackson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_KECLEON,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Catherine1[] = {
    {
    .lvl = 58,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .lvl = 58,
    .species = SPECIES_VILEPLUME,
    }
};

static const struct TrainerMon sParty_Jenna[] = {
    {
    .lvl = 62,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 62,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 62,
    .species = SPECIES_LURANTIS,
    }
};

static const struct TrainerMon sParty_Sophia[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_SWABLU,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 38,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine2[] = {
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
    .lvl = 30,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine3[] = {
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine4[] = {
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
    .lvl = 36,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_Catherine5[] = {
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_BELLOSSOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
    .lvl = 39,
    .species = SPECIES_ROSELIA,
    }
};

static const struct TrainerMon sParty_GruntSeafloorCavern5[] = {
    {
    .lvl = 70,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 70,
    .species = SPECIES_OBSTAGOON,
    }
};

static const struct TrainerMon sParty_GruntUnused[] = {
    {
    .lvl = 31,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntMtPyre4[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 30,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntJaggedPass[] = {
    {
    .lvl = 40,
    .species = SPECIES_MAGMAR,
    },
    {
    .lvl = 40,
    .species = SPECIES_MIGHTYENA,
    },
};

static const struct TrainerMon sParty_Marc[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ANORITH,
    .lvl = 10,
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .species = SPECIES_ARCHEN,
    .lvl = 11,
    }
};

static const struct TrainerMon sParty_Brenden[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 17,
    .species = SPECIES_POLIWHIRL,
    }
};

static const struct TrainerMon sParty_Lilith[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 17,
    .species = SPECIES_HITMONTOP,
    }
};

static const struct TrainerMon sParty_Cristian[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 18,
    .species = SPECIES_SAWK,
    }
};

static const struct TrainerMon sParty_Sylvia[] = {
    {
    .lvl = 66,
    .species = SPECIES_GOTHITELLE,
    }
};

static const struct TrainerMon sParty_Leonardo[] = {
    {
    .lvl = 34,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_Athena[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 32,
    .species = SPECIES_LINOONE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Harrison[] = {
    {
    .lvl = 35,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_GruntMtChimney2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CRADILY,
    .nature = NATURE_RELAXED,
    .heldItem = ITEM_CHOPLE_BERRY,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_ANCIENT_POWER, MOVE_SAPPY_SEED, MOVE_BRINE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_BOMBIRDIER,
    .heldItem = ITEM_EXPERT_BELT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ROCKY_PAYLOAD,
    .moves = {MOVE_KNOCK_OFF, MOVE_DUAL_WINGBEAT, MOVE_SUCKER_PUNCH, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_IRON_THORNS,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_ROCK_SLIDE, MOVE_SUPERCELL_SLAM, MOVE_ICE_PUNCH, MOVE_ACCELEROCK}
    }
};

static const struct TrainerMon sParty_Clarence[] = {
    {
    .lvl = 34,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Terry[] = {
    {
    .lvl = 37,
    .species = SPECIES_GIRAFARIG,
    }
};

static const struct TrainerMon sParty_Nate[] = {
    {
    .lvl = 66,
    .species = SPECIES_GRUMPIG,
    }
};

static const struct TrainerMon sParty_Kathleen[] = {
    {
    .lvl = 66,
    .species = SPECIES_VENOMOTH,
    }
};

static const struct TrainerMon sParty_Clifford[] = {
    {
    .lvl = 66,
    .species = SPECIES_MEOWSTIC_FEMALE,
    }
};

static const struct TrainerMon sParty_Nicholas[] = {
    {
    .lvl = 66,
    .species = SPECIES_REUNICLUS,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter3[] = {
    {
    .lvl = 31,
    .species = SPECIES_ZUBAT,
    },
    {
    .lvl = 31,
    .species = SPECIES_POOCHYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter4[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter5[] = {
    {
    .lvl = 32,
    .species = SPECIES_ZUBAT,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter6[] = {
    {
    .lvl = 32,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntSpaceCenter7[] = {
    {
    .lvl = 32,
    .species = SPECIES_BALTOY,
    }
};

static const struct TrainerMon sParty_Macey[] = {
    {
    .lvl = 66,
    .species = SPECIES_MEOWSTIC_MALE,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .ability = ABILITY_STRIKER,
    .nature = NATURE_ADAMANT,
    .moves = {MOVE_DOUBLE_KICK, MOVE_ROCK_TOMB, MOVE_FLAME_CHARGE, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_BrendanRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_FURY_CUTTER, MOVE_ASSURANCE}
    }
};

static const struct TrainerMon sParty_Paxton[] = {
    {
    .lvl = 33,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 33,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Isabella[] = {
    {
    .lvl = 66,
    .species = SPECIES_BELLOSSOM,
    }
};

static const struct TrainerMon sParty_TabithaMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_ZARUDE,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_DEFIANT,
    .moves = {MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH, MOVE_KNOCK_OFF, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_ARCANINE_HISUIAN,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ROCK_HEAD,
    .moves = {MOVE_FLARE_BLITZ, MOVE_HEAD_SMASH, MOVE_ACCELEROCK, MOVE_WILD_CHARGE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CONKELDURR,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_LOW_SWEEP, MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_EMBOAR,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_RECKLESS,
    .moves = {MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE, MOVE_SUCKER_PUNCH, MOVE_JUMP_KICK}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 43,
    .species = SPECIES_SALAZZLE,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_TIMID,
    .ability = ABILITY_CORROSION,
    .moves = {MOVE_FLAMETHROWER, MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS}
    },
};

static const struct TrainerMon sParty_Jonathan[] = {
    {
    .lvl = 33,
    .species = SPECIES_KECLEON,
    },
    {
    .lvl = 33,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_BrendanRustboroTorchic[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_WATER_PULSE, MOVE_ROCK_TOMB, MOVE_MUD_SHOT, MOVE_ICE_PUNCH}
    }
};

static const struct TrainerMon sParty_MayRustboroMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_ROCK_TOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GROVYLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .moves = {MOVE_BULLET_SEED, MOVE_ROCK_TOMB, MOVE_FURY_CUTTER, MOVE_ASSURANCE}
    }
};

static const struct TrainerMon sParty_MaxieMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_INCINEROAR,
    .nature = NATURE_CAREFUL,
    .heldItem = ITEM_LEFTOVERS,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FAKE_OUT, MOVE_DARKEST_LARIAT, MOVE_FLARE_BLITZ, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_WATER_ABSORB,
    .moves = {MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_WHITE_HERB,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_POISON_JAB}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 80,
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_BEADS_OF_RUIN,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_GROUDON,
    .heldItem = ITEM_RED_ORB,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DROUGHT,
    .moves = {MOVE_PRECIPICE_BLADES, MOVE_FIRE_PUNCH, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_MaxieMtChimney[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_GIGALITH,
    .nature = NATURE_IMPISH,
    .heldItem = ITEM_SMOOTH_ROCK,
    .ability = ABILITY_SAND_STREAM,
    .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_BODY_PRESS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_CACTURNE,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_MILD,
    .ability = ABILITY_SAND_RUSH,
    .moves = {MOVE_ENERGY_BALL, MOVE_SUCKER_PUNCH, MOVE_DARK_PULSE, MOVE_SCORCHING_SANDS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_COALOSSAL,
    .heldItem = ITEM_AIR_BALLOON,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_STEAM_ENGINE,
    .moves = {MOVE_BURN_UP, MOVE_ROCK_SLIDE, MOVE_WILL_O_WISP, MOVE_SCALD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_HAWLUCHA,
    .heldItem = ITEM_WHITE_HERB,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_UNBURDEN,
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ACROBATICS, MOVE_SWORDS_DANCE, MOVE_POISON_JAB}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 31, 30, 31),
    .lvl = 44,
    .species = SPECIES_CHI_YU,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_BEADS_OF_RUIN,
    .moves = {MOVE_FLAMETHROWER, MOVE_DARK_PULSE, MOVE_PSYCHIC, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_CAMERUPTITE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SOLID_ROCK,
    .moves = {MOVE_FLAMETHROWER, MOVE_ANCIENT_POWER, MOVE_EARTH_POWER, MOVE_SLACK_OFF}
    },
};

static const struct TrainerMon sParty_Tiana[] = {
    {
    .lvl = 5,
    .species = SPECIES_JIGGLYPUFF,
    },
    {
    .lvl = 5,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley1[] = {
    {
    .lvl = 8,
    .species = SPECIES_LOTAD,
    .moves = {MOVE_ABSORB, MOVE_BUBBLE, MOVE_NONE, MOVE_NONE} 
    },
    {
    .lvl = 8,
    .species = SPECIES_PANSAGE,
    },
    {
    .lvl = 8,
    .species = SPECIES_ROOKIDEE,
    .moves = {MOVE_WING_ATTACK, MOVE_TACKLE, MOVE_NONE, MOVE_NONE} 
    }
};

static const struct TrainerMon sParty_Janice[] = {
    {
    .lvl = 17,
    .species = SPECIES_DEDENNE,
    }
};

static const struct TrainerMon sParty_Vivi[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DURALUDON,
    .nature = NATURE_BOLD,
    .ability = ABILITY_HEAVY_METAL,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_FLASH_CANNON, MOVE_DRAGON_PULSE, MOVE_BODY_PRESS, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SCIZOR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_SCIZORITE,
    .moves = {MOVE_BULLET_PUNCH, MOVE_SWORDS_DANCE, MOVE_POUNCE, MOVE_DUAL_WINGBEAT}
    },
};

static const struct TrainerMon sParty_Haley2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_SHROOMISH,
    }
};

static const struct TrainerMon sParty_Haley3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 32,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Haley5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_SWELLOW,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    }
};

static const struct TrainerMon sParty_Sally[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARBOK,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_SUCKER_PUNCH, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GRAFAIAI,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_NORMAL_GEM,
    .moves = {MOVE_FURY_SWIPES, MOVE_POISON_JAB, MOVE_KNOCK_OFF, MOVE_PARTING_SHOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXICROAK,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_FAKE_OUT, MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GENGAR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_FOCUS_BLAST, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_IRON_MOTH,
    .nature = NATURE_TIMID,
    .ability = ABILITY_QUARK_DRIVE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_FIERY_DANCE, MOVE_DAZZLING_GLEAM, MOVE_ENERGY_BALL}
    }
};

static const struct TrainerMon sParty_Robin[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WEEZING_GALARIAN,
    .nature = NATURE_BOLD,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_STRANGE_STEAM, MOVE_CLEAR_SMOG, MOVE_HEAT_WAVE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_ARIADOS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_SCOPE_LENS,
    .moves = {MOVE_CROSS_POISON, MOVE_MEGAHORN, MOVE_SUCKER_PUNCH, MOVE_NIGHT_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TENTACRUEL,
    .nature = NATURE_TIMID,
    .ability = ABILITY_CLEAR_BODY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_HYDRO_PUMP, MOVE_SLUDGE_BOMB, MOVE_HEX, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TOXTRICITY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PUNK_ROCK,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_OVERDRIVE, MOVE_BOOMBURST, MOVE_PSYCHIC_NOISE, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_NIHILEGO,
    .nature = NATURE_TIMID,
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT}
    }
};

static const struct TrainerMon sParty_Andrea[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_Crissy[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_GOLDEEN,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Rick[] = {
    {
    .lvl = 5,
    .species = SPECIES_GRUBBIN,
    },
    {
    .lvl = 5,
    .species = SPECIES_JOLTIK,
    }
};

static const struct TrainerMon sParty_Lyle[] = {
    {
    .lvl = 6,
    .species = SPECIES_WURMPLE,
    },
    {
    .lvl = 6,
    .species = SPECIES_BLIPBUG,
    },
    {
    .lvl = 6,
    .species = SPECIES_DEWPIDER,
    },
    {
    .lvl = 6,
    .species = SPECIES_SPINARAK,
    }
};

static const struct TrainerMon sParty_Jose[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 9,
    .species = SPECIES_LEDYBA,
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 10,
    .species = SPECIES_SPEWPA,
    }
};

static const struct TrainerMon sParty_Doug[] = {
    {
    .lvl = 58,
    .species = SPECIES_DHELMISE,
    },
    {
    .lvl = 58,
    .species = SPECIES_CARNIVINE,
    }
};

static const struct TrainerMon sParty_Greg[] = {
    {
    .lvl = 58,
    .species = SPECIES_LEDYBA,
    },
    {
    .lvl = 58,
    .species = SPECIES_LOKIX,
    }
};

static const struct TrainerMon sParty_Kent[] = {
    {
    .lvl = 60,
    .species = SPECIES_PINSIR,
    }
};

static const struct TrainerMon sParty_James1[] = {
    {
    .lvl = 7,
    .species = SPECIES_NINCADA,
    },
    {
    .lvl = 7,
    .species = SPECIES_SIZZLIPEDE,
    }
};

static const struct TrainerMon sParty_James2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 27,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 29,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 31,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_James5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_SURSKIT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_DUSTOX,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_NINJASK,
    }
};

static const struct TrainerMon sParty_Trent1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AVALUGG_HISUIAN,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_NEVERMELTICE,
    .moves = {MOVE_AVALANCHE, MOVE_BODY_PRESS, MOVE_ROCK_SLIDE, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RUNERIGUS,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_SHADOW_SHIELD,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SHADOW_CLAW, MOVE_EARTHQUAKE, MOVE_SHADOW_SNEAK, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FRAXURE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_MOLD_BREAKER,
    .heldItem = ITEM_DRAGON_FANG,
    .moves = {MOVE_DUAL_CHOP, MOVE_SLASH, MOVE_POISON_JAB, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BIBAREL,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SIMPLE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_QUICK_ATTACK, MOVE_AQUA_JET, MOVE_WATERFALL, MOVE_CURSE}
    },
};

static const struct TrainerMon sParty_Lenny[] = {
    {
    .lvl = 38,
    .species = SPECIES_AMOONGUSS,
    },
    {
    .lvl = 38,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_Lucas1[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GOLEM,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_WEAKNESS_POLICY,
    .moves = {MOVE_ROCK_POLISH, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_EISCUE_ICE_FACE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ICE_FACE,
    .heldItem = ITEM_SALAC_BERRY,
    .moves = {MOVE_BELLY_DRUM, MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_NINETALES_ALOLAN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_LIGHT_CLAY,
    .moves = {MOVE_AURORA_VEIL, MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARCTOZOLT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOLT_BEAK, MOVE_ICICLE_CRASH, MOVE_PLUCK, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Alan[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_PROBOPASS,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_STEALTH_ROCK, MOVE_TOXIC, MOVE_VOLT_SWITCH, MOVE_POWER_GEM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FERROTHORN,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_IRON_BARBS,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_POWER_WHIP, MOVE_GYRO_BALL, MOVE_LEECH_SEED, MOVE_THUNDER_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_MAGNEZONE,
    .nature = NATURE_MODEST,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_VOLT_SWITCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_STEELIX,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_ROCK_HEAD,
    .heldItem = ITEM_STEELIXITE,
    .moves = {MOVE_EARTHQUAKE, MOVE_STONE_EDGE, MOVE_HEAVY_SLAM, MOVE_CURSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_HEATRAN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_POWER_GEM}
    }
};

static const struct TrainerMon sParty_Clark[] = {
    {
    .lvl = 10,
    .species = SPECIES_GEODUDE,
    }
};

static const struct TrainerMon sParty_Eric[] = {
    {
    .lvl = 39,
    .species = SPECIES_WORMADAM_SANDY_CLOAK,
    },
    {
    .lvl = 39,
    .species = SPECIES_GOLEM_ALOLAN,
    }
};

static const struct TrainerMon sParty_Lucas2[] = {
    {
    .lvl = 9,
    .species = SPECIES_WAILMER,
    .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
    }
};

static const struct TrainerMon sParty_Mike1[] = {
    {
    .lvl = 28,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 28,
    .species = SPECIES_KLAWF,
    },
    {
    .lvl = 28,
    .species = SPECIES_ESCAVALIER,
    }
};

static const struct TrainerMon sParty_Mike2[] = {
    {
    .lvl = 28,
    .species = SPECIES_HITMONTOP,
    },
    {
    .lvl = 28,
    .species = SPECIES_KLAWF,
    },
    {
    .lvl = 28,
    .species = SPECIES_ESCAVALIER,
    }
};

static const struct TrainerMon sParty_Trent2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 24,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 27,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Trent5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GRAVELER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_DezAndLuke[] = {
    {
    .lvl = 65,
    .species = SPECIES_LIEPARD,
    },
    {
    .lvl = 65,
    .species = SPECIES_UMBREON,
    }
};

static const struct TrainerMon sParty_LeaAndJed[] = {
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    },
    {
    .lvl = 45,
    .species = SPECIES_LUVDISC,
    }
};

static const struct TrainerMon sParty_KiraAndDan1[] = {
    {
    .lvl = 25,
    .species = SPECIES_VOLBEAT,
    },
    {
    .lvl = 25,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 36,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_KiraAndDan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_VOLBEAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 39,
    .species = SPECIES_ILLUMISE,
    }
};

static const struct TrainerMon sParty_Johanna[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 29,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_INTIMIDATE,
    .moves = {MOVE_FIRE_FANG, MOVE_EXTREME_SPEED, MOVE_THUNDER_FANG, MOVE_CRUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 29,
    .species = SPECIES_SCYTHER,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_SWORDS_DANCE, MOVE_AERIAL_ACE, MOVE_BUG_BITE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 29,
    .species = SPECIES_LUMINEON,
    .heldItem = ITEM_WISE_GLASSES,
    .nature = NATURE_TIMID,
    .ability = ABILITY_STORM_DRAIN,
    .moves = {MOVE_SCALD, MOVE_AURORA_BEAM, MOVE_AIR_CUTTER, MOVE_OMINOUS_WIND}
    },
};

static const struct TrainerMon sParty_Gerald[] = {
    {
    .lvl = 40,
    .species = SPECIES_KECLEON,
    .moves = {MOVE_FLAMETHROWER, MOVE_FURY_SWIPES, MOVE_FEINT_ATTACK, MOVE_BIND}
    }
};

static const struct TrainerMon sParty_Vivian[] = {
    {
    .lvl = 27,
    .species = SPECIES_TOGEDEMARU,
    },
    {
    .lvl = 27,
    .species = SPECIES_EMOLGA,
    }
};

static const struct TrainerMon sParty_Danielle[] = {
    {
    .lvl = 41,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Hideo[] = {
    {
    .lvl = 60,
    .species = SPECIES_BARRASKEWDA
    },
    {
    .lvl = 60,
    .species = SPECIES_GREEDENT
    }
};

static const struct TrainerMon sParty_Keigo[] = {
    {
    .lvl = 64,
    .species = SPECIES_MILTANK,
    },
    {
    .lvl = 64,
    .species = SPECIES_TOXICROAK,
    }
};

static const struct TrainerMon sParty_Riley[] = {
    {
    .lvl = 63,
    .species = SPECIES_TOXTRICITY,
    },
    {
    .lvl = 63,
    .species = SPECIES_LOPUNNY,
    }
};

static const struct TrainerMon sParty_Flint[] = {
    {
    .lvl = 60,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 60,
    .species = SPECIES_DELIBIRD,
    }
};

static const struct TrainerMon sParty_Ashley[] = {
    {
    .lvl = 60,
    .species = SPECIES_PIDGEOT,
    },
    {
    .lvl = 60,
    .species = SPECIES_YANMA,
    }
};

static const struct TrainerMon sParty_WallyMauville[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_DREDNAW,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRONG_JAW,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_RAZOR_SHELL, MOVE_ROCK_TOMB, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 30,
    .species = SPECIES_KRICKETUNE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BUG_BITE, MOVE_BULLDOZE, MOVE_AERIAL_ACE, MOVE_ROCK_SMASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 31,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GARDEVOIR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_TRACE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYCHIC, MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL}
    },
    
};

static const struct TrainerMon sParty_WallyVR2[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 46,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 48,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR3[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 49,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 47,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 51,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR4[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 52,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 50,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 54,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_WallyVR5[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ALTARIA,
    .moves = {MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_DRAGON_BREATH, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 55,
    .species = SPECIES_DELCATTY,
    .moves = {MOVE_SING, MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 56,
    .species = SPECIES_ROSELIA,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .moves = {MOVE_SUPERSONIC, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_SCREECH}
    },
    {
    .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
    .lvl = 57,
    .species = SPECIES_GARDEVOIR,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_CALM_MIND, MOVE_PSYCHIC, MOVE_FUTURE_SIGHT}
    }
};

static const struct TrainerMon sParty_BrendanLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_BrendanLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_MayLilycoveMudkip[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_GROVYLE,
    }
};

static const struct TrainerMon sParty_MayLilycoveTreecko[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_COMBUSKEN,
    }
};

static const struct TrainerMon sParty_MayLilycoveTorchic[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 31,
    .species = SPECIES_TROPIUS,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 32,
    .species = SPECIES_SLUGMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 34,
    .species = SPECIES_MARSHTOMP,
    }
};

static const struct TrainerMon sParty_Jonah[] = {
    {
    .lvl = 30,
    .species = SPECIES_WAILMER,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 32,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Henry[] = {
    {
    .lvl = 31,
    .species = SPECIES_CARVANHA,
    },
    {
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Roger[] = {
    {
    .lvl = 15,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 25,
    .species = SPECIES_MAGIKARP,
    },
    {
    .lvl = 35,
    .species = SPECIES_GYARADOS,
    }
};

static const struct TrainerMon sParty_Alexa[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_GLOOM,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Ruben[] = {
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 34,
    .species = SPECIES_NOSEPASS,
    }
};

static const struct TrainerMon sParty_Koji1[] = {
    {
    .lvl = 34,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Wayne[] = {
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 31,
    .species = SPECIES_TENTACOOL,
    },
    {
    .lvl = 36,
    .species = SPECIES_WAILMER,
    }
};

static const struct TrainerMon sParty_Aidan[] = {
    {
    .lvl = 32,
    .species = SPECIES_SWELLOW,
    },
    {
    .lvl = 32,
    .species = SPECIES_SKARMORY,
    }
};

static const struct TrainerMon sParty_Reed[] = {
    {
    .lvl = 33,
    .species = SPECIES_SPHEAL,
    },
    {
    .lvl = 33,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_Tisha[] = {
    {
    .lvl = 34,
    .species = SPECIES_CHINCHOU,
    }
};

static const struct TrainerMon sParty_ToriAndTia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_FLOATZEL,
    .nature = NATURE_HASTY,
    .ability = ABILITY_TECHNICIAN,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_WATER_PULSE, MOVE_ICE_BEAM, MOVE_FAKE_OUT, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_RAICHU,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_LIGHTNING_ROD,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_FAKE_OUT, MOVE_ZIPPY_ZAP, MOVE_BRICK_BREAK, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_RIBOMBEE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SHIELD_DUST,
    .heldItem = ITEM_PIXIE_PLATE,
    .moves = {MOVE_MOONBLAST, MOVE_DAZZLING_GLEAM, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 204,
    .species = SPECIES_GUMSHOOS,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_ADAPTABILITY,
    .heldItem = ITEM_SILK_SCARF,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_ICE_FANG}
    },
};

static const struct TrainerMon sParty_KimAndIris[] = {
    {
    .lvl = 59,
    .species = SPECIES_ALTARIA,
    },
    {
    .lvl = 59,
    .species = SPECIES_TURTONATOR,
    }
};

static const struct TrainerMon sParty_TyraAndIvy[] = {
    {
    .lvl = 38,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_EVIOLITE
    },
    {
    .lvl = 38,
    .species = SPECIES_PILOSWINE,
    .heldItem = ITEM_EVIOLITE
    },
};

static const struct TrainerMon sParty_MelAndPaul[] = {
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    },
    {
    .lvl = 56,
    .species = SPECIES_BEAUTIFLY,
    },
    {
    .lvl = 56,
    .species = SPECIES_BUTTERFREE,
    },
    {
    .lvl = 56,
    .species = SPECIES_DUSTOX,
    }
};

static const struct TrainerMon sParty_JohnAndJay1[] = {
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
    .lvl = 39,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay2[] = {
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay3[] = {
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
    .lvl = 46,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay4[] = {
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
    .lvl = 49,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_JohnAndJay5[] = {
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_MEDICHAM,
    .moves = {MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_PSYCH_UP, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROCK_TOMB, MOVE_REST, MOVE_BELLY_DRUM}
    }
};

static const struct TrainerMon sParty_ReliAndIan[] = {
    {
    .lvl = 35,
    .species = SPECIES_AZUMARILL,
    },
    {
    .lvl = 33,
    .species = SPECIES_WINGULL,
    }
};

static const struct TrainerMon sParty_LilaAndRoy1[] = {
    {
    .lvl = 66,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 66,
    .species = SPECIES_LUDICOLO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy2[] = {
    {
    .lvl = 42,
    .species = SPECIES_CHINCHOU,
    },
    {
    .lvl = 40,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy3[] = {
    {
    .lvl = 45,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 43,
    .species = SPECIES_CARVANHA,
    }
};

static const struct TrainerMon sParty_LilaAndRoy4[] = {
    {
    .lvl = 48,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 46,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LilaAndRoy5[] = {
    {
    .lvl = 51,
    .species = SPECIES_LANTURN,
    },
    {
    .lvl = 49,
    .species = SPECIES_SHARPEDO,
    }
};

static const struct TrainerMon sParty_LisaAndRay[] = {
    {
    .lvl = 57,
    .species = SPECIES_HUNTAIL,
    },
    {
    .lvl = 57,
    .species = SPECIES_GOREBYSS,
    }
};

static const struct TrainerMon sParty_Chris[] = {
    {
    .lvl = 58,
    .species = SPECIES_MILOTIC,
    },
    {
    .lvl = 58,
    .species = SPECIES_ALOMOMOLA,
    }
};

static const struct TrainerMon sParty_Dawson[] = {
    {
    .lvl = 16,
    .species = SPECIES_NUZLEAF,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 16,
    .species = SPECIES_KADABRA,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Sarah[] = {
    {
    .lvl = 16,
    .species = SPECIES_LOMBRE,
    .heldItem = ITEM_NONE
    },
    {
    .lvl = 16,
    .species = SPECIES_LINOONE_GALARIAN,
    .heldItem = ITEM_NONE
    }
};

static const struct TrainerMon sParty_Darian[] = {
    {
    .lvl = 9,
    .species = SPECIES_MAGIKARP,
    }
};

static const struct TrainerMon sParty_Hailey[] = {
    {
    .lvl = 22,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Chandler[] = {
    {
    .lvl = 20,
    .species = SPECIES_BASCULIN,
    },
    {
    .lvl = 20,
    .species = SPECIES_WIGLETT,
    }
};

static const struct TrainerMon sParty_Kaleb[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_MINUN,
    .heldItem = ITEM_MAGNET,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GALVANIZE,
    .moves = {MOVE_BODY_SLAM, MOVE_FAKE_OUT, MOVE_GRASS_KNOT, MOVE_QUICK_ATTACK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_RHYDON,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_LIGHTNING_ROD,
    .moves = {MOVE_ROCK_TOMB, MOVE_BULLDOZE, MOVE_BRICK_BREAK, MOVE_CUT}
    },
};

static const struct TrainerMon sParty_Joseph[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SLOWBRO_GALARIAN,
    .heldItem = ITEM_WISE_GLASSES,
    .nature = NATURE_MODEST,
    .ability = ABILITY_QUICK_DRAW,
    .moves = {MOVE_PSYCHIC, MOVE_FLASH, MOVE_GRASS_KNOT, MOVE_SLUDGE_BOMB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_CRABOMINABLE,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_ICE_PUNCH, MOVE_MACH_PUNCH, MOVE_ICE_SHARD, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SHIFTRY,
    .heldItem = ITEM_FOCUS_SASH,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_WIND_RIDER,
    .moves = {MOVE_FAKE_OUT, MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_VIKAVOLT,
    .heldItem = ITEM_OCCA_BERRY,
    .nature = NATURE_MODEST,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_FLASH}
    },
};

static const struct TrainerMon sParty_Alyssa[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_EXEGGUTOR_ALOLAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_HARVEST,
    .heldItem = ITEM_YACHE_BERRY,
    .moves = {MOVE_DRAGON_HAMMER, MOVE_SEED_BOMB, MOVE_EGG_BOMB, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_HEATMOR,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAME_BURST, MOVE_GIGA_DRAIN, MOVE_SCORCHING_SANDS, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_BELLIBOLT,
    .nature = NATURE_BOLD,
    .ability = ABILITY_ELECTROMORPHOSIS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DISCHARGE, MOVE_MUD_SHOT, MOVE_MUDDY_WATER, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_MACHOKE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_GUTS,
    .heldItem = ITEM_EVIOLITE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
};

static const struct TrainerMon sParty_Marcos[] = {
    {
    .lvl = 24,
    .species = SPECIES_HAUNTER,
    },
    {
    .lvl = 24,
    .species = SPECIES_KLEFKI,
    }
};

static const struct TrainerMon sParty_Rhett[] = {
    {
    .lvl = 24,
    .species = SPECIES_SHIINOTIC,
    },
    {
    .lvl = 24,
    .species = SPECIES_MINIOR,
    }
};

static const struct TrainerMon sParty_Tyron[] = {
    {
    .lvl = 30,
    .species = SPECIES_CARBINK,
    },
    {
    .lvl = 30,
    .species = SPECIES_CARNIVINE,
    }
};

static const struct TrainerMon sParty_Celina[] = {
    {
    .lvl = 30,
    .species = SPECIES_MAUSHOLD,
    },
    {
    .lvl = 30,
    .species = SPECIES_BRAMBLEGHAST,
    }
};

static const struct TrainerMon sParty_Bianca[] = {
    {
    .lvl = 31,
    .species = SPECIES_AMBIPOM,
    },
    {
    .lvl = 32,
    .species = SPECIES_VESPIQUEN,
    },
};

static const struct TrainerMon sParty_Hayden[] = {
    {
    .lvl = 31,
    .species = SPECIES_YANMEGA,
    },
    {
    .lvl = 32,
    .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_Sophie[] = {
    {
    .lvl = 37,
    .species = SPECIES_VENOMOTH,
    },
    {
    .lvl = 37,
    .species = SPECIES_DUSCLOPS,
    }
};

static const struct TrainerMon sParty_Coby[] = {
    {
    .lvl = 37,
    .species = SPECIES_TROPIUS,
    },
    {
    .lvl = 37,
    .species = SPECIES_URSARING,
    }
};

static const struct TrainerMon sParty_Kai[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_BEARTIC,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_ICICLE_CRASH, MOVE_BRICK_BREAK, MOVE_AQUA_JET, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DEWGONG,
    .nature = NATURE_MODEST,
    .ability = ABILITY_ICE_BODY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_REST, MOVE_SLEEP_TALK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SLOWKING,
    .nature = NATURE_MODEST,
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SCALD, MOVE_PSYCHIC, MOVE_SLACK_OFF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_AURORUS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_REFRIGERATE,
    .heldItem = ITEM_NEVER_MELT_ICE,
    .moves = {MOVE_HYPER_VOICE, MOVE_POWER_GEM, MOVE_EARTH_POWER, MOVE_PSYCHIC}
    }
};

static const struct TrainerMon sParty_Charlotte[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_FROSLASS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_ICE_BODY,
    .heldItem = ITEM_WIDE_LENS,
    .moves = {MOVE_TRIPLE_AXEL, MOVE_POLTERGEIST, MOVE_ICE_SHARD, MOVE_DESTINY_BOND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TATSUGIRI,
    .nature = NATURE_MODEST,
    .ability = ABILITY_STORM_DRAIN,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_ICY_WIND, MOVE_NASTY_PLOT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LUNATONE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_MOONBLAST, MOVE_BLIZZARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ABOMASNOW,
    .nature = NATURE_NAIVE,
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_ABOMASITE,
    .moves = {MOVE_BLIZZARD, MOVE_GIGA_DRAIN, MOVE_WOOD_HAMMER, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Deandre[] = {
    {
    .lvl = 28,
    .species = SPECIES_SANDSLASH_ALOLAN,
    },
    {
    .lvl = 28,
    .species = SPECIES_FLAREON,
    },
    {
    .lvl = 28,
    .species = SPECIES_MUSHARNA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout1[] = {
    {
    .lvl = 70,
    .species = SPECIES_CROBAT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout2[] = {
    {
    .lvl = 70,
    .species = SPECIES_SCOLIPEDE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout3[] = {
    {
    .lvl = 70,
    .species = SPECIES_PYROAR,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout4[] = {
    {
    .lvl = 70,
    .species = SPECIES_CLAYDOL,
    },
};

static const struct TrainerMon sParty_GruntMagmaHideout5[] = {
    {
    .lvl = 70,
    .species = SPECIES_TORKOAL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout6[] = {
    {
    .lvl = 70,
    .species = SPECIES_MIGHTYENA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout7[] = {
    {
    .lvl = 70,
    .species = SPECIES_SANDACONDA,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout8[] = {
    {
    .lvl = 70,
    .species = SPECIES_MUDSDALE,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout9[] = {
    {
    .lvl = 70,
    .species = SPECIES_SUDOWOODO,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout10[] = {
    {
    .lvl = 70,
    .species = SPECIES_COALOSSAL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout11[] = {
    {
    .lvl = 70,
    .species = SPECIES_CLAYDOL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout12[] = {
    {
    .lvl = 70,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout14[] = {
    {
    .lvl = 70,
    .species = SPECIES_HEATMOR,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout15[] = {
    {
    .lvl = 70,
    .species = SPECIES_GRANBULL,
    }
};

static const struct TrainerMon sParty_GruntMagmaHideout16[] = {
    {
    .lvl = 70,
    .species = SPECIES_WEAVILE,
    }
};


static const struct TrainerMon sParty_GruntMagmaHideout13[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_TALONFLAME,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_FOCUS_SASH,
    .ability = ABILITY_GALE_WINGS,
    .moves = {MOVE_TAILWIND, MOVE_BRAVE_BIRD, MOVE_FLARE_BLITZ, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_NIDOQUEEN,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_KOMMO_O,
    .heldItem = ITEM_THROAT_SPRAY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_OVERCOAT,
    .moves = {MOVE_CLANGOROUS_SOUL, MOVE_CLANGING_SCALES, MOVE_AURA_SPHERE, MOVE_FLASH_CANNON}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_CENTISKORCH,
    .heldItem = ITEM_CENTISKITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FIRE_LASH, MOVE_LEECH_LIFE, MOVE_KNOCK_OFF, MOVE_POWER_WHIP}
    }
};

static const struct TrainerMon sParty_TabithaMagmaHideout[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_PAWMOT,
    .nature = NATURE_JOLLY,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .ability = ABILITY_IRON_FIST,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_NIDOKING,
    .heldItem = ITEM_LIFE_ORB,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_SLUDGE_WAVE, MOVE_EARTH_POWER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HYDREIGON,
    .heldItem = ITEM_CHOICE_SPECS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .moves = {MOVE_DARK_PULSE, MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 80,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_HOUNDOOMINITE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .moves = {MOVE_FLAMETHROWER, MOVE_FIERY_WRATH, MOVE_SLUDGE_BOMB, MOVE_SCORCHING_SANDS}
    },
};

static const struct TrainerMon sParty_Darcy[] = {
    {
    .lvl = 33,
    .species = SPECIES_PELIPPER,
    },
    {
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_MaxieMossdeep[] = {
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 42,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 43,
    .species = SPECIES_CROBAT,
    },
    {
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
    .lvl = 44,
    .species = SPECIES_CAMERUPT,
    }
};

static const struct TrainerMon sParty_Pete[] = {
    {
    .lvl = 50,
    .species = SPECIES_FERALIGATR,
    }
};

static const struct TrainerMon sParty_Isabelle[] = {
    {
    .lvl = 50,
    .species = SPECIES_AZUMARILL,
    }
};

static const struct TrainerMon sParty_Andres1[] = {
    {
    .lvl = 55,
    .species = SPECIES_GIGALITH,
    },
    {
    .lvl = 55,
    .species = SPECIES_EXCADRILL,
    }
};

static const struct TrainerMon sParty_Josue[] = {
    {
    .lvl = 55,
    .species = SPECIES_BRAVIARY,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWANNA,
    }
};

static const struct TrainerMon sParty_Camron[] = {
    {
    .lvl = 56,
    .species = SPECIES_FLOATZEL,
    },
    {
    .lvl = 55,
    .species = SPECIES_PYUKUMUKU,
    }
};

static const struct TrainerMon sParty_Cory1[] = {
    {
    .lvl = 54,
    .species = SPECIES_OCTILLERY,
    },
    {
    .lvl = 54,
    .species = SPECIES_MALAMAR,
    },
};

static const struct TrainerMon sParty_Carolina[] = {
    {
    .lvl = 54,
    .species = SPECIES_MANECTRIC,
    },
    {
    .lvl = 54,
    .species = SPECIES_CORVIKNIGHT,
    }
};

static const struct TrainerMon sParty_Elijah[] = {
    {
    .lvl = 55,
    .species = SPECIES_STARAPTOR,
    },
    {
    .lvl = 55,
    .species = SPECIES_SQUAWKABILLY,
    }
};

static const struct TrainerMon sParty_Celia[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GASTRODON,
    .nature = NATURE_MODEST,
    .ability = ABILITY_SAND_FORCE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SCALD, MOVE_EARTH_POWER, MOVE_TOXIC, MOVE_RECOVER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_WYRDEER,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_SAP_SIPPER,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .moves = {MOVE_PSYCHIC, MOVE_LUNGE, MOVE_EARTHQUAKE, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_DRACOZOLT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SAND_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_BOLT_BEAK, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_BODY_SLAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MAWILE,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INTIMIDATE,
    .heldItem = ITEM_MAWILITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_PLAY_ROUGH, MOVE_SWORDS_DANCE}
    }
};



static const struct TrainerMon sParty_Branden[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARCHEOPS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DEFEATIST,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_KNOCK_OFF, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SANDY_SHOCKS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_WATER_COMPACTION,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_DISCHARGE, MOVE_EARTH_POWER, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VOLCARONA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLAME_BODY,
    .heldItem = ITEM_SAFETY_GOGGLES,
    .moves = {MOVE_QUIVER_DANCE, MOVE_FIERY_DANCE, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    }
};

static const struct TrainerMon sParty_Bryant[] = {
    {
    .lvl = 34,
    .species = SPECIES_PROBOPASS,
    },
    {
    .lvl = 35,
    .species = SPECIES_MEOWSTIC,
    },
    {
    .lvl = 36,
    .species = SPECIES_PACHIRISU,
    },
};

static const struct TrainerMon sParty_Shayla[] = {
    {
    .lvl = 34,
    .species = SPECIES_BRELOOM,
    },
    {
    .lvl = 35,
    .species = SPECIES_AUDINO,
    },
    {
    .lvl = 35,
    .species = SPECIES_PYROAR,
    }
};

static const struct TrainerMon sParty_Kyra[] = {
    {
    .lvl = 55,
    .species = SPECIES_DODRIO,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Jaiden[] = {
    {
    .lvl = 55,
    .species = SPECIES_NINJASK,
    },
    {
    .lvl = 55,
    .species = SPECIES_SWALOT,
    }
};

static const struct TrainerMon sParty_Alix[] = {
    {
    .lvl = 54,
    .species = SPECIES_POLTEAGEIST,
    },
};

static const struct TrainerMon sParty_Helene[] = {
    {
    .lvl = 54,
    .species = SPECIES_ORBEETLE,
    }
};

static const struct TrainerMon sParty_Marlene[] = {
    {
    .lvl = 40,
    .species = SPECIES_SHELGON,
    },
    {
    .lvl = 40,
    .species = SPECIES_BOLTUND,
    }
};

static const struct TrainerMon sParty_Devan[] = {
    {
    .lvl = 9,
    .species = SPECIES_ROLYCOLY,
    },
    {
    .lvl = 10,
    .species = SPECIES_ROGGENROLA,
    }
};

static const struct TrainerMon sParty_Johnson[] = {
    {
    .lvl = 9,
    .species = SPECIES_SKIDDO,
    },
    {
    .lvl = 10,
    .species = SPECIES_PIDOVE,
    }
};

static const struct TrainerMon sParty_Melina[] = {
    {
    .lvl = 17,
    .species = SPECIES_DODUO,
    }
};

static const struct TrainerMon sParty_Brandi[] = {
    {
    .lvl = 26,
    .species = SPECIES_GRAVELER_ALOLAN,
    },
    {
    .lvl = 26,
    .species = SPECIES_ARIADOS,
    }
};

static const struct TrainerMon sParty_Aisha[] = {
    {
    .lvl = 26,
    .species = SPECIES_LIEPARD,
    },
    {
    .lvl = 26,
    .species = SPECIES_ALOMOMOLA,
    }
};

static const struct TrainerMon sParty_Makayla[] = {
    {
    .lvl = 33,
    .species = SPECIES_ROSELIA,
    },
    {
    .lvl = 33,
    .species = SPECIES_MEDICHAM,
    }
};

static const struct TrainerMon sParty_Fabian[] = {
    {
    .lvl = 60,
    .species = SPECIES_ALCREMIE,
    }
};

static const struct TrainerMon sParty_Dayton[] = {
    {
    .lvl = 58,
    .species = SPECIES_MAGCARGO,
    },
    {
    .lvl = 58,
    .species = SPECIES_MABOSSTIFF,
    }
};

static const struct TrainerMon sParty_Rachel[] = {
    {
    .lvl = 60,
    .species = SPECIES_SEAKING,
    }
};

static const struct TrainerMon sParty_Leonel[] = {
    {
    .lvl = 64,
    .species = SPECIES_MANECTRIC,
    }
};

static const struct TrainerMon sParty_Callie[] = {
    {
    .lvl = 63,
    .species = SPECIES_HAWLUCHA,
    },
    {
    .lvl = 63,
    .species = SPECIES_MARACTUS,
    }
};

static const struct TrainerMon sParty_Cale[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLDUCK,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_MYSTIC_WATER,
    .moves = {MOVE_SCALD, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_AQUA_JET}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CLAWITZER,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MEGA_LAUNCHER,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_DARK_PULSE, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_SHIINOTIC,
    .nature = NATURE_CALM,
    .ability = ABILITY_RAIN_DISH,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_GIGA_DRAIN, MOVE_SPORE, MOVE_MOONBLAST, MOVE_FLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_QUAQUAVAL,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_MOXIE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_AQUA_STEP, MOVE_CLOSE_COMBAT, MOVE_ICE_SPINNER, MOVE_BRAVE_BIRD}
    }
};

static const struct TrainerMon sParty_Myles[] = {
    {
    .lvl = 65,
    .species = SPECIES_GUMSHOOS,
    },
    {
    .lvl = 65,
    .species = SPECIES_SEISMITOAD,
    }
};

static const struct TrainerMon sParty_Pat[] = {
    {
    .lvl = 65,
    .species = SPECIES_ACCELGOR,
    }
};

static const struct TrainerMon sParty_Cristin1[] = {
    {
    .lvl = 64,
    .species = SPECIES_EXPLOUD,
    },
    {
    .lvl = 64,
    .species = SPECIES_CINCCINO,
    }
};

static const struct TrainerMon sParty_MayRustboroTreecko[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_COMBUSKEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRIKER,
    .moves = {MOVE_DOUBLE_KICK, MOVE_ROCK_TOMB, MOVE_FLAME_CHARGE, MOVE_THUNDER_PUNCH}
    }
};

static const struct TrainerMon sParty_MayRustboroTorchic[] = {
  {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_GOLBAT,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SNIPER,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_WING_ATTACK, MOVE_CROSS_POISON, MOVE_BITE, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_HATTREM,
    .nature = NATURE_MODEST,
    .ability = ABILITY_MAGIC_BOUNCE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_DRAINING_KISS, MOVE_PSYBEAM, MOVE_THUNDER_WAVE, MOVE_LIFE_DEW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_KUBFU,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_INNER_FOCUS,
    .heldItem = ITEM_MUSCLE_BAND,
    .moves = {MOVE_BRICK_BREAK, MOVE_AERIAL_ACE, MOVE_HEADBUTT, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MARSHTOMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_QUIET,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_WATER_PULSE, MOVE_ROCK_TOMB, MOVE_MUD_SHOT, MOVE_ICE_PUNCH}
    }
};

static const struct TrainerMon sParty_Roxanne2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 32,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_KABUTO,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_OMANYTE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_MAGNITUDE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ONIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Roxanne5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_AERODACTYL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HYPER_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_GOLEM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_ROLLOUT, MOVE_EARTHQUAKE, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_OMASTAR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KABUTOPS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SWORDS_DANCE, MOVE_ICE_BEAM, MOVE_SURF, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_STEELIX,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_IRON_TAIL, MOVE_EXPLOSION, MOVE_ROAR, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_NOSEPASS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_DOUBLE_TEAM, MOVE_EXPLOSION, MOVE_PROTECT, MOVE_ROCK_SLIDE}
    }
};

static const struct TrainerMon sParty_Brawly2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 33,
    .species = SPECIES_MEDITITE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 35,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 37,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PSYCHIC, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_KARATE_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Brawly5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONLEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_MEGA_KICK, MOVE_FOCUS_PUNCH, MOVE_EARTHQUAKE, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HITMONCHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SKY_UPPERCUT, MOVE_PROTECT, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MACHAMP,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_FOCUS_PUNCH, MOVE_BULK_UP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MEDICHAM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FOCUS_PUNCH, MOVE_LIGHT_SCREEN, MOVE_REFLECT, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_HITMONTOP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PURSUIT, MOVE_COUNTER, MOVE_PROTECT, MOVE_TRIPLE_KICK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_HARIYAMA,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_FAKE_OUT, MOVE_FOCUS_PUNCH, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Wattson2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_MAREEP,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 39,
    .species = SPECIES_PIKACHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_SHOCK_WAVE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_FLAAFFY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 44,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Wattson5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ELECTABUZZ,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SWIFT, MOVE_FOCUS_PUNCH, MOVE_THUNDER_PUNCH, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAICHU,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_SLAM, MOVE_RAIN_DANCE, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_AMPHAROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_PROTECT, MOVE_THUNDER_WAVE, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_ELECTRODE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROLLOUT, MOVE_THUNDER, MOVE_EXPLOSION, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGNETON,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_THUNDER, MOVE_RAIN_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_MANECTRIC,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BITE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_PROTECT}
    }
};

static const struct TrainerMon sParty_Flannery2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 36,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PONYTA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_HOUNDOUR,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_GROWLITHE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Flannery5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_ARCANINE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HELPING_HAND, MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_ROAR}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_MAGCARGO,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_ATTRACT, MOVE_LIGHT_SCREEN, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_HOUNDOOM,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_ROAR, MOVE_SOLAR_BEAM, MOVE_TAUNT, MOVE_SUNNY_DAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_RAPIDASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FLAMETHROWER, MOVE_ATTRACT, MOVE_SOLAR_BEAM, MOVE_BOUNCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CAMERUPT,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EARTHQUAKE, MOVE_ATTRACT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_TORKOAL,
    .heldItem = ITEM_WHITE_HERB,
    .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_EXPLOSION, MOVE_ATTRACT}
    }
};

static const struct TrainerMon sParty_Norman2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 42,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 47,
    .species = SPECIES_CHANSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 52,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_LIGHT_SCREEN, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Norman5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_BLISSEY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_PROTECT, MOVE_SING, MOVE_SKILL_SWAP, MOVE_FOCUS_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_KANGASKHAN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_FAKE_OUT, MOVE_DIZZY_PUNCH, MOVE_ENDURE, MOVE_REVERSAL}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 57,
    .species = SPECIES_TAUROS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TAKE_DOWN, MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SPINDA,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TEETER_DANCE, MOVE_SKILL_SWAP, MOVE_FACADE, MOVE_HYPNOSIS}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SLAKING,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Winona2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 40,
    .species = SPECIES_DRATINI,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 38,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_HOOTHOOT,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 43,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 45,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_DRAGONAIR,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_AERIAL_ACE, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_Winona5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_NOCTOWL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_REFLECT, MOVE_DREAM_EATER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_TROPIUS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SUNNY_DAY, MOVE_AERIAL_ACE, MOVE_SOLAR_BEAM, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_PELIPPER,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_SURF, MOVE_SUPERSONIC, MOVE_PROTECT, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_DRAGONITE,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_HYPER_BEAM, MOVE_THUNDERBOLT, MOVE_EARTHQUAKE, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WHIRLWIND, MOVE_SPIKES, MOVE_STEEL_WING, MOVE_AERIAL_ACE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_ALTARIA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_SKY_ATTACK, MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE}
    }
};

static const struct TrainerMon sParty_TateAndLiza2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_ANCIENT_POWER, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 49,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_DROWZEE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 54,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 55,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_SLOWPOKE,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 59,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 60,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_TateAndLiza5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_HYPNO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_HEADBUTT, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_SLOWKING,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_YAWN, MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_PROTECT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 64,
    .species = SPECIES_XATU,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_PSYCHIC, MOVE_REST, MOVE_CONFUSE_RAY, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_LUNATONE,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_REST, MOVE_CALM_MIND}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 65,
    .species = SPECIES_SOLROCK,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_FLAMETHROWER}
    }
};

static const struct TrainerMon sParty_Juan2[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_POLIWAG,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 46,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 48,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_CRABHAMMER, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan3[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 50,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 51,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 53,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan4[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 56,
    .species = SPECIES_POLIWHIRL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_PROTECT, MOVE_HYDRO_PUMP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 58,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Juan5[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_LAPRAS,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYDRO_PUMP, MOVE_PERISH_SONG, MOVE_ICE_BEAM, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WHISCASH,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_RAIN_DANCE, MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_FISSURE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 61,
    .species = SPECIES_POLITOED,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_HYPNOSIS, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_PERISH_SONG}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_WALREIN,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_SHEER_COLD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 63,
    .species = SPECIES_CRAWDAUNT,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_REST, MOVE_GUILLOTINE, MOVE_TAUNT, MOVE_DOUBLE_TEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 66,
    .species = SPECIES_KINGDRA,
    .heldItem = ITEM_CHESTO_BERRY,
    .moves = {MOVE_WATER_PULSE, MOVE_DOUBLE_TEAM, MOVE_ICE_BEAM, MOVE_REST}
    }
};

static const struct TrainerMon sParty_Angelo[] = {
    {
    .lvl = 28,
    .species = SPECIES_ILLUMISE,
    },
    {
    .lvl = 28,
    .species = SPECIES_VOLBEAT,
    }
};

static const struct TrainerMon sParty_Darius[] = {
    {
    .lvl = 62,
    .species = SPECIES_SIGILYPH,
    }
};

static const struct TrainerMon sParty_Steven[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 77,
    .species = SPECIES_SKARMORY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_TOXIC, MOVE_AERIAL_ACE, MOVE_SPIKES, MOVE_STEEL_WING}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 75,
    .species = SPECIES_CLAYDOL,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_AGGRON,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_THUNDER, MOVE_EARTHQUAKE, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_CRADILY,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_CONFUSE_RAY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 76,
    .species = SPECIES_ARMALDO,
    .heldItem = ITEM_NONE,
    .moves = {MOVE_WATER_PULSE, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_SLASH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 78,
    .species = SPECIES_METAGROSS,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_METEOR_MASH, MOVE_SHADOW_BALL}
    }
};

static const struct TrainerMon sParty_Anabel[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Tucker[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Spenser[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Greta[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Noland[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Lucy[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Brandon[] = {
    {
    .lvl = 5,
    .species = SPECIES_BELDUM,
    }
};

static const struct TrainerMon sParty_Andres2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SANDSHREW,
    }
};

static const struct TrainerMon sParty_Andres5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_NOSEPASS,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SANDSLASH,
    }
};

static const struct TrainerMon sParty_Cory2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 30,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 32,
    .species = SPECIES_TENTACOOL,
    }
};

static const struct TrainerMon sParty_Cory4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 34,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Cory5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 36,
    .species = SPECIES_TENTACRUEL,
    }
};

static const struct TrainerMon sParty_Pablo2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_WINGULL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_STARYU,
    }
};

static const struct TrainerMon sParty_Pablo5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_PELIPPER,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_STARMIE,
    }
};

static const struct TrainerMon sParty_Koji2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 37,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MAKUHITA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 39,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 41,
    .species = SPECIES_MACHOKE,
    }
};

static const struct TrainerMon sParty_Koji5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_HARIYAMA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 43,
    .species = SPECIES_MACHAMP,
    }
};

static const struct TrainerMon sParty_Cristin2[] = {
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
    .lvl = 35,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin3[] = {
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
    .lvl = 37,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin4[] = {
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    },
    {
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
    .lvl = 39,
    .species = SPECIES_VIGOROTH,
    }
};

static const struct TrainerMon sParty_Cristin5[] = {
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SPINDA,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    },
    {
    .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
    .lvl = 41,
    .species = SPECIES_SLAKING,
    }
};

static const struct TrainerMon sParty_Fernando2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 35,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_ELECTRIKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 37,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 39,
    .species = SPECIES_LOUDRED,
    }
};

static const struct TrainerMon sParty_Fernando5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_MANECTRIC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 41,
    .species = SPECIES_EXPLOUD,
    }
};

static const struct TrainerMon sParty_Sawyer2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_GEODUDE,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 26,
    .species = SPECIES_NUMEL,
    }
};

static const struct TrainerMon sParty_Sawyer3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 28,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_MACHOP,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_NUMEL,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 30,
    .species = SPECIES_GRAVELER,
    }
};

static const struct TrainerMon sParty_Sawyer5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_MACHOKE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_CAMERUPT,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 33,
    .species = SPECIES_GOLEM,
    }
};

static const struct TrainerMon sParty_Gabrielle2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_ZIGZAGOON,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_LOTAD,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_SEEDOT,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 31,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_SKITTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 33,
    .species = SPECIES_TAILLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_LOMBRE,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_NUZLEAF,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 35,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Gabrielle5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_DELCATTY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_MIGHTYENA,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LINOONE,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_LUDICOLO,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SHIFTRY,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 37,
    .species = SPECIES_SWELLOW,
    }
};

static const struct TrainerMon sParty_Thalia2[] = {
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
    .lvl = 34,
    .species = SPECIES_HORSEA,
    }
};

static const struct TrainerMon sParty_Thalia3[] = {
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
    .lvl = 36,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia4[] = {
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_WAILMER,
    },
    {
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
    .lvl = 38,
    .species = SPECIES_SEADRA,
    }
};

static const struct TrainerMon sParty_Thalia5[] = {
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_LUVDISC,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_WAILORD,
    },
    {
    .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
    .lvl = 40,
    .species = SPECIES_KINGDRA,
    }
};

static const struct TrainerMon sParty_Mariela[] = {
    {
    .lvl = 41,
    .species = SPECIES_CHIMECHO,
    }
};

static const struct TrainerMon sParty_Alvaro[] = {
    {
    .lvl = 41,
    .species = SPECIES_BANETTE,
    },
    {
    .lvl = 41,
    .species = SPECIES_KADABRA,
    }
};

static const struct TrainerMon sParty_Everett[] = {
    {
    .lvl = 41,
    .species = SPECIES_WOBBUFFET,
    }
};

static const struct TrainerMon sParty_Roark[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_SHIELDON,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_TOMB, MOVE_METAL_BURST, MOVE_METAL_CLAW, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TYRUNT,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRONG_JAW,
    .moves = {MOVE_BITE, MOVE_THUNDER_FANG, MOVE_ROCK_TOMB, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CRANIDOS,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SHEER_FORCE,
    .moves = {MOVE_ROCK_TOMB, MOVE_HEADBUTT, MOVE_IRON_HEAD, MOVE_CRUNCH}
    },
};

static const struct TrainerMon sParty_Gardenia[] = {
    {
         //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 200,
    .species = SPECIES_ROSERADE,
    .heldItem = ITEM_MIRACLE_SEED,
    .nature = NATURE_TIMID,
    .ability = ABILITY_TECHNICIAN,
    .moves = {MOVE_MEGA_DRAIN, MOVE_SLUDGE, MOVE_SLEEP_POWDER, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ARBOLIVA,
    .heldItem = ITEM_SITRUS_BERRY,
    .nature = NATURE_CALM,
    .ability = ABILITY_HARVEST,
    .moves = {MOVE_LEECH_SEED, MOVE_PROTECT, MOVE_GIGA_DRAIN, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SUDOWOODO,
    .heldItem = ITEM_MUSCLE_BAND,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STURDY,
    .moves = {MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_SEED_BOMB, MOVE_SUCKER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLOOM,
    .heldItem = ITEM_EVIOLITE,
    .nature = NATURE_BOLD,
    .ability = ABILITY_STENCH,
    .moves = {MOVE_GIGA_DRAIN, MOVE_STUN_SPORE, MOVE_LEECH_SEED, MOVE_SYNTHESIS}
    },
};

static const struct TrainerMon sParty_Fantina[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MISMAGIUS,
    .nature = NATURE_TIMID,
    .ability = ABILITY_LEVITATE,
    .heldItem = ITEM_WISE_GLASSES,
    .moves = {MOVE_MAGICAL_LEAF, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_POWER_GEM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_CURSOLA,
    .nature = NATURE_MODEST,
    .ability = ABILITY_UNBURDEN,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_STRENGTH_SAP, MOVE_EARTH_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ANNIHILAPE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DEFIANT,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ZOROARK,
    .nature = NATURE_TIMID,
    .ability = ABILITY_ILLUSION,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DARK_PULSE, MOVE_SLUDGE_BOMB, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_BANETTE,
    .heldItem = ITEM_BANETTITE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_PRANKSTER,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_KNOCK_OFF, MOVE_SHADOW_CLAW, MOVE_SHADOW_SNEAK, MOVE_RETURN}
    }

};

//leftovers, life orb, drain punch, lucarionite, punch glove, HD boots
static const struct TrainerMon sParty_Maylene[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_MELOETTA_PIROUETTE,
    .nature = NATURE_HASTY,
    .ability = ABILITY_SERENE_GRACE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_RELIC_SONG, MOVE_DRAIN_PUNCH, MOVE_PSYCHIC, MOVE_AURA_SPHERE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PANGORO,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_KNOCK_OFF, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_FALINKS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DEFIANT,
    .heldItem = ITEM_COBA_BERRY,
    .moves = {MOVE_LEECH_LIFE, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_NO_RETREAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_LILLIGANT_HISUIAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_HUSTLE,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_LEAF_BLADE, MOVE_DRAIN_PUNCH, MOVE_FACADE, MOVE_VICTORY_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LUCARIO,
    .nature = NATURE_TIMID,
    .ability = ABILITY_STEADFAST,
    .heldItem = ITEM_LUCARIONITE,
    .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_VACUUM_WAVE, MOVE_DRAGON_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_KINGAMBIT,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SUPREME_OVERLORD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH}
    },
};

static const struct TrainerMon sParty_Wake[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_POLITOED,
    .nature = NATURE_MODEST,
    .ability = ABILITY_DRIZZLE,
    .heldItem = ITEM_DAMP_ROCK,
    .moves = {MOVE_SCALD, MOVE_ICE_BEAM, MOVE_HAZE, MOVE_PSYCHIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GYARADOS,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_MOXIE,
    .heldItem = ITEM_WACAN_BERRY,
    .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KINGDRA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SWIFT_SWIM,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_HURRICANE, MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_ICE_BEAM}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_DECIDUEYE_HISUIAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_TROP_KICK, MOVE_TRIPLE_ARROWS, MOVE_SUCKER_PUNCH, MOVE_BRAVE_BIRD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_URSHIFU_RAPID_STRIKE_STYLE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_UNSEEN_FIST,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_SURGING_STRIKES, MOVE_BULK_UP, MOVE_POISON_JAB}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LAPRAS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_WATER_ABSORB,
    .heldItem = ITEM_LAPRASITE,
    .moves = {MOVE_BOOMBURST, MOVE_DRAGON_PULSE, MOVE_ICE_BEAM, MOVE_THUNDERBOLT}
    },
};

static const struct TrainerMon sParty_Byron[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SKARMORY,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_ROCKY_HELMET,
    .moves = {MOVE_ROOST, MOVE_STEALTH_ROCK, MOVE_DRILL_PECK, MOVE_IRON_HEAD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_KLINKLANG,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STEELY_SPIRIT,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_SHIFT_GEAR, MOVE_GEAR_GRIND, MOVE_VOLT_TACKLE, MOVE_FACADE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORTHWORM,
    .nature = NATURE_IMPISH,
    .ability = ABILITY_EARTH_EATER,
    .heldItem = ITEM_SITRUS_BERRY,
    .moves = {MOVE_SHED_TAIL, MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BRONZONG,
    .nature = NATURE_RELAXED,
    .ability = ABILITY_HEATPROOF,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_PSYCHIC, MOVE_GYRO_BALL, MOVE_BODY_PRESS, MOVE_EARTHQUAKE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MELMETAL,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_DOUBLE_IRON_BASH, MOVE_EARTHQUAKE, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_COPPERAJAH,
    .nature = NATURE_BRAVE,
    .ability = ABILITY_HEAVY_METAL,
    .heldItem = ITEM_COPPERAJITE,
    .moves = {MOVE_IRON_HEAD, MOVE_SUPERPOWER, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER}
    }
};

static const struct TrainerMon sParty_Candice[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_VANILLUXE,
    .nature = NATURE_HASTY,
    .ability = ABILITY_SNOW_WARNING,
    .heldItem = ITEM_ICY_ROCK,
    .moves = {MOVE_BLIZZARD, MOVE_FREEZE_DRY, MOVE_FLASH_CANNON, MOVE_EXPLOSION}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_SLOWKING_GALARIAN,
    .nature = NATURE_CALM,
    .ability = ABILITY_REGENERATOR,
    .heldItem = ITEM_BLACK_SLUDGE,
    .moves = {MOVE_CHILLY_RECEPTION, MOVE_PSYSHOCK, MOVE_SLUDGE_WAVE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_GLACEON,
    .nature = NATURE_TIMID,
    .ability = ABILITY_SLUSH_RUSH,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FREEZE_DRY, MOVE_BLIZZARD, MOVE_EARTH_POWER, MOVE_HYPER_VOICE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_BAXCALIBUR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_THERMAL_EXCHANGE,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_GLAIVE_RUSH, MOVE_ICICLE_CRASH, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CHIEN_PAO,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SWORD_OF_RUIN,
    .heldItem = ITEM_CHOICE_BAND,
    .moves = {MOVE_THROAT_CHOP, MOVE_SACRED_SWORD, MOVE_ICE_SPINNER, MOVE_ICE_SHARD}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GLALIE,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_REFRIGERATE,
    .heldItem = ITEM_GLALITITE,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_RETURN, MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CRUNCH}
    }
};

static const struct TrainerMon sParty_Volkner[] = {
    {
    .lvl = 18,
    .species = SPECIES_LOMBRE,
    },
    {
    .lvl = 18,
    .species = SPECIES_MARILL,
    }
};

static const struct TrainerMon sParty_BrendanLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_GROUDON,
    }
};

static const struct TrainerMon sParty_MayLinkPlaceholder[] = {
    {
    .lvl = 5,
    .species = SPECIES_KYOGRE,
    }
};

static const struct TrainerMon sParty_DawnRoute104[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 203,
    .species = SPECIES_BUNEARY,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_LIMBER,
    .moves = {MOVE_FAKE_OUT, MOVE_QUICK_ATTACK, MOVE_MACH_PUNCH, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NOIBAT,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_INFILTRATOR,
    .moves = {MOVE_GUST, MOVE_ABSORB, MOVE_TWISTER, MOVE_NONE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_PIPLUP,
    .heldItem = ITEM_ORAN_BERRY,
    .nature = NATURE_SERIOUS,
    .ability = ABILITY_TORRENT,
    .moves = {MOVE_BUBBLE_BEAM, MOVE_AQUA_JET, MOVE_BABY_DOLL_EYES, MOVE_PECK}
    },
};

static const struct TrainerMon sParty_DawnRoute111[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_LOPUNNY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_LIMBER,
    .heldItem = ITEM_SILK_SCARF,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_NOIVERN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_BOOMBURST, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_TSAREENA,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_STRIKER,
    .heldItem = ITEM_MIRACLE_SEED,
    .moves = {MOVE_TROP_KICK, MOVE_TRIPLE_AXEL, MOVE_HIGH_JUMP_KICK, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 202,
    .species = SPECIES_CHANDELURE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_BOLD,
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_DawnLilycove[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LOPUNNY,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_LIMBER,
    .heldItem = ITEM_LIFE_ORB,
    .friendship = MAX_FRIENDSHIP,
    .moves = {MOVE_FAKE_OUT, MOVE_RETURN, MOVE_THUNDER_PUNCH, MOVE_CLOSE_COMBAT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_NOIVERN,
    .nature = NATURE_TIMID,
    .ability = ABILITY_INFILTRATOR,
    .heldItem = ITEM_CHOICE_SPECS,
    .moves = {MOVE_AEROBLAST, MOVE_DRAGON_PULSE, MOVE_BOOMBURST, MOVE_DARK_PULSE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MEOWSCARADA,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_KNOCK_OFF, MOVE_FLOWER_TRICK, MOVE_PLAY_ROUGH, MOVE_U_TURN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CHANDELURE,
    .nature = NATURE_TIMID,
    .ability = ABILITY_FLASH_FIRE,
    .heldItem = ITEM_CHARCOAL,
    .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_WILL_O_WISP}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_IRON_BOULDER,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_QUARK_DRIVE,
    //TODO replace with booster energy
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_SACRED_SWORD, MOVE_MIGHTY_CLEAVE, MOVE_PSYCHO_CUT, MOVE_MEGAHORN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_BOLD,
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_D,
    .moves = {MOVE_SURF, MOVE_FLASH_CANNON, MOVE_TOXIC, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Ursula[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_PAU,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_BAILE,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_SENSU,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 201,
    .species = SPECIES_ORICORIO_POM_POM,
    .heldItem = ITEM_CHARTI_BERRY,
    .nature = NATURE_TIMID,
    .ability = ABILITY_DANCER,
    .moves = {MOVE_REVELATION_DANCE, MOVE_QUIVER_DANCE, MOVE_AIR_CUTTER, MOVE_ROOST}
    },
};

static const struct TrainerMon sParty_Xavier[] = {
   {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GALVANTULA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_COMPOUND_EYES,
    .heldItem = ITEM_FOCUS_SASH,
    .moves = {MOVE_STICKY_WEB, MOVE_THUNDER, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MALAMAR,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_CONTRARY,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SUPERPOWER, MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_PLUCK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DARMANITAN,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_SHEER_FORCE,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_FLARE_BLITZ, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MIMIKYU_DISGUISED,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_DISGUISE,
    .heldItem = ITEM_SPELL_TAG,
    .moves = {MOVE_SWORDS_DANCE, MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_SHADOW_SNEAK}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_GRENINJA,
    .nature = NATURE_TIMID,
    .ability = ABILITY_PROTEAN,
    .heldItem = ITEM_EXPERT_BELT,
    .moves = {MOVE_WATER_SHURIKEN, MOVE_ICE_BEAM, MOVE_DARK_PULSE, MOVE_SURF}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TORTERRA,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_OVERGROW,
    .heldItem = ITEM_TORTERRITE,
    .moves = {MOVE_SEED_BOMB, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_HEAVY_SLAM}
    },
};

static const struct TrainerMon sParty_Isaac[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_RILLABOOM,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_GRASSY_SURGE,
    .heldItem = ITEM_TERRAIN_EXTENDER,
    .moves = {MOVE_GRASSY_GLIDE, MOVE_WOOD_HAMMER, MOVE_KNOCK_OFF, MOVE_DRAIN_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_ALAKAZAM,
    .nature = NATURE_TIMID,
    .ability = ABILITY_MAGIC_GUARD,
    .heldItem = ITEM_LIFE_ORB,
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_GRASS_KNOT, MOVE_FOCUS_BLAST}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_TYRANITAR,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_SAND_STREAM,
    .heldItem = ITEM_CHOPLE_BERRY,
    .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_DRAGON_DANCE}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_AMPHAROS,
    .nature = NATURE_MODEST,
    .ability = ABILITY_STATIC,
    .heldItem = ITEM_MAGNET,
    .moves = {MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_SIGNAL_BEAM, MOVE_TAIL_GLOW}
    },
    {
        //hp, atk, def, speed, spatk, spdef
    .iv = TRAINER_PARTY_IVS(31, 30, 31, 30, 30, 31),
    .lvl = 200,
    .species = SPECIES_FLORGES,
    .nature = NATURE_MODEST,
    .ability = ABILITY_NATURAL_CURE,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_MOONBLAST, MOVE_ENERGY_BALL, MOVE_WISH, MOVE_HIDDEN_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_EMPOLEON,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_TORRENT,
    .heldItem = ITEM_EMPOLEONITE_O,
    .moves = {MOVE_IRON_HEAD, MOVE_LIQUIDATION, MOVE_DRILL_PECK, MOVE_BRICK_BREAK}
    },
};

static const struct TrainerMon sParty_Justin[] = {
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_MUK_ALOLAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_POISON_TOUCH,
    .heldItem = ITEM_AIR_BALLOON,
    .moves = {MOVE_KNOCK_OFF, MOVE_POISON_JAB, MOVE_ICE_PUNCH, MOVE_TOXIC}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CONKELDURR,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_IRON_FIST,
    .heldItem = ITEM_PUNCHING_GLOVE,
    .gender = FEMALE,
    .moves = {MOVE_DRAIN_PUNCH, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_DONPHAN,
    .nature = NATURE_ADAMANT,
    .ability = ABILITY_STURDY,
    .heldItem = ITEM_CUSTAP_BERRY,
    .moves = {MOVE_EARTHQUAKE, MOVE_KNOCK_OFF, MOVE_ROCK_SLIDE, MOVE_PLAY_ROUGH}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_LANTURN,
    .nature = NATURE_MODEST,
    .ability = ABILITY_VOLT_ABSORB,
    .heldItem = ITEM_LEFTOVERS,
    .moves = {MOVE_SCALD, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY, MOVE_THUNDERBOLT}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CELESTEELA,
    .nature = NATURE_MODEST,
    .ability = ABILITY_BEAST_BOOST,
    .heldItem = ITEM_ASSAULT_VEST,
    .moves = {MOVE_AIR_SLASH, MOVE_FLASH_CANNON, MOVE_GIGA_DRAIN, MOVE_FLAMETHROWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
    .lvl = 200,
    .species = SPECIES_CHARIZARD,
    .nature = NATURE_JOLLY,
    .ability = ABILITY_BLAZE,
    .heldItem = ITEM_CHARIZARDITE_X,
    .moves = {MOVE_DRAGON_DANCE, MOVE_DRAGON_CLAW, MOVE_FLARE_BLITZ, MOVE_EARTHQUAKE}
    },
};

static const struct TrainerMon sParty_Shady[] = {
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_BALTOY,
    .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSHREW,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    },
    {
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
    .lvl = 27,
    .species = SPECIES_SANDSLASH,
    .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
    }
};
