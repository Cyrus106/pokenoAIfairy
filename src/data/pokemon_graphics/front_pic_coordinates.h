// All Pokémon pics are 64x64, but this data table defines where in this 64x64 frame
// the sprite's non-transparent pixels actually are.
// .size is the dimensions of this drawn pixel area.
// .y_offset is the number of pixels between the drawn pixel area and the bottom edge.
const struct MonCoords gMonFrontPicCoords[] =
{
    [SPECIES_NONE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BULBASAUR] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_IVYSAUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_VENUSAUR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_CHARMANDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_CHARMELEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_CHARIZARD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SQUIRTLE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_WARTORTLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_BLASTOISE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CATERPIE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_METAPOD] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 20,
    },
    [SPECIES_BUTTERFREE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_WEEDLE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_KAKUNA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_BEEDRILL] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_PIDGEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_PIDGEOTTO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 11,
    },
    [SPECIES_PIDGEOT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RATTATA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_RATICATE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SPEAROW] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_FEAROW] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_EKANS] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_ARBOK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_PIKACHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 9,
    },
    [SPECIES_RAICHU] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SANDSHREW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_SANDSLASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_NIDORAN_F] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_NIDORINA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_NIDORAN_M] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_NIDORINO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_NIDOKING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_CLEFAIRY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLEFABLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VULPIX] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_NINETALES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_JIGGLYPUFF] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 16,
    },
    [SPECIES_WIGGLYTUFF] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_ZUBAT] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GOLBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ODDISH] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_GLOOM] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_VILEPLUME] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_PARAS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_PARASECT] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_VENONAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_VENOMOTH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_DIGLETT] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_DUGTRIO] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_MEOWTH] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_PERSIAN] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_PSYDUCK] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_GOLDUCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MANKEY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_PRIMEAPE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_GROWLITHE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_ARCANINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_POLIWAG] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 19,
    },
    [SPECIES_POLIWHIRL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_POLIWRATH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_ABRA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_KADABRA] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ALAKAZAM] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MACHOP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_MACHOKE] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_MACHAMP] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BELLSPROUT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_WEEPINBELL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_VICTREEBEL] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_TENTACOOL] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_TENTACRUEL] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GEODUDE] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 18,
    },
    [SPECIES_GRAVELER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GOLEM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PONYTA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_RAPIDASH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SLOWPOKE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWBRO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_MAGNEMITE] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_MAGNETON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_FARFETCHD] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_DODUO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 5,
    },
    [SPECIES_DODRIO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_DEWGONG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_GRIMER] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MUK] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SHELLDER] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLOYSTER] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_GASTLY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_HAUNTER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_GENGAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ONIX] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_DROWZEE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_HYPNO] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_KRABBY] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 13,
    },
    [SPECIES_KINGLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_VOLTORB] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_ELECTRODE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_EXEGGCUTE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_EXEGGUTOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CUBONE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_MAROWAK] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 11,
    },
    [SPECIES_HITMONLEE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_HITMONCHAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_LICKITUNG] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_KOFFING] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_WEEZING] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_RHYHORN] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_RHYDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_CHANSEY] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_TANGELA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KANGASKHAN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HORSEA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_SEADRA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_GOLDEEN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SEAKING] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_STARYU] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_STARMIE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_MR_MIME] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_SCYTHER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_JYNX] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_ELECTABUZZ] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 2,
    },
    [SPECIES_MAGMAR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_PINSIR] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_TAUROS] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_MAGIKARP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_GYARADOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 8,
    },
    [SPECIES_LAPRAS] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 13,
    },
    [SPECIES_DITTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_EEVEE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_VAPOREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_JOLTEON] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_FLAREON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_PORYGON] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_OMANYTE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 15,
    },
    [SPECIES_OMASTAR] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_KABUTO] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 17,
    },
    [SPECIES_KABUTOPS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_AERODACTYL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SNORLAX] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_ARTICUNO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_ZAPDOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_MOLTRES] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_DRATINI] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 14,
    },
    [SPECIES_DRAGONAIR] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_DRAGONITE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEWTWO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MEW] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_CHIKORITA] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_BAYLEEF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_MEGANIUM] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CYNDAQUIL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_QUILAVA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_TYPHLOSION] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_TOTODILE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_CROCONAW] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_FERALIGATR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SENTRET] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 4,
    },
    [SPECIES_FURRET] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_HOOTHOOT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_NOCTOWL] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_LEDYBA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_LEDIAN] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINARAK] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 19,
    },
    [SPECIES_ARIADOS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_CROBAT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CHINCHOU] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 16,
    },
    [SPECIES_LANTURN] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 11,
    },
    [SPECIES_PICHU] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_CLEFFA] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_IGGLYBUFF] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_TOGEPI] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 20,
    },
    [SPECIES_TOGETIC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_NATU] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 20,
    },
    [SPECIES_XATU] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 7,
    },
    [SPECIES_MAREEP] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_FLAAFFY] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_AMPHAROS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_BELLOSSOM] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_MARILL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_AZUMARILL] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_SUDOWOODO] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_POLITOED] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_HOPPIP] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_SKIPLOOM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_JUMPLUFF] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_AIPOM] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 3,
    },
    [SPECIES_SUNKERN] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_SUNFLORA] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_YANMA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WOOPER] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_QUAGSIRE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 7,
    },
    [SPECIES_ESPEON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_UMBREON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 8,
    },
    [SPECIES_MURKROW] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_SLOWKING] =
    {
        .size = MON_COORDS_SIZE(40, 64),
        .y_offset = 1,
    },
    [SPECIES_MISDREAVUS] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_WOBBUFFET] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_GIRAFARIG] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_PINECO] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_FORRETRESS] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_DUNSPARCE] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 17,
    },
    [SPECIES_GLIGAR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_STEELIX] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNUBBULL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 13,
    },
    [SPECIES_GRANBULL] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 6,
    },
    [SPECIES_QWILFISH] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 10,
    },
    [SPECIES_SCIZOR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUCKLE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_HERACROSS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_SNEASEL] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_TEDDIURSA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_URSARING] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_SLUGMA] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MAGCARGO] =
    {
        .size = MON_COORDS_SIZE(40, 56),
        .y_offset = 13,
    },
    [SPECIES_SWINUB] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_PILOSWINE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_CORSOLA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_REMORAID] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OCTILLERY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DELIBIRD] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_MANTINE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_SKARMORY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HOUNDOUR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_HOUNDOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_KINGDRA] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_PHANPY] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_DONPHAN] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_PORYGON2] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_STANTLER] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SMEARGLE] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_TYROGUE] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_HITMONTOP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 5,
    },
    [SPECIES_SMOOCHUM] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_ELEKID] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_MAGBY] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 13,
    },
    [SPECIES_MILTANK] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_BLISSEY] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 6,
    },
    [SPECIES_RAIKOU] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_ENTEI] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SUICUNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LARVITAR] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_PUPITAR] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 9,
    },
    [SPECIES_TYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LUGIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_HO_OH] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CELEBI] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_OLD_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_OLD_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_TREECKO] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_GROVYLE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_SCEPTILE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_TORCHIC] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_COMBUSKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_BLAZIKEN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_MUDKIP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_MARSHTOMP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SWAMPERT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_POOCHYENA] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_MIGHTYENA] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_ZIGZAGOON] =
    {
        .size = MON_COORDS_SIZE(64, 40),
        .y_offset = 15,
    },
    [SPECIES_LINOONE] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_WURMPLE] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 14,
    },
    [SPECIES_SILCOON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 17,
    },
    [SPECIES_BEAUTIFLY] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 9,
    },
    [SPECIES_CASCOON] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_DUSTOX] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 15,
    },
    [SPECIES_LOTAD] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 14,
    },
    [SPECIES_LOMBRE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_LUDICOLO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SEEDOT] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 16,
    },
    [SPECIES_NUZLEAF] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_SHIFTRY] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_NINCADA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_NINJASK] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_SHEDINJA] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_TAILLOW] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 16,
    },
    [SPECIES_SWELLOW] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_SHROOMISH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_BRELOOM] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SPINDA] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 8,
    },
    [SPECIES_WINGULL] =
    {
        .size = MON_COORDS_SIZE(64, 32),
        .y_offset = 24,
    },
    [SPECIES_PELIPPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 4,
    },
    [SPECIES_SURSKIT] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_MASQUERAIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_WAILMER] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 15,
    },
    [SPECIES_WAILORD] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 10,
    },
    [SPECIES_SKITTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 11,
    },
    [SPECIES_DELCATTY] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_KECLEON] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_BALTOY] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 16,
    },
    [SPECIES_CLAYDOL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 6,
    },
    [SPECIES_NOSEPASS] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_TORKOAL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_SABLEYE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_BARBOACH] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 11,
    },
    [SPECIES_WHISCASH] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 9,
    },
    [SPECIES_LUVDISC] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 24,
    },
    [SPECIES_CORPHISH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_CRAWDAUNT] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_FEEBAS] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 13,
    },
    [SPECIES_MILOTIC] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CARVANHA] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_SHARPEDO] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_TRAPINCH] =
    {
        .size = MON_COORDS_SIZE(40, 32),
        .y_offset = 16,
    },
    [SPECIES_VIBRAVA] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 12,
    },
    [SPECIES_FLYGON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_MAKUHITA] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_HARIYAMA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_ELECTRIKE] =
    {
        .size = MON_COORDS_SIZE(48, 32),
        .y_offset = 18,
    },
    [SPECIES_MANECTRIC] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 4,
    },
    [SPECIES_NUMEL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 15,
    },
    [SPECIES_CAMERUPT] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 9,
    },
    [SPECIES_SPHEAL] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 16,
    },
    [SPECIES_SEALEO] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 10,
    },
    [SPECIES_WALREIN] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CACNEA] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 16,
    },
    [SPECIES_CACTURNE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_SNORUNT] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_GLALIE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 10,
    },
    [SPECIES_LUNATONE] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SOLROCK] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_AZURILL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_SPOINK] =
    {
        .size = MON_COORDS_SIZE(32, 48),
        .y_offset = 9,
    },
    [SPECIES_GRUMPIG] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_PLUSLE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_MINUN] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 12,
    },
    [SPECIES_MAWILE] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_MEDITITE] =
    {
        .size = MON_COORDS_SIZE(48, 40),
        .y_offset = 12,
    },
    [SPECIES_MEDICHAM] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 1,
    },
    [SPECIES_SWABLU] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 17,
    },
    [SPECIES_ALTARIA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_WYNAUT] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_DUSKULL] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 10,
    },
    [SPECIES_DUSCLOPS] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 5,
    },
    [SPECIES_ROSELIA] =
    {
        .size = MON_COORDS_SIZE(56, 48),
        .y_offset = 8,
    },
    [SPECIES_SLAKOTH] =
    {
        .size = MON_COORDS_SIZE(56, 32),
        .y_offset = 18,
    },
    [SPECIES_VIGOROTH] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_SLAKING] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 8,
    },
    [SPECIES_GULPIN] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 18,
    },
    [SPECIES_SWALOT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_TROPIUS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_WHISMUR] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_LOUDRED] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_EXPLOUD] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CLAMPERL] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 14,
    },
    [SPECIES_HUNTAIL] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 3,
    },
    [SPECIES_GOREBYSS] =
    {
        .size = MON_COORDS_SIZE(64, 48),
        .y_offset = 11,
    },
    [SPECIES_ABSOL] =
    {
        .size = MON_COORDS_SIZE(48, 64),
        .y_offset = 0,
    },
    [SPECIES_SHUPPET] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 14,
    },
    [SPECIES_BANETTE] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 12,
    },
    [SPECIES_SEVIPER] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 8,
    },
    [SPECIES_ZANGOOSE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 5,
    },
    [SPECIES_RELICANTH] =
    {
        .size = MON_COORDS_SIZE(56, 56),
        .y_offset = 11,
    },
    [SPECIES_ARON] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_LAIRON] =
    {
        .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_AGGRON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_CASTFORM] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_VOLBEAT] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ILLUMISE] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 8,
    },
    [SPECIES_LILEEP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 7,
    },
    [SPECIES_CRADILY] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 0,
    },
    [SPECIES_ANORITH] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 8,
    },
    [SPECIES_ARMALDO] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_RALTS] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_KIRLIA] =
    {
        .size = MON_COORDS_SIZE(32, 56),
        .y_offset = 6,
    },
    [SPECIES_GARDEVOIR] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 1,
    },
    [SPECIES_BAGON] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 11,
    },
    [SPECIES_SHELGON] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 9,
    },
    [SPECIES_SALAMENCE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_BELDUM] =
    {
        .size = MON_COORDS_SIZE(40, 40),
        .y_offset = 15,
    },
    [SPECIES_METANG] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 7,
    },
    [SPECIES_METAGROSS] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 6,
    },
    [SPECIES_REGIROCK] =
    {
        .size = MON_COORDS_SIZE(56, 64),
        .y_offset = 4,
    },
    [SPECIES_REGICE] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_REGISTEEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 3,
    },
    [SPECIES_KYOGRE] =
    {
        .size = MON_COORDS_SIZE(64, 56),
        .y_offset = 4,
    },
    [SPECIES_GROUDON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_RAYQUAZA] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_LATIAS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_LATIOS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 2,
    },
    [SPECIES_JIRACHI] =
    {
        .size = MON_COORDS_SIZE(48, 48),
        .y_offset = 13,
    },
    [SPECIES_DEOXYS] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 1,
    },
    [SPECIES_CHIMECHO] =
    {
        .size = MON_COORDS_SIZE(24, 56),
        .y_offset = 6,
    },
    [SPECIES_MTYRANITAR] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_PIPLUP] =
    {
        .size = MON_COORDS_SIZE(40, 48),
        .y_offset = 12,
    },
    [SPECIES_PRINPLUP] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_EMPOLEON] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BUIZEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_FLOATZEL] =
    {
        .size = MON_COORDS_SIZE(64, 64),
        .y_offset = 0,
    },
    [SPECIES_BUNEARY] =
    {
        .size = MON_COORDS_SIZE(48, 56),
        .y_offset = 6,
    },
    [SPECIES_LEAFEON] =	
    {	
        .size = MON_COORDS_SIZE(48, 56),	
        .y_offset = 6,	
    },	 
    [SPECIES_LUXIO] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_LUXRAY] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_MUNCHLAX] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_PACHIRISU] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_SHAYMIN] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_SHAYMINSKY] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_SHINX] =	
     {	
      .size = MON_COORDS_SIZE(48, 56),	
     .y_offset = 6,	
    },	
    [SPECIES_AUDINO] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 8,
    },
    [SPECIES_CINCCINO] =
     {
      .size =MON_COORDS_SIZE(56, 56),
     .y_offset = 7,
    },
    [SPECIES_COTTONEE] =
     {
      .size = MON_COORDS_SIZE(48, 32),
     .y_offset = 18,
    },
    [SPECIES_CUBCHOO] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 12,
    },
    [SPECIES_DEERLING] =
     {
      .size = MON_COORDS_SIZE(32, 48),
     .y_offset = 11,
    },
    [SPECIES_DEWOTT] =
     {
      .size = MON_COORDS_SIZE(40, 56),
     .y_offset = 7,
    },
    [SPECIES_EMOLGA] =
     {
      .size = MON_COORDS_SIZE(64, 48),
     .y_offset = 17,
    },
    [SPECIES_HERDIER] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 8,
    },
    [SPECIES_HZOROARK] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_HZORUA] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 1,
    },
    [SPECIES_LILLIGANT] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_LILLIPUP] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 12,
    },
    [SPECIES_MINCCINO] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 11,
    },
    [SPECIES_OSHAWOTT] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 14,
    },
    [SPECIES_PANPOUR] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 10,
    },
    [SPECIES_PANSAGE] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 11,
    },
    [SPECIES_PANSEAR] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_PETILIL] =
     {
      .size = MON_COORDS_SIZE(32, 48),
     .y_offset = 12,
    },
    [SPECIES_STOUTLAND] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_VIRIZION] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 2,
    },
    [SPECIES_WHIMSICOTT] =
     {
      .size = MON_COORDS_SIZE(56, 56),
     .y_offset = 6,
    },
    [SPECIES_ZOROARK] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_ZORUA] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 11,
    },
    [SPECIES_AMAURA] =
     {
      .size = MON_COORDS_SIZE(32, 56),
     .y_offset = 5,
    },
    [SPECIES_AURORUS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_BRAIXEN] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 4,
    },
    [SPECIES_DEDENNE] =
     {
      .size = MON_COORDS_SIZE(64, 40),
     .y_offset = 13,
    },
    [SPECIES_DELPHOX] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_DIANCIE] =
     {
      .size = MON_COORDS_SIZE(40, 64),
     .y_offset = 1,
    },
    [SPECIES_FENNEKIN] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 10,
    },
    [SPECIES_FLABEBE] =
     {
      .size = MON_COORDS_SIZE(48, 56),  
     .y_offset = 6,
    },
    [SPECIES_FLOETTE] =
     {
      .size = MON_COORDS_SIZE(48, 64),  
     .y_offset = 3,
    },
    [SPECIES_FLORGES] =
     {
      .size = MON_COORDS_SIZE(64, 64),    
     .y_offset = 0,
    },
    [SPECIES_GOURGEIST] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_PUMPKABOO] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 10,
    },
    [SPECIES_SKIDDO] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 7,
    },
    [SPECIES_SYLVEON] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 6,
    },
    [SPECIES_FLETCHINDER] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 8,
    },
    [SPECIES_TALONFLAME] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_TYRUNT] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_TYRANTRUM] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GOODRA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GOOMY] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 13,
    },
    [SPECIES_SLIGGOO] =
     {
      .size = MON_COORDS_SIZE(32, 64),
     .y_offset = 6,
    },
    [SPECIES_BEWEAR] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_BOUNSWEET] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 16,
    },
    [SPECIES_BRIONNE] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 6,
    },
    [SPECIES_BUZZWOLE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_CUTIEFLY] =
     {
      .size = MON_COORDS_SIZE(33, 35),
     .y_offset = 16,
    },
    [SPECIES_LITTEN] =
     {
      .size = MON_COORDS_SIZE(48, 40),
     .y_offset = 12,
    },
    [SPECIES_MIMIKYU] =
     {
      .size = MON_COORDS_SIZE(48, 40),
     .y_offset = 12,
    },
    [SPECIES_ORICORIO] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 2,
    },
    [SPECIES_PIKIPEK] =
     {
      .size = MON_COORDS_SIZE(29, 40),
     .y_offset = 10,
    },
    [SPECIES_POPPLIO] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 11,
    },
    [SPECIES_PRIMARINA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_RIBOMBEE] =
     {
      .size = MON_COORDS_SIZE(32, 47),
     .y_offset = 5,
    },
    [SPECIES_ROCKRUFF] =
     {
      .size = MON_COORDS_SIZE(37, 39),
     .y_offset = 11,
    },
    [SPECIES_ROWLET] =
     {
      .size = MON_COORDS_SIZE(31, 37),
     .y_offset = 12,
    },
    [SPECIES_STEENEE] =
     {
      .size =  MON_COORDS_SIZE(48, 56),
     .y_offset = 7,
    },
    [SPECIES_STUFFUL] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 10,
    },
    [SPECIES_TOGEDEMARU] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 9,
    },
    [SPECIES_TSAREENA] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_ALCREMIE] =
     {
      .size = MON_COORDS_SIZE(40, 56),   
     .y_offset = 7,
    },
    [SPECIES_APPLETUN] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 11,
    },
    [SPECIES_APPLIN] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 16,
    },
    [SPECIES_GROOKI] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 12,
    },
    [SPECIES_HATENNA] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 12,
    },
    [SPECIES_HATTERENE] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 0,
    },

    [SPECIES_HATTREM] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 8,
    },
    [SPECIES_INDEEDEE1] =
     {
      .size = MON_COORDS_SIZE(40, 56),
     .y_offset = 9,
    },
    [SPECIES_INDEEDEE2] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 9,
    },
    [SPECIES_MORPEKO] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 14,
    },
    [SPECIES_SCORBUNNY] =
     {
      .size = MON_COORDS_SIZE(40, 56),
     .y_offset = 8,
    },
    [SPECIES_SOBBLE] =
     {
      .size = MON_COORDS_SIZE(40, 56),
     .y_offset = 11,
    },
    [SPECIES_WOOLOO] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 12,
    },
    [SPECIES_YAMPER] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 10,
    },
    [SPECIES_JIGGLYTUFF] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 12,
    },
    [SPECIES_CLODSIRE] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 6,
    },
    [SPECIES_DACSHBUN] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 6,
    },
    [SPECIES_FIDOUGH] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 13,
    },
    [SPECIES_FUECOCO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_GALVANADE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_MAUSHOLD] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 10,
    },
    [SPECIES_PAWMI] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 10,
    },
    [SPECIES_PAWMO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_PAWMOT] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_ORICORIO1] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_ORICORIO2] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_ORICORIO3] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_SPRIGATITO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 8,
    },
    [SPECIES_TANDEMAUS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 15,
    },
    [SPECIES_TINKATON] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_VOLCRYPTID] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_BLUBBY] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_NAVI] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_BASTIODON] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 6,
    },
    [SPECIES_BAXCALIBUR] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_BISHARP] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 0,
    },
    [SPECIES_BLITZLE] =
     {
      .size = MON_COORDS_SIZE(40, 56),
     .y_offset = 5,
    },
    [SPECIES_CERULEDGE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_CHANDELURE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_CROAGUNK] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 9,
    },
    [SPECIES_EELEKTRIK] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 6,
    },
    [SPECIES_EELEKTROSS] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 6,
    },
    [SPECIES_EXCADRILL] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 5,
    },
    [SPECIES_FROSSLASS] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 8,
    },
    [SPECIES_GHOLDENGO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_GOLETT] =
     {
      .size = MON_COORDS_SIZE(56, 56),
     .y_offset = 7,
    },
    [SPECIES_GOLURK] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GOUGING] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_HANKAMO_O] =
     {
      .size = MON_COORDS_SIZE(53, 61),
     .y_offset = 1,
    },
    [SPECIES_HONCHKROW] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 6,
    },
    [SPECIES_JANGMO_O] =
     {
      .size = MON_COORDS_SIZE(36, 43),
     .y_offset = 9,
    },
    [SPECIES_KOMMO_O] =
     {
      .size = MON_COORDS_SIZE(63, 63),
     .y_offset = 0,
    },
    [SPECIES_LAMPENT] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 8,
    },
    [SPECIES_LIEPARD] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_LITWICK] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 14,
    },
    [SPECIES_LOKIX] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_LUCARIO] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 7,
    },
    [SPECIES_AMPHAROS2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_SCIZOR2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_NICKIT] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 9,
    },
    [SPECIES_MEOWTH2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_NINETAILS2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_PURRLOIN] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_ROTOM1] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 11,
    },
    [SPECIES_ROTOM2] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 8,
    },
    [SPECIES_ROTOM3] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_ROTOM4] =
     {
      .size = MON_COORDS_SIZE(56, 48),
     .y_offset = 10,
    },
    [SPECIES_ROTOM5] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_ROTOM6] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 7,
    },
    [SPECIES_ANNIHILAPE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ARCANINE2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ARMAROUGE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_CARKOL] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 8,
    },
    [SPECIES_COALOSSAL] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 0,
    },
    [SPECIES_DRAGAPULT] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_DUSKNOIR] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_GIMMIGHOUL] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_GIRATINA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_HOOPA] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_HOOPA2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_IRON_BOULDER] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_MAGMORTAR] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_PALOSSAND] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_RIOLU] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 10,
    },
    [SPECIES_SALANDIT] =
     {
      .size = MON_COORDS_SIZE(56, 40),
     .y_offset = 12,
    },
    [SPECIES_SALAZZLE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_SANDSHREW1] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 13,
    },
    [SPECIES_SANDSLASH1] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_SANDYGAST] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_SAWK] =
     {
      .size = MON_COORDS_SIZE(56, 56),
     .y_offset = 7,
    },
    [SPECIES_SCOVILLAIN] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_SHIELDON] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 15,
    },
    [SPECIES_TAUROS2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 5,
    },
    [SPECIES_TERRAKION] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 5,
    },
    [SPECIES_THIEVUL] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 7,
    },
    [SPECIES_TOXTRICITY2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_THROH] =
     {
      .size = MON_COORDS_SIZE(64, 48),
     .y_offset = 10,
    },
    [SPECIES_TING_LU] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_TOEDSCOOL] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_TOEDSCRUEL] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_TOXEL] =
     {
      .size = MON_COORDS_SIZE(40, 48),
     .y_offset = 11,
    },
    [SPECIES_TOXTRICITY] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 1,
    },
    [SPECIES_URSALUNA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_URSALUNA2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_VANILLISH] =
     {
      .size = MON_COORDS_SIZE(32, 56),
     .y_offset = 5,
    },
    [SPECIES_VANILLITE] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 14,
    },
    [SPECIES_VANILLUXE] =
     {
      .size = MON_COORDS_SIZE(56, 56),
     .y_offset = 4,
    },
    [SPECIES_VOLCANION] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_VULPIX1] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 10,
    },
    [SPECIES_ZEBSTRIKA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GOLISOPOD] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_HIPPOPOTAS] =
     {
      .size = MON_COORDS_SIZE(64, 40),
     .y_offset = 12,
    },
    [SPECIES_HIPPOWDON] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 6,
    },
    [SPECIES_DONDOZO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_VESPIQUEEN] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 4,
    },
    [SPECIES_DWEBBLE] =
     {
      .size = MON_COORDS_SIZE(40, 40),
     .y_offset = 14,
    },
    [SPECIES_MARACTUS] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 0,
    },
    [SPECIES_CLOBBOPUS] =
     {
      .size = MON_COORDS_SIZE(48, 40),
     .y_offset = 15,
    },
    [SPECIES_GRAPPLOCT] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 5,
    },
    [SPECIES_FROSMOTH] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 5,
    },
    [SPECIES_ORBEETLE] =
     {
      .size = MON_COORDS_SIZE(48, 56),
     .y_offset = 4,
    },
    [SPECIES_SINISTEA] =
     {
      .size = MON_COORDS_SIZE(40, 32),
     .y_offset = 17,
    },
    [SPECIES_POLTEAGEIST] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_MAGNEZONE] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 4,
    },
    [SPECIES_HEATRAN] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 5,
    },
    [SPECIES_GREATTUSK] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 5,
    },
    [SPECIES_IRONTREADS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 9,
    },
    [SPECIES_GLACEON] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 10,
    },
    [SPECIES_FEZANDIPITI] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_GENGAR2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 7,
    },
    [SPECIES_VENUSAUR2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_PECHARUNT] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 13,
    },
    [SPECIES_GOLEM2] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_IRONTHORNS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_AERODACTYL2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_ARCHALUDON] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_CELESTEELA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_NECROZMADUSK] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_REVAVROOM] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 8,
    },
    [SPECIES_SOLGALEO] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_VAROOM] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset =146,
    },
    [SPECIES_TOXICROAK] =
     {
      .size = MON_COORDS_SIZE(56, 56),
     .y_offset = 5,
    },
    [SPECIES_COFAGRIGUS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ELEBABY] =
     {
      .size = MON_COORDS_SIZE(48, 40),
     .y_offset = 12,
    },
    [SPECIES_ZAPDOS2] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 0,
    },
    [SPECIES_KONYA] =
     {
      .size = MON_COORDS_SIZE(48, 40),
     .y_offset = 12,
    },
    [SPECIES_LANDORUS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 1,
    },
    [SPECIES_SCOLIPEDE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_TURTONATOR] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_VIKAVOLT] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 3,
    },
    [SPECIES_YANMEGA] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 5,
    },
    [SPECIES_STARAPTOR] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_TOUCANNON] =
     {
      .size = MON_COORDS_SIZE(59, 59),
     .y_offset = 2,
    },
    [SPECIES_CENTISKORCH] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 7,
    },
    [SPECIES_SEISMITOAD] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_ABOMASNOW] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_KROOKODILE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GASTRODON] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 8,
    },
    [SPECIES_SKUNTANK] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 7,
    },
    [SPECIES_RUNERIGUS] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_MALAMAR] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_CORSOLA2] =
     {
      .size = MON_COORDS_SIZE(48, 48),
     .y_offset = 11,
    },
    [SPECIES_MANDIBUZZ] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 1,
    },
    [SPECIES_STAKATAKA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_DRAGALGE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_TOXAPEX] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_DHELMISE] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 1,
    },
    [SPECIES_CURSOLA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ARAQUANID] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_SIRFETCH] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_NOIVERN] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 3,
    },
    [SPECIES_CLAWITZER] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 10,
    },
    [SPECIES_GALLADE] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_LILLIGANT2] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 0,
    },
    [SPECIES_WYRDEER] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_MISMAGIUS] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 3,
    },
    [SPECIES_GOTHITELLE] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 0,
    },
    [SPECIES_AVALUGG] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 4,
    },
    [SPECIES_DUGTRIO2] =
     {
      .size = MON_COORDS_SIZE(56, 40),
        .y_offset = 13,
    },
    [SPECIES_BLACEPHALON] =
     {
      .size = MON_COORDS_SIZE(56, 64),
     .y_offset = 1,
    },
    [SPECIES_FERROSEED] =
     {
      .size = MON_COORDS_SIZE(32, 40),
     .y_offset = 12,
    },
    [SPECIES_FERROTHORN] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 4,
    },
    [SPECIES_GLISCOR] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 7,
    },
    [SPECIES_LUGIA2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_NIHILEGO] =
     {
      .size =  MON_COORDS_SIZE(48, 64),
     .y_offset = 3,
    },
    [SPECIES_TOGEKISS] =
     {
      .size = MON_COORDS_SIZE(64, 56),
     .y_offset = 10,
    },
    [SPECIES_TYPHLOSION2] =
     {
      .size =  MON_COORDS_SIZE(48, 64),
     .y_offset = 0,
    },
    [SPECIES_XURKITREE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_DIALGA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ALTARIA2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_BLASTOISE2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_SCEPTILE2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_SWAMPERT2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 6,
    },
    [SPECIES_WALKINGWAKE] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_RAGINGBOLT] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_ABSOL2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 2,
    },
    [SPECIES_AGGRON2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_CHARIZARDY] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_GARDEVOIR2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_HOUNDOOM2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_LUCARIO2] =
     {
      .size = MON_COORDS_SIZE(48, 64),
     .y_offset = 2,
    },
    [SPECIES_PIDGEOT2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_SABLEYE2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 5,
    },
    [SPECIES_SHARPEDO2] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },
    [SPECIES_PALKIA] =
     {
      .size = MON_COORDS_SIZE(64, 64),
     .y_offset = 0,
    },


    //Don't write past this
    [SPECIES_EGG] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 20,
    },
    [SPECIES_UNOWN_B] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_C] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_D] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_E] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_F] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_G] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 14,
    },
    [SPECIES_UNOWN_H] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_I] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_J] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_K] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_L] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_M] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_N] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 20,
    },
    [SPECIES_UNOWN_O] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_P] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_Q] =
    {
        .size = MON_COORDS_SIZE(32, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_R] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_S] =
    {
        .size = MON_COORDS_SIZE(32, 40),
        .y_offset = 12,
    },
    [SPECIES_UNOWN_T] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_U] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_V] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 18,
    },
    [SPECIES_UNOWN_W] =
    {
        .size = MON_COORDS_SIZE(32, 32),
        .y_offset = 19,
    },
    [SPECIES_UNOWN_X] =
    {
        .size = MON_COORDS_SIZE(24, 24),
        .y_offset = 21,
    },
    [SPECIES_UNOWN_Y] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 17,
    },
    [SPECIES_UNOWN_Z] =
    {
        .size = MON_COORDS_SIZE(24, 32),
        .y_offset = 16,
    },
    [SPECIES_UNOWN_EMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 15,
    },
    [SPECIES_UNOWN_QMARK] =
    {
        .size = MON_COORDS_SIZE(24, 40),
        .y_offset = 13,
    },
    
};
