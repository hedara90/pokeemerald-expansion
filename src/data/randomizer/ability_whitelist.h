#include "global.h"
#include "constants/abilities.h"

// Randomizer ability whitelist

static const u16 sRandomizerAbilityWhitelist[] =
{
    ABILITY_STENCH,
    ABILITY_DRIZZLE,
    ABILITY_SPEED_BOOST,
    ABILITY_BATTLE_ARMOR,
    ABILITY_STURDY,
    ABILITY_DAMP,
    ABILITY_LIMBER,
    ABILITY_SAND_VEIL,
    ABILITY_STATIC,
    ABILITY_VOLT_ABSORB,
    ABILITY_WATER_ABSORB,
    ABILITY_OBLIVIOUS,
    ABILITY_CLOUD_NINE,
    ABILITY_COMPOUND_EYES,
    ABILITY_INSOMNIA,
    //ABILITY_COLOR_CHANGE,
    ABILITY_IMMUNITY,
    ABILITY_FLASH_FIRE,
    ABILITY_SHIELD_DUST,
    ABILITY_OWN_TEMPO,
    ABILITY_SUCTION_CUPS,
    ABILITY_INTIMIDATE,
    ABILITY_SHADOW_TAG,
    ABILITY_ROUGH_SKIN,
    //ABILITY_WONDER_GUARD,
    ABILITY_LEVITATE,
    ABILITY_EFFECT_SPORE,
    ABILITY_SYNCHRONIZE,
    ABILITY_CLEAR_BODY,
    ABILITY_NATURAL_CURE,
    ABILITY_LIGHTNING_ROD,
    ABILITY_SERENE_GRACE,
    ABILITY_SWIFT_SWIM,
    ABILITY_CHLOROPHYLL,
    ABILITY_ILLUMINATE,
    ABILITY_TRACE,
    ABILITY_HUGE_POWER,
    //ABILITY_POISON_POINT,
    ABILITY_INNER_FOCUS,
    ABILITY_MAGMA_ARMOR,
    ABILITY_WATER_VEIL,
    ABILITY_MAGNET_PULL,
    ABILITY_SOUNDPROOF,
    ABILITY_RAIN_DISH,
    ABILITY_SAND_STREAM,
    ABILITY_PRESSURE,
    ABILITY_THICK_FAT,
    ABILITY_EARLY_BIRD,
    ABILITY_FLAME_BODY,
    ABILITY_RUN_AWAY,
    //ABILITY_KEEN_EYE,
    ABILITY_HYPER_CUTTER,
    ABILITY_PICKUP,
    ABILITY_TRUANT,
    ABILITY_HUSTLE,
    ABILITY_CUTE_CHARM,
    ABILITY_PLUS,
    ABILITY_MINUS,
    //ABILITY_FORECAST,
    ABILITY_STICKY_HOLD,
    ABILITY_SHED_SKIN,
    ABILITY_GUTS,
    ABILITY_MARVEL_SCALE,
    ABILITY_LIQUID_OOZE,
    ABILITY_OVERGROW,
    ABILITY_BLAZE,
    ABILITY_TORRENT,
    ABILITY_SWARM,
    ABILITY_ROCK_HEAD,
    ABILITY_DROUGHT,
    ABILITY_ARENA_TRAP,
    ABILITY_VITAL_SPIRIT,
    ABILITY_WHITE_SMOKE,
    //ABILITY_PURE_POWER,
    ABILITY_SHELL_ARMOR,
    ABILITY_AIR_LOCK,
    //ABILITY_TANGLED_FEET,
    ABILITY_MOTOR_DRIVE,
    ABILITY_RIVALRY,
    ABILITY_STEADFAST,
    //ABILITY_SNOW_CLOAK,
    ABILITY_GLUTTONY,
    ABILITY_ANGER_POINT,
    ABILITY_UNBURDEN,
    ABILITY_HEATPROOF,
    ABILITY_SIMPLE,
    ABILITY_DRY_SKIN,
    ABILITY_DOWNLOAD,
    ABILITY_IRON_FIST,
    ABILITY_POISON_HEAL,
    ABILITY_ADAPTABILITY,
    ABILITY_SKILL_LINK,
    ABILITY_HYDRATION,
    ABILITY_SOLAR_POWER,
    ABILITY_QUICK_FEET,
    ABILITY_NORMALIZE,
    ABILITY_SNIPER,
    ABILITY_MAGIC_GUARD,
    ABILITY_NO_GUARD,
    //ABILITY_STALL,
    ABILITY_TECHNICIAN,
    ABILITY_LEAF_GUARD,
    //ABILITY_KLUTZ,
    ABILITY_MOLD_BREAKER,
    ABILITY_SUPER_LUCK,
    ABILITY_AFTERMATH,
    //ABILITY_ANTICIPATION,
    //ABILITY_FOREWARN,
    ABILITY_UNAWARE,
    ABILITY_TINTED_LENS,
    ABILITY_FILTER,
    ABILITY_SLOW_START,
    ABILITY_SCRAPPY,
    ABILITY_STORM_DRAIN,
    ABILITY_ICE_BODY,
    ABILITY_SOLID_ROCK,
    ABILITY_SNOW_WARNING,
    //ABILITY_HONEY_GATHER,
    ABILITY_FRISK,
    ABILITY_RECKLESS,
    //ABILITY_MULTITYPE,
    //ABILITY_FLOWER_GIFT,
    ABILITY_BAD_DREAMS,
    //ABILITY_PICKPOCKET,
    ABILITY_SHEER_FORCE,
    ABILITY_CONTRARY,
    ABILITY_UNNERVE,
    ABILITY_DEFIANT,
    ABILITY_DEFEATIST,
    //ABILITY_CURSED_BODY,
    //ABILITY_HEALER,
    ABILITY_FRIEND_GUARD,
    ABILITY_WEAK_ARMOR,
    ABILITY_HEAVY_METAL,
    ABILITY_LIGHT_METAL,
    ABILITY_MULTISCALE,
    ABILITY_TOXIC_BOOST,
    ABILITY_FLARE_BOOST,
    ABILITY_HARVEST,
    ABILITY_TELEPATHY,
    //ABILITY_MOODY,
    ABILITY_OVERCOAT,
    ABILITY_POISON_TOUCH,
    ABILITY_REGENERATOR,
    //ABILITY_BIG_PECKS,
    ABILITY_SAND_RUSH,
    ABILITY_WONDER_SKIN,
    ABILITY_ANALYTIC,
    ABILITY_ILLUSION,
    ABILITY_IMPOSTER,
    ABILITY_INFILTRATOR,
    ABILITY_MUMMY,
    ABILITY_MOXIE,
    ABILITY_JUSTIFIED,
    //ABILITY_RATTLED,
    ABILITY_MAGIC_BOUNCE,
    ABILITY_SAP_SIPPER,
    ABILITY_PRANKSTER,
    ABILITY_SAND_FORCE,
    ABILITY_IRON_BARBS,
    //ABILITY_ZEN_MODE,
    ABILITY_VICTORY_STAR,
    ABILITY_TURBOBLAZE,
    ABILITY_TERAVOLT,
    ABILITY_AROMA_VEIL,
    //ABILITY_FLOWER_VEIL,
    ABILITY_CHEEK_POUCH,
    ABILITY_PROTEAN,
    ABILITY_FUR_COAT,
    ABILITY_MAGICIAN,
    ABILITY_BULLETPROOF,
    ABILITY_COMPETITIVE,
    ABILITY_STRONG_JAW,
    ABILITY_REFRIGERATE,
    ABILITY_SWEET_VEIL,
    //ABILITY_STANCE_CHANGE,
    ABILITY_GALE_WINGS,
    ABILITY_MEGA_LAUNCHER,
    ABILITY_GRASS_PELT,
    //ABILITY_SYMBIOSIS,
    ABILITY_TOUGH_CLAWS,
    ABILITY_PIXILATE,
    ABILITY_GOOEY,
    ABILITY_AERILATE,
    ABILITY_PARENTAL_BOND,
    ABILITY_DARK_AURA,
    ABILITY_FAIRY_AURA,
    //ABILITY_AURA_BREAK,
    ABILITY_PRIMORDIAL_SEA,
    ABILITY_DESOLATE_LAND,
    ABILITY_DELTA_STREAM,
    ABILITY_STAMINA,
    //ABILITY_WIMP_OUT,
    ABILITY_EMERGENCY_EXIT,
    ABILITY_WATER_COMPACTION,
    ABILITY_MERCILESS,
    //ABILITY_SHIELDS_DOWN,
    ABILITY_STAKEOUT,
    ABILITY_WATER_BUBBLE,
    ABILITY_STEELWORKER,
    ABILITY_BERSERK,
    ABILITY_SLUSH_RUSH,
    //ABILITY_LONG_REACH,
    ABILITY_LIQUID_VOICE,
    ABILITY_TRIAGE,
    ABILITY_GALVANIZE,
    ABILITY_SURGE_SURFER,
    //ABILITY_SCHOOLING,
    //ABILITY_DISGUISE,
    //ABILITY_BATTLE_BOND,
    //ABILITY_POWER_CONSTRUCT,
    ABILITY_CORROSION,
    ABILITY_COMATOSE,
    ABILITY_QUEENLY_MAJESTY,
    ABILITY_INNARDS_OUT,
    ABILITY_DANCER,
    //ABILITY_BATTERY,
    ABILITY_FLUFFY,
    ABILITY_DAZZLING,
    ABILITY_SOUL_HEART,
    ABILITY_TANGLING_HAIR,
    ABILITY_RECEIVER,
    ABILITY_POWER_OF_ALCHEMY,
    ABILITY_BEAST_BOOST,
    //ABILITY_RKS_SYSTEM,
    ABILITY_ELECTRIC_SURGE,
    ABILITY_PSYCHIC_SURGE,
    ABILITY_MISTY_SURGE,
    ABILITY_GRASSY_SURGE,
    ABILITY_FULL_METAL_BODY,
    ABILITY_SHADOW_SHIELD,
    ABILITY_PRISM_ARMOR,
    ABILITY_NEUROFORCE,
    ABILITY_INTREPID_SWORD,
    ABILITY_DAUNTLESS_SHIELD,
    ABILITY_LIBERO,
    //ABILITY_BALL_FETCH,
    ABILITY_COTTON_DOWN,
    ABILITY_PROPELLER_TAIL,
    //ABILITY_MIRROR_ARMOR,
    //ABILITY_GULP_MISSILE,
    ABILITY_STALWART,
    ABILITY_STEAM_ENGINE,
    ABILITY_PUNK_ROCK,
    ABILITY_SAND_SPIT,
    ABILITY_ICE_SCALES,
    ABILITY_RIPEN,
    //ABILITY_ICE_FACE,
    //ABILITY_POWER_SPOT,
    //ABILITY_MIMICRY,
    ABILITY_SCREEN_CLEANER,
    ABILITY_STEELY_SPIRIT,
    ABILITY_PERISH_BODY,
    ABILITY_WANDERING_SPIRIT,
    ABILITY_GORILLA_TACTICS,
    ABILITY_NEUTRALIZING_GAS,
    //ABILITY_PASTEL_VEIL,
    //ABILITY_HUNGER_SWITCH,
    ABILITY_QUICK_DRAW,
    ABILITY_UNSEEN_FIST,
    //ABILITY_CURIOUS_MEDICINE,
    ABILITY_TRANSISTOR,
    ABILITY_DRAGONS_MAW,
    ABILITY_CHILLING_NEIGH,
    ABILITY_GRIM_NEIGH,
    ABILITY_AS_ONE_ICE_RIDER,
    ABILITY_AS_ONE_SHADOW_RIDER,
    ABILITY_LINGERING_AROMA,
    ABILITY_SEED_SOWER,
    ABILITY_THERMAL_EXCHANGE,
    ABILITY_ANGER_SHELL,
    ABILITY_PURIFYING_SALT,
    ABILITY_WELL_BAKED_BODY,
    ABILITY_WIND_RIDER,
    //ABILITY_GUARD_DOG,
    ABILITY_ROCKY_PAYLOAD,
    ABILITY_WIND_POWER,
    //ABILITY_ZERO_TO_HERO,
    //ABILITY_COMMANDER,
    ABILITY_ELECTROMORPHOSIS,
    ABILITY_PROTOSYNTHESIS,
    ABILITY_QUARK_DRIVE,
    ABILITY_GOOD_AS_GOLD,
    ABILITY_VESSEL_OF_RUIN,
    ABILITY_SWORD_OF_RUIN,
    ABILITY_TABLETS_OF_RUIN,
    ABILITY_BEADS_OF_RUIN,
    ABILITY_ORICHALCUM_PULSE,
    ABILITY_HADRON_ENGINE,
    //ABILITY_OPPORTUNIST,
    ABILITY_CUD_CHEW,
    ABILITY_SHARPNESS,
    ABILITY_SUPREME_OVERLORD,
    //ABILITY_COSTAR,
    ABILITY_TOXIC_DEBRIS,
    ABILITY_ARMOR_TAIL,
    ABILITY_EARTH_EATER,
    //ABILITY_MYCELIUM_MIGHT,
    //ABILITY_HOSPITALITY,
    ABILITY_MINDS_EYE,
    //ABILITY_EMBODY_ASPECT_TEAL_MASK,
    //ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK,
    //ABILITY_EMBODY_ASPECT_WELLSPRING_MASK,
    //ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK,
    ABILITY_TOXIC_CHAIN,
    //ABILITY_SUPERSWEET_SYRUP,
    //ABILITY_TERA_SHIFT,
    ABILITY_TERA_SHELL,
    //ABILITY_TERAFORM_ZERO,
    ABILITY_POISON_PUPPETEER,
    ABILITY_STRIKER,
    ABILITY_FELINE_PROWESS,
    ABILITY_SAGE_POWER,
    ABILITY_FATAL_PRECISION,
    ABILITY_BLAZING_SOUL,
    ABILITY_ICE_EATER,
    ABILITY_EMPERORS_PRESENCE,
    ABILITY_PRIMAL_ARMOR,
    ABILITY_MOUNTAINEER,
    ABILITY_ORAORAORAORA,
    ABILITY_SELF_SUFFICIENT,
    ABILITY_BAD_COMPANY,
    ABILITY_BULL_RUSH,
    ABILITY_QUILL_RUSH,
};

#define ABILITY_WHITELIST_SIZE     (NELEMS(sRandomizerAbilityWhitelist))