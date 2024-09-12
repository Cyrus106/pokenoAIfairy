#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order
enum {
    NATIONAL_DEX_NONE,
    // Kanto
    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_CATERPIE,
    NATIONAL_DEX_METAPOD,
    NATIONAL_DEX_BUTTERFREE,
    NATIONAL_DEX_WEEDLE,
    NATIONAL_DEX_KAKUNA,
    NATIONAL_DEX_BEEDRILL,
    NATIONAL_DEX_PIDGEY,
    NATIONAL_DEX_PIDGEOTTO,
    NATIONAL_DEX_PIDGEOT,
    NATIONAL_DEX_RATTATA,
    NATIONAL_DEX_RATICATE,
    NATIONAL_DEX_SPEAROW,
    NATIONAL_DEX_FEAROW,
    NATIONAL_DEX_EKANS,
    NATIONAL_DEX_ARBOK,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_SANDSHREW,
    NATIONAL_DEX_SANDSLASH,
    NATIONAL_DEX_NIDORAN_F,
    NATIONAL_DEX_NIDORINA,
    NATIONAL_DEX_NIDOQUEEN,
    NATIONAL_DEX_NIDORAN_M,
    NATIONAL_DEX_NIDORINO,
    NATIONAL_DEX_NIDOKING,
    NATIONAL_DEX_CLEFAIRY,
    NATIONAL_DEX_CLEFABLE,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_ZUBAT,
    NATIONAL_DEX_GOLBAT,
    NATIONAL_DEX_ODDISH,
    NATIONAL_DEX_GLOOM,
    NATIONAL_DEX_VILEPLUME,
    NATIONAL_DEX_PARAS,
    NATIONAL_DEX_PARASECT,
    NATIONAL_DEX_VENONAT,
    NATIONAL_DEX_VENOMOTH,
    NATIONAL_DEX_DIGLETT,
    NATIONAL_DEX_DUGTRIO,
    NATIONAL_DEX_MEOWTH,
    NATIONAL_DEX_PERSIAN,
    NATIONAL_DEX_PSYDUCK,
    NATIONAL_DEX_GOLDUCK,
    NATIONAL_DEX_MANKEY,
    NATIONAL_DEX_PRIMEAPE,
    NATIONAL_DEX_GROWLITHE,
    NATIONAL_DEX_ARCANINE,
    NATIONAL_DEX_POLIWAG,
    NATIONAL_DEX_POLIWHIRL,
    NATIONAL_DEX_POLIWRATH,
    NATIONAL_DEX_ABRA,
    NATIONAL_DEX_KADABRA,
    NATIONAL_DEX_ALAKAZAM,
    NATIONAL_DEX_MACHOP,
    NATIONAL_DEX_MACHOKE,
    NATIONAL_DEX_MACHAMP,
    NATIONAL_DEX_BELLSPROUT,
    NATIONAL_DEX_WEEPINBELL,
    NATIONAL_DEX_VICTREEBEL,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GEODUDE,
    NATIONAL_DEX_GRAVELER,
    NATIONAL_DEX_GOLEM,
    NATIONAL_DEX_PONYTA,
    NATIONAL_DEX_RAPIDASH,
    NATIONAL_DEX_SLOWPOKE,
    NATIONAL_DEX_SLOWBRO,
    NATIONAL_DEX_MAGNEMITE,
    NATIONAL_DEX_MAGNETON,
    NATIONAL_DEX_FARFETCHD,
    NATIONAL_DEX_DODUO,
    NATIONAL_DEX_DODRIO,
    NATIONAL_DEX_SEEL,
    NATIONAL_DEX_DEWGONG,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_SHELLDER,
    NATIONAL_DEX_CLOYSTER,
    NATIONAL_DEX_GASTLY,
    NATIONAL_DEX_HAUNTER,
    NATIONAL_DEX_GENGAR,
    NATIONAL_DEX_ONIX,
    NATIONAL_DEX_DROWZEE,
    NATIONAL_DEX_HYPNO,
    NATIONAL_DEX_KRABBY,
    NATIONAL_DEX_KINGLER,
    NATIONAL_DEX_VOLTORB,
    NATIONAL_DEX_ELECTRODE,
    NATIONAL_DEX_EXEGGCUTE,
    NATIONAL_DEX_EXEGGUTOR,
    NATIONAL_DEX_CUBONE,
    NATIONAL_DEX_MAROWAK,
    NATIONAL_DEX_HITMONLEE,
    NATIONAL_DEX_HITMONCHAN,
    NATIONAL_DEX_LICKITUNG,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_RHYHORN,
    NATIONAL_DEX_RHYDON,
    NATIONAL_DEX_CHANSEY,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_KANGASKHAN,
    NATIONAL_DEX_HORSEA,
    NATIONAL_DEX_SEADRA,
    NATIONAL_DEX_GOLDEEN,
    NATIONAL_DEX_SEAKING,
    NATIONAL_DEX_STARYU,
    NATIONAL_DEX_STARMIE,
    NATIONAL_DEX_MR_MIME,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_JYNX,
    NATIONAL_DEX_ELECTABUZZ,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_PINSIR,
    NATIONAL_DEX_TAUROS,
    NATIONAL_DEX_MAGIKARP,
    NATIONAL_DEX_GYARADOS,
    NATIONAL_DEX_LAPRAS,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,
    // Johto
    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,
    // Hoenn
    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,
    NATIONAL_DEX_MTYRANITAR,
    NATIONAL_DEX_PIPLUP,
    NATIONAL_DEX_PRINPLUP,
    NATIONAL_DEX_EMPOLEON,
    NATIONAL_DEX_BUIZEL,
    NATIONAL_DEX_FLOATZEL,
    NATIONAL_DEX_BUNEARY,
    NATIONAL_DEX_LEAFEON,
    NATIONAL_DEX_LUXIO,	
    NATIONAL_DEX_LUXRAY,
    NATIONAL_DEX_MUNCHLAX,		
    NATIONAL_DEX_PACHIRISU,	
    NATIONAL_DEX_SHAYMIN,	
    NATIONAL_DEX_SHAYMINSKY,
    NATIONAL_DEX_SHINX,	
    NATIONAL_DEX_AUDINO,	
    NATIONAL_DEX_CINCCINO,	
    NATIONAL_DEX_COTTONEE,
    NATIONAL_DEX_CUBCHOO,	
    NATIONAL_DEX_DEERLING,	
    NATIONAL_DEX_DEWOTT,	
    NATIONAL_DEX_EMOLGA,	
    NATIONAL_DEX_HERDIER,	
    NATIONAL_DEX_HZOROARK,
    NATIONAL_DEX_HZORUA,
    NATIONAL_DEX_LILLIGANT,
    NATIONAL_DEX_LILLIPUP,
    NATIONAL_DEX_MINCCINO,
    NATIONAL_DEX_OSHAWOTT,
    NATIONAL_DEX_PANPOUR,
    NATIONAL_DEX_PANSAGE,
    NATIONAL_DEX_PANSEAR,	
    NATIONAL_DEX_PETILIL,
    NATIONAL_DEX_STOUTLAND,
    NATIONAL_DEX_VIRIZION,
    NATIONAL_DEX_WHIMSICOTT,
    NATIONAL_DEX_ZOROARK,
    NATIONAL_DEX_ZORUA,	
    NATIONAL_DEX_AMAURA,
    NATIONAL_DEX_AURORUS,
    NATIONAL_DEX_BRAIXEN,
    NATIONAL_DEX_DEDENNE,
    NATIONAL_DEX_DELPHOX,
    NATIONAL_DEX_DIANCIE,
    NATIONAL_DEX_FENNEKIN,
    NATIONAL_DEX_FLABEBE,
    NATIONAL_DEX_FLOETTE,
    NATIONAL_DEX_FLORGES,
    NATIONAL_DEX_GOURGEIST,
    NATIONAL_DEX_PUMPKABOO,
    NATIONAL_DEX_SKIDDO,
    NATIONAL_DEX_SYLVEON,
    NATIONAL_DEX_FLETCHINDER,
    NATIONAL_DEX_TALONFLAME,
    NATIONAL_DEX_TYRUNT,
    NATIONAL_DEX_TYRANTRUM,
    NATIONAL_DEX_GOODRA,
    NATIONAL_DEX_GOOMY,
    NATIONAL_DEX_SLIGGOO,
    NATIONAL_DEX_BEWEAR,
    NATIONAL_DEX_BOUNSWEET,
    NATIONAL_DEX_BRIONNE,
    NATIONAL_DEX_BUZZWOLE,
    NATIONAL_DEX_CUTIEFLY,
    NATIONAL_DEX_LITTEN,
    NATIONAL_DEX_MIMIKYU,
    NATIONAL_DEX_ORICORIO,
    NATIONAL_DEX_PIKIPEK,
    NATIONAL_DEX_POPPLIO,
    NATIONAL_DEX_PRIMARINA,
    NATIONAL_DEX_RIBOMBEE,
    NATIONAL_DEX_ROCKRUFF,
    NATIONAL_DEX_ROWLET,
    NATIONAL_DEX_STEENEE,
    NATIONAL_DEX_STUFFUL,
    NATIONAL_DEX_TOGEDEMARU,
    NATIONAL_DEX_TSAREENA,
    NATIONAL_DEX_ALCREMIE,
    NATIONAL_DEX_APPLETUN,
    NATIONAL_DEX_APPLIN,
    NATIONAL_DEX_GROOKI,
    NATIONAL_DEX_HATENNA,
    NATIONAL_DEX_HATTERENE,
    NATIONAL_DEX_HATTREM,
    NATIONAL_DEX_INDEEDEE1,
    NATIONAL_DEX_INDEEDEE2,
    NATIONAL_DEX_MORPEKO,
    NATIONAL_DEX_SCORBUNNY,
    NATIONAL_DEX_SOBBLE,
    NATIONAL_DEX_WOOLOO,
    NATIONAL_DEX_YAMPER,
    NATIONAL_DEX_JIGGLYTUFF,
    NATIONAL_DEX_CLODSIRE,
    NATIONAL_DEX_DACSHBUN,
    NATIONAL_DEX_FIDOUGH,
    NATIONAL_DEX_FUECOCO,
    NATIONAL_DEX_GALVANADE,
    NATIONAL_DEX_MAUSHOLD,
    NATIONAL_DEX_PAWMI,
    NATIONAL_DEX_PAWMO,
    NATIONAL_DEX_PAWMOT,
    NATIONAL_DEX_ORICORIO1,
    NATIONAL_DEX_ORICORIO2,
    NATIONAL_DEX_ORICORIO3,
    NATIONAL_DEX_SPRIGATITO,
    NATIONAL_DEX_TANDEMAUS,
    NATIONAL_DEX_TINKATON,
    NATIONAL_DEX_VOLCRYPTID,
    NATIONAL_DEX_BLUBBY,
    NATIONAL_DEX_NAVI,
    NATIONAL_DEX_BASTIODON,
    NATIONAL_DEX_BAXCALIBUR,
    NATIONAL_DEX_BISHARP,
    NATIONAL_DEX_BLITZLE,
    NATIONAL_DEX_CERULEDGE,
    NATIONAL_DEX_CHANDELURE,
    NATIONAL_DEX_CROAGUNK,
    NATIONAL_DEX_EELEKTRIK,
    NATIONAL_DEX_EELEKTROSS,
    NATIONAL_DEX_EXCADRILL,
    NATIONAL_DEX_FROSSLASS,
    NATIONAL_DEX_GHOLDENGO,
    NATIONAL_DEX_GOLETT,
    NATIONAL_DEX_GOLURK,
    NATIONAL_DEX_GOUGING,
    NATIONAL_DEX_HANKAMO_O,
    NATIONAL_DEX_HONCHKROW,
    NATIONAL_DEX_JANGMO_O,
    NATIONAL_DEX_KOMMO_O,
    NATIONAL_DEX_LAMPENT,
    NATIONAL_DEX_LIEPARD,
    NATIONAL_DEX_LITWICK,
    NATIONAL_DEX_LOKIX,
    NATIONAL_DEX_LUCARIO,
    NATIONAL_DEX_AMPHAROS2,
    NATIONAL_DEX_SCIZOR2,
    NATIONAL_DEX_NICKIT,
    NATIONAL_DEX_MEOWTH2,
    NATIONAL_DEX_NINETAILS2,
    NATIONAL_DEX_PURRLOIN,
    NATIONAL_DEX_ROTOM1,
    NATIONAL_DEX_ROTOM2,
    NATIONAL_DEX_ROTOM3,
    NATIONAL_DEX_ROTOM4,
    NATIONAL_DEX_ROTOM5,
    NATIONAL_DEX_ROTOM6,
    NATIONAL_DEX_ANNIHILAPE,
    NATIONAL_DEX_ARCANINE2,
    NATIONAL_DEX_ARMAROUGE,
    NATIONAL_DEX_CARKOL,
    NATIONAL_DEX_COALOSSAL,
    NATIONAL_DEX_DRAGAPULT,
    NATIONAL_DEX_DUSKNOIR,
    NATIONAL_DEX_GIMMIGHOUL,
    NATIONAL_DEX_GIRATINA,
    NATIONAL_DEX_HOOPA,
    NATIONAL_DEX_HOOPA2,
    NATIONAL_DEX_IRON_BOULDER,
    NATIONAL_DEX_MAGMORTAR,
    NATIONAL_DEX_PALOSSAND,
    NATIONAL_DEX_RIOLU,
    NATIONAL_DEX_SALANDIT,
    NATIONAL_DEX_SALAZZLE,
    NATIONAL_DEX_SANDSHREW1,
    NATIONAL_DEX_SANDSLASH1,
    NATIONAL_DEX_SANDYGAST,
    NATIONAL_DEX_SAWK,
    NATIONAL_DEX_SCOVILLAIN,
    NATIONAL_DEX_SHIELDON,
    NATIONAL_DEX_TAUROS2,
    NATIONAL_DEX_TERRAKION,
    NATIONAL_DEX_THIEVUL,
    NATIONAL_DEX_TOXTRICITY2,
    NATIONAL_DEX_THROH,
    NATIONAL_DEX_TING_LU,
    NATIONAL_DEX_TOEDSCOOL,
    NATIONAL_DEX_TOEDSCRUEL,
    NATIONAL_DEX_TOXEL,
    NATIONAL_DEX_TOXTRICITY,
    NATIONAL_DEX_URSALUNA,
    NATIONAL_DEX_URSALUNA2,
    NATIONAL_DEX_VANILLISH,
    NATIONAL_DEX_VANILLITE,
    NATIONAL_DEX_VANILLUXE,
    NATIONAL_DEX_VOLCANION,
    NATIONAL_DEX_VULPIX1,
    NATIONAL_DEX_ZEBSTRIKA,
    NATIONAL_DEX_GOLISOPOD,
    NATIONAL_DEX_HIPPOPOTAS,
    NATIONAL_DEX_HIPPOWDON,
    NATIONAL_DEX_DONDOZO,
    NATIONAL_DEX_VESPIQUEEN,
    NATIONAL_DEX_DWEBBLE,
    NATIONAL_DEX_MARACTUS,
    NATIONAL_DEX_CLOBBOPUS,
    NATIONAL_DEX_GRAPPLOCT,
    NATIONAL_DEX_FROSMOTH,
    NATIONAL_DEX_ORBEETLE,
    NATIONAL_DEX_SINISTEA,
    NATIONAL_DEX_POLTEAGEIST,
    NATIONAL_DEX_MAGNEZONE,
    NATIONAL_DEX_HEATRAN,
    NATIONAL_DEX_GREATTUSK,
    NATIONAL_DEX_IRONTREADS,
    NATIONAL_DEX_GLACEON,
    NATIONAL_DEX_FEZANDIPITI,
    NATIONAL_DEX_GENGAR2,
    NATIONAL_DEX_VENUSAUR2,
    NATIONAL_DEX_PECHARUNT,
    NATIONAL_DEX_GOLEM2,
    NATIONAL_DEX_IRONTHORNS,
    NATIONAL_DEX_AERODACTYL2,
    NATIONAL_DEX_ARCHALUDON,
    NATIONAL_DEX_CELESTEELA,
    NATIONAL_DEX_NECROZMADUSK,
    NATIONAL_DEX_REVAVROOM,
    NATIONAL_DEX_SOLGALEO,
    NATIONAL_DEX_VAROOM,
    NATIONAL_DEX_TOXICROAK,
    NATIONAL_DEX_COFAGRIGUS,
    NATIONAL_DEX_ELEBABY,
    NATIONAL_DEX_ZAPDOS2,
    NATIONAL_DEX_KONYA,
    NATIONAL_DEX_LANDORUS,
    NATIONAL_DEX_SCOLIPEDE,
    NATIONAL_DEX_TURTONATOR,
    NATIONAL_DEX_VIKAVOLT,
    NATIONAL_DEX_YANMEGA,
    NATIONAL_DEX_STARAPTOR,
    NATIONAL_DEX_TOUCANNON,
    NATIONAL_DEX_CENTISKORCH,
    NATIONAL_DEX_SEISMITOAD,
    NATIONAL_DEX_ABOMASNOW,
    NATIONAL_DEX_KROOKODILE,
    NATIONAL_DEX_GASTRODON,
    NATIONAL_DEX_SKUNTANK,
    NATIONAL_DEX_RUNERIGUS,   
    NATIONAL_DEX_MALAMAR,
    NATIONAL_DEX_CORSOLA2,
    NATIONAL_DEX_MANDIBUZZ,
    NATIONAL_DEX_STAKATAKA,
    NATIONAL_DEX_DRAGALGE,
    NATIONAL_DEX_TOXAPEX,
    NATIONAL_DEX_DHELMISE,
    NATIONAL_DEX_CURSOLA,
    NATIONAL_DEX_ARAQUANID,
    NATIONAL_DEX_SIRFETCH,
    NATIONAL_DEX_NOIVERN,
    NATIONAL_DEX_CLAWITZER,
    NATIONAL_DEX_GALLADE,
    NATIONAL_DEX_LILLIGANT2,
    NATIONAL_DEX_WYRDEER,
    NATIONAL_DEX_MISMAGIUS,
    NATIONAL_DEX_GOTHITELLE,
    NATIONAL_DEX_AVALUGG,
    NATIONAL_DEX_DUGTRIO2,
    NATIONAL_DEX_BLACEPHALON,
    NATIONAL_DEX_FERROSEED,
    NATIONAL_DEX_FERROTHORN,
    NATIONAL_DEX_GLISCOR,
    NATIONAL_DEX_LUGIA2,
    NATIONAL_DEX_NIHILEGO,
    NATIONAL_DEX_TOGEKISS,
    NATIONAL_DEX_TYPHLOSION2,
    NATIONAL_DEX_XURKITREE,
    NATIONAL_DEX_DIALGA,
    NATIONAL_DEX_ALTARIA2,
    NATIONAL_DEX_BLASTOISE2,
    NATIONAL_DEX_SCEPTILE2,
    NATIONAL_DEX_SWAMPERT2,
    NATIONAL_DEX_WALKINGWAKE,
    NATIONAL_DEX_RAGINGBOLT,
    NATIONAL_DEX_ABSOL2,
    NATIONAL_DEX_AGGRON2,
    NATIONAL_DEX_CHARIZARDY,
    NATIONAL_DEX_GARDEVOIR2,
    NATIONAL_DEX_HOUNDOOM2,
    NATIONAL_DEX_LUCARIO2,
    NATIONAL_DEX_PIDGEOT2,
    NATIONAL_DEX_SABLEYE2,
    NATIONAL_DEX_SHARPEDO2,
    NATIONAL_DEX_PALKIA,

