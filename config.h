#define CMDLENGTH 45
#define DELIMITER " | "
#define CLICKABLE_BLOCKS

const Block blocks[] = {
	BLOCK("sbtime",           1,  17),
        BLOCK("sbnwif enp1s0",    5,  18),
        BLOCK("sbnwif -w wlp2s0", 5,  19),
        BLOCK("sbmemory",         5,  20),
        BLOCK("sbnetwork",        1,  21),
        BLOCK("sbbattery BAT1",   10, 22),
        BLOCK("sbaudio sink",     1,  23),
        BLOCK("sbaudio source",   1,  24),
        BLOCK("sbpower",          0,  25),
};