    // Old Unown
    NATIONAL_DEX_OLD_UNOWN_B,
    NATIONAL_DEX_OLD_UNOWN_C,
    NATIONAL_DEX_OLD_UNOWN_D,
    NATIONAL_DEX_OLD_UNOWN_E,
    NATIONAL_DEX_OLD_UNOWN_F,
    NATIONAL_DEX_OLD_UNOWN_G,
    NATIONAL_DEX_OLD_UNOWN_H,
    NATIONAL_DEX_OLD_UNOWN_I,
    NATIONAL_DEX_OLD_UNOWN_J,
    NATIONAL_DEX_OLD_UNOWN_K,
    NATIONAL_DEX_OLD_UNOWN_L,
    NATIONAL_DEX_OLD_UNOWN_M,
    NATIONAL_DEX_OLD_UNOWN_N,
    NATIONAL_DEX_OLD_UNOWN_O,
    NATIONAL_DEX_OLD_UNOWN_P,
    NATIONAL_DEX_OLD_UNOWN_Q,
    NATIONAL_DEX_OLD_UNOWN_R,
    NATIONAL_DEX_OLD_UNOWN_S,
    NATIONAL_DEX_OLD_UNOWN_T,
    NATIONAL_DEX_OLD_UNOWN_U,
    NATIONAL_DEX_OLD_UNOWN_V,
    NATIONAL_DEX_OLD_UNOWN_W,
    NATIONAL_DEX_OLD_UNOWN_X,
    NATIONAL_DEX_OLD_UNOWN_Y,
    NATIONAL_DEX_OLD_UNOWN_Z,
    
};

#define KANTO_DEX_COUNT     NATIONAL_DEX_MEW
#define JOHTO_DEX_COUNT     NATIONAL_DEX_CELEBI
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_PALKIA	 //Just edit the last pokemon to be the last one you made

// Hoenn Pokedex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_TREECKO,
    HOENN_DEX_GROVYLE,
    HOENN_DEX_SCEPTILE,
    HOENN_DEX_TORCHIC,
    HOENN_DEX_COMBUSKEN,
    HOENN_DEX_BLAZIKEN,
    HOENN_DEX_MUDKIP,
    HOENN_DEX_MARSHTOMP,
    HOENN_DEX_SWAMPERT,
    HOENN_DEX_POOCHYENA,
    HOENN_DEX_MIGHTYENA,
    HOENN_DEX_ZIGZAGOON,
    HOENN_DEX_LINOONE,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_LOTAD,
    HOENN_DEX_LOMBRE,
    HOENN_DEX_LUDICOLO,
    HOENN_DEX_SEEDOT,
    HOENN_DEX_NUZLEAF,
    HOENN_DEX_SHIFTRY,
    HOENN_DEX_TAILLOW,
    HOENN_DEX_SWELLOW,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_SURSKIT,
    HOENN_DEX_MASQUERAIN,
    HOENN_DEX_SHROOMISH,
    HOENN_DEX_BRELOOM,
    HOENN_DEX_SLAKOTH,
    HOENN_DEX_VIGOROTH,
    HOENN_DEX_SLAKING,
    HOENN_DEX_ABRA,
    HOENN_DEX_KADABRA,
    HOENN_DEX_ALAKAZAM,
    HOENN_DEX_NINCADA,
    HOENN_DEX_NINJASK,
    HOENN_DEX_SHEDINJA,
    HOENN_DEX_WHISMUR,
    HOENN_DEX_LOUDRED,
    HOENN_DEX_EXPLOUD,
    HOENN_DEX_MAKUHITA,
    HOENN_DEX_HARIYAMA,
    HOENN_DEX_GOLDEEN,
    HOENN_DEX_SEAKING,
    HOENN_DEX_MAGIKARP,
    HOENN_DEX_GYARADOS,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_GEODUDE,
    HOENN_DEX_GRAVELER,
    HOENN_DEX_GOLEM,
    HOENN_DEX_NOSEPASS,
    HOENN_DEX_SKITTY,
    HOENN_DEX_DELCATTY,
    HOENN_DEX_ZUBAT,
    HOENN_DEX_GOLBAT,
    HOENN_DEX_CROBAT,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_SABLEYE,
    HOENN_DEX_MAWILE,
    HOENN_DEX_ARON,
    HOENN_DEX_LAIRON,
    HOENN_DEX_AGGRON,
    HOENN_DEX_MACHOP,
    HOENN_DEX_MACHOKE,
    HOENN_DEX_MACHAMP,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_ELECTRIKE,
    HOENN_DEX_MANECTRIC,
    HOENN_DEX_PLUSLE,
    HOENN_DEX_MINUN,
    HOENN_DEX_MAGNEMITE,
    HOENN_DEX_MAGNETON,
    HOENN_DEX_VOLTORB,
    HOENN_DEX_ELECTRODE,
    HOENN_DEX_VOLBEAT,
    HOENN_DEX_ILLUMISE,
    HOENN_DEX_ODDISH,
    HOENN_DEX_GLOOM,
    HOENN_DEX_VILEPLUME,
    HOENN_DEX_BELLOSSOM,
    HOENN_DEX_DODUO,
    HOENN_DEX_DODRIO,
    HOENN_DEX_ROSELIA,
    HOENN_DEX_GULPIN,
    HOENN_DEX_SWALOT,
    HOENN_DEX_CARVANHA,
    HOENN_DEX_SHARPEDO,
    HOENN_DEX_WAILMER,
    HOENN_DEX_WAILORD,
    HOENN_DEX_NUMEL,
    HOENN_DEX_CAMERUPT,
    HOENN_DEX_SLUGMA,
    HOENN_DEX_MAGCARGO,
    HOENN_DEX_TORKOAL,
    HOENN_DEX_GRIMER,
    HOENN_DEX_MUK,
    HOENN_DEX_KOFFING,
    HOENN_DEX_WEEZING,
    HOENN_DEX_SPOINK,
    HOENN_DEX_GRUMPIG,
    HOENN_DEX_SANDSHREW,
    HOENN_DEX_SANDSLASH,
    HOENN_DEX_SPINDA,
    HOENN_DEX_SKARMORY,
    HOENN_DEX_TRAPINCH,
    HOENN_DEX_VIBRAVA,
    HOENN_DEX_FLYGON,
    HOENN_DEX_CACNEA,
    HOENN_DEX_CACTURNE,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_ZANGOOSE,
    HOENN_DEX_SEVIPER,
    HOENN_DEX_LUNATONE,
    HOENN_DEX_SOLROCK,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_CORPHISH,
    HOENN_DEX_CRAWDAUNT,
    HOENN_DEX_BALTOY,
    HOENN_DEX_CLAYDOL,
    HOENN_DEX_LILEEP,
    HOENN_DEX_CRADILY,
    HOENN_DEX_ANORITH,
    HOENN_DEX_ARMALDO,
    HOENN_DEX_IGGLYBUFF,
    HOENN_DEX_JIGGLYPUFF,
    HOENN_DEX_WIGGLYTUFF,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_CASTFORM,
    HOENN_DEX_STARYU,
    HOENN_DEX_STARMIE,
    HOENN_DEX_KECLEON,
    HOENN_DEX_SHUPPET,
    HOENN_DEX_BANETTE,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_ABSOL,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_PICHU,
    HOENN_DEX_PIKACHU,
    HOENN_DEX_RAICHU,
    HOENN_DEX_PSYDUCK,
    HOENN_DEX_GOLDUCK,
    HOENN_DEX_WYNAUT,
    HOENN_DEX_WOBBUFFET,
    HOENN_DEX_NATU,
    HOENN_DEX_XATU,
    HOENN_DEX_GIRAFARIG,
    HOENN_DEX_PHANPY,
    HOENN_DEX_DONPHAN,
    HOENN_DEX_PINSIR,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_RHYHORN,
    HOENN_DEX_RHYDON,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_CLAMPERL,
    HOENN_DEX_HUNTAIL,
    HOENN_DEX_GOREBYSS,
    HOENN_DEX_RELICANTH,
    HOENN_DEX_CORSOLA,
    HOENN_DEX_CHINCHOU,
    HOENN_DEX_LANTURN,
    HOENN_DEX_LUVDISC,
    HOENN_DEX_HORSEA,
    HOENN_DEX_SEADRA,
    HOENN_DEX_KINGDRA,
    HOENN_DEX_BAGON,
    HOENN_DEX_SHELGON,
    HOENN_DEX_SALAMENCE,
    HOENN_DEX_BELDUM,
    HOENN_DEX_METANG,
    HOENN_DEX_METAGROSS,
    HOENN_DEX_REGIROCK,
    HOENN_DEX_REGICE,
    HOENN_DEX_REGISTEEL,
    HOENN_DEX_LATIAS,
    HOENN_DEX_LATIOS,
    HOENN_DEX_KYOGRE,
    HOENN_DEX_GROUDON,
    HOENN_DEX_RAYQUAZA,
    HOENN_DEX_JIRACHI,
    HOENN_DEX_DEOXYS,
    HOENN_DEX_MTYRANITAR,
    HOENN_DEX_PIPLUP,
    HOENN_DEX_PRINPLUP,
    HOENN_DEX_EMPOLEON,
    HOENN_DEX_BUIZEL,
    HOENN_DEX_FLOATZEL,
    HOENN_DEX_BUNEARY,
    HOENN_DEX_LEAFEON,	
    HOENN_DEX_LUXIO,
    HOENN_DEX_LUXRAY,	
    HOENN_DEX_MUNCHLAX,	
    HOENN_DEX_PACHIRISU,	
    HOENN_DEX_SHAYMIN,	
    HOENN_DEX_SHAYMINSKY,	
    HOENN_DEX_SHINX,	
    HOENN_DEX_AUDINO,	
    HOENN_DEX_CINCCINO,	
    HOENN_DEX_COTTONEE,	
    HOENN_DEX_CUBCHOO,	
    HOENN_DEX_DEERLING,	
    HOENN_DEX_DEWOTT,	
    HOENN_DEX_EMOLGA,
    HOENN_DEX_HERDIER,
    HOENN_DEX_HZOROARK,
    HOENN_DEX_HZORUA,
    HOENN_DEX_LILLIGANT,
    HOENN_DEX_LILLIPUP,
    HOENN_DEX_MINCCINO,
    HOENN_DEX_OSHAWOTT,
    HOENN_DEX_PANPOUR,
    HOENN_DEX_PANSAGE,
    HOENN_DEX_PANSEAR,
    HOENN_DEX_PETILIL,
    HOENN_DEX_STOUTLAND,
    HOENN_DEX_VIRIZION,
    HOENN_DEX_WHIMSICOTT,
    HOENN_DEX_ZOROARK,
    HOENN_DEX_ZORUA,
    HOENN_DEX_AMAURA,
    HOENN_DEX_AURORUS,
    HOENN_DEX_BRAIXEN,
    HOENN_DEX_DEDENNE,
    HOENN_DEX_DELPHOX,
    HOENN_DEX_DIANCIE,
    HOENN_DEX_FENNEKIN,
    HOENN_DEX_FLABEBE,
    HOENN_DEX_FLOETTE,
    HOENN_DEX_FLORGES,
    HOENN_DEX_GOURGEIST,
    HOENN_DEX_PUMPKABOO,
    HOENN_DEX_SKIDDO,
    HOENN_DEX_SYLVEON,
    HOENN_DEX_FLETCHINDER,
    HOENN_DEX_TALONFLAME,
    HOENN_DEX_TYRUNT,
    HOENN_DEX_TYRANTRUM,
    HOENN_DEX_GOODRA,
    HOENN_DEX_GOOMY,
    HOENN_DEX_SLIGGOO,
    HOENN_DEX_BEWEAR,
    HOENN_DEX_BOUNSWEET,
    HOENN_DEX_BRIONNE,
    HOENN_DEX_BUZZWOLE,
    HOENN_DEX_CUTIEFLY,
    HOENN_DEX_LITTEN,
    HOENN_DEX_MIMIKYU,
    HOENN_DEX_ORICORIO,
    HOENN_DEX_PIKIPEK,
    HOENN_DEX_POPPLIO,
    HOENN_DEX_PRIMARINA,
    HOENN_DEX_RIBOMBEE,
    HOENN_DEX_ROCKRUFF,
    HOENN_DEX_ROWLET,
    HOENN_DEX_STEENEE,
    HOENN_DEX_STUFFUL,
    HOENN_DEX_TOGEDEMARU,
    HOENN_DEX_TSAREENA,
    HOENN_DEX_ALCREMIE,
    HOENN_DEX_APPLETUN,
    HOENN_DEX_APPLIN,
    HOENN_DEX_GROOKI,
    HOENN_DEX_HATENNA,
    HOENN_DEX_HATTERENE,
    HOENN_DEX_HATTREM,
    HOENN_DEX_INDEEDEE1,
    HOENN_DEX_INDEEDEE2,
    HOENN_DEX_MORPEKO,
    HOENN_DEX_SCORBUNNY,
    HOENN_DEX_SOBBLE,
    HOENN_DEX_WOOLOO,
    HOENN_DEX_YAMPER,
    HOENN_DEX_JIGGLYTUFF,
    HOENN_DEX_CLODSIRE,
    HOENN_DEX_DACSHBUN,
    HOENN_DEX_FIDOUGH,
    HOENN_DEX_FUECOCO,
    HOENN_DEX_GALVANADE,
    HOENN_DEX_MAUSHOLD,
    HOENN_DEX_PAWMI,
    HOENN_DEX_PAWMO,
    HOENN_DEX_PAWMOT,
    HOENN_DEX_ORICORIO1,
    HOENN_DEX_ORICORIO2,
    HOENN_DEX_ORICORIO3,
    HOENN_DEX_SPRIGATITO,
    HOENN_DEX_TANDEMAUS,
    HOENN_DEX_TINKATON,
    HOENN_DEX_VOLCRYPTID,
    HOENN_DEX_BLUBBY,
    HOENN_DEX_NAVI,
    HOENN_DEX_BASTIODON,
    HOENN_DEX_BAXCALIBUR,
    HOENN_DEX_BISHARP,
    HOENN_DEX_BLITZLE,
    HOENN_DEX_CERULEDGE,
    HOENN_DEX_CHANDELURE,
    HOENN_DEX_CROAGUNK,
    HOENN_DEX_EELEKTRIK,
    HOENN_DEX_EELEKTROSS,
    HOENN_DEX_EXCADRILL,
    HOENN_DEX_FROSSLASS,
    HOENN_DEX_GHOLDENGO,
    HOENN_DEX_GOLETT,
    HOENN_DEX_GOLURK,
    HOENN_DEX_GOUGING,
    HOENN_DEX_HANKAMO_O,
    HOENN_DEX_HONCHKROW,
    HOENN_DEX_JANGMO_O,
    HOENN_DEX_KOMMO_O,
    HOENN_DEX_LAMPENT,
    HOENN_DEX_LIEPARD,
    HOENN_DEX_LITWICK,
    HOENN_DEX_LOKIX,
    HOENN_DEX_LUCARIO,
    HOENN_DEX_AMPHAROS2,
    HOENN_DEX_SCIZOR2,
    HOENN_DEX_NICKIT,
    HOENN_DEX_MEOWTH2,
    HOENN_DEX_NINETAILS2,
    HOENN_DEX_PURRLOIN,
    HOENN_DEX_ROTOM1,
    HOENN_DEX_ROTOM2,
    HOENN_DEX_ROTOM3,
    HOENN_DEX_ROTOM4,
    HOENN_DEX_ROTOM5,
    HOENN_DEX_ROTOM6,
    HOENN_DEX_ANNIHILAPE,
    HOENN_DEX_ARCANINE2,
    HOENN_DEX_ARMAROUGE,
    HOENN_DEX_CARKOL,
    HOENN_DEX_COALOSSAL,
    HOENN_DEX_DRAGAPULT,
    HOENN_DEX_DUSKNOIR,
    HOENN_DEX_GIMMIGHOUL,
    HOENN_DEX_GIRATINA,
    HOENN_DEX_HOOPA,
    HOENN_DEX_HOOPA2,
    HOENN_DEX_IRON_BOULDER,
    HOENN_DEX_MAGMORTAR,
    HOENN_DEX_PALOSSAND,
    HOENN_DEX_RIOLU,
    HOENN_DEX_SALANDIT,
    HOENN_DEX_SALAZZLE,
    HOENN_DEX_SANDSHREW1,
    HOENN_DEX_SANDSLASH1,
    HOENN_DEX_SANDYGAST,
    HOENN_DEX_SAWK,
    HOENN_DEX_SCOVILLAIN,
    HOENN_DEX_SHIELDON,
    HOENN_DEX_TAUROS2,
    HOENN_DEX_TERRAKION,
    HOENN_DEX_THIEVUL,
    HOENN_DEX_TOXTRICITY2,
    HOENN_DEX_THROH,
    HOENN_DEX_TING_LU,
    HOENN_DEX_TOEDSCOOL,
    HOENN_DEX_TOEDSCRUEL,
    HOENN_DEX_TOXEL,
    HOENN_DEX_TOXTRICITY,
    HOENN_DEX_URSALUNA,
    HOENN_DEX_URSALUNA2,
    HOENN_DEX_VANILLISH,
    HOENN_DEX_VANILLITE,
    HOENN_DEX_VANILLUXE,
    HOENN_DEX_VOLCANION,
    HOENN_DEX_VULPIX1,
    HOENN_DEX_ZEBSTRIKA,
    HOENN_DEX_GOLISOPOD,
    HOENN_DEX_HIPPOPOTAS,
    HOENN_DEX_HIPPOWDON,
    HOENN_DEX_DONDOZO,
    HOENN_DEX_VESPIQUEEN,
    HOENN_DEX_DWEBBLE,
    HOENN_DEX_MARACTUS,
    HOENN_DEX_CLOBBOPUS,
    HOENN_DEX_GRAPPLOCT,
    HOENN_DEX_FROSMOTH,
    HOENN_DEX_ORBEETLE,
    HOENN_DEX_SINISTEA,
    HOENN_DEX_POLTEAGEIST,
    HOENN_DEX_MAGNEZONE,
    HOENN_DEX_HEATRAN,
    HOENN_DEX_GREATTUSK,
    HOENN_DEX_IRONTREADS,
    HOENN_DEX_GLACEON,
    HOENN_DEX_FEZANDIPITI,
    HOENN_DEX_GENGAR2,
    HOENN_DEX_VENUSAUR2,
    HOENN_DEX_PECHARUNT,
    HOENN_DEX_GOLEM2,
    HOENN_DEX_IRONTHORNS,
    HOENN_DEX_AERODACTYL2,
    HOENN_DEX_ARCHALUDON,
    HOENN_DEX_CELESTEELA,
    HOENN_DEX_NECROZMADUSK,
    HOENN_DEX_REVAVROOM,
    HOENN_DEX_SOLGALEO,
    HOENN_DEX_VAROOM,
    HOENN_DEX_TOXICROAK,
    HOENN_DEX_COFAGRIGUS,
    HOENN_DEX_ELEBABY,
    HOENN_DEX_ZAPDOS2,
    HOENN_DEX_KONYA,
    HOENN_DEX_LANDORUS,
    HOENN_DEX_SCOLIPEDE,
    HOENN_DEX_TURTONATOR,
    HOENN_DEX_VIKAVOLT,
    HOENN_DEX_YANMEGA,
    HOENN_DEX_STARAPTOR,   
    HOENN_DEX_TOUCANNON,
    HOENN_DEX_CENTISKORCH,
    HOENN_DEX_SEISMITOAD,
    HOENN_DEX_ABOMASNOW,
    HOENN_DEX_KROOKODILE,
    HOENN_DEX_GASTRODON,
    HOENN_DEX_SKUNTANK,
    HOENN_DEX_RUNERIGUS,
    HOENN_DEX_MALAMAR,
    HOENN_DEX_CORSOLA2,
    HOENN_DEX_MANDIBUZZ,
    HOENN_DEX_STAKATAKA,
    HOENN_DEX_DRAGALGE,
    HOENN_DEX_TOXAPEX,
    HOENN_DEX_DHELMISE,
    HOENN_DEX_CURSOLA,
    HOENN_DEX_ARAQUANID,
    HOENN_DEX_SIRFETCH,
    HOENN_DEX_NOIVERN,
    HOENN_DEX_CLAWITZER,
    HOENN_DEX_GALLADE,
    HOENN_DEX_LILLIGANT2,
    HOENN_DEX_WYRDEER,
    HOENN_DEX_MISMAGIUS,
    HOENN_DEX_GOTHITELLE,
    HOENN_DEX_AVALUGG,
    HOENN_DEX_DUGTRIO2,
    HOENN_DEX_BLACEPHALON,
    HOENN_DEX_FERROSEED,
    HOENN_DEX_FERROTHORN,
    HOENN_DEX_GLISCOR,
    HOENN_DEX_LUGIA2,
    HOENN_DEX_NIHILEGO,
    HOENN_DEX_TOGEKISS,
    HOENN_DEX_TYPHLOSION2,
    HOENN_DEX_XURKITREE,
    HOENN_DEX_DIALGA,
    HOENN_DEX_ALTARIA2,
    HOENN_DEX_BLASTOISE2,
    HOENN_DEX_SCEPTILE2,
    HOENN_DEX_SWAMPERT2,
    HOENN_DEX_WALKINGWAKE,
    HOENN_DEX_RAGINGBOLT,
    HOENN_DEX_ABSOL2,
    HOENN_DEX_AGGRON2,
    HOENN_DEX_CHARIZARDY,
    HOENN_DEX_GARDEVOIR2,
    HOENN_DEX_HOUNDOOM2,
    HOENN_DEX_LUCARIO2,
    HOENN_DEX_PIDGEOT2,
    HOENN_DEX_SABLEYE2,
    HOENN_DEX_SHARPEDO2,
    HOENN_DEX_PALKIA,

    //Add your last pokemon here
    // End of Hoenn Dex (see HOENN_DEX_COUNT)
    // Here below have values but are excluded from the Pokedex
    HOENN_DEX_BULBASAUR,
    HOENN_DEX_IVYSAUR,
    HOENN_DEX_VENUSAUR,
    HOENN_DEX_CHARMANDER,
    HOENN_DEX_CHARMELEON,
    HOENN_DEX_CHARIZARD,
    HOENN_DEX_SQUIRTLE,
    HOENN_DEX_WARTORTLE,
    HOENN_DEX_BLASTOISE,
    HOENN_DEX_CATERPIE,
    HOENN_DEX_METAPOD,
    HOENN_DEX_BUTTERFREE,
    HOENN_DEX_WEEDLE,
    HOENN_DEX_KAKUNA,
    HOENN_DEX_BEEDRILL,
    HOENN_DEX_PIDGEY,
    HOENN_DEX_PIDGEOTTO,
    HOENN_DEX_PIDGEOT,
    HOENN_DEX_RATTATA,
    HOENN_DEX_RATICATE,
    HOENN_DEX_SPEAROW,
    HOENN_DEX_FEAROW,
    HOENN_DEX_EKANS,
    HOENN_DEX_ARBOK,
    HOENN_DEX_NIDORAN_F,
    HOENN_DEX_NIDORINA,
    HOENN_DEX_NIDOQUEEN,
    HOENN_DEX_NIDORAN_M,
    HOENN_DEX_NIDORINO,
    HOENN_DEX_NIDOKING,
    HOENN_DEX_CLEFAIRY,
    HOENN_DEX_CLEFABLE,
    HOENN_DEX_PARAS,
    HOENN_DEX_PARASECT,
    HOENN_DEX_VENONAT,
    HOENN_DEX_VENOMOTH,
    HOENN_DEX_DIGLETT,
    HOENN_DEX_DUGTRIO,
    HOENN_DEX_MEOWTH,
    HOENN_DEX_PERSIAN,
    HOENN_DEX_MANKEY,
    HOENN_DEX_PRIMEAPE,
    HOENN_DEX_GROWLITHE,
    HOENN_DEX_ARCANINE,
    HOENN_DEX_POLIWAG,
    HOENN_DEX_POLIWHIRL,
    HOENN_DEX_POLIWRATH,
    HOENN_DEX_BELLSPROUT,
    HOENN_DEX_WEEPINBELL,
    HOENN_DEX_VICTREEBEL,
    HOENN_DEX_PONYTA,
    HOENN_DEX_RAPIDASH,
    HOENN_DEX_SLOWPOKE,
    HOENN_DEX_SLOWBRO,
    HOENN_DEX_FARFETCHD,
    HOENN_DEX_SEEL,
    HOENN_DEX_DEWGONG,
    HOENN_DEX_SHELLDER,
    HOENN_DEX_CLOYSTER,
    HOENN_DEX_GASTLY,
    HOENN_DEX_HAUNTER,
    HOENN_DEX_GENGAR,
    HOENN_DEX_ONIX,
    HOENN_DEX_DROWZEE,
    HOENN_DEX_HYPNO,
    HOENN_DEX_KRABBY,
    HOENN_DEX_KINGLER,
    HOENN_DEX_EXEGGCUTE,
    HOENN_DEX_EXEGGUTOR,
    HOENN_DEX_CUBONE,
    HOENN_DEX_MAROWAK,
    HOENN_DEX_HITMONLEE,
    HOENN_DEX_HITMONCHAN,
    HOENN_DEX_LICKITUNG,
    HOENN_DEX_CHANSEY,
    HOENN_DEX_TANGELA,
    HOENN_DEX_KANGASKHAN,
    HOENN_DEX_MR_MIME,
    HOENN_DEX_SCYTHER,
    HOENN_DEX_JYNX,
    HOENN_DEX_ELECTABUZZ,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_TAUROS,
    HOENN_DEX_LAPRAS,
    HOENN_DEX_DITTO,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_PORYGON,
    HOENN_DEX_OMANYTE,
    HOENN_DEX_OMASTAR,
    HOENN_DEX_KABUTO,
    HOENN_DEX_KABUTOPS,
    HOENN_DEX_AERODACTYL,
    HOENN_DEX_SNORLAX,
    HOENN_DEX_ARTICUNO,
    HOENN_DEX_ZAPDOS,
    HOENN_DEX_MOLTRES,
    HOENN_DEX_DRATINI,
    HOENN_DEX_DRAGONAIR,
    HOENN_DEX_DRAGONITE,
    HOENN_DEX_MEWTWO,
    HOENN_DEX_MEW,
    HOENN_DEX_CHIKORITA,
    HOENN_DEX_BAYLEEF,
    HOENN_DEX_MEGANIUM,
    HOENN_DEX_CYNDAQUIL,
    HOENN_DEX_QUILAVA,
    HOENN_DEX_TYPHLOSION,
    HOENN_DEX_TOTODILE,
    HOENN_DEX_CROCONAW,
    HOENN_DEX_FERALIGATR,
    HOENN_DEX_SENTRET,
    HOENN_DEX_FURRET,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_LEDYBA,
    HOENN_DEX_LEDIAN,
    HOENN_DEX_SPINARAK,
    HOENN_DEX_ARIADOS,
    HOENN_DEX_CLEFFA,
    HOENN_DEX_TOGEPI,
    HOENN_DEX_TOGETIC,
    HOENN_DEX_MAREEP,
    HOENN_DEX_FLAAFFY,
    HOENN_DEX_AMPHAROS,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_POLITOED,
    HOENN_DEX_HOPPIP,
    HOENN_DEX_SKIPLOOM,
    HOENN_DEX_JUMPLUFF,
    HOENN_DEX_AIPOM,
    HOENN_DEX_SUNKERN,
    HOENN_DEX_SUNFLORA,
    HOENN_DEX_YANMA,
    HOENN_DEX_WOOPER,
    HOENN_DEX_QUAGSIRE,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_MURKROW,
    HOENN_DEX_SLOWKING,
    HOENN_DEX_MISDREAVUS,
    HOENN_DEX_UNOWN,
    HOENN_DEX_PINECO,
    HOENN_DEX_FORRETRESS,
    HOENN_DEX_DUNSPARCE,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_STEELIX,
    HOENN_DEX_SNUBBULL,
    HOENN_DEX_GRANBULL,
    HOENN_DEX_QWILFISH,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_SHUCKLE,
    HOENN_DEX_SNEASEL,
    HOENN_DEX_TEDDIURSA,
    HOENN_DEX_URSARING,
    HOENN_DEX_SWINUB,
    HOENN_DEX_PILOSWINE,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_DELIBIRD,
    HOENN_DEX_MANTINE,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_STANTLER,
    HOENN_DEX_SMEARGLE,
    HOENN_DEX_TYROGUE,
    HOENN_DEX_HITMONTOP,
    HOENN_DEX_SMOOCHUM,
    HOENN_DEX_ELEKID,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MILTANK,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_RAIKOU,
    HOENN_DEX_ENTEI,
    HOENN_DEX_SUICUNE,
    HOENN_DEX_LARVITAR,
    HOENN_DEX_PUPITAR,
    HOENN_DEX_TYRANITAR,
    HOENN_DEX_LUGIA,
    HOENN_DEX_HO_OH,
    HOENN_DEX_CELEBI,
    HOENN_DEX_OLD_UNOWN_B,
    HOENN_DEX_OLD_UNOWN_C,
    HOENN_DEX_OLD_UNOWN_D,
    HOENN_DEX_OLD_UNOWN_E,
    HOENN_DEX_OLD_UNOWN_F,
    HOENN_DEX_OLD_UNOWN_G,
    HOENN_DEX_OLD_UNOWN_H,
    HOENN_DEX_OLD_UNOWN_I,
    HOENN_DEX_OLD_UNOWN_J,
    HOENN_DEX_OLD_UNOWN_K,
    HOENN_DEX_OLD_UNOWN_L,
    HOENN_DEX_OLD_UNOWN_M,
    HOENN_DEX_OLD_UNOWN_N,
    HOENN_DEX_OLD_UNOWN_O,
    HOENN_DEX_OLD_UNOWN_P,
    HOENN_DEX_OLD_UNOWN_Q,
    HOENN_DEX_OLD_UNOWN_R,
    HOENN_DEX_OLD_UNOWN_S,
    HOENN_DEX_OLD_UNOWN_T,
    HOENN_DEX_OLD_UNOWN_U,
    HOENN_DEX_OLD_UNOWN_V,
    HOENN_DEX_OLD_UNOWN_W,
    HOENN_DEX_OLD_UNOWN_X,
    HOENN_DEX_OLD_UNOWN_Y,
    HOENN_DEX_OLD_UNOWN_Z,
    
};

#define HOENN_DEX_COUNT    HOENN_DEX_PALKIA //Change the pokemon to be the last in the entry

#endif // GUARD_CONSTANTS_POKEDEX_H
